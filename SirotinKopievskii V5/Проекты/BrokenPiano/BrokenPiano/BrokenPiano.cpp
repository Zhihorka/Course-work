#include "stdafx.h"
#include "BrokenPiano.h"

namespace BrokenPiano {
	void Achivments::Achivments_get(String ^ Ac, int kol, String ^ Login_Text) {
		auto p = gcnew OleDbConnection("Provider=Microsoft.Jet.OLEDB.4.0;Data Source=" + Application::StartupPath + "\\resource\\Database1.mdb");
		p->Open();
		try {
			auto c = gcnew OleDbCommand("UPDATE [MAIN] SET [Достижение " + Ac + "] = '" + kol + "' WHERE [Login] = '" + Login_Text + "'");
			c->Connection = p;
			c->ExecuteNonQuery();
		}
		catch (System::Runtime::InteropServices::COMException ^ situation) {
			MessageBox::Show(situation->Message);
		}
	}
	int Achivments::Ac_sel(String ^ number, String ^ login) {
		auto p = gcnew OleDbConnection("Provider=Microsoft.Jet.OLEDB.4.0;Data Source=" + Application::StartupPath + "\\resource\\Database1.mdb");
		p->Open();
		auto v = gcnew OleDbCommand("SELECT * FROM [MAIN]", p);
		v->CommandText = "SELECT [Достижение " + number + "] FROM [MAIN] WHERE [Login] = '" + login + "'";
		return Convert::ToInt32(v->ExecuteScalar());
	}
	void Login_Module::LoginEnter(TextBox^TB1, TextBox^TB2, Form ^ form1, Form ^ form2) {
		using namespace System::Data::OleDb;
		if ((TB1->Text == "") || (TB2->Text == ""))
			MessageBox::Show("Пожалуйста, введите логин и пароль!", "Ошибка!", MessageBoxButtons::OK, MessageBoxIcon::Error);
		else {
			auto p = gcnew OleDbConnection("Provider=Microsoft.Jet.OLEDB.4.0;Data Source=" + Application::StartupPath + "\\resource\\Database1.mdb");
			p->Open();
			auto v = gcnew OleDbCommand("SELECT * FROM [MAIN]", p);
			v->CommandText = "SELECT [Password] FROM [MAIN] WHERE [Login] = '" + TB1->Text->ToLower() + "'";
			auto d = gcnew OleDbCommand("SELECT * FROM [MAIN]", p);
			d->CommandText = "SELECT [Имя] FROM [MAIN] WHERE [Login] = '" + TB1->Text->ToLower() + "'";
			String ^ Name = Convert::ToString(d->ExecuteScalar());
			delete d;
			if (Convert::ToString(v->ExecuteScalar()) == TB2->Text) {
				p->Close();
				MessageBox::Show("Добро пожаловать, " + Name + "!", "Добро пожаловать", MessageBoxButtons::OK, MessageBoxIcon::None);
				form1->Owner = form2;
				form1->Show();
				form2->Hide();
			}
			else {
				MessageBox::Show("Неправильный пароль", "Неправильный пароль", MessageBoxButtons::OK, MessageBoxIcon::Stop);
				p->Close();
			}

		}
	}
	void Login_Module::LoginReg(TextBox^ TB3, TextBox^ TB4, TextBox^ TB5, TextBox^ TB6, TextBox^ TB7, Panel ^ panel1, Panel ^ panel2) {
		if ((TB3->Text == "") || (TB4->Text == "") || (TB5->Text == "") || (TB6->Text == "") || (TB7->Text == ""))
			MessageBox::Show("Введите данные!", "Введите данные", MessageBoxButtons::OK, MessageBoxIcon::Error);
		else {
			auto p = gcnew OleDbConnection("Provider=Microsoft.Jet.OLEDB.4.0;Data Source=" + Application::StartupPath + "\\resource\\Database1.mdb");
			p->Open();
			auto check = gcnew OleDbCommand("SELECT * FROM [MAIN]", p);
			check->CommandText = "SELECT [ID] FROM [MAIN] WHERE [Login] = '" + TB3->Text->ToLower() + "'";
			int check_int = Convert::ToInt32(check->ExecuteScalar());
			if (check_int != 0) {
				MessageBox::Show("Пользователь с таким логином уже существует!", "Ошибка!", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
			else {
				auto c = gcnew OleDbCommand("INSERT INTO [MAIN] ([Login], [Password], [Имя], [Фамилия], [Группа], [Достижение 0], [Достижение 1], [Достижение 2], [Достижение 3], [Достижение 4]) VALUES ('" + TB3->Text->ToLower() + "','" + TB4->Text + "','" + TB5->Text + "','" + TB6->Text + "','" + TB7->Text + "', '0', '0', '0', '0', '0')");
				c->Connection = p;
				c->ExecuteNonQuery();
				/*auto v1 = gcnew OleDbCommand("UPDATE [MAIN] SET [Достижение 0] = '0' WHERE [Login] = '" + TB3->Text->ToLower() + "'");
				auto v2 = gcnew OleDbCommand("UPDATE [MAIN] SET [Достижение 1] = '0' WHERE [Login] = '" + TB3->Text->ToLower() + "'");
				auto v3 = gcnew OleDbCommand("UPDATE [MAIN] SET [Достижение 2] = '0' WHERE [Login] = '" + TB3->Text->ToLower() + "'");
				auto v4 = gcnew OleDbCommand("UPDATE [MAIN] SET [Достижение 3] = '0' WHERE [Login] = '" + TB3->Text->ToLower() + "'");
				auto v5 = gcnew OleDbCommand("UPDATE [MAIN] SET [Достижение 4] = '0' WHERE [Login] = '" + TB3->Text->ToLower() + "'");
				v1->Connection = p;
				v1->ExecuteNonQuery();
				v2->Connection = p;
				v2->ExecuteNonQuery();
				v3->Connection = p;
				v3->ExecuteNonQuery();
				v4->Connection = p;
				v4->ExecuteNonQuery();
				v5->Connection = p;
				v5->ExecuteNonQuery();*/
				p->Close();
				panel1->Visible = true;
				TB3->Text = "";
				TB4->Text = "";
				TB5->Text = "";
				TB6->Text = "";
				TB7->Text = "";
				panel2->Visible = false;
			}

		}
	}
	void ChangeForm_Module::Resize(Form^sizeform) {
		auto f = gcnew OleDbConnection("Provider=Microsoft.Jet.OLEDB.4.0;Data Source=" + Application::StartupPath + "\\resource\\Database1.mdb");
		f->Open();
		auto v = gcnew OleDbCommand("SELECT * FROM [SETTINGS]", f);
		v->CommandText = "SELECT [Size] FROM [SETTINGS]";
		String ^ Size = Convert::ToString(v->ExecuteScalar());
		if (Size == "800x600") {
			sizeform->ClientSize = System::Drawing::Size(800, 600);
			sizeform->WindowState = System::Windows::Forms::FormWindowState::Normal;
		}
		else if (Size == "1024x768") {
			sizeform->ClientSize = System::Drawing::Size(1024, 768);
			sizeform->WindowState = System::Windows::Forms::FormWindowState::Normal;
		}
		else if (Size == "1366x768") {
			sizeform->ClientSize = System::Drawing::Size(1366, 768);
			sizeform->WindowState = System::Windows::Forms::FormWindowState::Normal;
		}
		else if (Size == "1920x1080") {
			sizeform->ClientSize = System::Drawing::Size(1920, 1080);
			sizeform->WindowState = System::Windows::Forms::FormWindowState::Normal;
		}
		else {
			sizeform->ClientSize = System::Drawing::Size(800, 600);
			sizeform->WindowState = System::Windows::Forms::FormWindowState::Maximized;
		}

	}
}



