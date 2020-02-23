#include "TestsHeaders.h"


namespace SpaceForTest {

	//------------------------------
	void AllTest_Module::PhraseTranslate_Module::Make_Buttons(String ^ Text1, String^Text2, String^Text3, String^Text4, String^Text5, String^Text6, Button^button0, Button^button1, Button^button2, Button^button3, Button^button4, Button^button5) {
		srand(time(NULL));
		String^Sel_Text;
		int *BN = new int[6];
		int t = 0;
		for (int i = 0; i < 6; i++)
			BN[i] = i + 1;
		for (int i = 0; i < 6; i++) {
			int j = (rand() % 5 + 0);
			t = BN[i];
			BN[i] = BN[j];
			BN[j] = t;
		}
		for (int i = 0; i < 6; i++) {
			switch (BN[i])
			{
			case 1:
			{
				Sel_Text = Text1;
				break;
			}
			case 2: {
				Sel_Text = Text2;
				break;
			}
			case 3: {
				Sel_Text = Text3;
				break;
			}
			case 4: {
				Sel_Text = Text4;
				break;
			}
			case 5: {
				Sel_Text = Text5;
				break;
			}
			case 6: {
				Sel_Text = Text6;
				break;
			}
			default:
				break;
			}
			//---------------------------------
			switch (i)
			{
			case 0:
			{
				button0->Text = Sel_Text;
				break;
			}
			case 1:
			{
				button1->Text = Sel_Text;
				break;
			}
			case 2:
			{
				button2->Text = Sel_Text;
				break;
			}
			case 3:
			{
				button3->Text = Sel_Text;
				break;
			}
			case 4:
			{
				button4->Text = Sel_Text;
				break;
			}
			case 5:
			{
				button5->Text = Sel_Text;
				break;
			}

			default:
				break;
			}
		}


	}
	void AllTest_Module::PhraseTranslate_Module::AnswerCheck(String^Answer, Button^TB1, Button^TB2, Button^TB3, bool *right_ans, int qst_number) {
		String ^ FullAnswer = (TB1->Text + " " + TB2->Text + " " + TB3->Text);
		if (FullAnswer == Answer) {
			right_ans[qst_number] = true;
		}
	}
	void AllTest_Module::PhraseTranslate_Module::Filling(String^Text, Button^B1, Button^B2, Button^B3) {
		if (B1->Text == "")
			B1->Text = Text;
		else if (B2->Text == "")
			B2->Text = Text;
		else if (B3->Text == "")
			B3->Text = Text;

	}
	void AllTest_Module::PhraseTranslate_Module::RemoveEl(Button^B) {
		B->Text = "";
	}
	void AllTest_Module::PhraseTranslate_Module::FullCheck(String^Text, Button^B1, Button^B2, Button^B3) {
		if (B1->Text != "" && B2->Text != "" && B3->Text != "")
			MessageBox::Show("Пожалуйста удалите лишний элемент!", "Лишний элемент", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		else
			AllTest_Module::PhraseTranslate_Module::Filling(Text, B1, B2, B3);
	}
	void AllTest_Module::PhraseTranslate_Module::CheckTrackBar(TrackBar^trackBar1, Button^button1, bool *now_qst) {
		if (now_qst[trackBar1->Value] == true) {
			button1->Enabled = false;
			button1->Visible = false;
		}
		else {
			button1->Enabled = true;
			button1->Visible = true;
		}
	}
	void AllTest_Module::RadioButton_Module::MakeButtons(String^Text1, String^Text2, String^Text3, String^Text4, RadioButton^B1, RadioButton^B2, RadioButton^B3, RadioButton^B4) {
		srand(time(NULL));
		String^Sel_Text;
		int *BN = new int[4];
		int t = 0;
		for (int i = 0; i < 4; i++)
			BN[i] = i + 1;
		for (int i = 0; i < 4; i++) {
			int j = (rand() % 3 + 0);
			t = BN[i];
			BN[i] = BN[j];
			BN[j] = t;
		}
		for (int i = 0; i < 4; i++) {
			switch (BN[i])
			{
			case 1:
			{
				Sel_Text = Text1;
				break;
			}
			case 2: {
				Sel_Text = Text2;
				break;
			}
			case 3: {
				Sel_Text = Text3;
				break;
			}
			case 4: {
				Sel_Text = Text4;
				break;
			}
			default:
				break;
			}
			//---------------------------------
			switch (i)
			{
			case 0:
			{
				B1->Text = Sel_Text;
				break;
			}
			case 1:
			{
				B2->Text = Sel_Text;
				break;
			}
			case 2:
			{
				B3->Text = Sel_Text;
				break;
			}
			case 3:
			{
				B4->Text = Sel_Text;
				break;
			}
			default:
				break;
			}
		}
	}

}
namespace Obj_Space {
	String ^ ConvertToString(string Text) {
		String^Text2 = gcnew String(Text.c_str());
		return Text2;
	}
	string ConvertTostring(String ^ Text) {
		using namespace Runtime::InteropServices;
		const char *chars = (const char*)(Marshal::StringToHGlobalAnsi(Text).ToPointer());
		return chars;
	}
	void AllTest::PTran_Qst(string **PTran) {
		for (int i = 0; i < 5; i++)
			PTran[i] = new string[5];
		PTran[3][0] = "Draft regulations of the Academia";
		PTran[3][1] = "The elections of full members";
		PTran[3][2] = "Provide a stimulating ground";
		PTran[3][3] = "Preliminary work  performed";
		PTran[3][4] = "The highest body of the Section";
		PTran[4][0] = "проект положений академии";
		PTran[4][1] = "выборы полноправных членов";
		PTran[4][2] = "обеспечить стимулирующую почву";
		PTran[4][3] = "предварительная работа выполнена";
		PTran[4][4] = "главный орган секции";
	}
	void AllTest::vvodfun(string **vvod) {
		for (int i = 0; i < 3; i++)
			vvod[i] = new string[5];
		vvod[0][0] = "A place of study or training in a special field";
		vvod[0][1] = "A systematically organized body of knowledge on a particular subject";
		vvod[0][2] = "A person who tekes part in something";
		vvod[0][3] = "A meeting where ideas and views on a particular issue can be exchanged";
		vvod[0][4] = "The systematic investigation into and study of materials and sources in order to establish facts";
		vvod[2][0] = "academy";
		vvod[2][1] = "science";
		vvod[2][2] = "participant";
		vvod[2][3] = "conference";
		vvod[2][4] = "research";
	}
	void AllTest::RBLoad(string **Rbutton) {
		for (int i = 0; i < 7; i++)
			Rbutton[i] = new string[5];
		Rbutton[0][0] = "Satellite";
		Rbutton[0][1] = "Curiosities";
		Rbutton[0][2] = "Chairman";
		Rbutton[0][3] = "Headline";
		Rbutton[0][4] = "Committe";
		Rbutton[1][0] = "Сателит";
		Rbutton[1][1] = "Диковина";
		Rbutton[1][2] = "Председатель";
		Rbutton[1][3] = "Заголовок";
		Rbutton[1][4] = "Комиссия";
		Rbutton[2][0] = "Спутник";
		Rbutton[2][1] = "Явление";
		Rbutton[2][2] = "Человек-стул";
		Rbutton[2][3] = "Заключение";
		Rbutton[2][4] = "Свершение";
		Rbutton[3][0] = "Статья";
		Rbutton[3][1] = "Исключение";
		Rbutton[3][2] = "Участник";
		Rbutton[3][3] = "Исключение";
		Rbutton[3][4] = "Коммунист";
		Rbutton[4][0] = "Заглавие";
		Rbutton[4][1] = "Проклятье";
		Rbutton[4][2] = "Коммисия";
		Rbutton[4][3] = "Выполнение";
		Rbutton[4][4] = "Бюро";

		Rbutton[6][0] = "Спутник";
		Rbutton[6][1] = "Диковина";
		Rbutton[6][2] = "Председатель";
		Rbutton[6][3] = "Заголовок";
		Rbutton[6][4] = "Комиссия";

	}
	void AllTest::all_load(bool *Test_Types, string **PTran, string **vvod, string **Rbutton, Panel ^ p1, Panel ^ p2, Panel^p3, Panel ^ p7, DataGridView ^ dataGridView1, bool *now_qst, Button ^button12, int *ans_kol, int *now_test, string **all_ans, int n) {
		
		
		
		for (int j = 0; j < 5; j++) {
			now_qst[j] = false;
		}
		if (ans_kol[0] >= 5)
			button12->Visible = true;
		else
			button12->Visible = false;
		AllTest::test_check(Test_Types, now_test, PTran, vvod, Rbutton, p1, p2, p3, p7, dataGridView1, all_ans, n);
		AllTest::Panel_Change(p1, p2, p3, p7, now_test);
		p7->Visible = false;
	}
	// --------------------------------------------------------- trackBarValue ------------------------------------------------
	void AllTest::trackBar1_changed(Label^label1, string **PTran, int *ans_kol, TrackBar ^ trackBar1, bool *now_qst, Button^button2, Button^button3, Button^button4, Button^button5, Button^button6, Button^button7, Button^button8, Button^button9, Button^button10, Button^button11, Button^button12) {
		AllTest_Module::PhraseTranslate_Module::CheckTrackBar(trackBar1, button11, now_qst);
		switch (trackBar1->Value)
		{
		case 0: {
			label1->Text = ConvertToString(PTran[3][0]);
			AllTest_Module::PhraseTranslate_Module::Make_Buttons("Проект", "Положений", "Учебный", "Правительства", "План", "Академии", button5, button6, button7, button8, button9, button10);
			button2->Text = ConvertToString(PTran[0][0]);
			button3->Text = ConvertToString(PTran[1][0]);
			button4->Text = ConvertToString(PTran[2][0]);
			break;
		case 1: {
			label1->Text = ConvertToString(PTran[3][1]);
			AllTest_Module::PhraseTranslate_Module::Make_Buttons("Электричество", "Полноправных", "Членов", "Полностью", "Выборы", "Подключено", button5, button6, button7, button8, button9, button10);
			button2->Text = ConvertToString(PTran[0][1]);
			button3->Text = ConvertToString(PTran[1][1]);
			button4->Text = ConvertToString(PTran[2][1]);
			break;
		}
		case 2: {
			label1->Text = ConvertToString(PTran[3][2]);
			AllTest_Module::PhraseTranslate_Module::Make_Buttons("Получить", "Обеспечить", "Почву", "Стимулирующую", "Проводящую", "Продолжать", button5, button6, button7, button8, button9, button10);
			button2->Text = ConvertToString(PTran[0][2]);
			button3->Text = ConvertToString(PTran[1][2]);
			button4->Text = ConvertToString(PTran[2][2]);
			break;
		}
		case 3: {
			label1->Text = ConvertToString(PTran[3][3]);
			AllTest_Module::PhraseTranslate_Module::Make_Buttons("Принудительная", "Работа", "Выполнена", "Дополнительная", "Отменяется", "Предварительная", button5, button6, button7, button8, button9, button10);
			button2->Text = ConvertToString(PTran[0][3]);
			button3->Text = ConvertToString(PTran[1][3]);
			button4->Text = ConvertToString(PTran[2][3]);
			break;
		}
		case 4: {
			label1->Text = ConvertToString(PTran[3][4]);
			AllTest_Module::PhraseTranslate_Module::Make_Buttons("Высокий", "Высший", "Главный", "Орган", "Секции", "Начальник", button5, button6, button7, button8, button9, button10);
			button2->Text = ConvertToString(PTran[0][4]);
			button3->Text = ConvertToString(PTran[1][4]);
			button4->Text = ConvertToString(PTran[2][4]);
			break;
		}
		}
		default:
			break;
		}
		if (ans_kol[0] >= 5)
			button12->Visible = true;
		else
			button12->Visible = false;
	}
	void AllTest::trackBar2_changed(Label^label2, Label^label3, TextBox^textBox1, string **vvod, int *ans_kol, int val, bool *now_qst, Button ^ button12, Button^ button13) {
		label2->Text = ConvertToString(vvod[0][val]);
		if (now_qst[val] == false) {
			label3->Visible = false;
			textBox1->Visible = true;
			textBox1->Text = "";
			button13->Visible = true;
		}
		else {
			label3->Visible = true;
			label3->Text = ConvertToString(vvod[1][val]);
			textBox1->Visible = false;
			button13->Visible = false;
		}

		if (ans_kol[0] >= 5)
			button12->Visible = true;
		else
			button12->Visible = false;
	}
	void AllTest::trackBar3_change(Label ^ label4, Label ^ label5, string **Rbutton, int *ans_kol, int val, bool *now_qst, RadioButton ^ rb1, RadioButton ^ rb2, RadioButton ^ rb3, RadioButton ^ rb4, Button ^ button12, Button ^ button14, GroupBox ^groupBox1) {
		AllTest_Module::RadioButton_Module::MakeButtons(ConvertToString(Rbutton[1][val]), ConvertToString(Rbutton[2][val]), ConvertToString(Rbutton[3][val]), ConvertToString(Rbutton[4][val]), rb1, rb2, rb3, rb4);
		label4->Text = ConvertToString(Rbutton[0][val]);
		AllTest::RB_Unsel(rb1, rb2, rb3, rb4);
		if (now_qst[val] == false) {
			label5->Visible = false;
			groupBox1->Visible = true;
			button14->Visible = true;
		}
		else {
			label5->Text = ConvertToString(Rbutton[5][val]);
			label5->Visible = true;
			groupBox1->Visible = false;
			button14->Visible = false;

		}
		if (ans_kol[0] >= 5)
			button12->Visible = true;
		else
			button12->Visible = false;
	}
	//--------------------------------------Click/Press buttons------------------------------
	void AllTest::button11_Press(string **PTran, int *ans_kol, TrackBar^trackBar1, bool *now_qst, Button^button2, Button^button3, Button^button4, Button^button11, Button ^ button12) {
		if (button2->Text != "" & button3->Text != "" & button4->Text != "") {
			PTran[0][trackBar1->Value] = ConvertTostring(button2->Text);
			PTran[1][trackBar1->Value] = ConvertTostring(button3->Text);
			PTran[2][trackBar1->Value] = ConvertTostring(button4->Text);
			now_qst[trackBar1->Value] = true;
			AllTest_Module::PhraseTranslate_Module::CheckTrackBar(trackBar1, button11, now_qst);
			ans_kol[0]++;
			if (ans_kol[0] >= 5)
				button12->Visible = true;
			else
				button12->Visible = false;
		}
		else {
			MessageBox::Show("Пожалуйста, ответьте на вопрос!", "Ответьте на вопрос", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}
	}
	void AllTest::Answers_add(string **PTran, string **vvod, string **Rbutton, int *now_test, string **all_ans, int *n) {
		//int n = 0;
		//PTran 0.1.2 - ответы 3. - текст вопроса 4. - Правильный ответ
		//vvod 0 - вопрос 1 - ответ 2 - правильный ответ
		//Rbutton 0 - вопрос, 1.2.3.4 - варианты ответа, 5 - ответ, 6 - правильный ответ

		//int right_ans = now_test[1];
		if (now_test[0] == 0) {
			for (int i = 0; i < 5; i++) {
				String ^ S = ConvertToString(PTran[0][i]) + " " + ConvertToString(PTran[1][i]) + " " + ConvertToString(PTran[2][i]);
				all_ans[n[0]][i] = ConvertTostring(S->ToLower());
			}
			n[0]++;
			for (int i = 0; i < 5; i++)
				all_ans[n[0]][i] = PTran[4][i];
			for (int i = 0; i < 5; i++) {
				if (all_ans[n[0]][i] == all_ans[n[0] - 1][i])
					now_test[1]++;
			}
			n[0]++;
		}
		if (now_test[0] == 1) {
			for (int i = 0; i < 5; i++)
				all_ans[n[0]][i] = vvod[1][i];
			n[0]++;
			for (int i = 0; i < 5; i++)
				all_ans[n[0]][i] = vvod[2][i];
			for (int i = 0; i < 5; i++) {
				if (all_ans[n[0]][i] == all_ans[n[0] - 1][i])
					now_test[1]++;
			}
			n[0]++;
		}
		if (now_test[0] == 2) {
			for (int i = 0; i < 5; i++)
				all_ans[n[0]][i] = Rbutton[5][i];
			n[0]++;
			for (int i = 0; i < 5; i++)
				all_ans[n[0]][i] = Rbutton[6][i];
			for (int i = 0; i < 5; i++) {
				if (all_ans[n[0]][i] == all_ans[n[0] - 1][i])
					now_test[1]++;
			}
			n[0]++;
		}
		//MessageBox::Show("Количество правильных ответов: " + Convert::ToString(now_test[1]), "Правильные ответы", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
	void AllTest::button12_Press(bool *Test_Types, int *now_test, string **PTran, string **vvod, string **Rbutton, Panel ^ p1, Panel ^ p2, Panel^p3, Panel ^ p7, DataGridView ^ dataGridView1, int *ans_kol, bool *now_qst, Button^button12, Button^button1, string **all_ans, int *n) {
		for (int i = 0; i < sizeof(now_qst) + 1; i++)
			now_qst[i] = false;
		AllTest::Answers_add(PTran, vvod, Rbutton, now_test, all_ans, n);


		now_test[0]++;
		ans_kol[0] = 0;
		AllTest::test_check(Test_Types, now_test, PTran, vvod, Rbutton, p1, p2, p3, p7, dataGridView1, all_ans, n[0]);
		AllTest::Panel_Change(p1, p2, p3, p7, now_test);
		button12->Visible = false;
		if (now_test[0] >= 3) {
			button1->Visible = false;
		}
	}
	void AllTest::button13_Press(Label ^ label3, TextBox ^ textBox1, string **vvod, int *ans_kol, int val, bool *now_qst, Button^button12, Button^ button13) {
		//Text = Textbox1->Text
		//val = tb2->Value
		if (textBox1->Text == "")
			MessageBox::Show("Пожалуйста, ответьте на вопрос!", "Ответьте на вопрос", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		else {
			vvod[1][val] = ConvertTostring((textBox1->Text)->ToLower());
			label3->Text = textBox1->Text;
			textBox1->Visible = false;
			textBox1->Text = "";
			label3->Visible = true;
			now_qst[val] = true;
			ans_kol[0]++;
			if (ans_kol[0] >= 5)
				button12->Visible = true;
			else
				button12->Visible = false;
			button13->Visible = false;
		}
	}
	void AllTest::button14_Press(Label ^ label5, string **Rbutton, int *ans_kol, int val, bool *now_qst, RadioButton ^ rb1, RadioButton ^ rb2, RadioButton ^ rb3, RadioButton ^ rb4, Button ^ button12, Button ^ button14, GroupBox ^groupBox1) {
		// val = trackBar3->Value
		if (AllTest::GroupBoxSelected(rb1, rb2, rb3, rb4) != "") {
			String ^ Sel_ans = AllTest::GroupBoxSelected(rb1, rb2, rb3, rb4);
			Rbutton[5][val] = ConvertTostring(Sel_ans);
			label5->Text = Sel_ans;
			label5->Visible = true;
			groupBox1->Visible = false;
			delete Sel_ans;
			button14->Visible = false;
			now_qst[val] = true;
			ans_kol[0]++;
			if (ans_kol[0] >= 5)
				button12->Visible = true;
			else
				button12->Visible = false;
		}
		else
			MessageBox::Show("Пожалуйста, ответьте на вопрос!", "Ответьте на вопрос", MessageBoxButtons::OK, MessageBoxIcon::Warning);
	}
	//--------------------------------------------panelVisible-------------------------------------------
	void AllTest::panel1_Visible(Label ^ label1, string **PTran, Button ^ button2, Button ^ button3, Button ^ button4, Button ^ button5, Button ^ button6, Button ^ button7, Button ^ button8, Button ^ button9, Button ^ button10) {
		AllTest_Module::PhraseTranslate_Module::Make_Buttons("Проект", "Положений", "Учебный", "Правительства", "План", "Академии", button5, button6, button7, button8, button9, button10);
		button2->Text = "";
		button3->Text = "";
		button4->Text = "";
		AllTest::PTran_Qst(PTran);
		label1->Text = ConvertToString(PTran[3][0]);
	}
	void AllTest::panel2_Visible(Label^label2, Label ^ label3, TextBox^ textBox1, string **vvod, int val) {
		AllTest::vvodfun(vvod);
		label2->Text = ConvertToString(vvod[0][val]);
		label3->Visible = false;
		textBox1->Visible = true;
		textBox1->Text = "";
	}
	void AllTest::panel3_Visible(Label ^ label4, Label^ label5, string **Rbutton, int val, RadioButton ^rb1, RadioButton ^rb2, RadioButton ^rb3, RadioButton ^rb4) {
		AllTest::RBLoad(Rbutton);
		label4->Text = ConvertToString(Rbutton[0][0]);
		label5->Visible = false;
		
		AllTest::RB_Unsel(rb1, rb2, rb3, rb4);
		AllTest_Module::RadioButton_Module::MakeButtons(ConvertToString(Rbutton[1][val]), ConvertToString(Rbutton[2][val]), ConvertToString(Rbutton[3][val]), ConvertToString(Rbutton[4][val]), rb1, rb2, rb3, rb4);
	}

	//------------------------------------------------------------------------------
	void AllTest::RB_Unsel(RadioButton^RB1, RadioButton^RB2, RadioButton^RB3, RadioButton^RB4) {
		RB1->Checked = false;
		RB2->Checked = false;
		RB3->Checked = false;
		RB4->Checked = false;
	}
	String ^ AllTest::GroupBoxSelected(RadioButton^RB1, RadioButton^RB2, RadioButton^RB3, RadioButton^RB4) {
		if (RB1->Checked)
			return RB1->Text;
		else if (RB2->Checked)
			return RB2->Text;
		else if (RB3->Checked)
			return RB3->Text;
		else if (RB4->Checked)
			return RB4->Text;
		return "";
	}

	bool AllTest::Ch(bool *mas) {
		int z = *mas;
		for (int i = 0; i <= 4; i++)
			if (*(++mas) != z) return false;
		return true;
	}
	void AllTest::P_Visible(Panel^P1, Panel^P2, Panel^P3) {
		P1->Visible = true;
		P2->Visible = false;
		P3->Visible = false;
	}
	void AllTest::Panel_Change(Panel^P1, Panel^P2, Panel^P3, Panel^P7, int *now_test) {
		switch (now_test[0])
		{
		case 0: {
			AllTest::P_Visible(P1, P2, P3);
			break; }
		case 1: {
			AllTest::P_Visible(P2, P1, P3);
			break; }
		case 2: {
			AllTest::P_Visible(P3, P2, P1);
			break; }
		default: {
			AllTest::P_Visible(P7, P2, P1);
			P3->Visible = false;
			break;
		}
		}
	}
	//---------------------------------------------------------------------------------------------------------
	
	void AllTest::test_check(bool *Test_Types, int *now_test, string **PTran, string **vvod, string **Rbutton, Panel ^ p1, Panel ^ p2, Panel^p3, Panel ^ p7, DataGridView ^ dataGridView1, string **all_ans, int n) {
		if (now_test[0] == 0) {
			if (Test_Types[0] == false)
				now_test[0]++;
			else return;
		}
		if (now_test[0] == 1) {
			if (Test_Types[1] == false)
				now_test[0]++;
			else return;
		}
		if (now_test[0] == 2) {
			if (Test_Types[2] == false)
				now_test[0]++;
			else return;
		}
		if (now_test[0] >= 3) {
			
			MessageBox::Show("Количество правильных ответов: " + Convert::ToString(now_test[1]), "Правильные ответы", MessageBoxButtons::OK, MessageBoxIcon::Information);
			AllTest::P_Visible(p7, p2, p3);
			p1->Visible = false;
			AllTest::Output_arr(all_ans, n, 5, dataGridView1);
			return;
		}

	}
	void AllTest::Output_arr(string **mas, int n, int m, DataGridView ^ DGV) {
		DGV->ColumnHeadersVisible = false;
		DGV->RowHeadersVisible = false;
		DGV->ColumnCount = m + 1;
		DGV->RowCount = n + 1;
		DGV->RowHeadersWidth = 10;
		DGV->Rows[0]->Cells[0]->Value = "Ответы";
		for (int i = 0; i < m; i++)
			DGV->Rows[0]->Cells[i + 1]->Value = "[" + (i + 1) + "]";
		for (int j = 0; j < n; j++) {
			if (j % 2 == 0)
				DGV->Rows[j + 1]->Cells[0]->Value = "Пользователя";
			else
				DGV->Rows[j + 1]->Cells[0]->Value = "Правильный";
		}
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++)
				DGV->Rows[i + 1]->Cells[j + 1]->Value = ConvertToString(mas[i][j]);
		}
		int width = 0;
		int height = 0;
		for (int s = 0; s < DGV->ColumnCount; s++)
			width += (DGV->Columns[s]->Width);
		if (width > 1300) {
			DGV->Width = 1300;
			height += 17;
		}
		else
			DGV->Width = width + 3;
		for (int z = 0; z < DGV->RowCount; z++)
			height += (DGV->Rows[z]->Height);
		if (height > 400) {
			DGV->Height = 400;
			DGV->Width += 17;
		}
		else
			DGV->Height = height + 3;
		for (int i = 1; i < n; i+=2) {
			for (int j = 1; j < 6; j++) {
				if (Convert::ToString(DGV->Rows[i]->Cells[j]->Value) == Convert::ToString(DGV->Rows[i + 1]->Cells[j]->Value)) {
					
					DGV->Rows[i]->Cells[j]->Style->BackColor = System::Drawing::Color::Green;
					DGV->Rows[i + 1]->Cells[j]->Style->BackColor = System::Drawing::Color::Green;
				}
				else {

					DGV->Rows[i]->Cells[j]->Style->BackColor = System::Drawing::Color::DarkRed;
					DGV->Rows[i + 1]->Cells[j]->Style->BackColor = System::Drawing::Color::DarkRed;
				}
			}
			
		}
	}


}
