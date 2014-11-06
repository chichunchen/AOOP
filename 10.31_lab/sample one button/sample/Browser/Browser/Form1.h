#pragma once

namespace ChartClient {

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

	private: System::Windows::Forms::Button^  button3;

	private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// 設計工具所需的變數。
		/// </summary>



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
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"新細明體", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(136)));
			this->label1->Location = System::Drawing::Point(13, 411);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(56, 16);
			this->label1->TabIndex = 0;
			this->label1->Text = L"狀態列";
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(16, 52);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(415, 340);
			this->richTextBox1->TabIndex = 2;
			this->richTextBox1->Text = L"";
			// 
			// richTextBox2
			// 
			this->richTextBox2->Location = System::Drawing::Point(490, 52);
			this->richTextBox2->Name = L"richTextBox2";
			this->richTextBox2->Size = System::Drawing::Size(307, 340);
			this->richTextBox2->TabIndex = 6;
			this->richTextBox2->Text = L"";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(309, 10);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(91, 36);
			this->button3->TabIndex = 12;
			this->button3->Text = L"Enter";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(809, 462);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->richTextBox2);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->label1);
			this->Name = L"Form1";
			this->Text = L"Browser";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
		}
	


private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			 //建立連線
			 Socket ^mySocket;
			 mySocket = gcnew Socket(AddressFamily::InterNetwork, SocketType::Stream, ProtocolType::Tcp);
			 try
			{
				mySocket->Connect("web.it.nctu.edu.tw", 80); 
			}
			catch (Exception ^ee)
			{
				label1->Text = "主機無法連接 !! " + ee->Message;
				return;
			}

		    if (mySocket->Connected){
				//傳送指令
				String ^strTest = "GET /~u0110777/main.html HTTP/1.1\r\nHost: web.it.nctu.edu.tw\r\nConnection: Close\r\n\r\n";
				array<Byte>^bytesSent = Encoding::ASCII->GetBytes( strTest );
				mySocket->Send(bytesSent);
				//接收資料
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
			//Regular Expression
				File ^file;
				file->WriteAllText("aoop_lab3.html",richTextBox1->Text);
				Regex ^myRegex;
				myRegex = gcnew Regex("<title>(.+)</title>");
				Match ^mc;
				mc = myRegex->Match(richTextBox1->Text);
                richTextBox2->Text += mc->Groups[1]->Value;
			 
		 }

};
}

