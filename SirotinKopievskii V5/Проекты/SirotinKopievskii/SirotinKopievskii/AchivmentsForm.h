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
	using namespace Data::OleDb;
	using namespace Obj_Space;
	/// <summary>
	/// Сводка для AchivmentsForm
	/// </summary>
	public ref class AchivmentsForm : public System::Windows::Forms::Form
	{
	public:
		AchivmentsForm(void)
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
		~AchivmentsForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:











	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Button^  button1;

	private: System::Windows::Forms::Button^  button2;






	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::PictureBox^  pictureBox3;
	private: System::Windows::Forms::PictureBox^  pictureBox4;
	private: System::Windows::Forms::PictureBox^  pictureBox5;
	private: System::Windows::Forms::PictureBox^  pictureBox6;
	private: System::Windows::Forms::PictureBox^  pictureBox7;
	private: System::Windows::Forms::PictureBox^  pictureBox8;
	private: System::Windows::Forms::PictureBox^  pictureBox9;
	private: System::Windows::Forms::PictureBox^  pictureBox10;

	private: System::Windows::Forms::PictureBox^  pictureBox12;
	private: System::Windows::Forms::PictureBox^  pictureBox13;
	private: System::Windows::Forms::PictureBox^  pictureBox14;
	private: System::Windows::Forms::PictureBox^  pictureBox15;
	private: System::Windows::Forms::PictureBox^  pictureBox16;
	private: System::Windows::Forms::PictureBox^  pictureBox17;
	private: System::Windows::Forms::PictureBox^  pictureBox18;
	private: System::Windows::Forms::PictureBox^  pictureBox19;
	private: System::Windows::Forms::PictureBox^  pictureBox20;
	private: System::Windows::Forms::PictureBox^  pictureBox21;
	private: System::Windows::Forms::PictureBox^  pictureBox22;
	private: System::Windows::Forms::PictureBox^  pictureBox23;
	private: System::Windows::Forms::PictureBox^  pictureBox24;
	private: System::Windows::Forms::PictureBox^  pictureBox25;
	private: System::Windows::Forms::Panel^  panel3;
	private: System::Windows::Forms::Panel^  panel4;
	private: System::Windows::Forms::Panel^  panel5;
	private: System::Windows::Forms::Panel^  panel6;
	private: System::Windows::Forms::Panel^  panel7;
	private: System::Windows::Forms::ToolTip^  toolTip1;
	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::Panel^  panel8;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Panel^  panel9;
	private: System::Windows::Forms::Timer^  ComfortPlus;
	private: System::Windows::Forms::Timer^  timer2;
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
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox9 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox10 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox12 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox13 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox14 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox15 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox16 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox17 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox18 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox19 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox20 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox21 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox22 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox23 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox24 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox25 = (gcnew System::Windows::Forms::PictureBox());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->toolTip1 = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->panel8 = (gcnew System::Windows::Forms::Panel());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->panel9 = (gcnew System::Windows::Forms::Panel());
			this->ComfortPlus = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer2 = (gcnew System::Windows::Forms::Timer(this->components));
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox13))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox14))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox15))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox16))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox17))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox18))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox19))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox20))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox21))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox22))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox23))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox24))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox25))->BeginInit();
			this->panel8->SuspendLayout();
			this->panel9->SuspendLayout();
			this->SuspendLayout();
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox2->Location = System::Drawing::Point(281, 10);
			this->textBox2->Margin = System::Windows::Forms::Padding(4);
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->Size = System::Drawing::Size(495, 49);
			this->textBox2->TabIndex = 0;
			this->textBox2->TabStop = false;
			this->textBox2->Text = L"Январь";
			this->textBox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// button1
			// 
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(175, 10);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(99, 50);
			this->button1->TabIndex = 13;
			this->button1->Text = L"<";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &AchivmentsForm::button1_Click);
			// 
			// button2
			// 
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(785, 10);
			this->button2->Margin = System::Windows::Forms::Padding(4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(99, 50);
			this->button2->TabIndex = 15;
			this->button2->Text = L">";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &AchivmentsForm::button2_Click);
			// 
			// button4
			// 
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button4->Location = System::Drawing::Point(892, 10);
			this->button4->Margin = System::Windows::Forms::Padding(4);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(99, 50);
			this->button4->TabIndex = 22;
			this->button4->Text = L"OK";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &AchivmentsForm::button4_Click);
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(23, 10);
			this->textBox1->Margin = System::Windows::Forms::Padding(4);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(143, 49);
			this->textBox1->TabIndex = 23;
			this->textBox1->Text = L"  Число";
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &AchivmentsForm::textBox1_TextChanged);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(39, 30);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(133, 123);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 24;
			this->pictureBox1->TabStop = false;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::ControlLight;
			this->panel1->Location = System::Drawing::Point(0, 187);
			this->panel1->Margin = System::Windows::Forms::Padding(4);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1057, 5);
			this->panel1->TabIndex = 25;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::SystemColors::ControlLight;
			this->panel2->Location = System::Drawing::Point(39, 596);
			this->panel2->Margin = System::Windows::Forms::Padding(4);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(968, 5);
			this->panel2->TabIndex = 26;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(345, 551);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(376, 30);
			this->label1->TabIndex = 27;
			this->label1->Text = L"Введите дату сдачи экзамена";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(5, 196);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(161, 30);
			this->label2->TabIndex = 28;
			this->label2->Text = L"Достижения";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(215, 73);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(293, 40);
			this->label3->TabIndex = 29;
			this->label3->Text = L"Имя + Фамилия ";
			// 
			// pictureBox2
			// 
			this->pictureBox2->Location = System::Drawing::Point(963, 15);
			this->pictureBox2->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(67, 62);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 30;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Click += gcnew System::EventHandler(this, &AchivmentsForm::pictureBox2_Click);
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox3->Location = System::Drawing::Point(83, 276);
			this->pictureBox3->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(107, 98);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox3->TabIndex = 31;
			this->pictureBox3->TabStop = false;
			// 
			// pictureBox4
			// 
			this->pictureBox4->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox4->Location = System::Drawing::Point(285, 276);
			this->pictureBox4->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(107, 98);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox4->TabIndex = 32;
			this->pictureBox4->TabStop = false;
			// 
			// pictureBox5
			// 
			this->pictureBox5->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox5->Location = System::Drawing::Point(476, 276);
			this->pictureBox5->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(107, 98);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox5->TabIndex = 33;
			this->pictureBox5->TabStop = false;
			// 
			// pictureBox6
			// 
			this->pictureBox6->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox6->Location = System::Drawing::Point(673, 276);
			this->pictureBox6->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(107, 98);
			this->pictureBox6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox6->TabIndex = 34;
			this->pictureBox6->TabStop = false;
			// 
			// pictureBox7
			// 
			this->pictureBox7->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox7->Location = System::Drawing::Point(855, 276);
			this->pictureBox7->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(107, 98);
			this->pictureBox7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox7->TabIndex = 35;
			this->pictureBox7->TabStop = false;
			// 
			// pictureBox8
			// 
			this->pictureBox8->Location = System::Drawing::Point(68, 405);
			this->pictureBox8->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox8->Name = L"pictureBox8";
			this->pictureBox8->Size = System::Drawing::Size(40, 37);
			this->pictureBox8->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox8->TabIndex = 36;
			this->pictureBox8->TabStop = false;
			// 
			// pictureBox9
			// 
			this->pictureBox9->Location = System::Drawing::Point(116, 417);
			this->pictureBox9->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox9->Name = L"pictureBox9";
			this->pictureBox9->Size = System::Drawing::Size(40, 37);
			this->pictureBox9->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox9->TabIndex = 37;
			this->pictureBox9->TabStop = false;
			// 
			// pictureBox10
			// 
			this->pictureBox10->Location = System::Drawing::Point(165, 405);
			this->pictureBox10->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox10->Name = L"pictureBox10";
			this->pictureBox10->Size = System::Drawing::Size(40, 37);
			this->pictureBox10->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox10->TabIndex = 38;
			this->pictureBox10->TabStop = false;
			// 
			// pictureBox12
			// 
			this->pictureBox12->Location = System::Drawing::Point(116, 417);
			this->pictureBox12->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox12->Name = L"pictureBox12";
			this->pictureBox12->Size = System::Drawing::Size(40, 37);
			this->pictureBox12->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox12->TabIndex = 37;
			this->pictureBox12->TabStop = false;
			// 
			// pictureBox13
			// 
			this->pictureBox13->Location = System::Drawing::Point(165, 405);
			this->pictureBox13->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox13->Name = L"pictureBox13";
			this->pictureBox13->Size = System::Drawing::Size(40, 37);
			this->pictureBox13->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox13->TabIndex = 38;
			this->pictureBox13->TabStop = false;
			// 
			// pictureBox14
			// 
			this->pictureBox14->Location = System::Drawing::Point(365, 405);
			this->pictureBox14->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox14->Name = L"pictureBox14";
			this->pictureBox14->Size = System::Drawing::Size(40, 37);
			this->pictureBox14->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox14->TabIndex = 41;
			this->pictureBox14->TabStop = false;
			// 
			// pictureBox15
			// 
			this->pictureBox15->Location = System::Drawing::Point(316, 417);
			this->pictureBox15->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox15->Name = L"pictureBox15";
			this->pictureBox15->Size = System::Drawing::Size(40, 37);
			this->pictureBox15->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox15->TabIndex = 40;
			this->pictureBox15->TabStop = false;
			// 
			// pictureBox16
			// 
			this->pictureBox16->Location = System::Drawing::Point(267, 405);
			this->pictureBox16->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox16->Name = L"pictureBox16";
			this->pictureBox16->Size = System::Drawing::Size(40, 37);
			this->pictureBox16->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox16->TabIndex = 39;
			this->pictureBox16->TabStop = false;
			// 
			// pictureBox17
			// 
			this->pictureBox17->Location = System::Drawing::Point(561, 405);
			this->pictureBox17->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox17->Name = L"pictureBox17";
			this->pictureBox17->Size = System::Drawing::Size(40, 37);
			this->pictureBox17->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox17->TabIndex = 44;
			this->pictureBox17->TabStop = false;
			// 
			// pictureBox18
			// 
			this->pictureBox18->Location = System::Drawing::Point(512, 417);
			this->pictureBox18->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox18->Name = L"pictureBox18";
			this->pictureBox18->Size = System::Drawing::Size(40, 37);
			this->pictureBox18->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox18->TabIndex = 43;
			this->pictureBox18->TabStop = false;
			// 
			// pictureBox19
			// 
			this->pictureBox19->Location = System::Drawing::Point(463, 405);
			this->pictureBox19->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox19->Name = L"pictureBox19";
			this->pictureBox19->Size = System::Drawing::Size(40, 37);
			this->pictureBox19->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox19->TabIndex = 42;
			this->pictureBox19->TabStop = false;
			// 
			// pictureBox20
			// 
			this->pictureBox20->Location = System::Drawing::Point(751, 405);
			this->pictureBox20->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox20->Name = L"pictureBox20";
			this->pictureBox20->Size = System::Drawing::Size(40, 37);
			this->pictureBox20->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox20->TabIndex = 47;
			this->pictureBox20->TabStop = false;
			// 
			// pictureBox21
			// 
			this->pictureBox21->Location = System::Drawing::Point(701, 417);
			this->pictureBox21->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox21->Name = L"pictureBox21";
			this->pictureBox21->Size = System::Drawing::Size(40, 37);
			this->pictureBox21->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox21->TabIndex = 46;
			this->pictureBox21->TabStop = false;
			// 
			// pictureBox22
			// 
			this->pictureBox22->Location = System::Drawing::Point(652, 405);
			this->pictureBox22->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox22->Name = L"pictureBox22";
			this->pictureBox22->Size = System::Drawing::Size(40, 37);
			this->pictureBox22->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox22->TabIndex = 45;
			this->pictureBox22->TabStop = false;
			// 
			// pictureBox23
			// 
			this->pictureBox23->Location = System::Drawing::Point(939, 405);
			this->pictureBox23->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox23->Name = L"pictureBox23";
			this->pictureBox23->Size = System::Drawing::Size(40, 37);
			this->pictureBox23->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox23->TabIndex = 50;
			this->pictureBox23->TabStop = false;
			// 
			// pictureBox24
			// 
			this->pictureBox24->Location = System::Drawing::Point(889, 417);
			this->pictureBox24->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox24->Name = L"pictureBox24";
			this->pictureBox24->Size = System::Drawing::Size(40, 37);
			this->pictureBox24->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox24->TabIndex = 49;
			this->pictureBox24->TabStop = false;
			// 
			// pictureBox25
			// 
			this->pictureBox25->Location = System::Drawing::Point(840, 405);
			this->pictureBox25->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox25->Name = L"pictureBox25";
			this->pictureBox25->Size = System::Drawing::Size(40, 37);
			this->pictureBox25->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox25->TabIndex = 48;
			this->pictureBox25->TabStop = false;
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->panel3->Location = System::Drawing::Point(68, 263);
			this->panel3->Margin = System::Windows::Forms::Padding(4);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(133, 123);
			this->panel3->TabIndex = 51;
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->panel4->Location = System::Drawing::Point(272, 263);
			this->panel4->Margin = System::Windows::Forms::Padding(4);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(133, 123);
			this->panel4->TabIndex = 52;
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->panel5->Location = System::Drawing::Point(463, 263);
			this->panel5->Margin = System::Windows::Forms::Padding(4);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(133, 123);
			this->panel5->TabIndex = 52;
			// 
			// panel6
			// 
			this->panel6->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->panel6->Location = System::Drawing::Point(660, 263);
			this->panel6->Margin = System::Windows::Forms::Padding(4);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(133, 123);
			this->panel6->TabIndex = 52;
			// 
			// panel7
			// 
			this->panel7->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->panel7->Location = System::Drawing::Point(841, 263);
			this->panel7->Margin = System::Windows::Forms::Padding(4);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(133, 123);
			this->panel7->TabIndex = 52;
			// 
			// toolTip1
			// 
			this->toolTip1->Tag = L"pictureBox3";
			this->toolTip1->ToolTipTitle = L"Мям";
			this->toolTip1->Popup += gcnew System::Windows::Forms::PopupEventHandler(this, &AchivmentsForm::toolTip1_Popup);
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Interval = 10;
			this->timer1->Tick += gcnew System::EventHandler(this, &AchivmentsForm::timer1_Tick);
			// 
			// panel8
			// 
			this->panel8->Controls->Add(this->label5);
			this->panel8->Controls->Add(this->textBox1);
			this->panel8->Controls->Add(this->label4);
			this->panel8->Controls->Add(this->textBox2);
			this->panel8->Controls->Add(this->button1);
			this->panel8->Controls->Add(this->button2);
			this->panel8->Controls->Add(this->button4);
			this->panel8->Location = System::Drawing::Point(16, 615);
			this->panel8->Margin = System::Windows::Forms::Padding(4);
			this->panel8->Name = L"panel8";
			this->panel8->Size = System::Drawing::Size(1021, 66);
			this->panel8->TabIndex = 53;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Century Gothic", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(741, 17);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(232, 37);
			this->label5->TabIndex = 55;
			this->label5->Text = L"Изменить дату";
			this->label5->Click += gcnew System::EventHandler(this, &AchivmentsForm::label5_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(16, 17);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(462, 37);
			this->label4->TabIndex = 54;
			this->label4->Text = L"Введите дату сдачи экзамена";
			// 
			// panel9
			// 
			this->panel9->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->panel9->Controls->Add(this->panel8);
			this->panel9->Controls->Add(this->pictureBox23);
			this->panel9->Controls->Add(this->pictureBox24);
			this->panel9->Controls->Add(this->pictureBox25);
			this->panel9->Controls->Add(this->pictureBox20);
			this->panel9->Controls->Add(this->pictureBox21);
			this->panel9->Controls->Add(this->pictureBox22);
			this->panel9->Controls->Add(this->pictureBox17);
			this->panel9->Controls->Add(this->pictureBox18);
			this->panel9->Controls->Add(this->pictureBox19);
			this->panel9->Controls->Add(this->pictureBox14);
			this->panel9->Controls->Add(this->pictureBox15);
			this->panel9->Controls->Add(this->pictureBox16);
			this->panel9->Controls->Add(this->pictureBox13);
			this->panel9->Controls->Add(this->pictureBox10);
			this->panel9->Controls->Add(this->pictureBox12);
			this->panel9->Controls->Add(this->pictureBox9);
			this->panel9->Controls->Add(this->pictureBox8);
			this->panel9->Controls->Add(this->pictureBox7);
			this->panel9->Controls->Add(this->pictureBox6);
			this->panel9->Controls->Add(this->pictureBox5);
			this->panel9->Controls->Add(this->pictureBox4);
			this->panel9->Controls->Add(this->pictureBox3);
			this->panel9->Controls->Add(this->pictureBox2);
			this->panel9->Controls->Add(this->label3);
			this->panel9->Controls->Add(this->label2);
			this->panel9->Controls->Add(this->label1);
			this->panel9->Controls->Add(this->panel2);
			this->panel9->Controls->Add(this->panel1);
			this->panel9->Controls->Add(this->pictureBox1);
			this->panel9->Controls->Add(this->panel3);
			this->panel9->Controls->Add(this->panel4);
			this->panel9->Controls->Add(this->panel5);
			this->panel9->Controls->Add(this->panel6);
			this->panel9->Controls->Add(this->panel7);
			this->panel9->Location = System::Drawing::Point(0, 0);
			this->panel9->Margin = System::Windows::Forms::Padding(4);
			this->panel9->Name = L"panel9";
			this->panel9->Size = System::Drawing::Size(1045, 689);
			this->panel9->TabIndex = 54;
			this->panel9->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &AchivmentsForm::panel9_Paint);
			// 
			// ComfortPlus
			// 
			this->ComfortPlus->Enabled = true;
			this->ComfortPlus->Tick += gcnew System::EventHandler(this, &AchivmentsForm::ComfortPlus_Tick);
			// 
			// AchivmentsForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1045, 690);
			this->ControlBox = false;
			this->Controls->Add(this->panel9);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"AchivmentsForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::Manual;
			this->Text = L"Достижения";
			this->Load += gcnew System::EventHandler(this, &AchivmentsForm::AchivmentsForm_Load);
			this->VisibleChanged += gcnew System::EventHandler(this, &AchivmentsForm::AchivmentsForm_VisibleChanged);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox13))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox14))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox15))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox16))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox17))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox18))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox19))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox20))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox21))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox22))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox23))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox24))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox25))->EndInit();
			this->panel8->ResumeLayout(false);
			this->panel8->PerformLayout();
			this->panel9->ResumeLayout(false);
			this->panel9->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
		int sec;
		int SelectedDay;
		int SelectedMonth;
		int Achivment_1 = Achivments::Ac_sel("0", ConvertToString(Login_Text));
		int Achivment_2 = Achivments::Ac_sel("1", ConvertToString(Login_Text));
		int Achivment_3 = Achivments::Ac_sel("2", ConvertToString(Login_Text));
		int Achivment_4 = Achivments::Ac_sel("3", ConvertToString(Login_Text));
		int Achivment_5 = Achivments::Ac_sel("4", ConvertToString(Login_Text));
		int MonthCount = 1;
		int DayCount = 1;
		void DayChanger()
		{
			
		}
		void MonthChanger()
		{
			if (MonthCount == 1)
				textBox2->Text = "Январь";
			if (MonthCount == 2)
				textBox2->Text = "Февраль";
			if (MonthCount == 3)
				textBox2->Text = "Март";
			if (MonthCount == 4)
				textBox2->Text = "Апрель";
			if (MonthCount == 5)
				textBox2->Text = "Май";
			if (MonthCount == 6)
				textBox2->Text = "Июнь";
			if (MonthCount == 7)
				textBox2->Text = "Июль";
			if (MonthCount == 8)
				textBox2->Text = "Август";
			if (MonthCount == 9)
				textBox2->Text = "Сентябрь";
			if (MonthCount == 10)
				textBox2->Text = "Октябрь";
			if (MonthCount == 11)
				textBox2->Text = "Ноябрь";
			if (MonthCount == 12)
				textBox2->Text = "Декабрь";
			if (MonthCount == 13)
			{
				textBox2->Text = "Январь";
				MonthCount = 1;
			}
			if (MonthCount == 0)
			{
				textBox2->Text = "Декабрь";
				MonthCount = 12;
			}
		}
		void Achivka(PictureBox^PB1, PictureBox^PB2, PictureBox^PB3, int Index)
		{
			if (Index == 1)
			{
			PB1->Image = Image::FromFile(Application::StartupPath + "\\UI\\Star.png");
			}
			if (Index == 2)
			{
				PB1->Image = Image::FromFile(Application::StartupPath + "\\UI\\Star.png");
				PB2->Image = Image::FromFile(Application::StartupPath + "\\UI\\Star.png");
			}
			if (Index == 3)
			{
				PB1->Image = Image::FromFile(Application::StartupPath + "\\UI\\Star.png");
				PB2->Image = Image::FromFile(Application::StartupPath + "\\UI\\Star.png");
				PB3->Image = Image::FromFile(Application::StartupPath + "\\UI\\Star.png");
			}
		}
		//void buttonClickMonth(String^side) {
		//	if (side == "+") {
		//		MonthCount++;
		//		if (MonthCount == 13)
		//			MonthCount = 1;
		//	}
		//	else {
		//		MonthCount--;
		//		if (MonthCount == 0)
		//			MonthCount = 12;
		//	}
		//	MonthChanger();
		//	if (trackBar1->Value == trackBar1->Maximum) {
		//		trackBar1->Value = 1;
		//	}
		//	if ((MonthCount == 4) || (MonthCount == 6) || (MonthCount == 9) || (MonthCount == 11))
		//	{
		//		trackBar1->Maximum = 30;
		//	}
		//	else if(MonthCount == 2)
		//	{
		//		trackBar1->Maximum = 29;
		//	}
		//	else
		//	{
		//		trackBar1->Maximum = 31;
		//	}
		//	//label11->Text = Convert::ToString(trackBar1->Value);
		//}
	private: System::Void label12_Click(System::Object^  sender, System::EventArgs^  e)
	{
		MessageBox::Show("Вы молодец");
	}
