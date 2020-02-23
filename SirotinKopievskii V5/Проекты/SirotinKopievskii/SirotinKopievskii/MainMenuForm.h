#pragma once
#include "Teor.h"
#include "TestSelect.h"
#include "Teor2.h"
#include "ProgressForm.h"
#include "Settings.h"
#include "Cabinet.h"
#include "AchivmentsForm.h"

namespace SirotinKopievskii {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace BrokenPiano;

	/// <summary>
	/// Сводка для MainMenuForm
	/// </summary>
	public ref class MainMenuForm : public System::Windows::Forms::Form
	{
	public:
		MainMenuForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MainMenuForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button10;
	protected:
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::Button^  button5;

	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Timer^  ButtonMoverTimer;
	private: System::Windows::Forms::Timer^  TestsTimer;

	private: System::Windows::Forms::Timer^  CabinetTimer;
	private: System::Windows::Forms::Timer^  OptionTimer;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->ButtonMoverTimer = (gcnew System::Windows::Forms::Timer(this->components));
			this->TestsTimer = (gcnew System::Windows::Forms::Timer(this->components));
			this->CabinetTimer = (gcnew System::Windows::Forms::Timer(this->components));
			this->OptionTimer = (gcnew System::Windows::Forms::Timer(this->components));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button10
			// 
			this->button10->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button10->Font = (gcnew System::Drawing::Font(L"Century Gothic", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button10->Location = System::Drawing::Point(420, 310);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(200, 200);
			this->button10->TabIndex = 21;
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &MainMenuForm::button10_Click);
			// 
			// button9
			// 
			this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button9->Font = (gcnew System::Drawing::Font(L"Century Gothic", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button9->Location = System::Drawing::Point(160, 310);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(200, 200);
			this->button9->TabIndex = 20;
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MainMenuForm::button9_Click_1);
			// 
			// button5
			// 
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Font = (gcnew System::Drawing::Font(L"Century Gothic", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button5->Location = System::Drawing::Point(420, 62);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(200, 200);
			this->button5->TabIndex = 16;
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MainMenuForm::button5_Click_1);
			// 
			// button6
			// 
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->Font = (gcnew System::Drawing::Font(L"Century Gothic", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button6->Location = System::Drawing::Point(420, 62);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(200, 200);
			this->button6->TabIndex = 17;
			this->button6->Text = L"Календарь";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MainMenuForm::button6_Click);
			// 
			// button7
			// 
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button7->Font = (gcnew System::Drawing::Font(L"Century Gothic", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button7->Location = System::Drawing::Point(420, 64);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(200, 200);
			this->button7->TabIndex = 18;
			this->button7->Text = L"Учетная запись";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MainMenuForm::button7_Click);
			// 
			// button8
			// 
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button8->Font = (gcnew System::Drawing::Font(L"Century Gothic", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button8->Location = System::Drawing::Point(420, 60);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(200, 200);
			this->button8->TabIndex = 19;
			this->button8->Text = L"Достижения";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MainMenuForm::button8_Click);
			// 
			// button1
			// 
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(160, 60);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(200, 200);
			this->button1->TabIndex = 11;
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MainMenuForm::button1_Click_1);
			// 
			// button2
			// 
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(160, 60);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(200, 200);
			this->button2->TabIndex = 12;
			this->button2->Text = L"Теория";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MainMenuForm::button2_Click_2);
			// 
			// button3
			// 
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(160, 60);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(200, 200);
			this->button3->TabIndex = 14;
			this->button3->Text = L"Тестирование";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MainMenuForm::button3_Click);
			// 
			// button4
			// 
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button4->Location = System::Drawing::Point(160, 62);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(200, 200);
			this->button4->TabIndex = 13;
			this->button4->Text = L"Резюме";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MainMenuForm::button4_Click);
			// 
			// ButtonMoverTimer
			// 
			this->ButtonMoverTimer->Enabled = true;
			this->ButtonMoverTimer->Interval = 1;
			this->ButtonMoverTimer->Tick += gcnew System::EventHandler(this, &MainMenuForm::ButtonMoverTimer_Tick);
			// 
			// TestsTimer
			// 
			this->TestsTimer->Enabled = true;
			this->TestsTimer->Interval = 1;
			this->TestsTimer->Tick += gcnew System::EventHandler(this, &MainMenuForm::TestsTimer_Tick_1);
			// 
			// CabinetTimer
			// 
			this->CabinetTimer->Enabled = true;
			this->CabinetTimer->Interval = 1;
			this->CabinetTimer->Tick += gcnew System::EventHandler(this, &MainMenuForm::CabinetTimer_Tick_1);
			// 
			// OptionTimer
			// 
			this->OptionTimer->Enabled = true;
			this->OptionTimer->Interval = 1;
			this->OptionTimer->Tick += gcnew System::EventHandler(this, &MainMenuForm::OptionTimer_Tick_1);
			// 
			// panel1
			// 
			this->panel1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->panel1->Controls->Add(this->button10);
			this->panel1->Controls->Add(this->button9);
			this->panel1->Controls->Add(this->button5);
			this->panel1->Controls->Add(this->button6);
			this->panel1->Controls->Add(this->button7);
			this->panel1->Controls->Add(this->button8);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->button3);
			this->panel1->Controls->Add(this->button4);
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(784, 560);
			this->panel1->TabIndex = 22;
			// 
			// MainMenuForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(784, 561);
			this->Controls->Add(this->panel1);
			this->Name = L"MainMenuForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::Manual;
			this->Text = L"Главное меню";
			this->Load += gcnew System::EventHandler(this, &MainMenuForm::MainMenuForm_Load);
			this->VisibleChanged += gcnew System::EventHandler(this, &MainMenuForm::MainMenuForm_VisibleChanged);
			this->panel1->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
		int sec;
		int TestsSec;
		int B2y = 60;
		int B3x = 160;
		int B4x = 160;
		int B4y = 60;
		int B7x = 420;
		int B6y = 60;
		int B8x = 420;
		int B8y = 60;
		int OptionSec;
		int Button1EnableIndex = 0;
		int MoveIndex = 0;
		int Button2EnableIndex = 0;
		int Button3EnableIndex = 0;
		int MoveIndex2 = 0;
		int MoveIndex3 = 0;
		int CabinetSec;
		int B9x = 160;
		int B9y = 310;
		int W = 200;
		int H = 200;
		void Mover2000(Button^BT, int x, int y)
		{
			BT->Location = System::Drawing::Point(x, y);
		}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e)
	{
		ButtonMoverTimer->Enabled = 1;
		TestsTimer->Enabled = 1;
		TestsSec = 0;
		if (Button1EnableIndex == 1)
		{
			MoveIndex = 1;
		}


	}
	private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e)
	{
		sec++;
		//label1->Text = Convert::ToString(sec);
	}
private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e)
{
	ButtonMoverTimer->Enabled = 0;
	TestsTimer->Enabled = 0;
	CabinetTimer->Enabled = 0;
	OptionTimer->Enabled = 0;
}
private: System::Void TestsTimer_Tick(System::Object^  sender, System::EventArgs^  e)
{
	TestsSec++;
	if (MoveIndex == 0)
	{
		if (B2y <= 310)
		{
			B2y = B2y + 10;
			Mover2000(button2, 160, B2y);
		}
		if (B3x <= 420)
		{
			B3x = B3x + 10;
			Mover2000(button3, B3x, 60);
		}
		if (B4x <= 420 && B4y <= 310)
		{
			B4x = B4x + 10;
			B4y = B4y + 10;
			Mover2000(button4, B4x, B4y);
			button1->BackColor = System::Drawing::Color::LightGreen;
			button2->BackColor = System::Drawing::Color::LightGreen;
			button3->BackColor = System::Drawing::Color::LightGreen;
			button4->BackColor = System::Drawing::Color::LightGreen;
			button5->Visible = 0;
			button6->Visible = 0;
			button7->Visible = 0;
			button8->Visible = 0;
			button9->Visible = 0;
			button10->Visible = 0;
		}
		if (TestsSec > 10)
		{
			button1->Text = "";
			Button1EnableIndex = 1;
		}

	}
	if (MoveIndex == 1)
	{
		if (B2y > 60)
		{
			B2y = B2y - 10;
			Mover2000(button2, 160, B2y);
		}
		if (B3x > 160)
		{
			B3x = B3x - 10;
			Mover2000(button3, B3x, 60);
		}
		if (B4x > 160 && B4y > 60)
		{
			B4x = B4x - 10;
			B4y = B4y - 10;
			Mover2000(button4, B4x, B4y);
			button1->BackColor = System::Drawing::SystemColors::Control;
			button2->BackColor = System::Drawing::SystemColors::Control;
			button3->BackColor = System::Drawing::SystemColors::Control;
			button4->BackColor = System::Drawing::SystemColors::Control;
			button5->Visible = 1;
			button6->Visible = 1;
			button7->Visible = 1;
			button8->Visible = 1;
			button9->Visible = 1;
			button10->Visible = 1;
		}
		if (TestsSec == 30 && MoveIndex == 1)
		{
			Button1EnableIndex = 0;
			MoveIndex = 0;
			TestsTimer->Enabled = 0;
			button1->Text = "";
		}
	}

}
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e)
{

	CabinetTimer->Enabled = 1;
	CabinetSec = 0;
	if (Button2EnableIndex == 1)
	{
		MoveIndex2 = 1;
	}
}
private: System::Void CabinetTimer_Tick(System::Object^  sender, System::EventArgs^  e)
{
	CabinetSec++;
	if (MoveIndex2 == 0)
	{
		if (B6y <= 310)
		{
			B6y = B6y + 10;
			Mover2000(button6, 420, B6y);
		}
		if (B7x > 160)
		{
			B7x = B7x - 10;
			Mover2000(button7, B7x, 60);
		}
		if (B8x >= 160 && B8y <= 310)
		{
			B8x = B8x - 10;
			B8y = B8y + 10;
			Mover2000(button8, B8x, B8y);
			button5->BackColor = System::Drawing::Color::SkyBlue;
			button6->BackColor = System::Drawing::Color::SkyBlue;
			button7->BackColor = System::Drawing::Color::SkyBlue;
			button8->BackColor = System::Drawing::Color::SkyBlue;

			button1->Visible = 0;
			button2->Visible = 0;
			button3->Visible = 0;
			button4->Visible = 0;
			button9->Visible = 0;
			button10->Visible = 0;
		}
		if (CabinetSec > 10)
		{
			button5->Text = "";
			Button2EnableIndex = 1;
		}

	}
	if (MoveIndex2 == 1)
	{
		if (B7x < 420)
		{
			B7x = B7x + 10;
			Mover2000(button7, B7x, 60);
		}
		if (B6y > 60)
		{
			B6y = B6y - 10;
			Mover2000(button6, 420, B6y);
		}
		if (B8x < 420 && B8y > 60)
		{
			B8x = B8x + 10;
			B8y = B8y - 10;
			Mover2000(button8, B8x, B8y);
			button1->Visible = 1;
			button2->Visible = 1;
			button3->Visible = 1;
			button4->Visible = 1;
			button9->Visible = 1;
			button10->Visible = 1;
			button5->BackColor = System::Drawing::SystemColors::Control;
			button6->BackColor = System::Drawing::SystemColors::Control;
			button7->BackColor = System::Drawing::SystemColors::Control;
			button8->BackColor = System::Drawing::SystemColors::Control;
		}
		if (CabinetSec == 30 && MoveIndex2 == 1)
		{
			Button2EnableIndex = 0;
			MoveIndex2 = 0;
			CabinetTimer->Enabled = 0;
			button5->Text = "";
		}
	}
}
private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e)
{
	OptionTimer->Enabled = 1;
	OptionSec = 0;
	if (Button3EnableIndex == 1)
	{
		MoveIndex3 = 1;
	}
}
private: System::Void OptionTimer_Tick(System::Object^  sender, System::EventArgs^  e)
{
	OptionSec++;
	if (MoveIndex3 == 0)
	{
		button9->BackColor = System::Drawing::Color::DarkOrange;
		button1->Visible = 0;
		button2->Visible = 0;
		button3->Visible = 0;
		button4->Visible = 0;
		button5->Visible = 0;
		button6->Visible = 0;
		button7->Visible = 0;
		button8->Visible = 0;
		button10->Visible = 0;
		if (H <= 460 && W < 460 && B9y > 60)
		{
			H = H + 10;
			W = W + 10;
			B9y = B9y - 10;
			button9->Size = System::Drawing::Size(W, H);
			Mover2000(button9, 160, B9y);

		}

		if (OptionSec > 10)
		{
			button9->Text = " ";
			Button3EnableIndex = 1;
		}

	}
	if (MoveIndex3 == 1)
	{
		if (H > 200 && W > 200 && B9y < 310)
		{
			button9->BackColor = System::Drawing::SystemColors::Control;
			button1->Visible = 1;
			button2->Visible = 1;
			button3->Visible = 1;
			button4->Visible = 1;
			button5->Visible = 1;
			button6->Visible = 1;
			button7->Visible = 1;
			button8->Visible = 1;
			button10->Visible = 1;
			H = H - 10;
			W = W - 10;
			B9y = B9y + 10;
			button9->Size = System::Drawing::Size(W, H);
			Mover2000(button9, 160, B9y);
		}

		if (OptionSec == 30 && MoveIndex3 == 1)
		{
			Button3EnableIndex = 0;
			MoveIndex3 = 0;
			OptionTimer->Enabled = 0;
			button9->Text = " ";
		}
	}

}
	private: System::Void ButtonMoverTimer_Tick(System::Object^  sender, System::EventArgs^  e) 
	{
	}
