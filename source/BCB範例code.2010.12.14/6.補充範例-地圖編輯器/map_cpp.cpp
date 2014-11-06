//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "map_cpp.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;

int xo,yo,dx,dy,drag_acc=false;//拖曳用變數
int row,col;//全域行列值
int r,c;//滑鼠行列值
int xstart,ystart=100;//XY起始值
int **map;

//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::proClick(TObject *Sender)
{

int i,j,x,y;
String filehead,filetail;
Graphics::TBitmap* t_small =new Graphics::TBitmap;//用來載入小塊元件
Graphics::TBitmap* t_large =new Graphics::TBitmap;//放置拼湊元件的緩衝區

//更新初始值
row=StrToInt(row_s->Text);
col=StrToInt(col_s->Text);
xstart = 32*( row - 1 );

//決定大張大小
t_large->Width=64/2*( col+row );
t_large->Height=32/2*( col+row )+ystart;

//於大張地圖上繪製黑底
t_large->Canvas->Brush->Color=pmBlack;
t_large->Canvas->Rectangle(0,0,64/2*( col+row ),32/2*( col+row )+ystart );

//建立動態地圖矩陣
map=new int *[row];
        for(i=0;i<row;i++)
        map[i]=new int[col];
//設初值
for(i=0;i<row;i++)
        for(j=0;j<col;j++)
                map[i][j]=0;


filehead="img\\00";
filetail=".bmp";

t_small->Transparent=true;
        for(i=0;i<row;i++)
                for(j=0;j<col;j++)
                {
                t_small->LoadFromFile(filehead+IntToStr(map[i][j])+filetail);
                x=xstart+j*32+i*(-32);
                y=ystart+i*16+j*16;
                t_large->Canvas->Draw(x,y,t_small);
                }
        img->Picture->Bitmap=t_large;

//刪除動態產生的元件
delete t_small;
delete t_large;

}
//---------------------------------------------------------------------------

void __fastcall TForm1::FormCreate(TObject *Sender)
{
//行列值初始化
row=StrToInt(row_s->Text);
col=StrToInt(col_s->Text);
xstart = 32*( row - 1 );
//雙緩衝打開
this->gb->DoubleBuffered=true;

}
//---------------------------------------------------------------------------



void __fastcall TForm1::imgDragOver(TObject *Sender, TObject *Source,
      int X, int Y, TDragState State, bool &Accept)
{
int x,y,a=32,b=16;
if(m_drag->Checked==true)
        {
        //開始拖曳;
        if (!drag_acc)//第一次開始拖曳時進入
        {
        dx=X;
        dy=Y;
        drag_acc=true;
        }
        else
        {
        //根據移動變量決定拖曳量
        gb->VertScrollBar->Position  =
        gb->VertScrollBar->Position+(dy-Y)/40;
        gb->HorzScrollBar->Position  =
        gb->HorzScrollBar->Position+(dx-X)/40;
        }
}
else
{
        if( !(r>=row||r<0||c>=col||c<0) )
        {
        x=xstart+c*32+r*(-32);
        y=ystart+c*16+r*16;
        img->Canvas->Draw(x,y,img_s->Picture->Bitmap);

        r=(int)( ( X*(1.0)/a - (Y-ystart)*(1.0)/b - row)/(2)*(-1) );
        c=(int)( (X*(1.0)/a + (Y-ystart)*(1.0)/b - row)/(2) );

        show_1->Text=IntToStr( r );
        show_2->Text=IntToStr( c );
        }
}


}
//---------------------------------------------------------------------------

void __fastcall TForm1::m_dragClick(TObject *Sender)
{
//進入拖曳模式
//img->DragMode=dmAutomatic;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::m_editClick(TObject *Sender)
{
//進入繪圖模式
//img->DragMode=dmManual;
img_s->Picture->LoadFromFile("img\\027.bmp");
}
//---------------------------------------------------------------------------




void __fastcall TForm1::FormClose(TObject *Sender, TCloseAction &Action)
{
//清除動態地圖陣列
int i;
        if(map!=NULL)
        {
        for(i=0;i<row;i++)
        delete []map[i];
        delete []map;
        }
}
//---------------------------------------------------------------------------





void __fastcall TForm1::imgEndDrag(TObject *Sender, TObject *Target, int X,
      int Y)
{

//結束拖曳
drag_acc=false;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::imgMouseMove(TObject *Sender, TShiftState Shift,
      int X, int Y)
{

int a=32,b=16;//a=wid/2,b=height/2


        //Form1->Alpha(img_s,img2,img1,50,0,0);

        //座標對斜向行列轉換
        r=(int)( ( X*(1.0)/a - (Y-ystart)*(1.0)/b - row)/(2)*(-1) );
        c=(int)( (X*(1.0)/a + (Y-ystart)*(1.0)/b - row)/(2) );

        //進入繪圖模式則顯示小塊元件
        if(r>=row||r<0||c>=col||c<0||m_drag->Checked==true)
                img_s->Visible=false;
        else
                img_s->Visible=true;
        //元件座標轉換
        img_s->Top=ystart+c*16+r*16+img->Top;
        img_s->Left=xstart+c*32+r*(-32)+img->Left;

        show_1->Text=IntToStr( r );
        show_2->Text=IntToStr( c );
        
}
//---------------------------------------------------------------------------


void __fastcall TForm1::img_sDragOver(TObject *Sender, TObject *Source,
      int X, int Y, TDragState State, bool &Accept)
{
int x,y;

        if( !(r>=row||r<0||c>=col||c<0) )
        {
                img_s->Cursor=crDrag;
                x=xstart+c*32+r*(-32);
                y=ystart+c*16+r*16;
                img->Canvas->Draw(x,y,img_s->Picture->Bitmap);
        }

}
//---------------------------------------------------------------------------


void __fastcall TForm1::m_eraseClick(TObject *Sender)
{
img_s->Picture->LoadFromFile("img\\000.bmp");
}
//---------------------------------------------------------------------------


void __fastcall TForm1::img_sEndDrag(TObject *Sender, TObject *Target,
      int X, int Y)
{
img_s->Cursor=crDefault;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Alpha(TImage *Image3, TImage *Image1 , TImage *Image2
     , int alpha, int left_x , int top_y)
{
  int   r,g,b,r1,g1,b1;  
  int   x,y,z;  
  int   i,j;
  for   (i=0;i<Image2->Width;i++)  
  for   (j=0;j<Image2->Height;j++)  
  {  
  r=GetRValue(Image2->Canvas->Pixels[i][j]);
  g=GetGValue(Image2->Canvas->Pixels[i][j]);  
  b=GetBValue(Image2->Canvas->Pixels[i][j]);  
   
   
  r1=GetRValue(Image1->Canvas->Pixels[left_x+i][top_y+j]);  
  g1=GetGValue(Image1->Canvas->Pixels[left_x+i][top_y+j]);  
  b1=GetBValue(Image1->Canvas->Pixels[left_x+i][top_y+j]);  
   
   
  if   (   r!=0   &&   g!=0   &&   b!=255   )  
  {  
  x=r*(1-alpha/100.0)+r1*(alpha/100.0);
  y=g*(1-alpha/100.0)+g1*(alpha/100.0);
  z=b*(1-alpha/100.0)+b1*(alpha/100.0);
  Image3->Canvas->Pixels[left_x+i][top_y+j]=TColor(RGB(x,y,z));  
  }  
  }
}