//private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e)
//{
//	buttonClickMonth("+");
//}
//private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e)
//{
//	buttonClickMonth("-");
//}
	void Select_Name(String ^ &ReturnText) {
		auto p = gcnew OleDbConnection("Provider=Microsoft.Jet.OLEDB.4.0;Data Source=" + Application::StartupPath + "\\resource\\Database1.mdb");
		p->Open();
		auto v = gcnew OleDbCommand("SELECT * FROM [MAIN]", p);
		v->CommandText = "SELECT [Имя] FROM [MAIN] WHERE [Login] = '" + ConvertToString(Login_Text) + "'";
		auto s = gcnew OleDbCommand("SELECT * FROM [MAIN]", p);
		s->CommandText = "SELECT [Фамилия] FROM [MAIN] WHERE [Login] = '" + ConvertToString(Login_Text) + "'";
		ReturnText = Convert::ToString(v->ExecuteScalar()) + " " + Convert::ToString(s->ExecuteScalar());
		p->Close();

	}
private: System::Void AchivmentsForm_Load(System::Object^  sender, System::EventArgs^  e) {
	String ^ Name;
	Select_Name(Name);
	label3->Text = Name;
	label4->Visible = 0;
	label5->Visible = 0;
	pictureBox3->Image = Image::FromFile(Application::StartupPath + "\\UI\\Pereskaz.png");
	pictureBox4->Image = Image::FromFile(Application::StartupPath + "\\UI\\Writing.png");
	pictureBox5->Image = Image::FromFile(Application::StartupPath + "\\UI\\Theory.png");
	pictureBox6->Image = Image::FromFile(Application::StartupPath + "\\UI\\Testing.png");
	pictureBox7->Image = Image::FromFile(Application::StartupPath + "\\UI\\Calendar.png");

	if (Achivment_1 > 0)
	{
		panel3->BackColor = System::Drawing::Color::MediumOrchid;
	}
	if (Achivment_2 > 0)
	{
		panel4->BackColor = System::Drawing::Color::Red;
	}
	if (Achivment_3 > 0)
	{
		panel5->BackColor = System::Drawing::Color::DarkOrange;
	}
	if (Achivment_4 > 0)
	{
		panel6->BackColor = System::Drawing::Color::DodgerBlue;
	}
	if (Achivment_5 > 0)
	{
		panel7->BackColor = System::Drawing::Color::LimeGreen;
	}

	Achivka(pictureBox8, pictureBox12, pictureBox13, Achivment_1);
	Achivka(pictureBox16, pictureBox15, pictureBox14, Achivment_2);
	Achivka(pictureBox19, pictureBox18, pictureBox17, Achivment_3);
	Achivka(pictureBox22, pictureBox21, pictureBox20, Achivment_4);
	Achivka(pictureBox25, pictureBox24, pictureBox23, Achivment_5);

	pictureBox1->Image = Image::FromFile(Application::StartupPath + "\\UI\\User.png");
	pictureBox2->Image = Image::FromFile(Application::StartupPath + "\\UI\\Arrow.png");
	MonthChanger();
}

