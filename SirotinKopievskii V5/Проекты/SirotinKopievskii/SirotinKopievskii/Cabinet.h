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
	/// Сводка для Cabinet
	/// </summary>
	public ref class Cabinet : public System::Windows::Forms::Form
	{
	public:
		Cabinet(void)
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
		~Cabinet()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected:

	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::CheckBox^  checkBox1;
	private: System::Windows::Forms::CheckBox^  checkBox2;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::PictureBox^  pictureBox3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Timer^  CabinetTimer;
	private: System::Windows::Forms::LinkLabel^  linkLabel1;
	private: System::Windows::Forms::PictureBox^  pictureBox4;
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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->CabinetTimer = (gcnew System::Windows::Forms::Timer(this->components));
			this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(171, 80);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(95, 32);
			this->label1->TabIndex = 0;
			this->label1->Text = L"label1";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(34, 80);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(102, 110);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 2;
			this->pictureBox1->TabStop = false;
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->checkBox1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->checkBox1->Location = System::Drawing::Point(70, 22);
			this->checkBox1->Margin = System::Windows::Forms::Padding(2);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(245, 26);
			this->checkBox1->TabIndex = 3;
			this->checkBox1->Text = L"Персональные данные";
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->BackColor = System::Drawing::SystemColors::Control;
			this->checkBox2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->checkBox2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->checkBox2->Location = System::Drawing::Point(418, 25);
			this->checkBox2->Margin = System::Windows::Forms::Padding(2);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(255, 26);
			this->checkBox2->TabIndex = 4;
			this->checkBox2->Text = L"Расписание экзаменов";
			this->checkBox2->UseVisualStyleBackColor = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Location = System::Drawing::Point(56, 19);
			this->pictureBox2->Margin = System::Windows::Forms::Padding(2);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(30, 32);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 5;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Location = System::Drawing::Point(403, 22);
			this->pictureBox3->Margin = System::Windows::Forms::Padding(2);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(26, 28);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox3->TabIndex = 6;
			this->pictureBox3->TabStop = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(29, 261);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(96, 33);
			this->label2->TabIndex = 7;
			this->label2->Text = L"label2";
			this->label2->Visible = false;
			// 
			// CabinetTimer
			// 
			this->CabinetTimer->Enabled = true;
			this->CabinetTimer->Interval = 10;
			this->CabinetTimer->Tick += gcnew System::EventHandler(this, &Cabinet::CabinetTimer_Tick);
			// 
			// linkLabel1
			// 
			this->linkLabel1->AutoSize = true;
			this->linkLabel1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->linkLabel1->LinkColor = System::Drawing::Color::Navy;
			this->linkLabel1->Location = System::Drawing::Point(280, 526);
			this->linkLabel1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->Size = System::Drawing::Size(282, 25);
			this->linkLabel1->TabIndex = 9;
			this->linkLabel1->TabStop = true;
			this->linkLabel1->Text = L"Выйти из учетной записи";
			this->linkLabel1->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &Cabinet::linkLabel1_LinkClicked);
			// 
			// pictureBox4
			// 
			this->pictureBox4->Location = System::Drawing::Point(700, 13);
			this->pictureBox4->Margin = System::Windows::Forms::Padding(2);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(45, 49);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox4->TabIndex = 10;
			this->pictureBox4->TabStop = false;
			this->pictureBox4->Click += gcnew System::EventHandler(this, &Cabinet::pictureBox4_Click);
			// 
			// panel1
			// 
			this->panel1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->panel1->Controls->Add(this->pictureBox4);
			this->panel1->Controls->Add(this->linkLabel1);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->pictureBox3);
			this->panel1->Controls->Add(this->pictureBox2);
			this->panel1->Controls->Add(this->checkBox2);
			this->panel1->Controls->Add(this->checkBox1);
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Location = System::Drawing::Point(0, 1);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(783, 561);
			this->panel1->TabIndex = 11;
			// 
			// Cabinet
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(784, 561);
			this->Controls->Add(this->panel1);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"Cabinet";
			this->StartPosition = System::Windows::Forms::FormStartPosition::Manual;
			this->Text = L"Учётная запись";
			this->Load += gcnew System::EventHandler(this, &Cabinet::Cabinet_Load);
			this->VisibleChanged += gcnew System::EventHandler(this, &Cabinet::Cabinet_VisibleChanged);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
		
			void Select_Name(String ^ &ReturnText)
			{
				auto p = gcnew OleDbConnection("Provider=Microsoft.Jet.OLEDB.4.0;Data Source=" + Application::StartupPath + "\\resource\\Database1.mdb");
				p->Open();
				auto v = gcnew OleDbCommand("SELECT * FROM [MAIN]", p);
				v->CommandText = "SELECT [Имя] FROM [MAIN] WHERE [Login] = '" + ConvertToString(Login_Text) + "'";
				auto s = gcnew OleDbCommand("SELECT * FROM [MAIN]", p);
				s->CommandText = "SELECT [Фамилия] FROM [MAIN] WHERE [Login] = '" + ConvertToString(Login_Text) + "'";
				ReturnText = Convert::ToString(v->ExecuteScalar()) + " " + Convert::ToString(s->ExecuteScalar());
				p->Close();

			}


			void Select_DataPlus(String ^ &ReturnText)
			{
				auto x = gcnew OleDbConnection("Provider=Microsoft.Jet.OLEDB.4.0;Data Source=" + Application::StartupPath + "\\resource\\Database1.mdb");
				x->Open();
				auto y = gcnew OleDbCommand("SELECT * FROM [MAIN]", x);
				y->CommandText = "SELECT [Login] FROM [MAIN] WHERE [Login] = '" + ConvertToString(Login_Text) + "'";
				auto z = gcnew OleDbCommand("SELECT * FROM [MAIN]", x);
				z->CommandText = "SELECT [Группа] FROM [MAIN] WHERE [Login] = '" + ConvertToString(Login_Text) + "'";
				ReturnText = Convert::ToString(y->ExecuteScalar()) + " " + Convert::ToString(z->ExecuteScalar());
				x->Close();

			}

		

			void Checkertron()
			{
				if (checkBox1->Checked == 1 && checkBox2->Checked == 1)
				{
					checkBox1->Checked = 0;
					checkBox2->Checked = 0;
				}
			}
			
			void CheckertronFunction()
			{
				if (checkBox1->Checked == 1)
				{
					checkBox1->BackColor = System::Drawing::SystemColors::ScrollBar;
					checkBox2->BackColor = System::Drawing::SystemColors::Control;
					label2->Visible = 0;
				}

				if (checkBox2->Checked == 1)
				{
					checkBox2->BackColor = System::Drawing::SystemColors::ScrollBar;
					checkBox1->BackColor = System::Drawing::SystemColors::Control;
					int SelectDay = CalendarGlobal[0];
					int SelectMonth = CalendarGlobal[1];
					label2->Visible = 0;
					label2->Text = "Вы сдаете экзамен  " + Convert::ToString(SelectDay) + " . " + Convert::ToString(SelectMonth);
				}
			}

			

	private: System::Void Cabinet_Load(System::Object^  sender, System::EventArgs^  e)
	{



		
		pictureBox1->Image = Image::FromFile(Application::StartupPath + "\\UI\\CabinetPic.png");
		pictureBox2->Image = Image::FromFile(Application::StartupPath + "\\UI\\Info.png");
		pictureBox3->Image = Image::FromFile(Application::StartupPath + "\\UI\\When.png");
		pictureBox4->Image = Image::FromFile(Application::StartupPath + "\\UI\\Arrow.png");
		String ^ Name;
		Select_Name(Name);
		label1->Text = Name;
		String ^ DataPlus;
		Select_DataPlus(DataPlus);
		label2->Text = DataPlus;
	}
	private: System::Void CabinetTimer_Tick(System::Object^  sender, System::EventArgs^  e)
	{
		Checkertron();
		CheckertronFunction();
	}
private: System::Void linkLabel1_LinkClicked(System::Object^  sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^  e) 
{
	std::exit(0);
}
private: System::Void pictureBox4_Click(System::Object^  sender, System::EventArgs^  e)
{
	Owner->Show();
	this->Hide();
}
private: System::Void Cabinet_VisibleChanged(System::Object^  sender, System::EventArgs^  e) {
	ChangeForm_Module::Resize(this);
}
};
}
