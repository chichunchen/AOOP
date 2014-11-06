

#include "commodity.h"
#include "food.h"
#include "micro_food.h"
#include "beverage.h"
#include "micro_beverage.h"
#pragma once

namespace MYSQL_Example {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;                 //---------------------------

	/// <summary>
	/// Form1 的摘要
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: 在此加入建構函式程式碼
			//
		}

	protected:
		/// <summary>
		/// 清除任何使用中的資源。
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ListBox^  listBox1;
	protected: 
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TabControl^  tabControl1;
	private: System::Windows::Forms::TabPage^  tabPage2;
	private: System::Windows::Forms::TabPage^  tabPage1;





	private: System::Windows::Forms::SplitContainer^  splitContainer1;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::PictureBox^  pictureBox4;
	private: System::Windows::Forms::PictureBox^  pictureBox3;
	private: System::Windows::Forms::TextBox^  textBox023;
	private: System::Windows::Forms::TextBox^  textBox022;
	private: System::Windows::Forms::TextBox^  textBox021;
	private: System::Windows::Forms::TextBox^  textBox020;
	private: System::Windows::Forms::TextBox^  textBox019;
	private: System::Windows::Forms::TextBox^  textBox018;
	private: System::Windows::Forms::TextBox^  textBox017;
	private: System::Windows::Forms::TextBox^  textBox016;
	private: System::Windows::Forms::TextBox^  textBox015;
	private: System::Windows::Forms::TextBox^  textBox014;
	private: System::Windows::Forms::TextBox^  textBox013;
	private: System::Windows::Forms::TextBox^  textBox012;

	private: System::Windows::Forms::TextBox^  textBox011;

	private: System::Windows::Forms::TextBox^  textBox010;

	private: System::Windows::Forms::TextBox^  textBox09;
	private: System::Windows::Forms::TextBox^  textBox08;
	private: System::Windows::Forms::TextBox^  textBox07;
	private: System::Windows::Forms::TextBox^  textBox06;
	private: System::Windows::Forms::TextBox^  textBox05;
	private: System::Windows::Forms::TextBox^  textBox04;
	private: System::Windows::Forms::TextBox^  textBox03;
	private: System::Windows::Forms::TextBox^  textBox02;
	private: System::Windows::Forms::TextBox^  textBox01;
	private: System::Windows::Forms::TextBox^  textBox040;
	private: System::Windows::Forms::TextBox^  textBox039;
	private: System::Windows::Forms::TextBox^  textBox038;
	private: System::Windows::Forms::TextBox^  textBox037;
	private: System::Windows::Forms::TextBox^  textBox036;
	private: System::Windows::Forms::TextBox^  textBox035;
	private: System::Windows::Forms::TextBox^  textBox034;
	private: System::Windows::Forms::TextBox^  textBox033;
	private: System::Windows::Forms::TextBox^  textBox032;
	private: System::Windows::Forms::TextBox^  textBox031;
	private: System::Windows::Forms::TextBox^  textBox030;
	private: System::Windows::Forms::TextBox^  textBox029;
	private: System::Windows::Forms::TextBox^  textBox028;
	private: System::Windows::Forms::TextBox^  textBox027;
	private: System::Windows::Forms::TextBox^  textBox026;
	private: System::Windows::Forms::TextBox^  textBox025;
	private: System::Windows::Forms::TextBox^  textBox024;

	private: System::Windows::Forms::ListBox^  listBox3;
	private: System::Windows::Forms::ListBox^  listBox4;
	private: System::Windows::Forms::TabPage^  tabPage3;
	private: System::Windows::Forms::ListBox^  listBox2;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::TextBox^  textBox2;

	private:
		/// <summary>
		/// 設計工具所需的變數。
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// 此為設計工具支援所需的方法 - 請勿使用程式碼編輯器
		/// 修改這個方法的內容。
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->textBox023 = (gcnew System::Windows::Forms::TextBox());
			this->textBox022 = (gcnew System::Windows::Forms::TextBox());
			this->textBox021 = (gcnew System::Windows::Forms::TextBox());
			this->textBox020 = (gcnew System::Windows::Forms::TextBox());
			this->textBox019 = (gcnew System::Windows::Forms::TextBox());
			this->textBox018 = (gcnew System::Windows::Forms::TextBox());
			this->textBox017 = (gcnew System::Windows::Forms::TextBox());
			this->textBox016 = (gcnew System::Windows::Forms::TextBox());
			this->textBox015 = (gcnew System::Windows::Forms::TextBox());
			this->textBox014 = (gcnew System::Windows::Forms::TextBox());
			this->textBox013 = (gcnew System::Windows::Forms::TextBox());
			this->textBox012 = (gcnew System::Windows::Forms::TextBox());
			this->textBox011 = (gcnew System::Windows::Forms::TextBox());
			this->textBox010 = (gcnew System::Windows::Forms::TextBox());
			this->textBox09 = (gcnew System::Windows::Forms::TextBox());
			this->textBox08 = (gcnew System::Windows::Forms::TextBox());
			this->textBox07 = (gcnew System::Windows::Forms::TextBox());
			this->textBox06 = (gcnew System::Windows::Forms::TextBox());
			this->textBox05 = (gcnew System::Windows::Forms::TextBox());
			this->textBox04 = (gcnew System::Windows::Forms::TextBox());
			this->textBox03 = (gcnew System::Windows::Forms::TextBox());
			this->textBox02 = (gcnew System::Windows::Forms::TextBox());
			this->textBox01 = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->listBox3 = (gcnew System::Windows::Forms::ListBox());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox040 = (gcnew System::Windows::Forms::TextBox());
			this->textBox039 = (gcnew System::Windows::Forms::TextBox());
			this->textBox038 = (gcnew System::Windows::Forms::TextBox());
			this->textBox037 = (gcnew System::Windows::Forms::TextBox());
			this->textBox036 = (gcnew System::Windows::Forms::TextBox());
			this->textBox035 = (gcnew System::Windows::Forms::TextBox());
			this->textBox034 = (gcnew System::Windows::Forms::TextBox());
			this->textBox033 = (gcnew System::Windows::Forms::TextBox());
			this->textBox032 = (gcnew System::Windows::Forms::TextBox());
			this->textBox031 = (gcnew System::Windows::Forms::TextBox());
			this->textBox030 = (gcnew System::Windows::Forms::TextBox());
			this->textBox029 = (gcnew System::Windows::Forms::TextBox());
			this->textBox028 = (gcnew System::Windows::Forms::TextBox());
			this->textBox027 = (gcnew System::Windows::Forms::TextBox());
			this->textBox026 = (gcnew System::Windows::Forms::TextBox());
			this->textBox025 = (gcnew System::Windows::Forms::TextBox());
			this->textBox024 = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->listBox4 = (gcnew System::Windows::Forms::ListBox());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->listBox2 = (gcnew System::Windows::Forms::ListBox());
			this->splitContainer1 = (gcnew System::Windows::Forms::SplitContainer());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			this->tabPage2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox3))->BeginInit();
			this->tabPage3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->splitContainer1))->BeginInit();
			this->splitContainer1->Panel1->SuspendLayout();
			this->splitContainer1->Panel2->SuspendLayout();
			this->splitContainer1->SuspendLayout();
			this->SuspendLayout();
			// 
			// listBox1
			// 
			this->listBox1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 12;
			this->listBox1->Location = System::Drawing::Point(0, 0);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(150, 365);
			this->listBox1->TabIndex = 0;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 163);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(53, 12);
			this->label2->TabIndex = 19;
			this->label2->Text = L"今天帶了";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(24, 40);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(105, 23);
			this->button1->TabIndex = 6;
			this->button1->Text = L"進入商店";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(24, 105);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(90, 12);
			this->label1->TabIndex = 18;
			this->label1->Text = L"您好~! 歡迎光臨";
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(96, 207);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(37, 23);
			this->button5->TabIndex = 22;
			this->button5->Text = L"確定";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Form1::button5_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(71, 160);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(39, 22);
			this->textBox1->TabIndex = 21;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(116, 163);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(17, 12);
			this->label3->TabIndex = 20;
			this->label3->Text = L"元";
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tabControl1->Location = System::Drawing::Point(0, 0);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(728, 365);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->textBox023);
			this->tabPage1->Controls->Add(this->textBox022);
			this->tabPage1->Controls->Add(this->textBox021);
			this->tabPage1->Controls->Add(this->textBox020);
			this->tabPage1->Controls->Add(this->textBox019);
			this->tabPage1->Controls->Add(this->textBox018);
			this->tabPage1->Controls->Add(this->textBox017);
			this->tabPage1->Controls->Add(this->textBox016);
			this->tabPage1->Controls->Add(this->textBox015);
			this->tabPage1->Controls->Add(this->textBox014);
			this->tabPage1->Controls->Add(this->textBox013);
			this->tabPage1->Controls->Add(this->textBox012);
			this->tabPage1->Controls->Add(this->textBox011);
			this->tabPage1->Controls->Add(this->textBox010);
			this->tabPage1->Controls->Add(this->textBox09);
			this->tabPage1->Controls->Add(this->textBox08);
			this->tabPage1->Controls->Add(this->textBox07);
			this->tabPage1->Controls->Add(this->textBox06);
			this->tabPage1->Controls->Add(this->textBox05);
			this->tabPage1->Controls->Add(this->textBox04);
			this->tabPage1->Controls->Add(this->textBox03);
			this->tabPage1->Controls->Add(this->textBox02);
			this->tabPage1->Controls->Add(this->textBox01);
			this->tabPage1->Controls->Add(this->pictureBox2);
			this->tabPage1->Controls->Add(this->pictureBox1);
			this->tabPage1->Controls->Add(this->listBox3);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(720, 339);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"  食物";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// textBox023
			// 
			this->textBox023->Location = System::Drawing::Point(302, 261);
			this->textBox023->Name = L"textBox023";
			this->textBox023->Size = System::Drawing::Size(18, 22);
			this->textBox023->TabIndex = 29;
			this->textBox023->Text = L"0";
			// 
			// textBox022
			// 
			this->textBox022->Location = System::Drawing::Point(302, 237);
			this->textBox022->Name = L"textBox022";
			this->textBox022->Size = System::Drawing::Size(18, 22);
			this->textBox022->TabIndex = 28;
			this->textBox022->Text = L"0";
			// 
			// textBox021
			// 
			this->textBox021->Location = System::Drawing::Point(302, 213);
			this->textBox021->Name = L"textBox021";
			this->textBox021->Size = System::Drawing::Size(18, 22);
			this->textBox021->TabIndex = 27;
			this->textBox021->Text = L"0";
			// 
			// textBox020
			// 
			this->textBox020->Location = System::Drawing::Point(302, 188);
			this->textBox020->Name = L"textBox020";
			this->textBox020->Size = System::Drawing::Size(18, 22);
			this->textBox020->TabIndex = 26;
			this->textBox020->Text = L"0";
			// 
			// textBox019
			// 
			this->textBox019->Location = System::Drawing::Point(302, 163);
			this->textBox019->Name = L"textBox019";
			this->textBox019->Size = System::Drawing::Size(18, 22);
			this->textBox019->TabIndex = 25;
			this->textBox019->Text = L"0";
			// 
			// textBox018
			// 
			this->textBox018->Location = System::Drawing::Point(302, 138);
			this->textBox018->Name = L"textBox018";
			this->textBox018->Size = System::Drawing::Size(18, 22);
			this->textBox018->TabIndex = 24;
			this->textBox018->Text = L"0";
			// 
			// textBox017
			// 
			this->textBox017->Location = System::Drawing::Point(302, 113);
			this->textBox017->Name = L"textBox017";
			this->textBox017->Size = System::Drawing::Size(18, 22);
			this->textBox017->TabIndex = 23;
			this->textBox017->Text = L"0";
			// 
			// textBox016
			// 
			this->textBox016->Location = System::Drawing::Point(302, 88);
			this->textBox016->Name = L"textBox016";
			this->textBox016->Size = System::Drawing::Size(18, 22);
			this->textBox016->TabIndex = 22;
			this->textBox016->Text = L"0";
			// 
			// textBox015
			// 
			this->textBox015->Location = System::Drawing::Point(302, 63);
			this->textBox015->Name = L"textBox015";
			this->textBox015->Size = System::Drawing::Size(18, 22);
			this->textBox015->TabIndex = 21;
			this->textBox015->Text = L"0";
			// 
			// textBox014
			// 
			this->textBox014->Location = System::Drawing::Point(302, 38);
			this->textBox014->Name = L"textBox014";
			this->textBox014->Size = System::Drawing::Size(18, 22);
			this->textBox014->TabIndex = 20;
			this->textBox014->Text = L"0";
			// 
			// textBox013
			// 
			this->textBox013->Location = System::Drawing::Point(302, 13);
			this->textBox013->Name = L"textBox013";
			this->textBox013->Size = System::Drawing::Size(18, 22);
			this->textBox013->TabIndex = 19;
			this->textBox013->Text = L"0";
			// 
			// textBox012
			// 
			this->textBox012->Location = System::Drawing::Point(17, 288);
			this->textBox012->Name = L"textBox012";
			this->textBox012->Size = System::Drawing::Size(18, 22);
			this->textBox012->TabIndex = 18;
			this->textBox012->Text = L"0";
			// 
			// textBox011
			// 
			this->textBox011->Location = System::Drawing::Point(17, 263);
			this->textBox011->Name = L"textBox011";
			this->textBox011->Size = System::Drawing::Size(18, 22);
			this->textBox011->TabIndex = 17;
			this->textBox011->Text = L"0";
			// 
			// textBox010
			// 
			this->textBox010->Location = System::Drawing::Point(17, 239);
			this->textBox010->Name = L"textBox010";
			this->textBox010->Size = System::Drawing::Size(18, 22);
			this->textBox010->TabIndex = 16;
			this->textBox010->Text = L"0";
			// 
			// textBox09
			// 
			this->textBox09->Location = System::Drawing::Point(17, 215);
			this->textBox09->Name = L"textBox09";
			this->textBox09->Size = System::Drawing::Size(18, 22);
			this->textBox09->TabIndex = 15;
			this->textBox09->Text = L"0";
			// 
			// textBox08
			// 
			this->textBox08->Location = System::Drawing::Point(17, 190);
			this->textBox08->Name = L"textBox08";
			this->textBox08->Size = System::Drawing::Size(18, 22);
			this->textBox08->TabIndex = 14;
			this->textBox08->Text = L"0";
			// 
			// textBox07
			// 
			this->textBox07->Location = System::Drawing::Point(17, 165);
			this->textBox07->Name = L"textBox07";
			this->textBox07->Size = System::Drawing::Size(18, 22);
			this->textBox07->TabIndex = 13;
			this->textBox07->Text = L"0";
			// 
			// textBox06
			// 
			this->textBox06->Location = System::Drawing::Point(17, 140);
			this->textBox06->Name = L"textBox06";
			this->textBox06->Size = System::Drawing::Size(18, 22);
			this->textBox06->TabIndex = 12;
			this->textBox06->Text = L"0";
			// 
			// textBox05
			// 
			this->textBox05->Location = System::Drawing::Point(17, 115);
			this->textBox05->Name = L"textBox05";
			this->textBox05->Size = System::Drawing::Size(18, 22);
			this->textBox05->TabIndex = 11;
			this->textBox05->Text = L"0";
			// 
			// textBox04
			// 
			this->textBox04->Location = System::Drawing::Point(17, 90);
			this->textBox04->Name = L"textBox04";
			this->textBox04->Size = System::Drawing::Size(18, 22);
			this->textBox04->TabIndex = 10;
			this->textBox04->Text = L"0";
			// 
			// textBox03
			// 
			this->textBox03->Location = System::Drawing::Point(17, 65);
			this->textBox03->Name = L"textBox03";
			this->textBox03->Size = System::Drawing::Size(18, 22);
			this->textBox03->TabIndex = 9;
			this->textBox03->Text = L"0";
			// 
			// textBox02
			// 
			this->textBox02->Location = System::Drawing::Point(17, 40);
			this->textBox02->Name = L"textBox02";
			this->textBox02->Size = System::Drawing::Size(18, 22);
			this->textBox02->TabIndex = 8;
			this->textBox02->Text = L"0";
			// 
			// textBox01
			// 
			this->textBox01->Location = System::Drawing::Point(17, 15);
			this->textBox01->Name = L"textBox01";
			this->textBox01->Size = System::Drawing::Size(18, 22);
			this->textBox01->TabIndex = 7;
			this->textBox01->Text = L"0";
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(45, 12);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(225, 299);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 6;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(327, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(365, 274);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 5;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &Form1::pictureBox1_Click);
			// 
			// listBox3
			// 
			this->listBox3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->listBox3->FormattingEnabled = true;
			this->listBox3->ItemHeight = 12;
			this->listBox3->Location = System::Drawing::Point(3, 3);
			this->listBox3->Name = L"listBox3";
			this->listBox3->Size = System::Drawing::Size(714, 333);
			this->listBox3->TabIndex = 31;
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->button2);
			this->tabPage2->Controls->Add(this->textBox040);
			this->tabPage2->Controls->Add(this->textBox039);
			this->tabPage2->Controls->Add(this->textBox038);
			this->tabPage2->Controls->Add(this->textBox037);
			this->tabPage2->Controls->Add(this->textBox036);
			this->tabPage2->Controls->Add(this->textBox035);
			this->tabPage2->Controls->Add(this->textBox034);
			this->tabPage2->Controls->Add(this->textBox033);
			this->tabPage2->Controls->Add(this->textBox032);
			this->tabPage2->Controls->Add(this->textBox031);
			this->tabPage2->Controls->Add(this->textBox030);
			this->tabPage2->Controls->Add(this->textBox029);
			this->tabPage2->Controls->Add(this->textBox028);
			this->tabPage2->Controls->Add(this->textBox027);
			this->tabPage2->Controls->Add(this->textBox026);
			this->tabPage2->Controls->Add(this->textBox025);
			this->tabPage2->Controls->Add(this->textBox024);
			this->tabPage2->Controls->Add(this->pictureBox4);
			this->tabPage2->Controls->Add(this->pictureBox3);
			this->tabPage2->Controls->Add(this->listBox4);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(720, 339);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"  飲料";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(612, 269);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 37;
			this->button2->Text = L"結帳";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click_1);
			// 
			// textBox040
			// 
			this->textBox040->Location = System::Drawing::Point(363, 219);
			this->textBox040->Name = L"textBox040";
			this->textBox040->Size = System::Drawing::Size(18, 22);
			this->textBox040->TabIndex = 35;
			this->textBox040->Text = L"0";
			// 
			// textBox039
			// 
			this->textBox039->Location = System::Drawing::Point(363, 191);
			this->textBox039->Name = L"textBox039";
			this->textBox039->Size = System::Drawing::Size(18, 22);
			this->textBox039->TabIndex = 34;
			this->textBox039->Text = L"0";
			// 
			// textBox038
			// 
			this->textBox038->Location = System::Drawing::Point(363, 166);
			this->textBox038->Name = L"textBox038";
			this->textBox038->Size = System::Drawing::Size(18, 22);
			this->textBox038->TabIndex = 33;
			this->textBox038->Text = L"0";
			// 
			// textBox037
			// 
			this->textBox037->Location = System::Drawing::Point(363, 141);
			this->textBox037->Name = L"textBox037";
			this->textBox037->Size = System::Drawing::Size(18, 22);
			this->textBox037->TabIndex = 32;
			this->textBox037->Text = L"0";
			// 
			// textBox036
			// 
			this->textBox036->Location = System::Drawing::Point(363, 116);
			this->textBox036->Name = L"textBox036";
			this->textBox036->Size = System::Drawing::Size(18, 22);
			this->textBox036->TabIndex = 31;
			this->textBox036->Text = L"0";
			// 
			// textBox035
			// 
			this->textBox035->Location = System::Drawing::Point(363, 91);
			this->textBox035->Name = L"textBox035";
			this->textBox035->Size = System::Drawing::Size(18, 22);
			this->textBox035->TabIndex = 30;
			this->textBox035->Text = L"0";
			// 
			// textBox034
			// 
			this->textBox034->Location = System::Drawing::Point(363, 66);
			this->textBox034->Name = L"textBox034";
			this->textBox034->Size = System::Drawing::Size(18, 22);
			this->textBox034->TabIndex = 29;
			this->textBox034->Text = L"0";
			// 
			// textBox033
			// 
			this->textBox033->Location = System::Drawing::Point(363, 41);
			this->textBox033->Name = L"textBox033";
			this->textBox033->Size = System::Drawing::Size(18, 22);
			this->textBox033->TabIndex = 28;
			this->textBox033->Text = L"0";
			// 
			// textBox032
			// 
			this->textBox032->Location = System::Drawing::Point(363, 16);
			this->textBox032->Name = L"textBox032";
			this->textBox032->Size = System::Drawing::Size(18, 22);
			this->textBox032->TabIndex = 27;
			this->textBox032->Text = L"0";
			// 
			// textBox031
			// 
			this->textBox031->Location = System::Drawing::Point(17, 187);
			this->textBox031->Name = L"textBox031";
			this->textBox031->Size = System::Drawing::Size(18, 22);
			this->textBox031->TabIndex = 26;
			this->textBox031->Text = L"0";
			// 
			// textBox030
			// 
			this->textBox030->Location = System::Drawing::Point(17, 162);
			this->textBox030->Name = L"textBox030";
			this->textBox030->Size = System::Drawing::Size(18, 22);
			this->textBox030->TabIndex = 25;
			this->textBox030->Text = L"0";
			// 
			// textBox029
			// 
			this->textBox029->Location = System::Drawing::Point(17, 137);
			this->textBox029->Name = L"textBox029";
			this->textBox029->Size = System::Drawing::Size(18, 22);
			this->textBox029->TabIndex = 24;
			this->textBox029->Text = L"0";
			// 
			// textBox028
			// 
			this->textBox028->Location = System::Drawing::Point(17, 112);
			this->textBox028->Name = L"textBox028";
			this->textBox028->Size = System::Drawing::Size(18, 22);
			this->textBox028->TabIndex = 23;
			this->textBox028->Text = L"0";
			// 
			// textBox027
			// 
			this->textBox027->Location = System::Drawing::Point(17, 87);
			this->textBox027->Name = L"textBox027";
			this->textBox027->Size = System::Drawing::Size(18, 22);
			this->textBox027->TabIndex = 22;
			this->textBox027->Text = L"0";
			// 
			// textBox026
			// 
			this->textBox026->Location = System::Drawing::Point(17, 62);
			this->textBox026->Name = L"textBox026";
			this->textBox026->Size = System::Drawing::Size(18, 22);
			this->textBox026->TabIndex = 21;
			this->textBox026->Text = L"0";
			// 
			// textBox025
			// 
			this->textBox025->Location = System::Drawing::Point(17, 37);
			this->textBox025->Name = L"textBox025";
			this->textBox025->Size = System::Drawing::Size(18, 22);
			this->textBox025->TabIndex = 20;
			this->textBox025->Text = L"0";
			// 
			// textBox024
			// 
			this->textBox024->Location = System::Drawing::Point(17, 12);
			this->textBox024->Name = L"textBox024";
			this->textBox024->Size = System::Drawing::Size(18, 22);
			this->textBox024->TabIndex = 19;
			this->textBox024->Text = L"0";
			// 
			// pictureBox4
			// 
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(387, 6);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(276, 227);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox4->TabIndex = 1;
			this->pictureBox4->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(41, 4);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(272, 206);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox3->TabIndex = 0;
			this->pictureBox3->TabStop = false;
			// 
			// listBox4
			// 
			this->listBox4->Dock = System::Windows::Forms::DockStyle::Fill;
			this->listBox4->FormattingEnabled = true;
			this->listBox4->ItemHeight = 12;
			this->listBox4->Location = System::Drawing::Point(3, 3);
			this->listBox4->Name = L"listBox4";
			this->listBox4->Size = System::Drawing::Size(714, 333);
			this->listBox4->TabIndex = 36;
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->listBox2);
			this->tabPage3->Location = System::Drawing::Point(4, 22);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(720, 339);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"  明細";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// listBox2
			// 
			this->listBox2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->listBox2->FormattingEnabled = true;
			this->listBox2->ItemHeight = 12;
			this->listBox2->Location = System::Drawing::Point(3, 3);
			this->listBox2->Name = L"listBox2";
			this->listBox2->Size = System::Drawing::Size(714, 333);
			this->listBox2->TabIndex = 0;
			// 
			// splitContainer1
			// 
			this->splitContainer1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->splitContainer1->Location = System::Drawing::Point(0, 0);
			this->splitContainer1->Name = L"splitContainer1";
			// 
			// splitContainer1.Panel1
			// 
			this->splitContainer1->Panel1->Controls->Add(this->textBox2);
			this->splitContainer1->Panel1->Controls->Add(this->button3);
			this->splitContainer1->Panel1->Controls->Add(this->label3);
			this->splitContainer1->Panel1->Controls->Add(this->textBox1);
			this->splitContainer1->Panel1->Controls->Add(this->button5);
			this->splitContainer1->Panel1->Controls->Add(this->label1);
			this->splitContainer1->Panel1->Controls->Add(this->button1);
			this->splitContainer1->Panel1->Controls->Add(this->label2);
			this->splitContainer1->Panel1->Controls->Add(this->listBox1);
			// 
			// splitContainer1.Panel2
			// 
			this->splitContainer1->Panel2->Controls->Add(this->tabControl1);
			this->splitContainer1->Size = System::Drawing::Size(882, 365);
			this->splitContainer1->SplitterDistance = 150;
			this->splitContainer1->TabIndex = 23;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(39, 257);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 23;
			this->button3->Text = L"補貨";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(12, 311);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 22);
			this->textBox2->TabIndex = 24;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(882, 365);
			this->Controls->Add(this->splitContainer1);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox3))->EndInit();
			this->tabPage3->ResumeLayout(false);
			this->splitContainer1->Panel1->ResumeLayout(false);
			this->splitContainer1->Panel1->PerformLayout();
			this->splitContainer1->Panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->splitContainer1))->EndInit();
			this->splitContainer1->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
