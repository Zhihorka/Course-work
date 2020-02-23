#pragma once
//#include "Resize_H1.h"
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
	/// Сводка для Teor
	/// </summary>
	public ref class Teor : public System::Windows::Forms::Form
	{
	public:
		Teor(void)
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
		~Teor()
		{
			if (components)
			{
				delete components;
			}
		}


	private: System::Windows::Forms::Button^  button1;

	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::ComboBox^  comboBox1;
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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button1->BackColor = System::Drawing::Color::DarkSeaGreen;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Location = System::Drawing::Point(676, 10);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(94, 29);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Назад";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Teor::button1_Click);
			// 
			// textBox2
			// 
			this->textBox2->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox2->Location = System::Drawing::Point(10, 45);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->Size = System::Drawing::Size(760, 19);
			this->textBox2->TabIndex = 0;
			this->textBox2->TabStop = false;
			this->textBox2->Text = L"Название текста";
			this->textBox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox1
			// 
			this->textBox1->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Location = System::Drawing::Point(10, 70);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox1->Size = System::Drawing::Size(760, 479);
			this->textBox1->TabIndex = 0;
			this->textBox1->TabStop = false;
			this->textBox1->Text = L"Выберите текст!";
			// 
			// comboBox1
			// 
			this->comboBox1->BackColor = System::Drawing::Color::DarkSeaGreen;
			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(6) {
				L"ALEXANDER POPOV, THE FIRST INVENTOR OF THE RADIO",
					L"CONFERENCES, SYMPOSIUMS, CONGRESSES", L"ENVIROMENTAL PROBLEMS", L"MOSCOW TECHNICAL UNIVERSITY OF COMMUNICATIONS AND INFORMATICS",
					L"HISTORICAL REVIEW", L"THE RUSSIAN ACADEMY OF SCIENCES"
			});
			this->comboBox1->Location = System::Drawing::Point(10, 10);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(660, 29);
			this->comboBox1->TabIndex = 3;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &Teor::comboBox1_SelectedIndexChanged);
			// 
			// panel1
			// 
			this->panel1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->panel1->Controls->Add(this->comboBox1);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->textBox2);
			this->panel1->Controls->Add(this->textBox1);
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(784, 560);
			this->panel1->TabIndex = 4;
			// 
			// Teor
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 17);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(784, 561);
			this->ControlBox = false;
			this->Controls->Add(this->panel1);
			this->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"Teor";
			this->StartPosition = System::Windows::Forms::FormStartPosition::Manual;
			this->Text = L"Пересказы";
			this->Load += gcnew System::EventHandler(this, &Teor::Teor_Load);
			this->VisibleChanged += gcnew System::EventHandler(this, &Teor::Teor_VisibleChanged);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
		void Teoria(String^&Text1, String^&Text2, String^&Text3, String^&Text4, String^&Text5, String^&Text6) {

			Text2 = " The aim of a conference is to provide a forum in which to evaluate and examine a define phenomenon. Before a conference a preliminary work should be performed. It's necessary to establish an Organizing Committee which determines specific purposes, schedule time and time number of participants tor the conference.\r\n"+
				" The Organizing Committee composes a conference program and sends letters of institution to different scientific institutions.The structure of the conference is outlined by the Committee and is known to the participants.People who are going to take part in the conference should send their abstracts to the Committee beforehand.\r\n" +
				" On the first day a plenary session is held during which the Chairman makes an opening address and repots the basic goals and procedure of the conference.This session includes 3 or 4 lectures by prominent who survey recent developments in their respective areas.Other reports are heard at the session of working group or workshop which are held in the morning and in the afternoon.Each participant is allowed 15 or 20 minutes for the normal presentation at his paper in working group session and 40 minutes for the lecture in the plenary session.Everyone has a chance to participate in the discussion and exchange of the personal experience.\r\n" +
				" Conferences should provide a stimulating ground for the exchange of information and for the generation of new ideas.The materials of the conference a published in scientific institutions, higher educational institutions and libraries in their country and abroad.";
			Text5 = " The Academy of Sciences was founded in St. Petersburg according to Peter the Great's order of January 28, 1724.\r\n"+
				" It was the time when life itself demanded closer contacts between science and practice.The developing industry, transport, trade and economy in the first place, required a thorough study and rapid development of Russia's natural resources.The transformations, initiated by Peter the Great in the first quarter of the 18th century, in the field of industry, agriculture, trade, state management and culture gave rise to the Russian national culture.\r\n" +
				" During his multiple visits abroad Peter the Great acquired the first collections which became later a basis of his famous Cabinet of Curiosities, the forefather of all our museums.Already in 1714, he registered officially the Cabinet of Curiosities and Library.\r\n" +
				" It was already at the close of the 17th century when a thought occurred to Peter the Great about the creation of an academy of sciences in Russia.\r\n" +
				" Later, he formed his original project comprising an academy of sciences proper and two educational establishments, namely, a university and a grammar school.\r\n" +
				" In 1721 the court librarian L.Schumacher was sent on mission abroad to select a scientific staff “for the organization of sciences like in Paris, London, Berlin and other places”.\r\n" +
				" The problem of the foundation of the Academy of Sciences was discussed at the meeting of the Senate on the 22nd of January attended by major state figures.\r\n" +
				" His Imperial majesty ordered that an academy should be established, in which languages will be studied as well as other sciences and the best arts, and books will be translated.\r\n" +
				" The academy was called in a different way during many years : Academy, Academy of Sciences, Academy of Sciences and Arts, Emperial Academy of Sciences, but since December 1991 – the Russian Academy of Sciences.";
			Text6 = " The Russian Academy of sciences is the higher scientific institution of Russian Federation uniting the most outstanding scientists of the country.\r\n" +
				" The Academy conducts research promoting the advancement of all branches of science in Russia.\r\n" +
				" It includes such sections as Physics, and Mathematics, Chemistry(кеместри), Geology and Geography, Biology, Engineering Sciences(, History, Economics, Philosophy and Language) and so on.\r\n" +
				" The Academy consists of the following Institutions: Research institutes, laboratories, observatories, branches of the Academy, libraries, museums.\r\n" +
				" The Russian Academy of Sciences establishes and promotes scientific contacts with scientific academies and other scientific institutions abroad.\r\n" +
				" The Academy trains scientific personnel through the postgraduate courses attached to its institutions and conducts work to advance the qualifications of scientific workers.\r\n" +
				" The Russian Academy of Sciences consist of full members(academicians), corresponding members, and foreign members.\r\n" +
				" The elections of full members, corresponding members, and foreign members of the Academy are held in accordance with the present Charter and the Regulations governing elections of Russian Academy of Sciences subject to apporoval by the Academy's General Meeting.\r\n" +
				" The General Meeting of the Academy defines the basic trends in the Academy's Scientific work.\r\n" +
				" Sessions of the General Meeting of the Academy are convened whenever necessary but at least twice a year.\r\n" +
				" The Presidium of the Academy consists of the Academy's President, Vise - Presidents, Head Scientific Secretary of the Presidium and Presidium members who are elected from among its full members.\r\n" +
				" The Presidium of the academy carries out the decisions of the Academy's activities in between General Meetings.\r\n" +
				" A section of the Russian Academy of Sciences is a scientific and organizational center uniting within the Academy scientists of one or several fields of science.\r\n" +
				" The highest body of the Section of the Academy is the Genera Meeting of the Section.\r\n" +
				" The leading body of the Section between General Meeting is the Section Bureau.\r\n" +
				" The principal research bodies of the Academy are its research institutes.\r\n" +
				" The Academy exchanges publications with scientific institutions, higher institutions of learning, libraries, museums, publishing houses, scientific societies, and government institutions of other countries.";
			Text3 = " The planet Earth is only a small part of the universe, but it's the only place where people can live. Today, our planet is in serious danger. Ozone layer depletion, extinction of animals and plants, air and water pollution, overpopulation are the problems that threaten our life on the Earth. But one of the greatest threats to our planet is global climate change.\r\n" +
				" The natural greenhouse effect keeps the planet 33 ºC warmer than it would otherwise be.Over the last 200 years human activities have resulted in increasing emissions of greenhouse gases and therefore the earth's temperature rising.Scientists have projected that if people continue to alter the composition of the atmosphere, average surface temperatures could rise between 2 and 3 ºC globally over the next 100 years.This rate of climatic change would cause significant damage to ecological systems and economies on a global scale.\r\n" +
				" The only way to solve the problem is to stop burning fossil fuels and to start using clean renewable energy, like wind or solar power.But such conversion to new energy sources is not an easy task.Different companies continue investing money in new oil, coal and gas exploration, despite the climate threat.And although governments have agreed that the problem is serious they are encouraging these companies with favourable tax rates.\r\n" +
				" Every year industrialized countries sign different conventions on reducing carbon dioxide and other emissions, but in the meantime little real action is being taken to address the problem.All over the world people join international organizations, like Greenpeace, WWF and others to make governments face up to their responsibilities and protect our planet's flora and fauna.Nowadays we have the time, the money and even the technology to prevent a disaster.But we should always remember that the longer action is delayed, the more drastic it will need to be.";
			Text4 = " The MTUCI is one of the largest academic-research centers aimed at educating students and retraining professionals in the field of telecommunication, radio engineering and economics.\r\n" + 
				" The history of the University goes back to the Moscow Institute of Electrical Engineering and National Communications1 founded in 1921.\r\n" +
				" In 1992 the institute was transformed into the Moscow Technical University of Communications and Informatics(MTUCI).\r\n" +
				" The teaching staff of the University consists of many professors, assistant professors and lecturers of whom seventy per cent possess scientific degrees of Doctor of Science or Candidate of Science.\r\n" +
				" Among the Russian academic institutions the MTUCI was one of the first to introduce multilevel training providing the probation for Bachelors' and Masters' degrees and Engineers.\r\n" +
				" Many under - and postgraduate students, doctorants, trainees2 and learners both full time and correspondence study at the University.The academic structure of the University comprises : \r\n" +
				" • educational administration, \r\n" +
				" • different faculties, \r\n" +
				" • departments, \r\n" +
				" • laboratories and study - rooms.\r\n" +
				" The educational facilities include : \r\n" +
				" • non - graduate upgrade center, \r\n" +
				" • distance learning center, \r\n" +
				" • computer center, \r\n" +
				" • training centers.\r\n" +
				" The University has two branches : in Rostov - on - the Don and Nizhny Novgorod.\r\n" +
				" Its library contains more than 1,000,000 publications on science and technology.\r\n" +
				" The University organizes annual scientific and technological conferences.The results of researches are published in scientific journals, monographs and collected articles.\r\n" +
				" A distance learning net in Russia has been developed and started to operate under the supervision of the University in collaboration with the largest communication service operators, such as Rostelecom, MGTS and the leading Russian Universities.\r\n" +
				" Moreover, the International distance learning project for the CIS countries has been launched in collaboration with the International Telecommunication Union, the Communications Administration of the CIS countries and their leading higher educational centers.\r\n" +
				" The scientific schools founded by famous scientists, such as Kotelnikov V.A., Kharkevich A.A., Levin G.A., Mints A.L, Kliatskin I.G., Shulejkin M.V., Pistolkors A.A., Aizenberg G.Z., Kataev S.I., Goron I.E., Terentjev B.P., etc., ensure the high potential of research activities at the University.\r\n" +
				" The University participates in a number of federal projects in the field of telecommunication and informatics, projects of the Russian Foundation for Basic Research and the Ministry of Education.\r\n" +
				" Investigations and researches are held in 63 research laboratories(RL) and scientific department groups that are united in the MTUCI research center.\r\n" +
				" Turning out highly qualified staff is provided through defending Doctor degrees and postgraduate courses.\r\n" +
				" My studies at the MTUCI\r\n" +
				" I'm a first year student of the first Technical General Faculty of the MTUCI.I study Fundamental Informatics speciality.Our dean is S.Y.Nekoz.We study 5 days a week and every day we have 3 or 4 couples of lessons.We study such disciplines as Analytical Geometry, Linear Algebra, Informatics, Programming, Physics and so on.After completing a full course of education I'll get a Bachelor's degree.I like studying at the MTUCI because I hope the knowledge I get here will help me find an interesting and well - paid job.";
			Text1 = " Today, when powerful radio stations transmit the latest news all over the globe we realize how great is the name of Alexander Popov, the first inventor of the radio.\r\n" +
				" One hundred years ago electrical engineering was a new science, and Alexander Popov took great interest in it.He made experiments with electric waves.But his work went on under very hard conditions.He had neither special equipment nor money; however he did not give up and managed to achieve results.\r\n" +
				" In 1896 a meeting took place in one of the auditoriums of the Petersburg University.The greatest scientists of the city were present there.Popov made a report and even demonstrated the first radiograms in the world.\r\n" +
				" After this the government gave him permission to make his experiments on board of a small ship.And that was all.\r\n" +
				" At this time an Italian, Marconi, began making the same kind of experiments.He plagiarized Popov's ideas to make money out of them.He left Italy for London, found protection of rich businessmen and the English government, received a patent for his invention, and organized a commercial company.\r\n" +
				" In 1899 Popov could build the first radio station in the world.\r\n" +
				" In 1903 he took part in the work of the first International Conference on the Wireless.Marconi was also present there, and tried to prove that he was the inventor of the radio.But one French scientist protested against this.\r\n" +
				" In 1904 during the Russian - Japanese war the government realized the importance of the radio.Ships could communicate at long distances only by means of the radio.It was ready to supply Popov with all the necessary equipment but as it was wartime it was impossible to do anything.\r\n" +
				" Popov died in 1905. A few years after his death, the Russian Physical Society set up a commission which stated that Popov was the first inventor of the radio.";
				
		}


	private: System::Void Teor_Load(System::Object^  sender, System::EventArgs^  e) {
		Achivments::Achivments_get("0", 1, ConvertToString(Login_Text));
		//AchivmentGlobal[0] = 1;
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		Owner->Show();
		this->Hide();
	}