private: System::Void TestsTimer_Tick_1(System::Object^  sender, System::EventArgs^  e) 
{
	TestsSec++;
	if (MoveIndex == 0)
	{
		if (B2y <= 310)
		{
			B2y = B2y + 10;
			Mover2000(button2, 160, B2y);
		}
		if (B3x <= 420)
		{
			B3x = B3x + 10;
			Mover2000(button3, B3x, 60);
		}
		if (B4x <= 420 && B4y <= 310)
		{
			B4x = B4x + 10;
			B4y = B4y + 10;
			Mover2000(button4, B4x, B4y);
			button1->BackColor = System::Drawing::Color::LimeGreen;
			button2->BackColor = System::Drawing::Color::LimeGreen;
			button3->BackColor = System::Drawing::Color::LimeGreen;
			button4->BackColor = System::Drawing::Color::LimeGreen;
			button5->Visible = 0;
			button6->Visible = 0;
			button7->Visible = 0;
			button8->Visible = 0;
			button9->Visible = 0;
			button10->Visible = 0;
		}
		if (TestsSec > 10)
		{
			button1->Text = "";
			Button1EnableIndex = 1;
		}

	}
	if (MoveIndex == 1)
	{
		if (B2y > 60)
		{
			B2y = B2y - 10;
			Mover2000(button2, 160, B2y);
		}
		if (B3x > 160)
		{
			B3x = B3x - 10;
			Mover2000(button3, B3x, 60);
		}
		if (B4x > 160 && B4y > 60)
		{
			B4x = B4x - 10;
			B4y = B4y - 10;
			Mover2000(button4, B4x, B4y);
			button1->BackColor = System::Drawing::SystemColors::Control;
			button2->BackColor = System::Drawing::SystemColors::Control;
			button3->BackColor = System::Drawing::SystemColors::Control;
			button4->BackColor = System::Drawing::SystemColors::Control;
			button5->Visible = 1;
			button6->Visible = 1;
			button7->Visible = 1;
			button8->Visible = 1;
			button9->Visible = 1;
			button10->Visible = 1;
		}
		if (TestsSec == 30 && MoveIndex == 1)
		{
			Button1EnableIndex = 0;
			MoveIndex = 0;
			TestsTimer->Enabled = 0;
			button1->Text = "";
		}
	}
}
private: System::Void CabinetTimer_Tick_1(System::Object^  sender, System::EventArgs^  e)
{
	CabinetSec++;
	if (MoveIndex2 == 0)
	{
		if (B6y <= 310)
		{
			B6y = B6y + 10;
			Mover2000(button6, 420, B6y);
		}
		if (B7x > 160)
		{
			B7x = B7x - 10;
			Mover2000(button7, B7x, 60);
		}
		if (B8x >= 160 && B8y <= 310)
		{
			B8x = B8x - 10;
			B8y = B8y + 10;
			Mover2000(button8, B8x, B8y);
			button5->BackColor = System::Drawing::Color::DodgerBlue;
			button6->BackColor = System::Drawing::Color::DodgerBlue;
			button7->BackColor = System::Drawing::Color::DodgerBlue;
			button8->BackColor = System::Drawing::Color::DodgerBlue;

			button1->Visible = 0;
			button2->Visible = 0;
			button3->Visible = 0;
			button4->Visible = 0;
			button9->Visible = 0;
			button10->Visible = 0;
		}
		if (CabinetSec > 10)
		{
			button5->Text = "";
			Button2EnableIndex = 1;
		}

	}
	if (MoveIndex2 == 1)
	{
		if (B7x < 420)
		{
			B7x = B7x + 10;
			Mover2000(button7, B7x, 60);
		}
		if (B6y > 60)
		{
			B6y = B6y - 10;
			Mover2000(button6, 420, B6y);
		}
		if (B8x < 420 && B8y > 60)
		{
			B8x = B8x + 10;
			B8y = B8y - 10;
			Mover2000(button8, B8x, B8y);
			button1->Visible = 1;
			button2->Visible = 1;
			button3->Visible = 1;
			button4->Visible = 1;
			button9->Visible = 1;
			button10->Visible = 1;
			button5->BackColor = System::Drawing::SystemColors::Control;
			button6->BackColor = System::Drawing::SystemColors::Control;
			button7->BackColor = System::Drawing::SystemColors::Control;
			button8->BackColor = System::Drawing::SystemColors::Control;
		}
		if (CabinetSec == 30 && MoveIndex2 == 1)
		{
			Button2EnableIndex = 0;
			MoveIndex2 = 0;
			CabinetTimer->Enabled = 0;
			button5->Text = "";
		}
	}
}
private: System::Void OptionTimer_Tick_1(System::Object^  sender, System::EventArgs^  e)
{
	OptionSec++;
	if (MoveIndex3 == 0)
	{
		button9->BackColor = System::Drawing::Color::Orange;
		button1->Visible = 0;
		button2->Visible = 0;
		button3->Visible = 0;
		button4->Visible = 0;
		button5->Visible = 0;
		button6->Visible = 0;
		button7->Visible = 0;
		button8->Visible = 0;
		button10->Visible = 0;
		if (H <= 460 && W < 460 && B9y > 60)
		{
			H = H + 10;
			W = W + 10;
			B9y = B9y - 10;
			button9->Size = System::Drawing::Size(W, H);
			Mover2000(button9, 160, B9y);

		}

		if (OptionSec > 10)
		{
			button9->Text = " ";
			Button3EnableIndex = 1;
		}

	}
	if (MoveIndex3 == 1)
	{
		if (H > 200 && W > 200 && B9y < 310)
		{
			button9->BackColor = System::Drawing::SystemColors::Control;
			button1->Visible = 1;
			button2->Visible = 1;
			button3->Visible = 1;
			button4->Visible = 1;
			button5->Visible = 1;
			button6->Visible = 1;
			button7->Visible = 1;
			button8->Visible = 1;
			button10->Visible = 1;
			H = H - 10;
			W = W - 10;
			B9y = B9y + 10;
			button9->Size = System::Drawing::Size(W, H);
			Mover2000(button9, 160, B9y);
		}

		if (OptionSec == 30 && MoveIndex3 == 1)
		{
			Button3EnableIndex = 0;
			MoveIndex3 = 0;
			OptionTimer->Enabled = 0;
			button9->Text = " ";
		}
	}
}
private: System::Void MainMenuForm_Load(System::Object^  sender, System::EventArgs^  e)
{
	
	button1->Image = Image::FromFile(Application::StartupPath + "\\UI\\Obuchenie.png");
	button5->Image = Image::FromFile(Application::StartupPath + "\\UI\\Cabinet.png");
	button9->Image = Image::FromFile(Application::StartupPath + "\\UI\\Settings.png");
	button10->Image = Image::FromFile(Application::StartupPath + "\\UI\\Exit.png");
	OptionTimer->Enabled = 0;
	CabinetTimer->Enabled = 0;
	TestsTimer->Enabled = 0;
}
private: System::Void button1_Click_1(System::Object^  sender, System::EventArgs^  e) 
{
	ButtonMoverTimer->Enabled = 1;
	TestsTimer->Enabled = 1;
	TestsSec = 0;
	if (Button1EnableIndex == 1)
	{
		MoveIndex = 1;
	}
}
private: System::Void button9_Click_1(System::Object^  sender, System::EventArgs^  e)
{
	Settings ^form = gcnew Settings();
	form->Owner = this;
	form->Show();
	this->Hide();
	/*OptionTimer->Enabled = 1;
	OptionSec = 0;
	if (Button3EnableIndex == 1)
	{
		MoveIndex3 = 1;
	}*/

}
private: System::Void button5_Click_1(System::Object^  sender, System::EventArgs^  e)
{
	CabinetTimer->Enabled = 1;
	CabinetSec = 0;
	if (Button2EnableIndex == 1)
	{
		MoveIndex2 = 1;
	}
}
private: System::Void button2_Click_1(System::Object^  sender, System::EventArgs^  e)
{
	Teor ^form = gcnew Teor();
	form->Owner = this;
	form->Show();
	this->Hide();

}


