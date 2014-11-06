//---------------------------------------------------------------------------

#ifndef map_cppH
#define map_cppH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ExtCtrls.hpp>
#include <Graphics.hpp>
#include <ComCtrls.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
        TLabel *Label1;
        TLabel *Label2;
        TButton *pro;
        TEdit *row_s;
        TEdit *col_s;
        TEdit *show_1;
        TEdit *show_2;
        TScrollBox *gb;
        TImage *img;
        TEdit *show_3;
        TEdit *show_4;
        TRadioButton *m_drag;
        TRadioButton *m_edit;
        TImage *img_s;
        TRadioButton *m_erase;
        void __fastcall proClick(TObject *Sender);
        void __fastcall FormCreate(TObject *Sender);
        void __fastcall imgDragOver(TObject *Sender, TObject *Source,
          int X, int Y, TDragState State, bool &Accept);
        void __fastcall m_dragClick(TObject *Sender);
        void __fastcall m_editClick(TObject *Sender);
        void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
        void __fastcall imgEndDrag(TObject *Sender, TObject *Target, int X,
          int Y);
        void __fastcall imgMouseMove(TObject *Sender, TShiftState Shift,
          int X, int Y);
        void __fastcall img_sDragOver(TObject *Sender, TObject *Source,
          int X, int Y, TDragState State, bool &Accept);
        void __fastcall m_eraseClick(TObject *Sender);
        void __fastcall img_sEndDrag(TObject *Sender, TObject *Target,
          int X, int Y);
        void __fastcall Alpha(TImage *Image3, TImage *Image1 , TImage *Image2 ,
          int alpha,int left_x,int top_y);
private:	// User declarations
public:		// User declarations
        __fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
