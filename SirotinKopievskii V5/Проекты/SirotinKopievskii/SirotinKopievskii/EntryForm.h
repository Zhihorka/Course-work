#pragma once
#include "Start.h"
#include "TitulForm.h"
#include "VAR.h"
namespace SirotinKopievskii {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для EntryForm
	/// </summary>
	public ref class EntryForm : public System::Windows::Forms::Form
	{
	public:
		EntryForm(void)
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
		~EntryForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

	private: System::Windows::Forms::Timer^  EnterTimer;
	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::PictureBox^  pictureBox1;


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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(EntryForm::typeid));
			this->EnterTimer = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			this->EnterTimer->Tick += gcnew System::EventHandler(this, &EntryForm::EnterTimer_Tick_1);
			this->timer1->Enabled = true;
			this->timer1->Interval = 10;
			this->timer1->Tick += gcnew System::EventHandler(this, &EntryForm::timer1_Tick);
			this->panel1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(600, 280);
			this->panel1->TabIndex = 5;
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(16, 84);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(566, 105);
			this->label2->TabIndex = 12;
			this->label2->Text = resources->GetString(L"label2.Text");
			this->label2->Visible = false;
			this->label2->Click += gcnew System::EventHandler(this, &EntryForm::label2_Click);
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->ForeColor = System::Drawing::Color::Black;
			this->label3->Location = System::Drawing::Point(29, 210);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(530, 24);
			this->label3->TabIndex = 11;
			this->label3->Text = L"Производится первичная настройка программы.";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label3->Visible = false;
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(-8, 225);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(589, 116);
			this->label1->TabIndex = 10;
			this->label1->Text = L"Электронное пособие \r\nАнглийский язык\r\n";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->pictureBox1->Location = System::Drawing::Point(270, 200);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(38, 41);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 13;
			this->pictureBox1->TabStop = false;
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(584, 261);
			this->Controls->Add(this->panel1);
			this->Name = L"EntryForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"EntryForm";
			this->Load += gcnew System::EventHandler(this, &EntryForm::EntryForm_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
		int Sec;
		int LB1x = 7;
		int LB1y = 224;
		int WhiteIndex = 240;
		int Index = 240;
		int DotIndex = 0;
		int BlueIndex = 0;
		int BlueIndexBlack = 255;
		void Mover2000(Label^LB, int x, int y)
		{
			LB->Location = System::Drawing::Point(x, y);
		}
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e)
	{

		this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
	}
	private: System::Void EnterTimer_Tick(System::Object^  sender, System::EventArgs^  e)
	{

	}


