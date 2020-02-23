#pragma once
//#include "Resize_H1.h"
//#include "Start_Prog.h"
#include <iostream>
#include <fstream>
#include "TitulForm.h"
#include "Login.h"
#include "VAR.h"
//extern int size_stage = 1;

namespace SirotinKopievskii {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace Data::OleDb;
	using namespace std;

	/// <summary>
	/// Сводка для Start
	/// </summary>
	public ref class Start : public System::Windows::Forms::Form
	{
	public:
		Start(void)
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
		~Start()
		{
			if (components)
			{
				delete components;
			}
		}









	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Panel^  panel1;


	protected:






	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button1->Location = System::Drawing::Point(12, 299);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(210, 50);
			this->button1->TabIndex = 1;
			this->button1->Text = L"ОК";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Start::button1_Click);
			// 
			// button2
			// 
			this->button2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button2->Location = System::Drawing::Point(12, 12);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(210, 50);
			this->button2->TabIndex = 2;
			this->button2->Text = L"800x600";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Start::button2_Click_1);
			// 
			// button3
			// 
			this->button3->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button3->Location = System::Drawing::Point(12, 68);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(210, 50);
			this->button3->TabIndex = 3;
			this->button3->Text = L"1024x768";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Start::button3_Click);
			// 
			// button4
			// 
			this->button4->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button4->Location = System::Drawing::Point(12, 124);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(210, 50);
			this->button4->TabIndex = 4;
			this->button4->Text = L"1366x768";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Start::button4_Click);
			// 
			// button5
			// 
			this->button5->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button5->Location = System::Drawing::Point(12, 180);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(210, 50);
			this->button5->TabIndex = 5;
			this->button5->Text = L"1920x1080";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Start::button5_Click);
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->button5);
			this->panel1->Controls->Add(this->button4);
			this->panel1->Controls->Add(this->button3);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(234, 362);
			this->panel1->TabIndex = 6;
			// 
			// Start
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 17);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(234, 361);
			this->ControlBox = false;
			this->Controls->Add(this->panel1);
			this->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ForeColor = System::Drawing::SystemColors::ControlText;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"Start";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Выбор разрешения";
			this->Load += gcnew System::EventHandler(this, &Start::Start_Load);
			this->panel1->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion


private: System::Void Start_Load(System::Object^  sender, System::EventArgs^  e) {
	this->ClientSize = System::Drawing::Size(234, 361);
}

private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	String ^ T;
	switch (size_stage)
	{
	case 1: {
		T = "800x600";
		break;
	}
	case 2: {
		T = "1024x768";
		break;
	}
	case 3: {
		T = "1366x768";
		break;
	}
	case 4: {
		T = "1920x1080";
		break;
	}
	default:
		T = "800x600";
		break;
	}



	auto p = gcnew OleDbConnection("Provider=Microsoft.Jet.OLEDB.4.0;Data Source=" + Application::StartupPath + "\\resource\\Database1.mdb");
	p->Open();
	try {
		auto c = gcnew OleDbCommand("INSERT INTO [SETTINGS] ([Size]) VALUES ('" + T + "')");
		c->Connection = p;
		c->ExecuteNonQuery();
	}
	catch (System::Runtime::InteropServices::COMException ^ situation) {
		MessageBox::Show(situation->Message);
	}
	
	p->Close();

	Login ^form = gcnew Login();
	form->Owner = this;
	form->Show();
	this->Hide();
}
private: System::Void button2_Click_1(System::Object^  sender, System::EventArgs^  e) {
	size_stage = 1;
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	size_stage = 2;
	}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	size_stage = 3;
}
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
	size_stage = 4;
}
};
}
