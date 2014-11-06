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
			//String^ myString;
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
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::RichTextBox^  richTextBox1;

	protected: 

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(46, 42);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(81, 12);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Server Address: ";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(46, 76);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(47, 12);
			this->label2->TabIndex = 1;
			this->label2->Text = L"User ID: ";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(46, 114);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(54, 12);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Password: ";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(133, 39);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(105, 22);
			this->textBox1->TabIndex = 3;
			this->textBox1->Text = L"127.0.0.1";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(133, 76);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(105, 22);
			this->textBox2->TabIndex = 4;
			this->textBox2->Text = L"root";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(133, 114);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(105, 22);
			this->textBox3->TabIndex = 5;
			this->textBox3->Text = L"123456";
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &Form1::textBox3_TextChanged);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(133, 142);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(105, 23);
			this->button1->TabIndex = 6;
			this->button1->Text = L"Connect";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(46, 186);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(60, 12);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Command: ";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(133, 186);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(105, 22);
			this->textBox4->TabIndex = 8;
			this->textBox4->Text = L"show databases;";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(133, 214);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(105, 23);
			this->button2->TabIndex = 9;
			this->button2->Text = L"Send";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(264, 39);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 20);
			this->comboBox1->TabIndex = 10;
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(264, 73);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(152, 88);
			this->richTextBox1->TabIndex = 11;
			this->richTextBox1->Text = L"";
			this->richTextBox1->TextChanged += gcnew System::EventHandler(this, &Form1::richTextBox1_TextChanged);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(507, 273);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

public: 
			MySqlConnection ^connect;   //------------------------
			MySqlCommand ^cmd;          //------------------------
			MySqlDataReader ^reader;    //------------------------
			
			String ^strSQL;//used to input the MySQL message----------------
			String ^password;//used to input the password-------------------
			String ^userID;//used to input the server ID--------------------
			String ^server;//used to input the server address---------------
	
private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) 
		 {
			button1->Visible = true;
			connect = gcnew MySqlConnection();     //------------------------
			cmd = gcnew MySqlCommand();            //-------------------------
		 }

private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) //------------------
		 {
			 String ^connectstr;                  //---------------------------
								 
			 server = textBox1->Text;             //---------------------------
			 userID = textBox2->Text;             //---------------------------
			 password = textBox3->Text;           //---------------------------
        
			 connectstr = "Network Address="+server+";"+"Persist Security Info=no;"+
						  "User Name="+userID+";"+"Password="+password;  //------------------


			 try			
			 { 
				 connect = gcnew MySqlConnection( connectstr );
				 connect->Open(); 
				 System::Windows::Forms::DialogResult result;
				 result = MessageBox::Show("Connect Successfully");
				
				 connect->Close();
		 	 }  
			 catch( Exception ^ex )
			 { 
				 System::Windows::Forms::DialogResult result;
				 result = MessageBox::Show( ex->ToString() );
				 connect->Close();
			 }

			 strSQL = "use mysql;";
			 try
			 {
				 connect->Open();
				 cmd = gcnew MySqlCommand( strSQL , connect );
				 cmd->ExecuteNonQuery();
				 System::Windows::Forms::DialogResult result;
				 result = MessageBox::Show("Send Command Successfully");
               

				 //------------read data from mysql-------------//
			  	 reader = cmd->ExecuteReader();

				 comboBox1->Items->Clear();
				 richTextBox1->Text = "";

				 while( reader->Read() )
				 {
					 comboBox1->Items->Add( reader->GetString(0) ); 
					 richTextBox1->Text += ( reader->GetString(0) ) + Environment::NewLine ;
				 }
			
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

			 strSQL = "use test1;";
			 try
			 {
				 connect->Open();
				 cmd = gcnew MySqlCommand( strSQL , connect );
				 cmd->ExecuteNonQuery();
				 System::Windows::Forms::DialogResult result;
				 result = MessageBox::Show("Send Command Successfully");
               

				 //------------read data from mysql-------------//
			  	 reader = cmd->ExecuteReader();

				 comboBox1->Items->Clear();
				 richTextBox1->Text = "";

				 while( reader->Read() )
				 {
					 comboBox1->Items->Add( reader->GetString(0) ); 
					 richTextBox1->Text += ( reader->GetString(0) ) + Environment::NewLine ;
				 }
			
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

			 strSQL = "select *from word;";
			 try
			 {
				 connect->Open();
				 cmd = gcnew MySqlCommand( strSQL , connect );
				 cmd->ExecuteNonQuery();
				 System::Windows::Forms::DialogResult result;
				 result = MessageBox::Show("Send Command Successfully");
               

				 //------------read data from mysql-------------//
			  	 reader = cmd->ExecuteReader();

				 comboBox1->Items->Clear();
				 richTextBox1->Text = "";

				 while( reader->Read() )
				 {
					 comboBox1->Items->Add( reader->GetString(0) ); 
					 richTextBox1->Text += ( reader->GetString(0) ) + Environment::NewLine ;
				 }
			
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

private: System::Void textBox3_TextChanged(System::Object^  sender, System::EventArgs^  e)
		 {
			 button1->Visible = true;
		 }

private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e)///---------------------------
		 {
			 strSQL = textBox4->Text;
			
			 try
			 {
				 connect->Open();
				 cmd = gcnew MySqlCommand( strSQL , connect );
				 cmd->ExecuteNonQuery();
				 System::Windows::Forms::DialogResult result;
				 result = MessageBox::Show("Send Command Successfully");
               

				 //------------read data from mysql-------------//
			  	 reader = cmd->ExecuteReader();

				 comboBox1->Items->Clear();
				 richTextBox1->Text = "";

				 while( reader->Read() )
				 {
					 comboBox1->Items->Add( reader->GetString(0) ); 
					 richTextBox1->Text += ( reader->GetString(0) ) + Environment::NewLine ;
				 }
			
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

			 strSQL=" insert into word values(\""+textBox4->Text+"\");";
			try
			 {
				 connect->Open();
				 cmd = gcnew MySqlCommand( strSQL , connect );
				 cmd->ExecuteNonQuery();
				 System::Windows::Forms::DialogResult result;
				 result = MessageBox::Show("Send Command Successfully");
               

				 //------------read data from mysql-------------//
			  	 reader = cmd->ExecuteReader();

				 comboBox1->Items->Clear();
				 richTextBox1->Text = "";

				 while( reader->Read() )
				 {
					 comboBox1->Items->Add( reader->GetString(0) ); 
					 richTextBox1->Text += ( reader->GetString(0) ) + Environment::NewLine ;
				 }
			
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


private: System::Void richTextBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
};
}

