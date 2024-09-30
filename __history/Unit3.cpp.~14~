//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit3.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm3 *Form3;
//---------------------------------------------------------------------------
__fastcall TForm3::TForm3(TComponent* Owner)
	: TForm(Owner)
{
    SetupTest();
}
//---------------------------------------------------------------------------
void __fastcall TForm3::SetupTest()
{
    // Вопрос 1
	Label1->Caption = "1. Что такое TForm?";
    RadioGroup1->Items->Clear();
	RadioGroup1->Items->Add("Класс для создания окон");
	RadioGroup1->Items->Add("Компонент для кнопок");
	RadioGroup1->Items->Add("Компонент для изображений");

    // Вопрос 2
	Label2->Caption = "2. Какой метод закрывает форму?";
	RadioGroup2->Items->Clear();
	RadioGroup2->Items->Add("Close");
	RadioGroup2->Items->Add("Hide");
	RadioGroup2->Items->Add("Show");

    // Вопрос 3
	Label3->Caption = "3. Какое свойство задает заголовок окна?";
	RadioGroup3->Items->Clear();
	RadioGroup3->Items->Add("Caption");
	RadioGroup3->Items->Add("Title");
	RadioGroup3->Items->Add("Name");

    // Вопрос 4
	Label4->Caption = "4. Какой компонент отображает изображение?";
	RadioGroup4->Items->Clear();
	RadioGroup4->Items->Add("TImage");
	RadioGroup4->Items->Add("TLabel");
	RadioGroup4->Items->Add("TPanel");

    // Вопрос 5
	Label5->Caption = "5. Как задать начальную позицию формы?";
	RadioGroup5->Items->Clear();
	RadioGroup5->Items->Add("Position");
	RadioGroup5->Items->Add("Align");
	RadioGroup5->Items->Add("Size");

    // Вопрос 6
	Label6->Caption = "6. Какой компонент отвечает за создание меню?";
	RadioGroup6->Items->Clear();
	RadioGroup6->Items->Add("TMainMenu");
	RadioGroup6->Items->Add("TPopupMenu");
	RadioGroup6->Items->Add("TMenuItem");

    // Вопрос 7
	Label7->Caption = "7. Какой метод делает форму видимой?";
	RadioGroup7->Items->Clear();
	RadioGroup7->Items->Add("Show");
	RadioGroup7->Items->Add("Hide");
	RadioGroup7->Items->Add("Close");

    // Вопрос 8
	Label8->Caption = "8. Какой метод завершает работу программы?";
	RadioGroup8->Items->Clear();
	RadioGroup8->Items->Add("Terminate");
	RadioGroup8->Items->Add("Close");
	RadioGroup8->Items->Add("Exit");

    // Вопрос 9
	Label9->Caption = "9. Какой компонент используется для ввода текста?";
	RadioGroup9->Items->Clear();
	RadioGroup9->Items->Add("TEdit");
	RadioGroup9->Items->Add("TMemo");
	RadioGroup9->Items->Add("TLabel");

    // Вопрос 10
    Label10->Caption = "10. Как изменить цвет фона формы?";
	RadioGroup10->Items->Clear();
	RadioGroup10->Items->Add("Color");
	RadioGroup10->Items->Add("Background");
	RadioGroup10->Items->Add("Brush");
}

// Подсчёт правильных ответов
int __fastcall TForm3::CalculateScore()
{
    int score = 0;

	if (RadioGroup1->ItemIndex == 0) score++;
	if (RadioGroup2->ItemIndex == 0) score++;
	if (RadioGroup3->ItemIndex == 0) score++;
	if (RadioGroup4->ItemIndex == 0) score++;
	if (RadioGroup5->ItemIndex == 0) score++;
	if (RadioGroup6->ItemIndex == 0) score++;
	if (RadioGroup7->ItemIndex == 0) score++;
	if (RadioGroup8->ItemIndex == 0) score++;
	if (RadioGroup9->ItemIndex == 0) score++;
	if (RadioGroup10->ItemIndex == 0) score++;

    return score;
}


void __fastcall TForm3::Button1Click(TObject *Sender)
{
    int score = CalculateScore();
	ShowMessage("Вы набрали " + IntToStr(score) + " из 10 правильных ответов.");
}
//---------------------------------------------------------------------------