private: System::Void button4_Click_1(System::Object^  sender, System::EventArgs^  e)
{
	Teor2 ^form = gcnew Teor2();
	form->Owner = this;
	form->Show();
	this->Hide();
}

private: System::Void button6_Click_1(System::Object^  sender, System::EventArgs^  e)
{
	ProgressForm ^form = gcnew ProgressForm();
	form->Owner = this;
	form->Show();
	this->Hide();
}
 private: System::Void button7_Click_1(System::Object^  sender, System::EventArgs^  e)
{

}
 private: System::Void button8_Click_1(System::Object^  sender, System::EventArgs^  e)
 {
	 AchivmentsForm ^form = gcnew AchivmentsForm();
	 form->Owner = this;
	 form->Show();
	 this->Hide();
 }
private: System::Void button2_Click_2(System::Object^  sender, System::EventArgs^  e)
{
	Teor ^form = gcnew Teor();
	form->Owner = this;
	form->Show();
	this->Hide();
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) 
{
	Achivments::Achivments_get("2", 2, ConvertToString(Login_Text));
	//AchivmentGlobal[2] = 2;
	TestSelect ^form = gcnew TestSelect();
	form->Owner = this;
	form->Show();
	this->Hide();
}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	Teor2 ^form = gcnew Teor2();
	form->Owner = this;
	form->Show();
	this->Hide();
}
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) 
{
	ProgressForm ^form = gcnew ProgressForm();
	form->Owner = this;
	form->Show();
	this->Hide();
}
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e)
{
	Cabinet^form = gcnew Cabinet();
	form->Owner = this;
	form->Show();
	this->Hide();
}
private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e)
{
	AchivmentsForm ^form = gcnew AchivmentsForm();
	form->Owner = this;
	form->Show();
	this->Hide();
}
private: System::Void button10_Click(System::Object^  sender, System::EventArgs^  e) 
{
	std::exit(0);
}
private: System::Void MainMenuForm_VisibleChanged(System::Object^  sender, System::EventArgs^  e) {
	ChangeForm_Module::Resize(this);
}
};
}
