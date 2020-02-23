#pragma once
#include <cmath>
#include <ctime>
#include <cstdlib>
#include <string>
//#include "VAR.h"

using namespace System;

namespace SpaceForTest {
	using namespace System::Windows::Forms;
	using namespace std;
	public ref class AllTest_Module
	{
	public:
		static ref class PhraseTranslate_Module
		{
		public:
			static  void Make_Buttons(String^Text1, String^Text2, String^Text3, String^Text4, String^Text5, String^Text6, Button^button0, Button^button1, Button^button2, Button^button3, Button^button4, Button^button5);
			static  void AnswerCheck(String^Answer, Button^TB1, Button^TB2, Button^TB3, bool *right_ans, int qst_number);
			static  void Filling(String^Text, Button^B1, Button^B2, Button^B3);
			static  void RemoveEl(Button^B);
			static  void CheckTrackBar(TrackBar^TB, Button^BT, bool *now_qst);
			static  void FullCheck(String^Text, Button^B1, Button^B2, Button^B3);
		};
		static ref class RadioButton_Module
		{
		public:
			static  void MakeButtons(String^Text1, String^Text2, String^Text3, String^Text4, RadioButton^B1, RadioButton^B2, RadioButton^B3, RadioButton^B4);
		};
	};

}
namespace Obj_Space {
	using namespace SpaceForTest;
	String ^ ConvertToString(string Text);
	string ConvertTostring(String ^ Text);
	public ref class AllTest

	{
	public:
		static  void PTran_Qst(string **PTran);
		static  void vvodfun(string **vvod);
		static  void RBLoad(string **Rbutton);
		static  void all_load(bool *Test_Types, string **PTran, string **vvod, string **Rbutton, Panel ^ p1, Panel ^ p2, Panel^p3, Panel ^ p7, DataGridView ^ dataGridView1, bool *now_qst, Button ^button12, int *ans_kol, int *now_test, string **all_ans, int n);
		static  void trackBar1_changed(Label^label1, string **PTran, int *ans_kol, TrackBar ^ trackBar1, bool *now_qst, Button^button2, Button^button3, Button^button4, Button^button5, Button^button6, Button^button7, Button^button8, Button^button9, Button^button10, Button^button11, Button^button12);
		static  void trackBar2_changed(Label^label2, Label^label3, TextBox^textBox1, string **vvod, int *ans_kol, int val, bool *now_qst, Button ^ button12, Button^ button13);
		static  void trackBar3_change(Label ^ label4, Label ^ label5, string **Rbutton, int *ans_kol, int val, bool *now_qst, RadioButton ^ rb1, RadioButton ^ rb2, RadioButton ^ rb3, RadioButton ^ rb4, Button ^ button12, Button ^ button14, GroupBox ^groupBox1);
		static  void button11_Press(string **PTran, int *ans_kol, TrackBar^trackBar1, bool *now_qst, Button^button2, Button^button3, Button^button4, Button^button11, Button ^ button12);
		static  void Answers_add(string **PTran, string **vvod, string **Rbutton, int *now_test, string **all_ans, int *n);
		static  void button12_Press(bool *Test_Types, int *now_test, string **PTran, string **vvod, string **Rbutton, Panel ^ p1, Panel ^ p2, Panel^p3, Panel ^ p7, DataGridView ^ dataGridView1, int *ans_kol, bool *now_qst, Button^button12, Button^button1, string **all_ans, int *n);
		static  void button13_Press(Label ^ label3, TextBox ^ textBox1, string **vvod, int *ans_kol, int val, bool *now_qst, Button^button12, Button^ button13);
		static  void button14_Press(Label ^ label5, string **Rbutton, int *ans_kol, int val, bool *now_qst, RadioButton ^ rb1, RadioButton ^ rb2, RadioButton ^ rb3, RadioButton ^ rb4, Button ^ button12, Button ^ button14, GroupBox ^groupBox1);
		static  void panel1_Visible(Label ^ label1, string **PTran, Button ^ button2, Button ^ button3, Button ^ button4, Button ^ button5, Button ^ button6, Button ^ button7, Button ^ button8, Button ^ button9, Button ^ button10);
		static  void panel2_Visible(Label^label2, Label ^ label3, TextBox^ textBox1, string **vvod, int val);
		static  void panel3_Visible(Label ^ label4, Label^ label5, string **Rbutton, int val, RadioButton ^rb1, RadioButton ^rb2, RadioButton ^rb3, RadioButton ^rb4);
		static  void RB_Unsel(RadioButton^RB1, RadioButton^RB2, RadioButton^RB3, RadioButton^RB4);
		static  String ^ GroupBoxSelected(RadioButton^RB1, RadioButton^RB2, RadioButton^RB3, RadioButton^RB4);
		static  bool Ch(bool *mas);
		static  void P_Visible(Panel^P1, Panel^P2, Panel^P3);
		static  void Panel_Change(Panel^P1, Panel^P2, Panel^P3, Panel^P7, int *now_test);
		static  void test_check(bool *Test_Types, int *now_test, string **PTran, string **vvod, string **Rbutton, Panel ^ p1, Panel ^ p2, Panel^p3, Panel ^ p7, DataGridView ^ dataGridView1, string **all_ans, int n);
		static  void Output_arr(string **mas, int n, int m, DataGridView ^ DGV);
	};
}