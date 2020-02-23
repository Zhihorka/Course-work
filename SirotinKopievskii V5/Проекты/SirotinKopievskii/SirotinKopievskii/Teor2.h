#pragma once
#include "VAR.h"
#include "TestsHeaders.h"

namespace SirotinKopievskii {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace BrokenPiano;
	using namespace Obj_Space;

	/// <summary>
	/// Сводка для Teor2
	/// </summary>
	public ref class Teor2 : public System::Windows::Forms::Form
	{
	public:
		Teor2(void)
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
		~Teor2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(12, 24);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(551, 525);
			this->textBox1->TabIndex = 0;
			this->textBox1->TabStop = false;
			// 
			// button1
			// 
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Location = System::Drawing::Point(569, 499);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(203, 50);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Вернуться";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Teor2::button1_Click);
			// 
			// button2
			// 
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Location = System::Drawing::Point(569, 78);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(203, 48);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Посмотреть примеры резюме";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Teor2::button2_Click);
			// 
			// button3
			// 
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Location = System::Drawing::Point(569, 24);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(203, 48);
			this->button3->TabIndex = 3;
			this->button3->Text = L"Посмотреть структуру резюме";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Teor2::button3_Click);
			// 
			// panel1
			// 
			this->panel1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->panel1->Controls->Add(this->button3);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->textBox1);
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(784, 560);
			this->panel1->TabIndex = 4;
			// 
			// Teor2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 17);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(784, 561);
			this->ControlBox = false;
			this->Controls->Add(this->panel1);
			this->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"Teor2";
			this->StartPosition = System::Windows::Forms::FormStartPosition::Manual;
			this->Text = L"Резюме";
			this->Load += gcnew System::EventHandler(this, &Teor2::Teor2_Load);
			this->VisibleChanged += gcnew System::EventHandler(this, &Teor2::Teor2_VisibleChanged);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
		void Resume(bool example, TextBox^T) {
			String ^ Text1;
			if (example == false) {
				Text1 = "1. The author. The headline. The source, year. \r\n" +
					"2. THE HEADLINE\r\n" +
					"3. The aim of the article is to show the reader that...\r\n" +
					"4. The research method used in article is [description/comparison/analysis]\r\n" +
					"5. Main Content. (Не копировать, используйте измененные предложения!)\r\n" +
					"Примеры, с чего можно начать основную часть:\r\n" +
					"The author [states/stressed] that...\r\nThe author start by telling...\r\nThe author point out that...\r\n"
					"Объем основной части преполагает 2 абзаца.\r\n" +
					"6. The article discribes the period of [вставить нужное] [developmeny/evolution/integration/implementation/using/building/designing] begining with [год] in [место].\r\n " +
					"7. The author's conclusion is that...";
			}
			else {
				Text1 = " Sounders R. Banking on ATM by Satellite, Satellite Communications, 1997, p43-45\r\n"+
					" BANKING ON ATM BY SATELLITE\r\n"+
					" The aim of the article is to show the reader that ATM allows transmitting a phenomenal array of multimedia information in a united structure.\r\n"+
					" The research method used in the article is description.\r\n"+
					" ATM(Asynchronous Transfer Mode) represent powerful telecommunicatons standard which was originally develop for terrestrial networks and had the ability to convey voice data and video via satellite.Scientist at the Clacksburg, Maryland based Comsat labs reinvnted it to operate on a satellite link since satellite transmissions are subject to noise.For this purpose two interfaces were develop iALA - 2000 for " +
					"multinational companies that want to use ATM over thier VSAT networks and ALE - 2000 which targets large telecomms network operators.\r\n"+
					" The article describes the period of ATM's reinvention in the 1990s in the USA.\r\n"+
					" The author's conclusion is that ATM has many pros and despite it is in precommercical phase, it is expected to be well accepted in the nearest future.";
			}
			T->Text = Text1;
		}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		Owner->Show();
		this->Hide();
	}
	private: System::Void Teor2_Load(System::Object^  sender, System::EventArgs^  e) {
		Resume(false, textBox1);
		Achivments::Achivments_get("1", 1, ConvertToString(Login_Text));
		//AchivmentGlobal[1] = 1;
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		Achivments::Achivments_get("0", 3, ConvertToString(Login_Text));
		//AchivmentGlobal[0] = 3;
		Achivments::Achivments_get("1", 2, ConvertToString(Login_Text));
		//AchivmentGlobal[1] = 2;
		Resume(true, textBox1);
	}
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
		Resume(false, textBox1);
		Achivments::Achivments_get("1", 3, ConvertToString(Login_Text));
		//AchivmentGlobal[1] = 3;
	}

private: System::Void Teor2_VisibleChanged(System::Object^  sender, System::EventArgs^  e) {
	ChangeForm_Module::Resize(this);
}
};
}