//
public: 
	
	
			int money; //記顧客所帶的錢
			int *n; //n記錄顧客買的商品數量
			int *amount; //amount從DB擷取商品剩餘數量
			
			int **notenough;
			int **enough; 
			
			food *f;
			micro_food *mf;
			beverage *b;
			micro_beverage *mb;

		
			MySqlConnection ^connect;   //------------------------
			MySqlCommand ^cmd;          //------------------------
			MySqlDataReader ^reader;    //------------------------
			
			String ^strSQL;//used to input the MySQL message----------------
			String ^password;//used to input the password-------------------
			String ^userID;//used to input the server ID--------------------
			String ^server;//used to input the server address---------------
	
private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) 
		 {
			label1->Visible = false;
			label2->Visible = false;
			label3->Visible = false;
			textBox1->Visible = false;
			button5->Visible = false;
			button3->Visible = false;
			tabControl1->Visible = false;



			connect = gcnew MySqlConnection();     //------------------------
			cmd = gcnew MySqlCommand();            //-------------------------
		 }

private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) //------------------
		 {
			 String ^connectstr;                  //---------------------------
								 
			 server = "127.0.0.1";             //---------------------------
			 userID = "root";             //---------------------------
			 password = "123456";           //---------------------------
        
			 connectstr = "Network Address="+server+";"+"Persist Security Info=no;"+
						  "User Name="+userID+";"+"Password="+password;  //------------------


			 try			
			 { 
				 connect = gcnew MySqlConnection( connectstr );
				 connect->Open(); //連線
				 label1->Visible = true;
				 label2->Visible = true;
				 label3->Visible = true;
				 textBox1->Visible = true;
				 button5->Visible = true;
				 button3->Visible = true;
				 connect->Close();
		 	 }  
			 catch( Exception ^ex )
			 { 
				 System::Windows::Forms::DialogResult result;
				 result = MessageBox::Show( ex->ToString() );
				 connect->Close();
			 }

			 strSQL ="use database_conveniencestore";
			
			 try
			 {
				 connect->Open();
				 cmd = gcnew MySqlCommand( strSQL , connect );
				 cmd->ExecuteNonQuery();
			  	 reader = cmd->ExecuteReader();
				 connect->Close();
				 delete cmd;
			 }
			 catch( Exception ^e )
			 {
				System::Windows::Forms::DialogResult result;
				result = MessageBox::Show( e->ToString() );
				connect->Close();
				delete cmd;
			 }
			 //已經連上database,開始將資料從database傳到class
			
			f=new food[11]; //宣告大小為11,型態為food的陣列
			mf=new micro_food[12];
			b=new beverage[13];
			mb=new micro_beverage[4];
		
			for(int i=0;i<11;i++){
		 try
			{
				strSQL ="select price from food where idfood="+(i+13)+"";
				connect->Open();
				cmd = gcnew MySqlCommand(strSQL , connect );
				cmd->ExecuteNonQuery();
				reader = cmd->ExecuteReader();			
				while( reader->Read() )
					f[i].price=reader->GetInt32(0);
				connect->Close();
				delete cmd;
			}
		catch( Exception ^e )
			 {
				System::Windows::Forms::DialogResult result;
				result = MessageBox::Show( e->ToString() );
				connect->Close();
				delete cmd;
			 }
		try
			{
			
		strSQL ="select ex_date from food where idfood="+(i+13)+"";
		connect->Open();
		cmd = gcnew MySqlCommand(strSQL , connect );
		cmd->ExecuteNonQuery();
		reader = cmd->ExecuteReader();			
		while( reader->Read() )
			f[i].ex_date=reader->GetInt32(0);
		connect->Close();
		delete cmd;
		}
		catch( Exception ^e )
			 {
				System::Windows::Forms::DialogResult result;
				result = MessageBox::Show( e->ToString() );
				connect->Close();
				delete cmd;
			 }
		try
			{
		strSQL ="select idfood from food where idfood="+(i+13)+"";
		connect->Open();
		cmd = gcnew MySqlCommand(strSQL , connect );
		cmd->ExecuteNonQuery();
		reader = cmd->ExecuteReader();			
		while( reader->Read() )
			f[i].No=reader->GetInt32(0);
		connect->Close();
		delete cmd;
		}
		catch( Exception ^e )
			 {
				System::Windows::Forms::DialogResult result;
				result = MessageBox::Show( e->ToString() );
				connect->Close();
				delete cmd;
			 }
		/*try
			{
		strSQL ="select name from food where idfood="+(i+13)+"";
		connect->Open();
		cmd = gcnew MySqlCommand(strSQL , connect );
		cmd->ExecuteNonQuery();
		reader = cmd->ExecuteReader();			
		while( reader->Read() )
			f[i].name=reader->GetChar(0);
		connect->Close();
		delete cmd;
		}
		catch( Exception ^e )
			 {
				System::Windows::Forms::DialogResult result;
				result = MessageBox::Show( e->ToString() );
				connect->Close();
				delete cmd;
			 }*/
		try
			{
		strSQL ="select amount from food where idfood="+(i+13)+"";
		connect->Open();
		cmd = gcnew MySqlCommand(strSQL , connect );
		cmd->ExecuteNonQuery();
		reader = cmd->ExecuteReader();			
		while( reader->Read() )
			f[i].amount=reader->GetInt32(0);
		connect->Close();
		delete cmd;}
		catch( Exception ^e )
			 {
				System::Windows::Forms::DialogResult result;
				result = MessageBox::Show( e->ToString() );
				connect->Close();
				delete cmd;
		}}
		for(int i=0;i<12;i++){
		 try
			{
				strSQL ="select price from micro_food where idmicro_food="+(i+1)+"";
				connect->Open();
				cmd = gcnew MySqlCommand(strSQL , connect );
				cmd->ExecuteNonQuery();
				reader = cmd->ExecuteReader();			
				while( reader->Read() )
					mf[i].price=reader->GetInt32(0);
				connect->Close();
				delete cmd;
			}
		catch( Exception ^e )
			 {
				System::Windows::Forms::DialogResult result;
				result = MessageBox::Show( e->ToString() );
				connect->Close();
				delete cmd;
			 }
		try
			{
			
		strSQL ="select ex_date from micro_food where idmicro_food="+(i+1)+"";
		connect->Open();
		cmd = gcnew MySqlCommand(strSQL , connect );
		cmd->ExecuteNonQuery();
		reader = cmd->ExecuteReader();			
		while( reader->Read() )
			mf[i].ex_date=reader->GetInt32(0);
		connect->Close();
		delete cmd;
		}
		catch( Exception ^e )
			 {
				System::Windows::Forms::DialogResult result;
				result = MessageBox::Show( e->ToString() );
				connect->Close();
				delete cmd;
			 }
		try
			{
		strSQL ="select idmicro_food from micro_food where idmicro_food="+(i+1)+"";
		connect->Open();
		cmd = gcnew MySqlCommand(strSQL , connect );
		cmd->ExecuteNonQuery();
		reader = cmd->ExecuteReader();			
		while( reader->Read() )
			mf[i].No=reader->GetInt32(0);
		connect->Close();
		delete cmd;
		}
		catch( Exception ^e )
			 {
				System::Windows::Forms::DialogResult result;
				result = MessageBox::Show( e->ToString() );
				connect->Close();
				delete cmd;
			 }
		/*try
			{
		strSQL ="select name from micro_food where idmicro_food="+(i+1)+"";
		connect->Open();
		cmd = gcnew MySqlCommand(strSQL , connect );
		cmd->ExecuteNonQuery();
		reader = cmd->ExecuteReader();			
		while( reader->Read() )
			mf[i].name=reader->GetString(0);
		connect->Close();
		delete cmd;
		}
		catch( Exception ^e )
			 {
				System::Windows::Forms::DialogResult result;
				result = MessageBox::Show( e->ToString() );
				connect->Close();
				delete cmd;
			 }*/
		try
			{
		strSQL ="select amount from micro_food where idmicro_food="+(i+1)+"";
		connect->Open();
		cmd = gcnew MySqlCommand(strSQL , connect );
		cmd->ExecuteNonQuery();
		reader = cmd->ExecuteReader();			
		while( reader->Read() )
			mf[i].amount=reader->GetInt32(0);
		connect->Close();
		delete cmd;}
		catch( Exception ^e )
			 {
				System::Windows::Forms::DialogResult result;
				result = MessageBox::Show( e->ToString() );
				connect->Close();
				delete cmd;
			 }
		}
		
for(int i=0;i<13;i++){
		 try
			{
				strSQL ="select price from beverage where idbeverage="+(i+24)+"";
				connect->Open();
				cmd = gcnew MySqlCommand(strSQL , connect );
				cmd->ExecuteNonQuery();
				reader = cmd->ExecuteReader();			
				while( reader->Read() )
					b[i].price=reader->GetInt32(0);
				connect->Close();
				delete cmd;
			}
		catch( Exception ^e )
			 {
				System::Windows::Forms::DialogResult result;
				result = MessageBox::Show( e->ToString() );
				connect->Close();
				delete cmd;
			 }
		try
			{
			
		strSQL ="select ex_date from beverage where idbeverage="+(i+24)+"";
		connect->Open();
		cmd = gcnew MySqlCommand(strSQL , connect );
		cmd->ExecuteNonQuery();
		reader = cmd->ExecuteReader();			
		while( reader->Read() )
			b[i].ex_date=reader->GetInt32(0);
		connect->Close();
		delete cmd;
		}
		catch( Exception ^e )
			 {
				System::Windows::Forms::DialogResult result;
				result = MessageBox::Show( e->ToString() );
				connect->Close();
				delete cmd;
			 }
		try
			{
		strSQL ="select idbeverage from beverage where idbeverage="+(i+24)+"";
		connect->Open();
		cmd = gcnew MySqlCommand(strSQL , connect );
		cmd->ExecuteNonQuery();
		reader = cmd->ExecuteReader();			
		while( reader->Read() )
			b[i].No=reader->GetInt32(0);
		connect->Close();
		delete cmd;
		}
		catch( Exception ^e )
			 {
				System::Windows::Forms::DialogResult result;
				result = MessageBox::Show( e->ToString() );
				connect->Close();
				delete cmd;
			 }
		/*try
			{
		strSQL ="select name from beverage where idbeverage="+(i+24)+"";
		connect->Open();
		cmd = gcnew MySqlCommand(strSQL , connect );
		cmd->ExecuteNonQuery();
		reader = cmd->ExecuteReader();			
		while( reader->Read() )
			b[i].name=reader->GetString(0);
		connect->Close();
		delete cmd;
		}
		catch( Exception ^e )
			 {
				System::Windows::Forms::DialogResult result;
				result = MessageBox::Show( e->ToString() );
				connect->Close();
				delete cmd;
			 }*/
		try
			{
		strSQL ="select amount from beverage where idbeverage="+(i+24)+"";
		connect->Open();
		cmd = gcnew MySqlCommand(strSQL , connect );
		cmd->ExecuteNonQuery();
		reader = cmd->ExecuteReader();			
		while( reader->Read() )
			b[i].amount=reader->GetInt32(0);
		connect->Close();
		delete cmd;}
		catch( Exception ^e )
			 {
				System::Windows::Forms::DialogResult result;
				result = MessageBox::Show( e->ToString() );
				connect->Close();
				delete cmd;
		}}
				
for(int i=0;i<4;i++){
		 try
			{
				strSQL ="select price from micro_beverage where idmicro_beverage="+(i+37)+"";
				connect->Open();
				cmd = gcnew MySqlCommand(strSQL , connect );
				cmd->ExecuteNonQuery();
				reader = cmd->ExecuteReader();			
				while( reader->Read() )
					mb[i].price=reader->GetInt32(0);
				connect->Close();
				delete cmd;
			}
		catch( Exception ^e )
			 {
				System::Windows::Forms::DialogResult result;
				result = MessageBox::Show( e->ToString() );
				connect->Close();
				delete cmd;
			 }
		try
			{
			
		strSQL ="select ex_date from micro_beverage where idmicro_beverage="+(i+37)+"";
		connect->Open();
		cmd = gcnew MySqlCommand(strSQL , connect );
		cmd->ExecuteNonQuery();
		reader = cmd->ExecuteReader();			
		while( reader->Read() )
			mb[i].ex_date=reader->GetInt32(0);
		connect->Close();
		delete cmd;
		}
		catch( Exception ^e )
			 {
				System::Windows::Forms::DialogResult result;
				result = MessageBox::Show( e->ToString() );
				connect->Close();
				delete cmd;
			 }
		try
			{
		strSQL ="select idmicro_beverage from micro_beverage where idmicro_beverage="+(i+37)+"";
		connect->Open();
		cmd = gcnew MySqlCommand(strSQL , connect );
		cmd->ExecuteNonQuery();
		reader = cmd->ExecuteReader();			
		while( reader->Read() )
			mb[i].No=reader->GetInt32(0);
		connect->Close();
		delete cmd;
		}
		catch( Exception ^e )
			 {
				System::Windows::Forms::DialogResult result;
				result = MessageBox::Show( e->ToString() );
				connect->Close();
				delete cmd;
			 }
		/*try
			{
		strSQL ="select name from micro_beverage where idmicro_beverage="+(i+37)+"";

		connect->Open();
		cmd = gcnew MySqlCommand(strSQL , connect );
		cmd->ExecuteNonQuery();
		reader = cmd->ExecuteReader();			
		while( reader->Read() )
			b[i].name=reader->GetString(0);
		connect->Close();
		delete cmd;
		}
		catch( Exception ^e )
			 {
				System::Windows::Forms::DialogResult result;
				result = MessageBox::Show( e->ToString() );
				connect->Close();
				delete cmd;
			 }*/
		try
			{
		strSQL ="select amount from micro_beverage where idmicro_beverage="+(i+37)+"";
		connect->Open();
		cmd = gcnew MySqlCommand(strSQL , connect );
		cmd->ExecuteNonQuery();
		reader = cmd->ExecuteReader();			
		while( reader->Read() )
			mb[i].amount=reader->GetInt32(0);
		connect->Close();
		delete cmd;}
		catch( Exception ^e )
			 {
				System::Windows::Forms::DialogResult result;
				result = MessageBox::Show( e->ToString() );
				connect->Close();
				delete cmd;
			 }
	//	listBox2->Items->Add("food 1 price:"+f[0].price+"food 1 ex date"+f[0].ex_date);
		
	
	}



		 }

