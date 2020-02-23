#pragma once
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
	/// Сводка для ProgressForm
	/// </summary>
	public ref class ProgressForm : public System::Windows::Forms::Form
	{
	public:
		ProgressForm(void)
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
		~ProgressForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected:
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button32;
	private: System::Windows::Forms::Button^  button33;
	private: System::Windows::Forms::Button^  button34;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::Button^  button10;
	private: System::Windows::Forms::Button^  button11;
	private: System::Windows::Forms::Button^  button12;
	private: System::Windows::Forms::Button^  button13;
	private: System::Windows::Forms::Button^  button14;
	private: System::Windows::Forms::Button^  button15;
	private: System::Windows::Forms::Button^  button16;
	private: System::Windows::Forms::Button^  button17;
	private: System::Windows::Forms::Button^  button18;
	private: System::Windows::Forms::Button^  button19;
	private: System::Windows::Forms::Button^  button20;
	private: System::Windows::Forms::Button^  button21;
	private: System::Windows::Forms::Button^  button22;
	private: System::Windows::Forms::Button^  button23;
	private: System::Windows::Forms::Button^  button24;
	private: System::Windows::Forms::Button^  button25;
	private: System::Windows::Forms::Button^  button26;
	private: System::Windows::Forms::Button^  button27;
	private: System::Windows::Forms::Button^  button28;
	private: System::Windows::Forms::Button^  button29;
	private: System::Windows::Forms::Button^  button30;
	private: System::Windows::Forms::Button^  button31;
	private: System::Windows::Forms::Button^  button35;
	private: System::Windows::Forms::Button^  button36;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::PictureBox^  pictureBox1;






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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button32 = (gcnew System::Windows::Forms::Button());
			this->button33 = (gcnew System::Windows::Forms::Button());
			this->button34 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->button24 = (gcnew System::Windows::Forms::Button());
			this->button25 = (gcnew System::Windows::Forms::Button());
			this->button26 = (gcnew System::Windows::Forms::Button());
			this->button27 = (gcnew System::Windows::Forms::Button());
			this->button28 = (gcnew System::Windows::Forms::Button());
			this->button29 = (gcnew System::Windows::Forms::Button());
			this->button30 = (gcnew System::Windows::Forms::Button());
			this->button31 = (gcnew System::Windows::Forms::Button());
			this->button35 = (gcnew System::Windows::Forms::Button());
			this->button36 = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 18, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(75, 31);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(350, 37);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Прогресс выполнения";
			// 
			// button1
			// 
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(64, 90);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(107, 98);
			this->button1->TabIndex = 1;
			this->button1->Text = L"1";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// button32
			// 
			this->button32->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button32->Font = (gcnew System::Drawing::Font(L"Century Gothic", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button32->Location = System::Drawing::Point(597, 22);
			this->button32->Margin = System::Windows::Forms::Padding(4);
			this->button32->Name = L"button32";
			this->button32->Size = System::Drawing::Size(240, 54);
			this->button32->TabIndex = 32;
			this->button32->Text = L"Январь";
			this->button32->UseVisualStyleBackColor = true;
			// 
			// button33
			// 
			this->button33->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button33->Font = (gcnew System::Drawing::Font(L"Century Gothic", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button33->Location = System::Drawing::Point(464, 22);
			this->button33->Margin = System::Windows::Forms::Padding(4);
			this->button33->Name = L"button33";
			this->button33->Size = System::Drawing::Size(107, 54);
			this->button33->TabIndex = 33;
			this->button33->Text = L"<";
			this->button33->UseVisualStyleBackColor = true;
			this->button33->Click += gcnew System::EventHandler(this, &ProgressForm::button33_Click);
			// 
			// button34
			// 
			this->button34->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button34->Font = (gcnew System::Drawing::Font(L"Century Gothic", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button34->Location = System::Drawing::Point(864, 22);
			this->button34->Margin = System::Windows::Forms::Padding(4);
			this->button34->Name = L"button34";
			this->button34->Size = System::Drawing::Size(107, 54);
			this->button34->TabIndex = 34;
			this->button34->Text = L">";
			this->button34->UseVisualStyleBackColor = true;
			this->button34->Click += gcnew System::EventHandler(this, &ProgressForm::button34_Click);
			// 
			// button2
			// 
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(197, 90);
			this->button2->Margin = System::Windows::Forms::Padding(4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(107, 98);
			this->button2->TabIndex = 35;
			this->button2->Text = L"2";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(331, 90);
			this->button3->Margin = System::Windows::Forms::Padding(4);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(107, 98);
			this->button3->TabIndex = 36;
			this->button3->Text = L"3";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// button4
			// 
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button4->Location = System::Drawing::Point(464, 90);
			this->button4->Margin = System::Windows::Forms::Padding(4);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(107, 98);
			this->button4->TabIndex = 37;
			this->button4->Text = L"4";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// button5
			// 
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Font = (gcnew System::Drawing::Font(L"Century Gothic", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button5->Location = System::Drawing::Point(597, 90);
			this->button5->Margin = System::Windows::Forms::Padding(4);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(107, 98);
			this->button5->TabIndex = 38;
			this->button5->Text = L"5";
			this->button5->UseVisualStyleBackColor = true;
			// 
			// button6
			// 
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->Font = (gcnew System::Drawing::Font(L"Century Gothic", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button6->Location = System::Drawing::Point(731, 90);
			this->button6->Margin = System::Windows::Forms::Padding(4);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(107, 98);
			this->button6->TabIndex = 39;
			this->button6->Text = L"6";
			this->button6->UseVisualStyleBackColor = true;
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::SystemColors::Control;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button7->Font = (gcnew System::Drawing::Font(L"Century Gothic", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button7->Location = System::Drawing::Point(864, 90);
			this->button7->Margin = System::Windows::Forms::Padding(4);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(107, 98);
			this->button7->TabIndex = 40;
			this->button7->Text = L"7";
			this->button7->UseVisualStyleBackColor = false;
			// 
			// button8
			// 
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button8->Font = (gcnew System::Drawing::Font(L"Century Gothic", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button8->Location = System::Drawing::Point(64, 208);
			this->button8->Margin = System::Windows::Forms::Padding(4);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(107, 98);
			this->button8->TabIndex = 47;
			this->button8->Text = L"8";
			this->button8->UseVisualStyleBackColor = true;
			// 
			// button9
			// 
			this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button9->Font = (gcnew System::Drawing::Font(L"Century Gothic", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button9->Location = System::Drawing::Point(197, 208);
			this->button9->Margin = System::Windows::Forms::Padding(4);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(107, 98);
			this->button9->TabIndex = 46;
			this->button9->Text = L"9";
			this->button9->UseVisualStyleBackColor = true;
			// 
			// button10
			// 
			this->button10->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button10->Font = (gcnew System::Drawing::Font(L"Century Gothic", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button10->Location = System::Drawing::Point(331, 208);
			this->button10->Margin = System::Windows::Forms::Padding(4);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(107, 98);
			this->button10->TabIndex = 45;
			this->button10->Text = L"10";
			this->button10->UseVisualStyleBackColor = true;
			// 
			// button11
			// 
			this->button11->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button11->Font = (gcnew System::Drawing::Font(L"Century Gothic", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button11->Location = System::Drawing::Point(464, 208);
			this->button11->Margin = System::Windows::Forms::Padding(4);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(107, 98);
			this->button11->TabIndex = 44;
			this->button11->Text = L"11";
			this->button11->UseVisualStyleBackColor = true;
			// 
			// button12
			// 
			this->button12->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button12->Font = (gcnew System::Drawing::Font(L"Century Gothic", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button12->Location = System::Drawing::Point(597, 208);
			this->button12->Margin = System::Windows::Forms::Padding(4);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(107, 98);
			this->button12->TabIndex = 43;
			this->button12->Text = L"12";
			this->button12->UseVisualStyleBackColor = true;
			// 
			// button13
			// 
			this->button13->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button13->Font = (gcnew System::Drawing::Font(L"Century Gothic", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button13->Location = System::Drawing::Point(731, 208);
			this->button13->Margin = System::Windows::Forms::Padding(4);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(107, 98);
			this->button13->TabIndex = 42;
			this->button13->Text = L"13";
			this->button13->UseVisualStyleBackColor = true;
			// 
			// button14
			// 
			this->button14->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button14->Font = (gcnew System::Drawing::Font(L"Century Gothic", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button14->Location = System::Drawing::Point(864, 208);
			this->button14->Margin = System::Windows::Forms::Padding(4);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(107, 98);
			this->button14->TabIndex = 41;
			this->button14->Text = L"14";
			this->button14->UseVisualStyleBackColor = true;
			// 
			// button15
			// 
			this->button15->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button15->Font = (gcnew System::Drawing::Font(L"Century Gothic", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button15->Location = System::Drawing::Point(64, 330);
			this->button15->Margin = System::Windows::Forms::Padding(4);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(107, 98);
			this->button15->TabIndex = 54;
			this->button15->Text = L"15";
			this->button15->UseVisualStyleBackColor = true;
			// 
			// button16
			// 
			this->button16->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button16->Font = (gcnew System::Drawing::Font(L"Century Gothic", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button16->Location = System::Drawing::Point(197, 330);
			this->button16->Margin = System::Windows::Forms::Padding(4);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(107, 98);
			this->button16->TabIndex = 53;
			this->button16->Text = L"16";
			this->button16->UseVisualStyleBackColor = true;
			// 
			// button17
			// 
			this->button17->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button17->Font = (gcnew System::Drawing::Font(L"Century Gothic", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button17->Location = System::Drawing::Point(331, 330);
			this->button17->Margin = System::Windows::Forms::Padding(4);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(107, 98);
			this->button17->TabIndex = 52;
			this->button17->Text = L"17";
			this->button17->UseVisualStyleBackColor = true;
			// 
			// button18
			// 
			this->button18->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button18->Font = (gcnew System::Drawing::Font(L"Century Gothic", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button18->Location = System::Drawing::Point(464, 330);
			this->button18->Margin = System::Windows::Forms::Padding(4);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(107, 98);
			this->button18->TabIndex = 51;
			this->button18->Text = L"18";
			this->button18->UseVisualStyleBackColor = true;
			// 
			// button19
			// 
			this->button19->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button19->Font = (gcnew System::Drawing::Font(L"Century Gothic", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button19->Location = System::Drawing::Point(597, 330);
			this->button19->Margin = System::Windows::Forms::Padding(4);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(107, 98);
			this->button19->TabIndex = 50;
			this->button19->Text = L"19";
			this->button19->UseVisualStyleBackColor = true;
			// 
			// button20
			// 
			this->button20->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button20->Font = (gcnew System::Drawing::Font(L"Century Gothic", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button20->Location = System::Drawing::Point(731, 330);
			this->button20->Margin = System::Windows::Forms::Padding(4);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(107, 98);
			this->button20->TabIndex = 49;
			this->button20->Text = L"20";
			this->button20->UseVisualStyleBackColor = true;
			// 
			// button21
			// 
			this->button21->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button21->Font = (gcnew System::Drawing::Font(L"Century Gothic", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button21->Location = System::Drawing::Point(864, 330);
			this->button21->Margin = System::Windows::Forms::Padding(4);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(107, 98);
			this->button21->TabIndex = 48;
			this->button21->Text = L"21";
			this->button21->UseVisualStyleBackColor = true;
			// 
			// button22
			// 
			this->button22->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button22->Font = (gcnew System::Drawing::Font(L"Century Gothic", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button22->Location = System::Drawing::Point(64, 452);
			this->button22->Margin = System::Windows::Forms::Padding(4);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(107, 98);
			this->button22->TabIndex = 61;
			this->button22->Text = L"22";
			this->button22->UseVisualStyleBackColor = true;
			// 
			// button23
			// 
			this->button23->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button23->Font = (gcnew System::Drawing::Font(L"Century Gothic", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button23->Location = System::Drawing::Point(197, 452);
			this->button23->Margin = System::Windows::Forms::Padding(4);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(107, 98);
			this->button23->TabIndex = 60;
			this->button23->Text = L"23";
			this->button23->UseVisualStyleBackColor = true;
			// 
			// button24
			// 
			this->button24->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button24->Font = (gcnew System::Drawing::Font(L"Century Gothic", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button24->Location = System::Drawing::Point(331, 452);
			this->button24->Margin = System::Windows::Forms::Padding(4);
			this->button24->Name = L"button24";
			this->button24->Size = System::Drawing::Size(107, 98);
			this->button24->TabIndex = 59;
			this->button24->Text = L"24";
			this->button24->UseVisualStyleBackColor = true;
			// 
			// button25
			// 
			this->button25->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button25->Font = (gcnew System::Drawing::Font(L"Century Gothic", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button25->Location = System::Drawing::Point(464, 452);
			this->button25->Margin = System::Windows::Forms::Padding(4);
			this->button25->Name = L"button25";
			this->button25->Size = System::Drawing::Size(107, 98);
			this->button25->TabIndex = 58;
			this->button25->Text = L"25";
			this->button25->UseVisualStyleBackColor = true;
			// 
			// button26
			// 
			this->button26->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button26->Font = (gcnew System::Drawing::Font(L"Century Gothic", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button26->Location = System::Drawing::Point(597, 452);
			this->button26->Margin = System::Windows::Forms::Padding(4);
			this->button26->Name = L"button26";
			this->button26->Size = System::Drawing::Size(107, 98);
			this->button26->TabIndex = 57;
			this->button26->Text = L"26";
			this->button26->UseVisualStyleBackColor = true;
			// 
			// button27
			// 
			this->button27->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button27->Font = (gcnew System::Drawing::Font(L"Century Gothic", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button27->Location = System::Drawing::Point(731, 452);
			this->button27->Margin = System::Windows::Forms::Padding(4);
			this->button27->Name = L"button27";
			this->button27->Size = System::Drawing::Size(107, 98);
			this->button27->TabIndex = 56;
			this->button27->Text = L"27";
			this->button27->UseVisualStyleBackColor = true;
			// 
			// button28
			// 
			this->button28->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button28->Font = (gcnew System::Drawing::Font(L"Century Gothic", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button28->Location = System::Drawing::Point(864, 452);
			this->button28->Margin = System::Windows::Forms::Padding(4);
			this->button28->Name = L"button28";
			this->button28->Size = System::Drawing::Size(107, 98);
			this->button28->TabIndex = 55;
			this->button28->Text = L"28";
			this->button28->UseVisualStyleBackColor = true;
			// 
			// button29
			// 
			this->button29->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button29->Font = (gcnew System::Drawing::Font(L"Century Gothic", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button29->Location = System::Drawing::Point(64, 577);
			this->button29->Margin = System::Windows::Forms::Padding(4);
			this->button29->Name = L"button29";
			this->button29->Size = System::Drawing::Size(107, 98);
			this->button29->TabIndex = 68;
			this->button29->Text = L"29";
			this->button29->UseVisualStyleBackColor = true;
			// 
			// button30
			// 
			this->button30->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button30->Font = (gcnew System::Drawing::Font(L"Century Gothic", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button30->Location = System::Drawing::Point(197, 577);
			this->button30->Margin = System::Windows::Forms::Padding(4);
			this->button30->Name = L"button30";
			this->button30->Size = System::Drawing::Size(107, 98);
			this->button30->TabIndex = 67;
			this->button30->Text = L"30";
			this->button30->UseVisualStyleBackColor = true;
			// 
			// button31
			// 
			this->button31->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button31->Font = (gcnew System::Drawing::Font(L"Century Gothic", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button31->Location = System::Drawing::Point(331, 577);
			this->button31->Margin = System::Windows::Forms::Padding(4);
			this->button31->Name = L"button31";
			this->button31->Size = System::Drawing::Size(107, 98);
			this->button31->TabIndex = 66;
			this->button31->Text = L"31";
			this->button31->UseVisualStyleBackColor = true;
			// 
			// button35
			// 
			this->button35->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button35->Font = (gcnew System::Drawing::Font(L"Century Gothic", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button35->Location = System::Drawing::Point(464, 577);
			this->button35->Margin = System::Windows::Forms::Padding(4);
			this->button35->Name = L"button35";
			this->button35->Size = System::Drawing::Size(507, 98);
			this->button35->TabIndex = 69;
			this->button35->Text = L"Достижения";
			this->button35->UseVisualStyleBackColor = true;
			this->button35->Click += gcnew System::EventHandler(this, &ProgressForm::button35_Click);
			// 
			// button36
			// 
			this->button36->Location = System::Drawing::Point(979, 22);
			this->button36->Margin = System::Windows::Forms::Padding(4);
			this->button36->Name = L"button36";
			this->button36->Size = System::Drawing::Size(33, 54);
			this->button36->TabIndex = 70;
			this->button36->Text = L"X";
			this->button36->UseVisualStyleBackColor = true;
			this->button36->Visible = false;
			this->button36->Click += gcnew System::EventHandler(this, &ProgressForm::button36_Click);
			// 
			// panel1
			// 
			this->panel1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Controls->Add(this->button36);
			this->panel1->Controls->Add(this->button35);
			this->panel1->Controls->Add(this->button29);
			this->panel1->Controls->Add(this->button30);
			this->panel1->Controls->Add(this->button31);
			this->panel1->Controls->Add(this->button22);
			this->panel1->Controls->Add(this->button23);
			this->panel1->Controls->Add(this->button24);
			this->panel1->Controls->Add(this->button25);
			this->panel1->Controls->Add(this->button26);
			this->panel1->Controls->Add(this->button27);
			this->panel1->Controls->Add(this->button28);
			this->panel1->Controls->Add(this->button15);
			this->panel1->Controls->Add(this->button16);
			this->panel1->Controls->Add(this->button17);
			this->panel1->Controls->Add(this->button18);
			this->panel1->Controls->Add(this->button19);
			this->panel1->Controls->Add(this->button20);
			this->panel1->Controls->Add(this->button21);
			this->panel1->Controls->Add(this->button8);
			this->panel1->Controls->Add(this->button9);
			this->panel1->Controls->Add(this->button10);
			this->panel1->Controls->Add(this->button11);
			this->panel1->Controls->Add(this->button12);
			this->panel1->Controls->Add(this->button13);
			this->panel1->Controls->Add(this->button14);
			this->panel1->Controls->Add(this->button7);
			this->panel1->Controls->Add(this->button6);
			this->panel1->Controls->Add(this->button5);
			this->panel1->Controls->Add(this->button4);
			this->panel1->Controls->Add(this->button3);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->button34);
			this->panel1->Controls->Add(this->button33);
			this->panel1->Controls->Add(this->button32);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Margin = System::Windows::Forms::Padding(4);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1045, 689);
			this->panel1->TabIndex = 71;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(978, 94);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(61, 89);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 71;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &ProgressForm::pictureBox1_Click);
			// 
			// ProgressForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1045, 690);
			this->ControlBox = false;
			this->Controls->Add(this->panel1);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"ProgressForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::Manual;
			this->Text = L"Календарь";
			this->Load += gcnew System::EventHandler(this, &ProgressForm::ProgressForm_Load);
			this->VisibleChanged += gcnew System::EventHandler(this, &ProgressForm::ProgressForm_VisibleChanged);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
		int Start_DayIndex = CalendarGlobal[0];
		int End_DayIndex = CalendarGlobal[0];
		int Month = 1;
		int ChosenMounth = CalendarGlobal[0];
		void ApplyData(int StartDayIndex, int EndDayIndex, int DayIndex, Button^BT)
		{
		
				if (DayIndex >= StartDayIndex && DayIndex<= EndDayIndex)
				{
					BT->BackColor = System::Drawing::Color::Red;
				}
				
			
		}
		void WhiteOut()
		{
			button1->BackColor = System::Drawing::Color::White;
			button2->BackColor = System::Drawing::Color::White;
			button3->BackColor = System::Drawing::Color::White;
			button4->BackColor = System::Drawing::Color::White;
			button5->BackColor = System::Drawing::Color::White;
			button6->BackColor = System::Drawing::Color::White;
			button7->BackColor = System::Drawing::Color::White;
			button8->BackColor = System::Drawing::Color::White;
			button9->BackColor = System::Drawing::Color::White;
			button10->BackColor = System::Drawing::Color::White;
			button11->BackColor = System::Drawing::Color::White;
			button12->BackColor = System::Drawing::Color::White;
			button13->BackColor = System::Drawing::Color::White;
			button14->BackColor = System::Drawing::Color::White;
			button15->BackColor = System::Drawing::Color::White;
			button16->BackColor = System::Drawing::Color::White;
			button17->BackColor = System::Drawing::Color::White;
			button18->BackColor = System::Drawing::Color::White;
			button19->BackColor = System::Drawing::Color::White;
			button20->BackColor = System::Drawing::Color::White;
			button21->BackColor = System::Drawing::Color::White;
			button22->BackColor = System::Drawing::Color::White;
			button23->BackColor = System::Drawing::Color::White;
			button24->BackColor = System::Drawing::Color::White;
			button25->BackColor = System::Drawing::Color::White;
			button26->BackColor = System::Drawing::Color::White;
			button27->BackColor = System::Drawing::Color::White;
			button28->BackColor = System::Drawing::Color::White;
			button29->BackColor = System::Drawing::Color::White;
			button30->BackColor = System::Drawing::Color::White;
			button31->BackColor = System::Drawing::Color::White;
		}
		void ApplyDataBlock()
		{
			ApplyData(Start_DayIndex, End_DayIndex,  1, button1);
			ApplyData(Start_DayIndex, End_DayIndex, 2, button2);
			ApplyData(Start_DayIndex, End_DayIndex, 3, button3);
			ApplyData(Start_DayIndex, End_DayIndex, 4, button4);
			ApplyData(Start_DayIndex, End_DayIndex, 5, button5);
			ApplyData(Start_DayIndex, End_DayIndex, 6, button6);
			ApplyData(Start_DayIndex, End_DayIndex, 7, button7);
			ApplyData(Start_DayIndex, End_DayIndex, 8, button8);
			ApplyData(Start_DayIndex, End_DayIndex, 9, button9);
			ApplyData(Start_DayIndex, End_DayIndex, 10, button10);
			ApplyData(Start_DayIndex, End_DayIndex, 11, button11);
			ApplyData(Start_DayIndex, End_DayIndex, 12, button12);
			ApplyData(Start_DayIndex, End_DayIndex, 13, button13);
			ApplyData(Start_DayIndex, End_DayIndex, 14, button14);
			ApplyData(Start_DayIndex, End_DayIndex, 15, button15);
			ApplyData(Start_DayIndex, End_DayIndex, 16, button16);
			ApplyData(Start_DayIndex, End_DayIndex, 17, button17);
			ApplyData(Start_DayIndex, End_DayIndex, 18, button18);
			ApplyData(Start_DayIndex, End_DayIndex, 19, button19);
			ApplyData(Start_DayIndex, End_DayIndex, 20, button20);
			ApplyData(Start_DayIndex, End_DayIndex, 21, button21);
			ApplyData(Start_DayIndex, End_DayIndex, 22, button22);
			ApplyData(Start_DayIndex, End_DayIndex, 23, button23);
			ApplyData(Start_DayIndex, End_DayIndex, 24, button24);
			ApplyData(Start_DayIndex, End_DayIndex, 25, button25);
				ApplyData(Start_DayIndex, End_DayIndex, 26, button26);
			ApplyData(Start_DayIndex, End_DayIndex, 27, button27);
			ApplyData(Start_DayIndex, End_DayIndex, 28, button28);
			ApplyData(Start_DayIndex, End_DayIndex, 29, button29);
			ApplyData(Start_DayIndex, End_DayIndex, 30, button30);
			ApplyData(Start_DayIndex, End_DayIndex, 31, button31);
			
		}
		void Month2000()
		{
			button29->BackColor = System::Drawing::SystemColors::Control;
			if (Month == 1)
			{
				button32->Text = "Январь";
				button29->Visible = 1;
				button30->Visible = 1;
				button31->Visible = 1;
				if (ChosenMounth == 1)
				{
					ApplyDataBlock();
				}
			}
			if (Month == 2)
			{
				button32->Text = "Февраль";
				button30->Visible = 0;
				button31->Visible = 0;
				button29->BackColor = System::Drawing::Color::Yellow;
				if (ChosenMounth == 2)
				{
					ApplyDataBlock();
				}
			}
			if (Month == 3)
			{
				button32->Text = "Март";
				button29->Visible = 1;
				button30->Visible = 1;
				button31->Visible = 1;
				if (ChosenMounth == 3)
				{
					ApplyDataBlock();
				}

			}
			if (Month == 4)
			{
				button32->Text = "Апрель";
				button31->Visible = 0;
				if (ChosenMounth == 4)
				{
					ApplyDataBlock();
				}
			}
			if (Month == 5)
			{
				button32->Text = "Май";
				button31->Visible = 1;
				if (ChosenMounth == 5)
				{
					ApplyDataBlock();
				}
			}
			if (Month == 6)
			{
				button32->Text = "Июнь";
				button31->Visible = 0;
				if (ChosenMounth == 6)
				{
					ApplyDataBlock();
				}
			}
			if (Month == 7)
			{
				button32->Text = "Июль";
				button31->Visible = 1;
				if (ChosenMounth == 7)
				{
					ApplyDataBlock();
				}
			}
			if (Month == 8)
			{
				button32->Text = "Август";
				button31->Visible = 1;
				if (ChosenMounth == 8)
				{
					ApplyDataBlock();
				}
			}
			if (Month == 9)
			{
				button32->Text = "Сентябрь";
				button31->Visible = 0;
				if (ChosenMounth == 9)
				{
					ApplyDataBlock();
				}
			}
			if (Month == 10)
			{
				button32->Text = "Октябрь";
				button31->Visible = 1;
				if (ChosenMounth == 10)
				{
					ApplyDataBlock();
				}
			}
			if (Month == 11)
			{
				button32->Text = "Ноябрь";
				button31->Visible = 0;
				if (ChosenMounth == 11)
				{
					ApplyDataBlock();
				}
			}
			if (Month == 12)
			{
				button32->Text = "Декабрь";
				button31->Visible = 1;
				if (ChosenMounth == 12)
				{
					ApplyDataBlock();
				}
			}
		}
	private: System::Void button34_Click(System::Object^  sender, System::EventArgs^  e)
	{
		Achivments::Achivments_get("4", 2, ConvertToString(Login_Text));
		//AchivmentGlobal[4] = 2;
		WhiteOut();


		if (Month == 12)
		{
			Month = 1;
		}
		else
		{
			Month = Month + 1;
		}
		Month2000();
	}
private: System::Void button33_Click(System::Object^  sender, System::EventArgs^  e)
{
	Achivments::Achivments_get("4", 3, ConvertToString(Login_Text));
	//AchivmentGlobal[4] = 3;
	WhiteOut();
	if (Month == 1)
	{
		Month = 12;
	}
	else
	{
		Month = Month - 1;
	}
	Month2000();
}
private: System::Void button35_Click(System::Object^  sender, System::EventArgs^  e) 
{
	AchivmentsForm ^form = gcnew AchivmentsForm();
	form->Owner = this;
	form->Show();
	this->Hide();
}
private: System::Void button36_Click(System::Object^  sender, System::EventArgs^  e) {
	Owner->Show();
	this->Hide();
}
private: System::Void toolStripButton1_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void ProgressForm_Load(System::Object^  sender, System::EventArgs^  e)
{
	Achivments::Achivments_get("4", 1, ConvertToString(Login_Text));
	//AchivmentGlobal[4] = 1;
	pictureBox1->Image = Image::FromFile(Application::StartupPath + "\\UI\\Arrow.png");
}
private: System::Void ProgressForm_VisibleChanged(System::Object^  sender, System::EventArgs^  e) {
	ChangeForm_Module::Resize(this);
}
private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e)
{
	Owner->Show();
	this->Hide();
}
};
}
