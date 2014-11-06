//---------------------------------------------------------------------------

#include <vcl.h>
// for loading jpeg image file!!
#include<jpeg.hpp>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;

//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
        // Image object dynamic generation
        Image2=new TImage(NULL);
        Image2->Parent=this;
        Image2->Picture->LoadFromFile("CGDATA//explosion.bmp");
        // dimention assign
        Image2->Top=0;
        Image2->Left=0;
        Image2->Width=67;
        Image2->Height=100;
        Image2->Transparent=true;
        // customized mouse event pointer
        Image2->OnClick=Image2Onclick;
        Image1->OnClick=Image2Onclick;

        Image3=new TImage(NULL);
        Image3->AutoSize=true;
        Image3->Picture->LoadFromFile("CGDATA//explosion.bmp");
        BitBlt(Image2->Picture->Bitmap->Canvas->Handle,0,0,67,100,
        Image3->Picture->Bitmap->Canvas->Handle,0,0,SRCCOPY);

        Form1->DoubleBuffered=true;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Image2Onclick(TObject*){
        MessageBox(Form1->Handle, // Handle of window
        "«ö¤UÅo",                 // Display message
        "OnClick Event",          // Display title
        MB_OK);                   // Message box style
}
void __fastcall TForm1::Timer1Timer(TObject *Sender)
{
        // moving speed
        const int a=5;

        /*
        // WinAPi's keyboard event catching
        if( GetAsyncKeyState(VK_UP)<0 )
                Image2->Top-=a;
        if( GetAsyncKeyState(VK_DOWN)<0 )
                Image2->Top+=a;
        if( GetAsyncKeyState(VK_LEFT)<0 )
                Image2->Left-=a;
        if( GetAsyncKeyState(VK_RIGHT)<0 )
                Image2->Left+=a;
        */


        // Auto refreshing
        //Image2->Top+=a;
        //Image2->Left+=a;


        static int i=0;
        // switching Transparent
        Image2->Transparent = false;
        // memmory copy
        BitBlt( Image2->Picture->Bitmap->Canvas->Handle,0,0,67,100,
                Image3->Picture->Bitmap->Canvas->Handle,i*67,0,SRCCOPY);
        // switching Transparent
        Image2->Transparent = true;
        // force repaint
        Form1->Repaint();
        // index propagate
        i=(i+1)%7;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::FormKeyDown(TObject *Sender, WORD &Key,
      TShiftState Shift)
{
        /*
        const int a=5;
        switch(Key)
        {
        case VK_UP:
                Image2->Top-=a;
                break;
        case VK_DOWN:
                Image2->Top+=a;
                break;
        case VK_LEFT:
                Image2->Left-=a;
                break;
        case VK_RIGHT:
                Image2->Left+=a;
                break;
        default:
                break;
        }
        */
}
//---------------------------------------------------------------------------

