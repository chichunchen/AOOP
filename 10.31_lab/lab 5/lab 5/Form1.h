#pragma once

namespace lab5 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	using namespace System::Net::Sockets;
	using namespace System::Text;
	using namespace System::Text::RegularExpressions;
	using namespace System::IO;

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
	private: System::Windows::Forms::Label^  label1;
	protected: 
	private: System::Windows::Forms::RichTextBox^  richTextBox1;
	private: System::Windows::Forms::RichTextBox^  richTextBox2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;

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
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->richTextBox2 = (gcnew System::Windows::Forms::RichTextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(37, 365);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(32, 12);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Status";
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(39, 48);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(394, 314);
			this->richTextBox1->TabIndex = 1;
			this->richTextBox1->Text = L"";
			// 
			// richTextBox2
			// 
			this->richTextBox2->Location = System::Drawing::Point(468, 48);
			this->richTextBox2->Name = L"richTextBox2";
			this->richTextBox2->Size = System::Drawing::Size(317, 314);
			this->richTextBox2->TabIndex = 2;
			this->richTextBox2->Text = L"";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(136, 13);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 3;
			this->button1->Text = L"存檔";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(494, 13);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 4;
			this->button2->Text = L"解析";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(817, 399);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->richTextBox2);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->label1);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
				 //建立連線
			 Socket ^mySocket;
			 mySocket = gcnew Socket(AddressFamily::InterNetwork, SocketType::Stream, ProtocolType::Tcp);
			 try
			{
				mySocket->Connect("stunion.nctu.edu.tw", 80); 
			}
			catch (Exception ^ee)
			{
				label1->Text = "主機無法連接 !! " + ee->Message;
				return;
			}
			//傳送指令
		    if (mySocket->Connected){
				String ^strTest = "GET /AOOP/aoop_lab3.html HTTP/1.1\r\nHost: stunion.nctu.edu.tw\r\nConnection: Close\r\n\r\n";
				array<Byte>^bytesSent = Encoding::ASCII->GetBytes( strTest );
				mySocket->Send(bytesSent);
				String ^receivedata = nullptr;
				array <Byte> ^myBufferBytes=gcnew array <Byte>(256);
				int dataLength = 0;
				do
				{
					dataLength  = mySocket->Receive(myBufferBytes);
					receivedata += Encoding::ASCII->GetString(myBufferBytes, 0, dataLength);
					richTextBox1->Text = receivedata;
				}while( dataLength > 0 );		
				mySocket->Close();
			}	
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			  File ^file;
			  file->WriteAllText("aoop_lab3.html",richTextBox1->Text);
			  label1->Text = "Success";
		 }
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			  Regex ^myRegex;
			  myRegex = gcnew Regex("<div align=\"(.+)\"><img src=\"(.+)\"/></div>");

			  Match ^mc;
			  mc = myRegex->Match(richTextBox1->Text);
				
			  while(mc->Success)
			  {
			    	richTextBox2->Text += mc->Groups[1]->Value + "=" + mc->Groups[2]->Value + "\n" ;
					mc=mc->NextMatch();
			  }
		 }
};
}