private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	Achivments::Achivments_get("0", 2, ConvertToString(Login_Text));
	//AchivmentGlobal[0] = 2;
	String ^ TextPopov;
	String ^ TextConf;
	String ^ TextEnvProb;
	String ^ TextMTUCI;
	String ^ TextHR;
	String ^ TextRAS;
	

	Teoria(TextPopov, TextConf, TextEnvProb, TextMTUCI, TextHR, TextRAS);
	textBox2->Text = comboBox1->SelectedText;
	switch (comboBox1->SelectedIndex) {
	case 0:
		textBox1->Text = TextPopov;
		break;
	case 1:
		textBox1->Text = TextConf;
		break;
	case 2:
		textBox1->Text = TextEnvProb;
		break;
	case 3:
		textBox1->Text = TextMTUCI;
		break;
	case 4:
		textBox1->Text = TextHR;
		break;
	case 5:
		textBox1->Text = TextRAS;
		break;
	};
	textBox2->Text = Convert::ToString(comboBox1->SelectedItem);
	//textBox2->Text = comboBox1->SelectedText;
	comboBox1->Select(0, 0);
}
private: System::Void Teor_VisibleChanged(System::Object^  sender, System::EventArgs^  e) {
	ChangeForm_Module::Resize(this);
}
};
}