private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
			 money = int::Parse(textBox1->Text);
			 if(money>25)
				tabControl1->Visible = true;
			 else
				MessageBox::Show("錢不夠買最低價商品! 請重新輸入");
		 }

private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			
			}

private: System::Void button2_Click_1(System::Object^  sender, System::EventArgs^  e) {

			
			 //嗚嗚我不知道要怎麼用迴圈去做...
			 //把使用者購買的各數量存入陣列n
				mf[0].buy=int::Parse(textBox01->Text);
				mf[1].buy=int::Parse(textBox02->Text);
				mf[2].buy=int::Parse(textBox03->Text);
				mf[3].buy=int::Parse(textBox04->Text);
				mf[4].buy=int::Parse(textBox05->Text);
				mf[5].buy=int::Parse(textBox06->Text);
				mf[6].buy=int::Parse(textBox07->Text);
				mf[7].buy=int::Parse(textBox08->Text);
				mf[8].buy=int::Parse(textBox09->Text);
				mf[9].buy=int::Parse(textBox010->Text);
				mf[10].buy=int::Parse(textBox011->Text);
				mf[11].buy=int::Parse(textBox012->Text);
				f[0].buy=int::Parse(textBox013->Text);
				f[1].buy=int::Parse(textBox014->Text);
				f[2].buy=int::Parse(textBox015->Text);
				f[3].buy=int::Parse(textBox016->Text);
				f[4].buy=int::Parse(textBox017->Text);
				f[5].buy=int::Parse(textBox018->Text);
				f[6].buy=int::Parse(textBox019->Text);
				f[7].buy=int::Parse(textBox020->Text);
				f[8].buy=int::Parse(textBox021->Text);
				f[9].buy=int::Parse(textBox022->Text);
				f[10].buy=int::Parse(textBox023->Text);
				b[0].buy=int::Parse(textBox024->Text);
				b[1].buy=int::Parse(textBox025->Text);
				b[2].buy=int::Parse(textBox026->Text);
				b[3].buy=int::Parse(textBox027->Text);
				b[4].buy=int::Parse(textBox028->Text);
				b[5].buy=int::Parse(textBox029->Text);
				b[6].buy=int::Parse(textBox030->Text);
				b[7].buy=int::Parse(textBox031->Text);
				b[8].buy=int::Parse(textBox032->Text);
				b[9].buy=int::Parse(textBox033->Text);
				b[10].buy=int::Parse(textBox034->Text);
				b[11].buy=int::Parse(textBox035->Text);
				b[12].buy=int::Parse(textBox036->Text);
				mb[0].buy=int::Parse(textBox037->Text);
				mb[1].buy=int::Parse(textBox038->Text);
				mb[2].buy=int::Parse(textBox039->Text);
				mb[3].buy=int::Parse(textBox040->Text);
							//f[1].show();		
				
				//以下開始計算各購買商品庫存量夠不夠
				int notenough_count=0,enough_count=0;

				for(int i=0;i<12;i++)
				{
					if(mf[i].buy!=0)
					{
						if(mf[i].buy>mf[i].amount)
							notenough_count++;
						else
							enough_count++;
					}
				}

				
				for(int i=0;i<11;i++)
				{
					if(f[i].buy!=0)
					{
						if(f[i].buy>f[i].amount)
							notenough_count++;
						else
							enough_count++;
					}
				}

				
				for(int i=0;i<13;i++)
				{
					if(b[i].buy!=0)
					{
						if(b[i].buy>b[i].amount)
							notenough_count++;
						else
							enough_count++;
					}
				}			
				for(int i=0;i<4;i++)
				{
					if(mb[i].buy!=0)
					{
						if(mb[i].buy>mb[i].amount)
							notenough_count++;
						else
							enough_count++;
					}
				}

				notenough=new int*[notenough_count];//記錄不夠的商品 ***但如果沒有任何商品不足,此指標為空
				for(int i=0;i<notenough_count;i++)
					notenough[i]=new int[2];
				
				enough=new int*[enough_count]; //記錄夠的商品
				for(int i=0;i<enough_count;i++)
					enough[i]=new int[2];

				for(int i=0;i<notenough_count;i++){ //初始化notenough的值=0
					for(int j=0;j<1;j++){
						notenough[i][j]=0;}}
				
				for(int i=0;i<enough_count;i++){ //初始化notenough的值=0
					for(int j=0;j<1;j++){
						enough[i][j]=0;}}
				
				int j=0,k=0,amount_three=0,amount_four=0,amount_beverage=0,total=0,dif;
				for(int i=0;i<12;i++)
							{
								if(mf[i].buy!=0)
								{
									if(mf[i].buy>mf[i].amount){
										notenough[j][0]=mf[i].No;
										notenough[j][1]=mf[i].buy-mf[i].amount;
										j++;}
									else if(mf[i].buy<=mf[i].amount)
									{
										enough[k][0]=mf[i].No;
										enough[k][1]=mf[i].buy;
										k++;
										//更新資料庫!!!!!!!!!!!!!!!!!!!!!!!!!!
										try
										{
											strSQL ="update micro_food set amount="+(mf[i].amount-mf[i].buy)+" where idmicro_food="+mf[i].No+"";
											connect->Open();
											cmd = gcnew MySqlCommand(strSQL , connect );
											cmd->ExecuteNonQuery();
											connect->Close();
											delete cmd;
										}
										catch( Exception ^e )
										{
										System::Windows::Forms::DialogResult result;
										result = MessageBox::Show( e->ToString() );
										connect->Close();
										delete cmd;
										}					
									}
								}
							}

							for(int i=0;i<11;i++)
							{
								if(f[i].buy!=0)
								{
									if(f[i].buy>f[i].amount){
										notenough[j][0]=f[i].No;
										notenough[j][1]=f[i].buy-f[i].amount;
										j++;}
									else if(f[i].buy<=f[i].amount)
									{
										enough[k][0]=f[i].No;
										enough[k][1]=f[i].buy;
										k++;
										//更新資料庫!!!!!!!!!!!!!!!!!!!!!!!!!!
										try
										{
											strSQL ="update food set amount="+(f[i].amount-f[i].buy)+" where idfood="+f[i].No+"";
											connect->Open();
											cmd = gcnew MySqlCommand(strSQL , connect );
											cmd->ExecuteNonQuery();
											connect->Close();
											delete cmd;
										}
										catch( Exception ^e )
										{
										System::Windows::Forms::DialogResult result;
										result = MessageBox::Show( e->ToString() );
										connect->Close();
										delete cmd;
										}					
									}
								}
							}
							for(int i=0;i<13;i++)
							{
								if(b[i].buy!=0)
								{
									if(b[i].buy>b[i].amount){
										notenough[j][0]=b[i].No;
										notenough[j][1]=b[i].buy-b[i].amount;
										j++;}
									else if(b[i].buy<=b[i].amount)
									{
										enough[k][0]=b[i].No;
										enough[k][1]=b[i].buy;
										k++;
										//更新資料庫!!!!!!!!!!!!!!!!!!!!!!!!!!
										try
										{
											strSQL ="update beverage set amount="+(b[i].amount-b[i].buy)+" where idbeverage="+b[i].No+"";
											connect->Open();
											cmd = gcnew MySqlCommand(strSQL , connect );
											cmd->ExecuteNonQuery();
											connect->Close();
											delete cmd;
										}
										catch( Exception ^e )
										{
										System::Windows::Forms::DialogResult result;
										result = MessageBox::Show( e->ToString() );
										connect->Close();
										delete cmd;
										}					
									}
								}
							}
							for(int i=0;i<4;i++)
							{
								if(mb[i].buy!=0)
								{
									if(mb[i].buy>mb[i].amount){
										notenough[j][0]=mb[i].No;
										notenough[j][1]=mb[i].buy-mb[i].amount;
										j++;}
									else if(mb[i].buy<=mb[i].amount)
									{
										enough[k][0]=mb[i].No;
										enough[k][1]=mb[i].buy;
										k++;
										//更新資料庫!!!!!!!!!!!!!!!!!!!!!!!!!!
										try
										{
											strSQL ="update micro_beverage set amount="+(mb[i].amount-mb[i].buy)+" where idmicro_beverage="+mb[i].No+"";
											connect->Open();
											cmd = gcnew MySqlCommand(strSQL , connect );
											cmd->ExecuteNonQuery();
											connect->Close();
											delete cmd;
										}
										catch( Exception ^e )
										{
										System::Windows::Forms::DialogResult result;
										result = MessageBox::Show( e->ToString() );
										connect->Close();
										delete cmd;
										}					
									}
								}
							}
				if(notenough_count==0) //代表沒有任何超額商品
				{
						if(total<=money){ //如果錢夠的話
							
					for(int i=0;i<enough_count;i++)
					{
						if((0<enough[i][0]&&enough[i][0]<6)||(12<enough[i][0]&&enough[i][0]<19))
							amount_three+=enough[i][1];
						else if((6<enough[i][0]&&enough[i][0]<13)||(18<enough[i][0]&&enough[i][0]<24))
							amount_four+=enough[i][1];
						else if((23<enough[i][0]&&enough[i][0]<41))
							amount_beverage+=enough[i][1];
					}
			
					//開始計算總金額
						if(amount_four>amount_beverage)
							total+=amount_four*49+(amount_four-amount_beverage)*35+amount_three*25;
						else if(amount_four==amount_beverage)
							total+=amount_beverage*49+amount_three*25;
						else if(amount_four<amount_beverage){
							total+=amount_four*49;
							//listBox2->Items->Add("此時total:"+total);
							
							dif=amount_beverage-amount_four; //飲料與49數量差距

							if(dif>amount_three)
								total+=amount_three*39+(dif-amount_three)*25;
							else if(dif==amount_three)
								total+=dif*39;
							else if(dif<amount_three)
								total+=dif*39+(amount_three-dif)*25;}

				//		listBox2->Items->Add("dif:"+dif+"  總金額是"+total);
						int a=0;
						for(int i=0;i<enough_count;i++)
						{							
						if((0<enough[i][0]&&enough[i][0]<13)||(36<enough[i][0]&&enough[i][0]<41))
							a++;}

						if(a!=0)
							MessageBox::Show("請等候微波食品!");

						
					
							MessageBox::Show("謝謝光臨~ 詳情請見明細");
							listBox2->Items->Add("您這次總共消費了"+total+"元,還剩下"+(money-total)+"元");						
							listBox2->Items->Add("購買清單");
							//開始寫購買清單~
							String^ name;							
							for(int i=0;i<enough_count;i++)
							{	
								
								if(0<enough[i][0]&&enough[i][0]<13)
								{
									try
									{
										
										strSQL ="select name from micro_food where idmicro_food="+enough[i][0]+"";
										connect->Open();
										cmd = gcnew MySqlCommand(strSQL , connect );
										cmd->ExecuteNonQuery();
										reader = cmd->ExecuteReader();			
										while( reader->Read() )
											name=reader->GetString(0);
										connect->Close();
										delete cmd;
										
									}
									catch( Exception ^e )
									{
										System::Windows::Forms::DialogResult result;
										result = MessageBox::Show( e->ToString() );
										connect->Close();
										delete cmd;
									}
									listBox2->Items->Add(name+" "+enough[i][1]+"個");	
								}
								
								else if(12<enough[i][0]&&enough[i][0]<24)
								{
								
									try
									{
										
										strSQL ="select name from food where idfood="+enough[i][0]+"";
										connect->Open();
										cmd = gcnew MySqlCommand(strSQL , connect );
										cmd->ExecuteNonQuery();
										reader = cmd->ExecuteReader();			
										while( reader->Read() )
											name=reader->GetString(0);
										connect->Close();
										delete cmd;
									}
									catch( Exception ^e )
									{
										System::Windows::Forms::DialogResult result;
										result = MessageBox::Show( e->ToString() );
										connect->Close();
										delete cmd;
									}
									listBox2->Items->Add(name+" "+enough[i][1]+"個");	
								}

								else if(23<enough[i][0]&&enough[i][0]<37)
								{
						
									try
									{
										
										strSQL ="select name from beverage where idbeverage="+enough[i][0]+"";
										connect->Open();
										cmd = gcnew MySqlCommand(strSQL , connect );
										cmd->ExecuteNonQuery();
										reader = cmd->ExecuteReader();			
										while( reader->Read() )
											name=reader->GetString(0);
										connect->Close();
										delete cmd;
									}
									catch( Exception ^e )
									{
										System::Windows::Forms::DialogResult result;
										result = MessageBox::Show( e->ToString() );
										connect->Close();
										delete cmd;
									}
									listBox2->Items->Add(name+" "+enough[i][1]+"個");	
								}

								else if(36<enough[i][0]&&enough[i][0]<41)
								{
				
									try
									{
										
										strSQL ="select name from micro_beverage where idmicro_beverage="+enough[i][0]+"";
										connect->Open();
										cmd = gcnew MySqlCommand(strSQL , connect );
										cmd->ExecuteNonQuery();
										reader = cmd->ExecuteReader();			
										while( reader->Read() )
											name=reader->GetString(0);
										connect->Close();
										delete cmd;
									}
									catch( Exception ^e )
									{
										System::Windows::Forms::DialogResult result;
										result = MessageBox::Show( e->ToString() );
										connect->Close();
										delete cmd;
									}
									listBox2->Items->Add(name+" "+enough[i][1]+"個");	
								}							
							
							}
							
						}
						else if(total>money)
							MessageBox::Show("你的錢不夠!");

					}			
					else if(notenough_count!=0){
					String^ name;			
					MessageBox::Show("商品庫存不足! 詳情請見明細"); //重新輸入*/
					listBox2->Items->Add("庫存不足之商品(編號/數量)");
					for(int i=0;i<notenough_count;i++)
							{	
															
								if(0<notenough[i][0]&&notenough[i][0]<13)
								{
									try
									{
										
										strSQL ="select name from micro_food where idmicro_food="+notenough[i][0]+"";
										connect->Open();
										cmd = gcnew MySqlCommand(strSQL , connect );
										cmd->ExecuteNonQuery();
										reader = cmd->ExecuteReader();			
										while( reader->Read() )
											name=reader->GetString(0);
										connect->Close();
										delete cmd;
										
									}
									catch( Exception ^e )
									{
										System::Windows::Forms::DialogResult result;
										result = MessageBox::Show( e->ToString() );
										connect->Close();
										delete cmd;
									}
									listBox2->Items->Add(name+" 不足"+notenough[i][1]+"個");	
								}
								
								else if(12<notenough[i][0]&&notenough[i][0]<24)
								{
								
									try
									{
										
										strSQL ="select name from food where idfood="+notenough[i][0]+"";
										connect->Open();
										cmd = gcnew MySqlCommand(strSQL , connect );
										cmd->ExecuteNonQuery();
										reader = cmd->ExecuteReader();			
										while( reader->Read() )
											name=reader->GetString(0);
										connect->Close();
										delete cmd;
									}
									catch( Exception ^e )
									{
										System::Windows::Forms::DialogResult result;
										result = MessageBox::Show( e->ToString() );
										connect->Close();
										delete cmd;
									}
									listBox2->Items->Add(name+" 不足"+notenough[i][1]+"個");	
								}

								else if(23<notenough[i][0]&&notenough[i][0]<37)
								{
						
									try
									{
										
										strSQL ="select name from beverage where idbeverage="+notenough[i][0]+"";
										connect->Open();
										cmd = gcnew MySqlCommand(strSQL , connect );
										cmd->ExecuteNonQuery();
										reader = cmd->ExecuteReader();			
										while( reader->Read() )
											name=reader->GetString(0);
										connect->Close();
										delete cmd;
									}
									catch( Exception ^e )
									{
										System::Windows::Forms::DialogResult result;
										result = MessageBox::Show( e->ToString() );
										connect->Close();
										delete cmd;
									}
									listBox2->Items->Add(name+" 不足"+notenough[i][1]+"個");	
								}

								else if(36<notenough[i][0]&&notenough[i][0]<41)
								{
				
									try
									{
										
										strSQL ="select name from micro_beverage where idmicro_beverage="+notenough[i][0]+"";
										connect->Open();
										cmd = gcnew MySqlCommand(strSQL , connect );
										cmd->ExecuteNonQuery();
										reader = cmd->ExecuteReader();			
										while( reader->Read() )
											name=reader->GetString(0);
										connect->Close();
										delete cmd;
									}
									catch( Exception ^e )
									{
										System::Windows::Forms::DialogResult result;
										result = MessageBox::Show( e->ToString() );
										connect->Close();
										delete cmd;
									}
									listBox2->Items->Add(name+" 不足"+notenough[i][1]+"個");	
								}
					
					}}
				delete n; 
				delete amount; 
				delete notenough;
				delete enough; 
		 }
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			try
			{
				strSQL ="update food set amount=10 ";
				connect->Open();
				cmd = gcnew MySqlCommand(strSQL , connect );
				cmd->ExecuteNonQuery();
				connect->Close();
				delete cmd;
			}
			catch( Exception ^e )
			{
			System::Windows::Forms::DialogResult result;
			result = MessageBox::Show( e->ToString() );
			connect->Close();
			delete cmd;
			}
			try
			{
				strSQL ="update micro_food set amount=10 ";
				connect->Open();
				cmd = gcnew MySqlCommand(strSQL , connect );
				cmd->ExecuteNonQuery();
				connect->Close();
				delete cmd;
			}
			catch( Exception ^e )
			{
			System::Windows::Forms::DialogResult result;
			result = MessageBox::Show( e->ToString() );
			connect->Close();
			delete cmd;
			}
			try
			{
				strSQL ="update beverage set amount=10 ";
				connect->Open();
				cmd = gcnew MySqlCommand(strSQL , connect );
				cmd->ExecuteNonQuery();
				connect->Close();
				delete cmd;
			}
			catch( Exception ^e )
			{
			System::Windows::Forms::DialogResult result;
			result = MessageBox::Show( e->ToString() );
			connect->Close();
			delete cmd;
			}
			try
			{
				strSQL ="update micro_beverage set amount=10 ";
				connect->Open();
				cmd = gcnew MySqlCommand(strSQL , connect );
				cmd->ExecuteNonQuery();
				connect->Close();
				delete cmd;
			}
			catch( Exception ^e )
			{
			System::Windows::Forms::DialogResult result;
			result = MessageBox::Show( e->ToString() );
			connect->Close();
			delete cmd;
			}


		 }
};
}

