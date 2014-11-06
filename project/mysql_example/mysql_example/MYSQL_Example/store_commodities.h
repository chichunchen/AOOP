#pragma once
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace MySql::Data::MySqlClient;  

namespace MYSQL_Example {

	/// <summary>
	/// store_commodities 的摘要
	/// </summary>
	public ref class store_commodities : public System::Windows::Forms::Form
	{
	public:
		store_commodities(void)
		{
			InitializeComponent();
			//
			//TODO: 在此加入建構函式程式碼
			//
			connect = gcnew MySqlConnection();     
			 cmd = gcnew MySqlCommand();        

			 String ^connectstr;                  //---------------------------
			 server = "127.0.0.1";             //---------------------------
			 userID = "root";             //---------------------------
			 password = "123456";           //---------------------------
        
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

			 strSQL ="use convenience_store";
			
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
			 //已經連上database
		}

	protected:
		/// <summary>
		/// 清除任何使用中的資源。
		/// </summary>
		~store_commodities()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TrackBar^  trackBar1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::CheckBox^  checkBox1;
	private: System::Windows::Forms::CheckBox^  checkBox2;
	private: System::Windows::Forms::CheckBox^  checkBox3;
	private: System::Windows::Forms::CheckBox^  checkBox4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Button^  button1;
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
			this->trackBar1 = (gcnew System::Windows::Forms::TrackBar());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox4 = (gcnew System::Windows::Forms::CheckBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->trackBar1))->BeginInit();
			this->SuspendLayout();
			// 
			// trackBar1
			// 
			this->trackBar1->LargeChange = 2;
			this->trackBar1->Location = System::Drawing::Point(12, 132);
			this->trackBar1->Maximum = 20;
			this->trackBar1->Minimum = 10;
			this->trackBar1->Name = L"trackBar1";
			this->trackBar1->Size = System::Drawing::Size(240, 45);
			this->trackBar1->TabIndex = 0;
			this->trackBar1->Value = 10;
			this->trackBar1->Scroll += gcnew System::EventHandler(this, &store_commodities::store_commodities_Load);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"新細明體", 12));
			this->label1->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->label1->Location = System::Drawing::Point(35, 189);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(80, 16);
			this->label1->TabIndex = 1;
			this->label1->Text = L"進貨數量: ";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"新細明體", 12));
			this->label2->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->label2->Location = System::Drawing::Point(111, 189);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(46, 16);
			this->label2->TabIndex = 2;
			this->label2->Text = L"label2";
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(38, 61);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(48, 16);
			this->checkBox1->TabIndex = 3;
			this->checkBox1->Text = L"食物";
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Location = System::Drawing::Point(38, 83);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(48, 16);
			this->checkBox2->TabIndex = 4;
			this->checkBox2->Text = L"飲料";
			this->checkBox2->UseVisualStyleBackColor = true;
			// 
			// checkBox3
			// 
			this->checkBox3->AutoSize = true;
			this->checkBox3->Location = System::Drawing::Point(114, 61);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(72, 16);
			this->checkBox3->TabIndex = 5;
			this->checkBox3->Text = L"日常用品";
			this->checkBox3->UseVisualStyleBackColor = true;
			// 
			// checkBox4
			// 
			this->checkBox4->AutoSize = true;
			this->checkBox4->Location = System::Drawing::Point(114, 83);
			this->checkBox4->Name = L"checkBox4";
			this->checkBox4->Size = System::Drawing::Size(72, 16);
			this->checkBox4->TabIndex = 6;
			this->checkBox4->Text = L"報章雜誌";
			this->checkBox4->UseVisualStyleBackColor = true;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"新細明體", 12));
			this->label3->ForeColor = System::Drawing::Color::DarkCyan;
			this->label3->Location = System::Drawing::Point(47, 18);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(160, 16);
			this->label3->TabIndex = 7;
			this->label3->Text = L"請勾選補貨商品種類~";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(163, 187);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(52, 23);
			this->button1->TabIndex = 8;
			this->button1->Text = L"Enter";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &store_commodities::button1_Click);
			// 
			// store_commodities
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(264, 302);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->checkBox4);
			this->Controls->Add(this->checkBox3);
			this->Controls->Add(this->checkBox2);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->trackBar1);
			this->Name = L"store_commodities";
			this->Text = L"補貨系統";
			this->Load += gcnew System::EventHandler(this, &store_commodities::store_commodities_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->trackBar1))->EndInit();
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

	private: System::Void store_commodities_Load(System::Object^  sender, System::EventArgs^  e) {

			 label2->Text = Convert::ToString(trackBar1->Value);
		}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 if(checkBox1->Checked==1) {
					try
					{
						int addstore = Convert::ToInt32(trackBar1->Value);
						strSQL ="update convenience_store.food set number=number+"+(addstore);
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
				 if(checkBox2->Checked==1) {
					try
					{
						int addstore = Convert::ToInt32(trackBar1->Value);
						strSQL ="update convenience_store.drink set number=number+"+(addstore);
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
				 if(checkBox3->Checked==1) {
					try
					{
						int addstore = Convert::ToInt32(trackBar1->Value);
						strSQL ="update convenience_store.daily_necessities set number=number+"+(addstore);
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
				 if(checkBox4->Checked==1) {
					try
					{
						int addstore = Convert::ToInt32(trackBar1->Value);
						strSQL ="update convenience_store.book set number=number+"+(addstore);
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

				 this->Close();

	   }
};
}
