#pragma once
#include "TestsHeaders.h"
#include "VAR.h"
//#include <string>
//#include <cstdlib>
//#include <string.h>

namespace SirotinKopievskii {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;
	using namespace BrokenPiano;
	//using namespace SpaceForTest;
	using namespace Obj_Space;

	/// <summary>
	/// Сводка для AllTests
	/// </summary>
	public ref class AllTests : public System::Windows::Forms::Form
	{
	public:
		AllTests(void)
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
		~AllTests()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::TrackBar^  trackBar1;
	private: System::Windows::Forms::Button^  button11;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  button10;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button12;
	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::Panel^  panel3;



	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Button^  button13;
	private: System::Windows::Forms::TrackBar^  trackBar2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Button^  button14;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::RadioButton^  radioButton3;
	private: System::Windows::Forms::RadioButton^  radioButton4;
	private: System::Windows::Forms::RadioButton^  radioButton1;
	private: System::Windows::Forms::RadioButton^  radioButton2;
	private: System::Windows::Forms::TrackBar^  trackBar3;
	private: System::Windows::Forms::Label^  label5;








	private: System::Windows::Forms::Panel^  panel7;
	private: System::Windows::Forms::Button^  button22;
	private: System::Windows::Forms::DataGridView^  dataGridView1;



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
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->trackBar1 = (gcnew System::Windows::Forms::TrackBar());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->trackBar2 = (gcnew System::Windows::Forms::TrackBar());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->trackBar3 = (gcnew System::Windows::Forms::TrackBar());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton4 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->BeginInit();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar2))->BeginInit();
			this->panel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar3))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->panel7->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button1->Location = System::Drawing::Point(577, 518);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(195, 31);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Завершить тест досрочно";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &AllTests::button1_Click);
			// 
			// panel1
			// 
			this->panel1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->panel1->Controls->Add(this->trackBar1);
			this->panel1->Controls->Add(this->button11);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->button10);
			this->panel1->Controls->Add(this->button9);
			this->panel1->Controls->Add(this->button8);
			this->panel1->Controls->Add(this->button7);
			this->panel1->Controls->Add(this->button6);
			this->panel1->Controls->Add(this->button5);
			this->panel1->Controls->Add(this->button4);
			this->panel1->Controls->Add(this->button3);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Location = System::Drawing::Point(12, 12);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(760, 500);
			this->panel1->TabIndex = 1;
			this->panel1->VisibleChanged += gcnew System::EventHandler(this, &AllTests::panel1_VisibleChanged);
			// 
			// trackBar1
			// 
			this->trackBar1->LargeChange = 0;
			this->trackBar1->Location = System::Drawing::Point(93, 22);
			this->trackBar1->Maximum = 4;
			this->trackBar1->Name = L"trackBar1";
			this->trackBar1->Size = System::Drawing::Size(581, 45);
			this->trackBar1->TabIndex = 0;
			this->trackBar1->TabStop = false;
			this->trackBar1->Scroll += gcnew System::EventHandler(this, &AllTests::trackBar1_Scroll);
			// 
			// button11
			// 
			this->button11->Location = System::Drawing::Point(301, 420);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(166, 48);
			this->button11->TabIndex = 10;
			this->button11->Text = L"Ответить";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &AllTests::button11_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(312, 106);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(146, 22);
			this->label1->TabIndex = 9;
			this->label1->Text = L"Текст вопроса";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(508, 320);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(166, 48);
			this->button10->TabIndex = 8;
			this->button10->Text = L"button10";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &AllTests::button10_Click);
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(301, 320);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(166, 48);
			this->button9->TabIndex = 7;
			this->button9->Text = L"button9";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &AllTests::button9_Click);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(93, 320);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(166, 48);
			this->button8->TabIndex = 6;
			this->button8->Text = L"button8";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &AllTests::button8_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(508, 266);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(166, 48);
			this->button7->TabIndex = 5;
			this->button7->Text = L"button7";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &AllTests::button7_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(301, 266);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(166, 48);
			this->button6->TabIndex = 4;
			this->button6->Text = L"button6";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &AllTests::button6_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(93, 266);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(166, 48);
			this->button5->TabIndex = 3;
			this->button5->Text = L"button5";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &AllTests::button5_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(508, 161);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(166, 48);
			this->button4->TabIndex = 2;
			this->button4->Text = L"button4";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &AllTests::button4_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(301, 161);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(166, 48);
			this->button3->TabIndex = 1;
			this->button3->Text = L"button3";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &AllTests::button3_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(93, 161);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(166, 48);
			this->button2->TabIndex = 0;
			this->button2->Text = L"button2";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &AllTests::button2_Click);
			// 
			// button12
			// 
			this->button12->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button12->Location = System::Drawing::Point(295, 518);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(195, 31);
			this->button12->TabIndex = 2;
			this->button12->Text = L"Следующий вопрос";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &AllTests::button12_Click);
			// 
			// panel2
			// 
			this->panel2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->panel2->Controls->Add(this->label3);
			this->panel2->Controls->Add(this->button13);
			this->panel2->Controls->Add(this->trackBar2);
			this->panel2->Controls->Add(this->textBox1);
			this->panel2->Controls->Add(this->label2);
			this->panel2->Location = System::Drawing::Point(12, 12);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(760, 500);
			this->panel2->TabIndex = 3;
			this->panel2->VisibleChanged += gcnew System::EventHandler(this, &AllTests::panel2_VisibleChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(11, 302);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(65, 22);
			this->label3->TabIndex = 4;
			this->label3->Text = L"label3";
			// 
			// button13
			// 
			this->button13->Location = System::Drawing::Point(301, 375);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(166, 39);
			this->button13->TabIndex = 3;
			this->button13->Text = L"Ответить";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &AllTests::button13_Click);
			// 
			// trackBar2
			// 
			this->trackBar2->Location = System::Drawing::Point(15, 22);
			this->trackBar2->Maximum = 4;
			this->trackBar2->Name = L"trackBar2";
			this->trackBar2->Size = System::Drawing::Size(720, 45);
			this->trackBar2->TabIndex = 0;
			this->trackBar2->TabStop = false;
			this->trackBar2->Scroll += gcnew System::EventHandler(this, &AllTests::trackBar2_Scroll);
			// 
			// textBox1
			// 
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(15, 300);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(720, 31);
			this->textBox1->TabIndex = 2;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(11, 92);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(146, 22);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Текст вопроса";
			// 
			// panel3
			// 
			this->panel3->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->panel3->Controls->Add(this->label5);
			this->panel3->Controls->Add(this->trackBar3);
			this->panel3->Controls->Add(this->button14);
			this->panel3->Controls->Add(this->groupBox1);
			this->panel3->Controls->Add(this->label4);
			this->panel3->Location = System::Drawing::Point(12, 12);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(760, 500);
			this->panel3->TabIndex = 4;
			this->panel3->VisibleChanged += gcnew System::EventHandler(this, &AllTests::panel3_VisibleChanged);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(33, 237);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(43, 17);
			this->label5->TabIndex = 7;
			this->label5->Text = L"Ответ";
			// 
			// trackBar3
			// 
			this->trackBar3->LargeChange = 0;
			this->trackBar3->Location = System::Drawing::Point(24, 22);
			this->trackBar3->Maximum = 4;
			this->trackBar3->Name = L"trackBar3";
			this->trackBar3->Size = System::Drawing::Size(711, 45);
			this->trackBar3->TabIndex = 0;
			this->trackBar3->Scroll += gcnew System::EventHandler(this, &AllTests::trackBar3_Scroll);
			// 
			// button14
			// 
			this->button14->Location = System::Drawing::Point(283, 421);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(195, 47);
			this->button14->TabIndex = 6;
			this->button14->Text = L"Ответить";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &AllTests::button14_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->radioButton3);
			this->groupBox1->Controls->Add(this->radioButton4);
			this->groupBox1->Controls->Add(this->radioButton1);
			this->groupBox1->Controls->Add(this->radioButton2);
			this->groupBox1->Location = System::Drawing::Point(24, 266);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(711, 146);
			this->groupBox1->TabIndex = 5;
			this->groupBox1->TabStop = false;
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Location = System::Drawing::Point(15, 76);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(109, 21);
			this->radioButton3->TabIndex = 3;
			this->radioButton3->TabStop = true;
			this->radioButton3->Text = L"radioButton3";
			this->radioButton3->UseVisualStyleBackColor = true;
			// 
			// radioButton4
			// 
			this->radioButton4->AutoSize = true;
			this->radioButton4->Location = System::Drawing::Point(15, 103);
			this->radioButton4->Name = L"radioButton4";
			this->radioButton4->Size = System::Drawing::Size(109, 21);
			this->radioButton4->TabIndex = 4;
			this->radioButton4->TabStop = true;
			this->radioButton4->Text = L"radioButton4";
			this->radioButton4->UseVisualStyleBackColor = true;
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(15, 22);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(109, 21);
			this->radioButton1->TabIndex = 1;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"radioButton1";
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(15, 49);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(109, 21);
			this->radioButton2->TabIndex = 2;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"radioButton2";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(93, 74);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(108, 17);
			this->label4->TabIndex = 0;
			this->label4->Text = L"Тип вопросов 3";
			// 
			// panel7
			// 
			this->panel7->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->panel7->Controls->Add(this->button22);
			this->panel7->Controls->Add(this->dataGridView1);
			this->panel7->Location = System::Drawing::Point(12, 12);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(760, 537);
			this->panel7->TabIndex = 8;
			// 
			// button22
			// 
			this->button22->Location = System::Drawing::Point(15, 485);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(197, 38);
			this->button22->TabIndex = 1;
			this->button22->Text = L"Вернуться";
			this->button22->UseVisualStyleBackColor = true;
			this->button22->Click += gcnew System::EventHandler(this, &AllTests::button22_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->BackgroundColor = System::Drawing::SystemColors::Control;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(15, 20);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(720, 189);
			this->dataGridView1->TabIndex = 0;
			// 
			// AllTests
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 17);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(784, 561);
			this->ControlBox = false;
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->panel7);
			this->Controls->Add(this->panel3);
			this->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"AllTests";
			this->StartPosition = System::Windows::Forms::FormStartPosition::Manual;
			this->Text = L"Тестирование";
			this->Load += gcnew System::EventHandler(this, &AllTests::AllTests_Load);
			this->VisibleChanged += gcnew System::EventHandler(this, &AllTests::AllTests_VisibleChanged);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->EndInit();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar2))->EndInit();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar3))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->panel7->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
		int *now_test = new int[2];
		int *ans_kol = new int[1];
		bool *now_qst = new bool[4];
		bool *qst = new bool[5];
		int *n = new int[1];
		string **all_ans = new string*[10];
		string **PTran = new string*[5];
		//PTran 0.1.2 - ответы 3. - текст вопроса 4. - Правильный ответ
	private: System::Void AllTests_Load(System::Object^  sender, System::EventArgs^  e) {
		for (int i = 0; i < 10; i++) {
			all_ans[i] = new string[5];
		}
		n[0] = 0;
		now_test[0] = 0;
		now_test[1] = 0;
		ans_kol[0] = 0;
		AllTest::all_load(Test_Types, PTran, vvod, Rbutton, panel1, panel2, panel3, panel7, dataGridView1, now_qst, button12, ans_kol, now_test, all_ans, n[0]);
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		System::Windows::Forms::DialogResult result = MessageBox::Show("Вы уверены что хотите завершить тест?\r\n(Вы увидите ответы только на полностью пройденные типы тестов!)", "Завершить тест", MessageBoxButtons::YesNo, MessageBoxIcon::Question);
		if (result == System::Windows::Forms::DialogResult::Yes) {
			now_test[0] = 10;
			button1->Visible = false;
			AllTest::test_check(Test_Types, now_test, PTran, vvod, Rbutton, panel1, panel2, panel3, panel7, dataGridView1, all_ans, n[0]);
		}
	}
	//---------------------------------------------------------------- PhraseTranslate -------------------------------------------------------

	private: System::Void trackBar1_Scroll(System::Object^  sender, System::EventArgs^  e) {
		AllTest::trackBar1_changed(label1, PTran, ans_kol, trackBar1, now_qst, button2, button3, button4, button5, button6, button7, button8, button9, button10, button11, button12);
	}
	private: System::Void button11_Click(System::Object^  sender, System::EventArgs^  e) {
		//tb1
		AllTest::button11_Press(PTran, ans_kol, trackBar1, now_qst, button2, button3, button4, button11, button12);
		Achivments::Achivments_get("3", 3, ConvertToString(Login_Text));
		//AchivmentGlobal[3] = 3;
	}
	private: System::Void button12_Click(System::Object^  sender, System::EventArgs^  e) {
		AllTest::button12_Press(Test_Types, now_test, PTran, vvod, Rbutton, panel1, panel2, panel3, panel7, dataGridView1, ans_kol, now_qst, button12, button1, all_ans, n);
	}
	private: System::Void panel1_VisibleChanged(System::Object^  sender, System::EventArgs^  e) {
		AllTest::panel1_Visible(label1, PTran, button2, button3, button4, button5, button6, button7, button8, button9, button10);
	}
	void BlockButton(String^Text, Button^B1, Button^B2, Button^B3) {
		if (now_qst[trackBar1->Value] == false)
		AllTest_Module::PhraseTranslate_Module::FullCheck(Text, B1, B2, B3);
	}
	void BlockButton(Button^B) {
		if (now_qst[trackBar1->Value] == false)
		AllTest_Module::PhraseTranslate_Module::RemoveEl(B);
	}
	private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
		BlockButton(button5->Text, button2, button3, button4);
	}
	private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
		BlockButton(button6->Text, button2, button3, button4);
	}
	private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
		BlockButton(button7->Text, button2, button3, button4);
		Achivments::Achivments_get("3", 1, ConvertToString(Login_Text));
		//AchivmentGlobal[3] = 1;
	}
	private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
		BlockButton(button8->Text, button2, button3, button4);
	}
	private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {
		BlockButton(button9->Text, button2, button3, button4);
	}
	private: System::Void button10_Click(System::Object^  sender, System::EventArgs^  e) {
		BlockButton(button10->Text, button2, button3, button4);
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		BlockButton(button2);
		Achivments::Achivments_get("2", 3, ConvertToString(Login_Text));
		//AchivmentGlobal[2] = 3;
	}
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
		BlockButton(button3);
	}
	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
		BlockButton(button4);
	}
	 //---------------------------------- VVOD -----------------------------------------------
	string **vvod = new string*[3];
	//0 - вопрос 1 - ответ 2 - правильный ответ
	private: System::Void panel2_VisibleChanged(System::Object^  sender, System::EventArgs^  e) {
		AllTest::panel2_Visible(label2, label3, textBox1, vvod, trackBar2->Value);
	}
	private: System::Void trackBar2_Scroll(System::Object^  sender, System::EventArgs^  e) {
		AllTest::trackBar2_changed(label2, label3, textBox1, vvod, ans_kol, trackBar2->Value, now_qst, button12, button13);
	}
	private: System::Void button13_Click(System::Object^  sender, System::EventArgs^  e) {
		AllTest::button13_Press(label3, textBox1, vvod, ans_kol, trackBar2->Value, now_qst, button12, button13);
	}
	//------------------------------------------------- RadioButton ------------------------------------------------
	string **Rbutton = new string*[7];
	//0 - вопрос, 1.2.3.4 - варианты ответа, 5 - ответ, 6 - правильный ответ
	private: System::Void panel3_VisibleChanged(System::Object^  sender, System::EventArgs^  e) {
		AllTest::panel3_Visible(label4, label5, Rbutton, trackBar3->Value, radioButton1, radioButton2, radioButton3, radioButton4);
	}

	private: System::Void button14_Click(System::Object^  sender, System::EventArgs^  e) {
		AllTest::button14_Press(label5, Rbutton, ans_kol, trackBar3->Value, now_qst, radioButton1, radioButton2, radioButton3, radioButton4, button12, button14, groupBox1);
	}
	private: System::Void trackBar3_Scroll(System::Object^  sender, System::EventArgs^  e) {
		//label4->Text = ConvertToString(Rbutton, 0, trackBar3->Value);
		AllTest::trackBar3_change(label4, label5, Rbutton, ans_kol, trackBar3->Value, now_qst, radioButton1, radioButton2, radioButton3, radioButton4, button12, button14, groupBox1);
	}
	//--------------------------------------Выход---------------------------------------------
	private: System::Void button22_Click(System::Object^  sender, System::EventArgs^  e) {
		Owner->Show();
		this->Hide();
		Achivments::Achivments_get("3", 2, ConvertToString(Login_Text));
		//AchivmentGlobal[3] = 2;
	}
	private: System::Void AllTests_VisibleChanged(System::Object^  sender, System::EventArgs^  e) {
		ChangeForm_Module::Resize(this);
	}

};
}
