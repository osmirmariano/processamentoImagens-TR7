//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "laplacianoEGradiente.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
	Form1->Color = clWhite;
	ComboBox1->Items->Add("MÁSCARA 01");
	ComboBox1->Items->Add("MÁSCARA 02");
	ComboBox1->Items->Add("MÁSCARA 03");
	ComboBox1->Items->Add("MÁSCARA 04");
}
//---------------------------------------------------------------------------
void __fastcall TForm1::SpeedButton3Click(TObject *Sender)
{
    Image1->Picture->LoadFromFile("5.bmp"); // Carregando imagem
	Image1->Stretch = true; //redimensiona
	Image1->Refresh(); //atualiza
}
//---------------------------------------------------------------------------
