//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit9.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm9 *Form9;
//---------------------------------------------------------------------------
__fastcall TForm9::TForm9(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm9::Button1Click(TObject *Sender)
{
	Label3->Font->Name = "Arial";
	Form9->Invalidate();
}
//---------------------------------------------------------------------------
void __fastcall TForm9::Button2Click(TObject *Sender)
{
	Label3->Font->Name = "Times New Roman";
	Form9->Invalidate();
}
//---------------------------------------------------------------------------
void __fastcall TForm9::Button3Click(TObject *Sender)
{
	Label3->Font->Name = "Courier New";
	Form9->Invalidate();
}
//---------------------------------------------------------------------------
