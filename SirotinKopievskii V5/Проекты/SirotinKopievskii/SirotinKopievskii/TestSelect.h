#pragma once
#include "AllTests.h"
#include "VAR.h"


namespace SirotinKopievskii {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace BrokenPiano;

	/// <summary>
	/// Сводка для TestSelect
	/// </summary>
	public ref class TestSelect : public System::Windows::Forms::Form
	{
	public:
		TestSelect(void)
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
		~TestSelect()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:



	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::CheckBox^  checkBox1;
	private: System::Windows::Forms::CheckBox^  checkBox2;
	private: System::Windows::Forms::CheckBox^  checkBox3;



	private: System::Windows::Forms::Button^  button1;

	private: System::Windows::Forms::Timer^  ButtonAction;
	private: System::Windows::Forms::Timer^  ButtonUp;
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
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->ButtonAction = (gcnew System::Windows::Forms::Timer(this->components));
			this->ButtonUp = (gcnew System::Windows::Forms::Timer(this->components));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::Silver;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Location = System::Drawing::Point(711, 32);
			this->button5->Margin = System::Windows::Forms::Padding(4);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(60, 60);
			this->button5->TabIndex = 4;
			this->button5->Text = L"Назад";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &TestSelect::button5_Click);
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->BackColor = System::Drawing::SystemColors::Control;
			this->checkBox1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->checkBox1->Location = System::Drawing::Point(97, 164);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(254, 37);
			this->checkBox1->TabIndex = 5;
			this->checkBox1->Text = L"Перевод фразы";
			this->checkBox1->UseVisualStyleBackColor = false;
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->BackColor = System::Drawing::SystemColors::Control;
			this->checkBox2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->checkBox2->Location = System::Drawing::Point(97, 235);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(216, 37);
			this->checkBox2->TabIndex = 6;
			this->checkBox2->Text = L"Ввод вручную";
			this->checkBox2->UseVisualStyleBackColor = false;
			// 
			// checkBox3
			// 
			this->checkBox3->AutoSize = true;
			this->checkBox3->BackColor = System::Drawing::SystemColors::Control;
			this->checkBox3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->checkBox3->Location = System::Drawing::Point(97, 313);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(216, 37);
			this->checkBox3->TabIndex = 7;
			this->checkBox3->Text = L"Выбор ответа";
			this->checkBox3->UseVisualStyleBackColor = false;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->button1->Enabled = false;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(296, 446);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(244, 69);
			this->button1->TabIndex = 11;
			this->button1->Text = L"Начать тест";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &TestSelect::button1_Click);
			// 
			// ButtonAction
			// 
			this->ButtonAction->Enabled = true;
			this->ButtonAction->Tick += gcnew System::EventHandler(this, &TestSelect::ButtonAction_Tick);
			// 
			// ButtonUp
			// 
			this->ButtonUp->Enabled = true;
			this->ButtonUp->Tick += gcnew System::EventHandler(this, &TestSelect::ButtonUp_Tick);
			// 
			// panel1
			// 
			this->panel1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->checkBox3);
			this->panel1->Controls->Add(this->checkBox2);
			this->panel1->Controls->Add(this->checkBox1);
			this->panel1->Controls->Add(this->button5);
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(784, 560);
			this->panel1->TabIndex = 12;
			// 
			// TestSelect
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 17);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(784, 561);
			this->ControlBox = false;
			this->Controls->Add(this->panel1);
			this->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"TestSelect";
			this->StartPosition = System::Windows::Forms::FormStartPosition::Manual;
			this->Text = L"Выбор теста";
			this->Load += gcnew System::EventHandler(this, &TestSelect::TestSelect_Load);
			this->VisibleChanged += gcnew System::EventHandler(this, &TestSelect::TestSelect_VisibleChanged);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
		int XS = 244;
		int YS = 69;
		int XL = 290;
		int YL = 446;
		int GreyIndex = 120;
		int GreenIndex = 240;
		void Type_Select() {
			if (checkBox1->Checked == true)
				Test_Types[0] = true;
			else
				Test_Types[0] = false;
			if (checkBox2->Checked == true)
				Test_Types[1] = true;
			else
				Test_Types[1] = false;
			if (checkBox3->Checked == true)
				Test_Types[2] = true;
			else
				Test_Types[2] = false;

			

		}
	private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
	
		Owner->Show();
		this->Hide();
	}

private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	AllTests ^form = gcnew AllTests();
	form->Owner = this;
	Type_Select();
	form->Show();
	this->Hide();
}
private: System::Void TestSelect_Load(System::Object^  sender, System::EventArgs^  e)
{
	ButtonUp->Enabled = 0;
}
private: System::Void ButtonAction_Tick(System::Object^  sender, System::EventArgs^  e) 
{
	if ((checkBox1->Checked == 1) || (checkBox2->Checked == 1) || (checkBox3->Checked == 1))
	{
		ButtonUp->Enabled = 1;
	}
	if (checkBox1->Checked == 0 && checkBox2->Checked == 0 && checkBox3->Checked == 0)
	{
		button1->Enabled = 0;
	}
}
private: System::Void ButtonUp_Tick(System::Object^  sender, System::EventArgs^  e) 
{
	if (XS < 450 && XL > 190)
	{
		XS = XS + 10;
		button1->Size = System::Drawing::Size(XS, YS);
		XL = XL - 5;
		button1->Location = System::Drawing::Point(XL, YL);
	}

	if (XS > 300)
	{
		button1->Enabled = 1;
	}
	if (GreyIndex < 250)
	{
		GreyIndex = GreyIndex + 10;
		button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(GreyIndex)), static_cast<System::Int32>(static_cast<System::Byte>(GreyIndex)),
			static_cast<System::Int32>(static_cast<System::Byte>(GreyIndex)));
	}
	if (GreenIndex > 50)
	{
		GreenIndex = GreenIndex - 10;
		button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(GreenIndex)), static_cast<System::Int32>(static_cast<System::Byte>(240)),
			static_cast<System::Int32>(static_cast<System::Byte>(GreenIndex)));
	}
	if (GreenIndex == 60)
	{
		ButtonUp->Enabled = 0;
	}


}
private: System::Void TestSelect_VisibleChanged(System::Object^  sender, System::EventArgs^  e) {
	ChangeForm_Module::Resize(this);
}
};
}
