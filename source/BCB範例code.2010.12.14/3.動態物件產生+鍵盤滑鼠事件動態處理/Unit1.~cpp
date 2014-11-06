//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//Dynamic object pointer
TLabel *lab;

//User defined Class 
class Alabel
{
public:
		//Composition class pointer
        TLabel *Label;
        int i;
        int j;
        ALabel(){Label=NULL;}
};

class BLabel : public TLabel
{
public:
        BLabel() : TLabel(NULL) { };
        int x;
};

Alabel alab;
BLabel *plab;

//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button1KeyDown(TObject *Sender, WORD &Key,
      TShiftState Shift)
{
        Label1->Caption =Key;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender)
{
        //keybd_event(65,0,0,0);
        //keybd_event(65,0,KEYEVENTF_KEYUP,0);
        //mouse_event(MOUSEEVENTF_MOVE,100,100,0,0);

        static int i=0;

	//check is pointer is assigned or not
        if(lab!=NULL)
                delete lab;

	//dynamic builded new object
        lab=new TLabel(this);

        //Component must have parent to show on Form
        lab->Parent=this;

        //Component's coord
        lab->Left=      100+i;
        lab->Top=       100+i;
        lab->Show();
	//Component's caption
        lab->Caption="I'm dynamic label!!";
        lab->Font->Size = -24;

	//USER define class with dynamic object assigned
        if(alab.Label!=NULL)
                delete alab.Label;
        alab.Label=new TLabel(this);
        alab.Label->Parent=this;
        alab.Label->Left=10+i;
        alab.Label->Top=10+i;
        alab.Label->Show();
        alab.Label->Caption="I'm user's dynamic obj!!";
        alab.Label->Font->Size = -24;


        if(!plab)
                delete plab;
        //dynamic builded new object
        plab=new BLabel();
        //Component must have parent to show on Form
        plab->Parent=this;

        //Component's coord
        plab->Left=      200+i;
        plab->Top=       200+i;
        plab->Show();
	//Component's caption
        plab->Caption="I'm dynamic inheritant label!!";
        plab->Font->Size = -24;

        i=(i+10)%100;
        this->Repaint();
}
//---------------------------------------------------------------------------