	private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e)
	{
		DotIndex++;
		if (DotIndex == 30)
		{
			DotIndex = 0;
		}
		Sec++;
		if (Sec > 100)
		{

			if (Index > 0)
			{
				Index = Index - 2;
				label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(Index)), static_cast<System::Int32>(static_cast<System::Byte>(Index)),
					static_cast<System::Int32>(static_cast<System::Byte>(Index)));
			}
		}
		if (DotIndex == 0 && Sec > 100 && Sec < 200)
			label3->Text = "Производится первичная настройка программы.";
		if (DotIndex == 10 && Sec > 100 && Sec < 200)
			label3->Text = "Производится первичная настройка программы..";
		if (DotIndex == 20 && Sec > 100 && Sec < 200)
			label3->Text = "Производится первичная настройка программы...";

		if (Sec == 200)
		{
			Mover2000(label3, 120, 210);
			label3->Text = "База данных успешно создана";
		}
		if (Sec == 250)
		{
			Mover2000(label3, 70, 210);
			label3->Text = "Структура базы данных успешно создана";
		}
		if (Sec == 300)
		{
			Mover2000(label3, 170, 210);
			label3->Text = "Спасибо за ожидание";
		}
		if (Sec == 850)
		{
			pictureBox1->Image = Image::FromFile(Application::StartupPath + "\\UI\\Done.png");
		}


		if (Sec > 310 && Sec < 560)
		{
			BlueIndex = BlueIndex - 1;
			panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(BlueIndex)), static_cast<System::Int32>(static_cast<System::Byte>(BlueIndex)),
				static_cast<System::Int32>(static_cast<System::Byte>(BlueIndex)));


		}
		if (Sec > 570 && Sec < 820)
		{
			label1->Visible = 0;
			label3->Visible = 0;
			label2->Visible = 1;
			BlueIndexBlack = BlueIndexBlack + 1;
			panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(BlueIndexBlack)), static_cast<System::Int32>(static_cast<System::Byte>(BlueIndexBlack)),
				static_cast<System::Int32>(static_cast<System::Byte>(BlueIndexBlack)));
		}
		if (Sec >= 900)
		{
			timer1->Enabled = false;
			//-----------------------------------
			String^Path = Application::StartupPath + "\\resource\\DataBase1.mdb";
			if (!IO::File::Exists(Path)) {
				//Создание БД
				//MessageBox::Show("Пожалуйста, подождите. Производится первичная настройка программы.");
				ADOX::Catalog ^K = gcnew ADOX::CatalogClass();
				try
				{
					K->Create("Provider=Microsoft.Jet.OLEDB.4.0;Data Source=" + Application::StartupPath + "\\resource\\Database1.mdb");
					//MessageBox::Show("База данных успешно создана", "", MessageBoxButtons::OK, MessageBoxIcon::Information);
				}
				catch (System::Runtime::InteropServices::COMException ^ situation) {
					bool ready = true;
					MessageBox::Show(situation->Message);
				}
				finally
				{
					K = nullptr;
				}
					//Создание таблиц БД
				auto p = gcnew OleDbConnection("Provider=Microsoft.Jet.OLEDB.4.0;Data Source=" + Application::StartupPath + "\\resource\\Database1.mdb");
				p->Open();
				auto c = gcnew OleDbCommand("CREATE TABLE [MAIN] ([ID] counter, [Login] String, [Password] String, [Имя] String, [Фамилия] String, [Группа] String, [Достижение 0] String, [Достижение 1] String, [Достижение 2] String, [Достижение 3] String, [Достижение 4] String)", p);
				auto n = gcnew OleDbCommand("CREATE TABLE [SETTINGS] ([Size] String)", p);
				try
				{
					n->ExecuteNonQuery();
					c->ExecuteNonQuery();
					//MessageBox::Show("Структура баз данных успешно создана");

				}
				catch (System::Runtime::InteropServices::COMException ^ situation) {
					MessageBox::Show(situation->Message);
				}
				p->Close();
				//MessageBox::Show("Спасибо за ожидание!");
			}
			//else
				//MessageBox::Show("Всё в порядке, можете начинать работу");

			//-----------------------------------
			auto f = gcnew OleDbConnection("Provider=Microsoft.Jet.OLEDB.4.0;Data Source=" + Application::StartupPath + "\\resource\\Database1.mdb");
			f->Open();
			auto v = gcnew OleDbCommand("SELECT * FROM [SETTINGS]", f);
			v->CommandText = "SELECT [Size] FROM [SETTINGS]";
			if (Convert::ToString(v->ExecuteScalar()) == "") {
				f->Close();
				Start ^form = gcnew Start();
				form->Owner = this;
				form->Show();
				this->Hide();
			}
			else {
				f->Close();
				Login ^form = gcnew Login();
				form->Owner = this;
				form->Show();
				this->Hide();
			}
		}
		if (Sec == 150)
		{
			label3->Visible = 1;
		}
		if (LB1y > 70)
		{
			LB1y = LB1y - 2;
		}
		if (WhiteIndex > 0)
		{
			WhiteIndex = WhiteIndex - 2;
		}
		Mover2000(label1, LB1x, LB1y);
		label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(WhiteIndex)), static_cast<System::Int32>(static_cast<System::Byte>(WhiteIndex)),
			static_cast<System::Int32>(static_cast<System::Byte>(WhiteIndex)));

	}
	private: System::Void EntryForm_Load(System::Object^  sender, System::EventArgs^  e)
	{
		this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
	}
	private: System::Void EnterTimer_Tick_1(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	};
}
