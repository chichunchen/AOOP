//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
int i=0,x=0,y=0,vx=1,vy=1;

randomize();
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------



void __fastcall TForm1::Timer1Timer(TObject *Sender)
{
        Graphics::TBitmap* temp =new Graphics::TBitmap();
        temp->Width=200;
        temp->Height=200;
        temp->Canvas->Rectangle(0,0,200,200);
        list->Draw(temp->Canvas,x,y,i/100,1);
        img->Canvas->Draw(0,0,temp);

        this->DoubleBuffered=true;
        if(i>=999)
                i=0;
        i++;
        x+=vx;
        y+=vy;
        if(x<=0||y<=0||x>=158||y>=100)
                {
                        if( (x<=0&&y<=0)||(x>=158&&y<=0)||
                            (x<=0&&y>=100)||(x>=158&&y>=100) )
                        {
                        vx*=-1;
                        vy*=-1;
                        }
                        else if(x<158&&y<=0)
                        {
                        vx*=1;
                        vy*=-1;
                        }
                        else if(x>=158&&y<100)
                        {
                        vx*=-1;
                        vy*=1;
                        }
                        else if(x<158&&y>=100)
                        {
                        vx*=1;
                        vy*=-1;
                        }
                        else //if(x<=0&&y<100)
                        {
                        vx*=-1;
                        vy*=1;
                        }
                }

        delete temp;

}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender)
{
        if(Timer1->Enabled==false)
                Timer1->Enabled=true;

        else
                Timer1->Enabled=false;
        vx=StrToInt(X->Text);
        vy=StrToInt(Y->Text);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::FormCreate(TObject *Sender)
{
        img->Canvas->Rectangle(0,0,200,200);
}
//---------------------------------------------------------------------------

