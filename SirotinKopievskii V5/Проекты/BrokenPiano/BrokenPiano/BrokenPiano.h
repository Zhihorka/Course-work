#pragma once


using namespace System;

namespace BrokenPiano {
	using namespace Data::OleDb;
	using namespace System::Windows::Forms;
	using namespace std;
	public ref class Achivments
	{
	public:
		static  void Achivments_get(String ^ Ac, int kol, String ^ Login_Text);
		static  int Ac_sel(String ^ number, String ^ login);
	};
	public ref class Login_Module
	{
	public:
		static  void LoginEnter(TextBox^TB1, TextBox^TB2, Form ^ form1, Form ^ form2);
		static  void LoginReg(TextBox^ TB3, TextBox^ TB4, TextBox^ TB5, TextBox^ TB6, TextBox^ TB7, Panel ^ panel1, Panel ^ panel2);
	};
	public ref class ChangeForm_Module
	{
	public:
		static  void Resize(Form^sizeform);
	};

	
}
