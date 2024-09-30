//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit4.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm4 *Form4;
//---------------------------------------------------------------------------
__fastcall TForm4::TForm4(TComponent* Owner)
	: TForm(Owner)
{
    SetupTest();
}
//---------------------------------------------------------------------------
void __fastcall TForm4::SetupTest()
{

	Label1->Caption = "1. Что представляет собой класс TForm?";
	RadioGroup1->Items->Clear();
	RadioGroup1->Items->Add("Компонент для работы с базами данных");
	RadioGroup1->Items->Add("Базовый класс для всех оконных форм в приложениях");
	RadioGroup1->Items->Add("Класс для работы с файлами");


	Label2->Caption = "2. Какой метод класса TForm используется для изменения заголовка формы?";
	RadioGroup2->Items->Clear();
	RadioGroup2->Items->Add("SetCaption");
	RadioGroup2->Items->Add("SetTitle");
	RadioGroup2->Items->Add("SetName");


	Label3->Caption = "3. Какой свойство отвечает за положение формы на экране?";
	RadioGroup3->Items->Clear();
	RadioGroup3->Items->Add("Position");
	RadioGroup3->Items->Add("Location");
	RadioGroup3->Items->Add("WindowPlace");



	Label4->Caption = "4. Что произойдет при вызове метода Close() у формы?";
	RadioGroup4->Items->Clear();
	RadioGroup4->Items->Add("Приложение будет свернуто");
	RadioGroup4->Items->Add(" Форма закроется");
	RadioGroup4->Items->Add("Приложение завершит работу");


	Label5->Caption = "5. Какое свойство используется для установки размера формы?";
	RadioGroup5->Items->Clear();
	RadioGroup5->Items->Add("FormSize");
	RadioGroup5->Items->Add("ClientWidth и ClientHeight");
	RadioGroup5->Items->Add("FormHeight и FormWidth");



	Label6->Caption = "6. Какой метод TForm используется для отображения формы на экране?";
	RadioGroup6->Items->Clear();
	RadioGroup6->Items->Add("Show");
	RadioGroup6->Items->Add("Display");
	RadioGroup6->Items->Add("View");



	Label7->Caption = "7. Какое событие формы вызывается при её закрытии?";
	RadioGroup7->Items->Clear();
	RadioGroup7->Items->Add("OnShow");
	RadioGroup7->Items->Add("OnClose");
	RadioGroup7->Items->Add("OnHide");


	Label8->Caption = "8. Какой метод класса TForm используется для создания модальной формы?";
	RadioGroup8->Items->Clear();
	RadioGroup8->Items->Add("ShowModal");
	RadioGroup8->Items->Add("ShowMax");
	RadioGroup8->Items->Add("DisplayModal");


	Label9->Caption = "9. Что произойдет, если свойству BorderStyle формы присвоить значение bsNone?";
	RadioGroup9->Items->Clear();
	RadioGroup9->Items->Add("Окно станет полноэкранным");
	RadioGroup9->Items->Add("Окно не будет иметь границ и заголовка");
	RadioGroup9->Items->Add("Окно закроется автоматически");


	Label10->Caption = "10. Какое событие вызывается при изменении размеров формы?";
	RadioGroup10->Items->Clear();
	RadioGroup10->Items->Add("OnResize");
	RadioGroup10->Items->Add("OnChangeSize");
	RadioGroup10->Items->Add("OnWidthHeightChange");

}

// Подсчёт правильных ответов
int __fastcall TForm4::CalculateScore()
{
    int score = 0;

	if (RadioGroup1->ItemIndex == 1) score++;
	if (RadioGroup2->ItemIndex == 0) score++;
	if (RadioGroup3->ItemIndex == 1) score++;
	if (RadioGroup4->ItemIndex == 1) score++;
	if (RadioGroup5->ItemIndex == 1) score++;
	if (RadioGroup6->ItemIndex == 0) score++;
	if (RadioGroup7->ItemIndex == 1) score++;
	if (RadioGroup8->ItemIndex == 0) score++;
	if (RadioGroup9->ItemIndex == 1) score++;
	if (RadioGroup10->ItemIndex == 0) score++;

    return score;
}


void __fastcall TForm4::Button1Click(TObject *Sender)
{
    int score = CalculateScore();
	ShowMessage("Вы набрали " + IntToStr(score) + " из 10 правильных ответов.");
}
