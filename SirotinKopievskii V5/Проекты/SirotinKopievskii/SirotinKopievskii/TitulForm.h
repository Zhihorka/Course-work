#pragma once
#include "MainMenuForm.h"

namespace SirotinKopievskii {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace BrokenPiano;

	/// <summary>
	/// Сводка для TitulForm
	/// </summary>
	public ref class TitulForm : public System::Windows::Forms::Form
	{
	public:
		TitulForm(void)
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
		~TitulForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button4;
	protected:
	private: System::Windows::Forms::Button^  button3;
	internal: System::Windows::Forms::TextBox^  TextBox2;
	private:
	internal: System::Windows::Forms::TextBox^  TextBox1;
	private: System::Windows::Forms::Panel^  panel1;
	internal:

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(TitulForm::typeid));
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->TextBox2 = (gcnew System::Windows::Forms::TextBox());
			this->TextBox1 = (gcnew System::Windows::Forms::TextBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button4
			// 
			this->button4->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F));
			this->button4->Location = System::Drawing::Point(592, 487);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(177, 31);
			this->button4->TabIndex = 25;
			this->button4->Text = L"Завершить программу";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &TitulForm::button4_Click);
			// 
			// button3
			// 
			this->button3->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F));
			this->button3->Location = System::Drawing::Point(320, 466);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(147, 73);
			this->button3->TabIndex = 24;
			this->button3->Text = L"Начать работу";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &TitulForm::button3_Click);
			// 
			// TextBox2
			// 
			this->TextBox2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->TextBox2->BackColor = System::Drawing::SystemColors::Control;
			this->TextBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->TextBox2->Cursor = System::Windows::Forms::Cursors::Default;
			this->TextBox2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F));
			this->TextBox2->Location = System::Drawing::Point(495, 282);
			this->TextBox2->MaxLength = 300;
			this->TextBox2->Multiline = true;
			this->TextBox2->Name = L"TextBox2";
			this->TextBox2->ReadOnly = true;
			this->TextBox2->ShortcutsEnabled = false;
			this->TextBox2->Size = System::Drawing::Size(265, 139);
			this->TextBox2->TabIndex = 21;
			this->TextBox2->TabStop = false;
			this->TextBox2->Text = L"Выполнили студенты группы БФИ1802\r\nСиротин Н. С.\r\nКопиевский Н. Ю.\r\nНаучный руков"
				L"одитель:\r\nдоцент кафедры Информатика\r\nк.п.н. Гуриков С. Р.\r\nдоцент кафедры Иност"
				L"ранные языки\r\nк.п.н Кожевникова Т.В.\r\n";
			this->TextBox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// TextBox1
			// 
			this->TextBox1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->TextBox1->BackColor = System::Drawing::SystemColors::Control;
			this->TextBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->TextBox1->Cursor = System::Windows::Forms::Cursors::Default;
			this->TextBox1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F));
			this->TextBox1->Location = System::Drawing::Point(15, 12);
			this->TextBox1->MaxLength = 300;
			this->TextBox1->Multiline = true;
			this->TextBox1->Name = L"TextBox1";
			this->TextBox1->ReadOnly = true;
			this->TextBox1->ShortcutsEnabled = false;
			this->TextBox1->Size = System::Drawing::Size(745, 197);
			this->TextBox1->TabIndex = 20;
			this->TextBox1->TabStop = false;
			this->TextBox1->Text = resources->GetString(L"TextBox1.Text");
			this->TextBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// panel1
			// 
			this->panel1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->panel1->Controls->Add(this->TextBox1);
			this->panel1->Controls->Add(this->TextBox2);
			this->panel1->Controls->Add(this->button3);
			this->panel1->Controls->Add(this->button4);
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(784, 560);
			this->panel1->TabIndex = 26;
			// 
			// TitulForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(784, 561);
			this->ControlBox = false;
			this->Controls->Add(this->panel1);
			this->Name = L"TitulForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::Manual;
			this->Text = L"Титульный лист";
			this->Load += gcnew System::EventHandler(this, &TitulForm::TitulForm_Load);
			this->VisibleChanged += gcnew System::EventHandler(this, &TitulForm::TitulForm_VisibleChanged);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e)
	{
		MainMenuForm ^form = gcnew MainMenuForm();
		form->Owner = this;
		form->Show();
		this->Hide();
	}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	std::exit(0);
}
private: System::Void TitulForm_Load(System::Object^  sender, System::EventArgs^  e) {
	
}
private: System::Void TitulForm_VisibleChanged(System::Object^  sender, System::EventArgs^  e) {
	ChangeForm_Module::Resize(this);
}
};
}