private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e)
{
	int Checket = (Convert::ToInt16(textBox1->Text));
	if ((Checket == 1) || (Checket == 2) || (Checket == 3) || (Checket == 4) || (Checket == 5) || (Checket == 6) || (Checket == 7) || (Checket == 8 )|| (Checket == 9) || (Checket == 10)|| (Checket == 11)|| (Checket == 12) || (Checket == 13) || (Checket == 14) || (Checket == 15) || (Checket == 16) || (Checket == 17) || (Checket == 18) || (Checket == 19) || (Checket == 20) || (Checket == 21) || (Checket == 22) || (Checket == 23) || (Checket == 24) || (Checket == 25) || (Checket == 26) || (Checket == 27) || (Checket == 28) || (Checket == 29) || (Checket == 30) || (Checket == 31))
	{
		label4->Visible = 1;
		label5->Visible = 1;
		if (textBox1->Text == "") {
			MessageBox::Show("Пожалуйста, проверьте корректность введенных данных", "Проверьте данные", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			label4->Visible = 0;
			label5->Visible = 0;
		}
		else {
			int TheDay = Convert::ToInt32(textBox1->Text);
			if (TheDay > 31 && MonthCount == 1)
			{
				textBox1->Text = "";
				MessageBox::Show("Пожалуйста, проверьте корректность введенных данных", "Проверьте данные", MessageBoxButtons::OK, MessageBoxIcon::Warning);
				label4->Visible = 0;
				label5->Visible = 0;
			}
			else if (TheDay > 28 && MonthCount == 2)
			{
				textBox1->Text = "";
				label4->Visible = 0;
				label5->Visible = 0;
				MessageBox::Show("Пожалуйста, проверьте корректность введенных данных", "Проверьте данные", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			}
			else if (TheDay > 31 && MonthCount == 3)
			{
				label4->Visible = 0;
				label5->Visible = 0;
				textBox1->Text = "";
				MessageBox::Show("Пожалуйста, проверьте корректность введенных данных", "Проверьте данные", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			}
			else if (TheDay > 30 && MonthCount == 4)
			{
				label4->Visible = 0;
				label5->Visible = 0;
				textBox1->Text = "";
				MessageBox::Show("Пожалуйста, проверьте корректность введенных данных", "Проверьте данные", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			}
			else if (TheDay > 31 && MonthCount == 5)
			{
				label4->Visible = 0;
				label5->Visible = 0;
				textBox1->Text = "";
				MessageBox::Show("Пожалуйста, проверьте корректность введенных данных", "Проверьте данные", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			}
			else if (TheDay > 30 && MonthCount == 6)
			{
				label4->Visible = 0;
				label5->Visible = 0;
				textBox1->Text = "";
				MessageBox::Show("Пожалуйста, проверьте корректность введенных данных", "Проверьте данные", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			}
			else if (TheDay > 31 && MonthCount == 7)
			{
				label4->Visible = 0;
				label5->Visible = 0;
				textBox1->Text = "";
				MessageBox::Show("Пожалуйста, проверьте корректность введенных данных", "Проверьте данные", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			}
			else if (TheDay > 31 && MonthCount == 8)
			{
				label4->Visible = 0;
				label5->Visible = 0;
				textBox1->Text = "";
				MessageBox::Show("Пожалуйста, проверьте корректность введенных данных", "Проверьте данные", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			}
			else if (TheDay > 30 && MonthCount == 9)
			{
				label4->Visible = 0;
				label5->Visible = 0;
				textBox1->Text = "";
				MessageBox::Show("Пожалуйста, проверьте корректность введенных данных", "Проверьте данные", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			}
			else if (TheDay > 31 && MonthCount == 10)
			{
				label4->Visible = 0;
				label5->Visible = 0;
				textBox1->Text = "";
				MessageBox::Show("Пожалуйста, проверьте корректность введенных данных", "Проверьте данные", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			}
			else if (TheDay > 30 && MonthCount == 11)
			{
				label4->Visible = 0;
				label5->Visible = 0;
				textBox1->Text = "";
				MessageBox::Show("Пожалуйста, проверьте корректность введенных данных", "Проверьте данные", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			}
			else if (TheDay > 31 && MonthCount == 21)
			{
				label4->Visible = 0;
				label5->Visible = 0;
				textBox1->Text = "";
				MessageBox::Show("Пожалуйста, проверьте корректность введенных данных", "Проверьте данные", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			}
			else {
				SelectedDay = TheDay;
				SelectedMonth = MonthCount;
				textBox1->Visible = 0;
				button1->Visible = 0;
				textBox2->Visible = 0;
				button2->Visible = 0;
				button4->Visible = 0;
				label4->Text = "Вы сдаете экзамен  " + Convert::ToString(SelectedDay) + " . " + Convert::ToString(SelectedMonth);
				CalendarGlobal[0] = SelectedDay;
				CalendarGlobal[1] = SelectedMonth;

			}
		}
	}
	else
	{
	label4->Visible = 0;
	label5->Visible = 0;
		MessageBox::Show("Пожалуйста, проверьте корректность введенных данных", "Проверьте данные", MessageBoxButtons::OK, MessageBoxIcon::Warning);
	}
}


private: System::Void pictureBox2_Click(System::Object^  sender, System::EventArgs^  e)
{
	Owner->Show();
	this->Hide();
}
private: System::Void toolTip1_Popup(System::Object^  sender, System::Windows::Forms::PopupEventArgs^  e)
{

}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e)
{
	MonthCount = MonthCount - 1;
	MonthChanger();
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e)
{
	MonthCount++;
	MonthChanger();
}
private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) 
{
	
}
private: System::Void label5_Click(System::Object^  sender, System::EventArgs^  e)
{
	textBox1->Visible = 1;
	button1->Visible = 1;
	textBox2->Visible = 1;
	button2->Visible = 1;
	button4->Visible = 1;
	label4->Visible = 0;
	label5->Visible = 0;
}
private: System::Void AchivmentsForm_VisibleChanged(System::Object^  sender, System::EventArgs^  e) {
	ChangeForm_Module::Resize(this);
}
private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	if (textBox1->Text == " ") {
		textBox1->Text = "";
	}
}
private: System::Void panel9_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
}
private: System::Void ComfortPlus_Tick(System::Object^  sender, System::EventArgs^  e) 
{
	sec++;
	if (sec == 30)
	{
		textBox1->Text = "";
		textBox1->BackColor = System::Drawing::Color::White;
	}
}
};
}
