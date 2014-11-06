//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
int x=0,y=0;
int vx=0,vy=0,a=40;

//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{

}
//---------------------------------------------------------------------------

void __fastcall TForm1::FormKeyDown(TObject *Sender, WORD &Key,
      TShiftState Shift)
{

        int s=1000;
                switch(Key)
                {
                //case 0x25:
                case VK_LEFT:
                vx=-1*s;
                break;

                //case 0x26:
                case VK_UP:
                vy=-1*s;
                break;

                //case 0x27:
                case VK_RIGHT:
                vx=s;
                break;

                //case 0x28:
                case VK_DOWN:
                vy=s;
                break;

                default:
                break;
                }

}
//---------------------------------------------------------------------------

void __fastcall TForm1::Timer1Timer(TObject *Sender)
{
        this->DoubleBuffered=true;
        x+=vx;
        y+=vy;
        if(vx<0)
                {
                vx+=a;
                }
        else if(vx>0)
                vx-=a;
        if(vy<0)
                vy+=a;
        else if(vy>0)
                vy-=a;
        img->Left=x/100;
        img->Top=y/100;
}
//---------------------------------------------------------------------------
