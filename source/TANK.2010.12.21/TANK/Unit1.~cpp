//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;

GameManager Game;

//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm1::FormCreate(TObject *Sender)
{
        this->DoubleBuffered = true;
        // image scene init
        this->ClientHeight = SCENE_RECT.Height();
        this->ClientWidth  = SCENE_RECT.Width();
        this->Caption = "©Z§J¤j¾Ô!!";
        this->MainImg->Width  = SCENE_RECT.Width();
        this->MainImg->Height = SCENE_RECT.Height();
        this->MainImg->Canvas->Brush->Color=clBlack;
        this->MainImg->Canvas->FillRect(TRect(0,0,500,500));
        //load image
        ImgTank = new TImage(NULL);
        ImgTank->AutoSize=true;
        ImgTank->Picture->LoadFromFile("IMGDATA//Tank.bmp");
}
//---------------------------------------------------------------------------
void __fastcall TForm1::TimerTimer(TObject *Sender)
{
        Game.Refresh();

        // repaint
        // fill background
        this->MainImg->Canvas->Brush->Color=clBlack;
        this->MainImg->Canvas->FillRect(SCENE_RECT);

        // copy data
        CopyComp(Game.pMainTank);

        vector<Obstacle*>::iterator ObsIt;
        for(ObsIt=Game.ObsVec.begin();
                ObsIt != Game.ObsVec.end();
                ObsIt ++)
        {
                CopyComp(*ObsIt);
        }
        if(Game.pBul)
                CopyComp(Game.pBul);
}
//---------------------------------------------------------------------------
void TForm1::CopyComp(TComp *comp)
{
        MainImg->Canvas->CopyRect(comp->getRect(),ImgTank->Canvas,comp->getSrc());
}
//---------------------------------------------------------------------------
void __fastcall TForm1::FormKeyDown(TObject *Sender, WORD &Key,
      TShiftState Shift)
{
        Game.onKeyDown(Key);
}
//---------------------------------------------------------------------------
