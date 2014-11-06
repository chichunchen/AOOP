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
			mySocket = gcnew array <System::Net::Sockets::Socket ^>(5);
			receivedata = gcnew array<System::String ^>(5);
			textBox = gcnew array <System::Windows::Forms::TextBox^>(5);
			textBox[0] = textBox1;
			textBox[1] = textBox2;
			textBox[2] = textBox3;
			textBox[3] = textBox4;
			textBox[4] = textBox5;		   
			myRegex = gcnew Regex("<div>(.+)</div>");
			
			dynamicTextBox = gcnew array <System::Windows::Forms::TextBox^>(5);
			dynamicTextBox[0] = textBox6;
			dynamicTextBox[1] = textBox7;
			dynamicTextBox[2] = textBox8;
			dynamicTextBox[3] = textBox9;
			dynamicTextBox[4] = textBox10;
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
	private: System::Windows::Forms::TextBox^  textBox1;
	int count;

	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::ComponentModel::IContainer^  components;
	private: System::Windows::Forms::Timer^  timer1;
	private: System::ComponentModel::BackgroundWorker^  backgroundWorker1;

	private:
		/// <summary>
		
	private: array<System::ComponentModel::BackgroundWorker^ > ^MyBackground;	//declare BackgroundWorker

		/// </summary>
		int j;	//j = 0
		array <System::Net::Sockets::Socket ^> ^mySocket;
		array <System::String ^> ^receivedata;
		File ^file;
		array <System::Windows::Forms::TextBox^> ^textBox;
		Regex ^myRegex;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::TextBox^  textBox7;
	private: System::Windows::Forms::TextBox^  textBox8;
	private: System::Windows::Forms::TextBox^  textBox9;
	private: System::Windows::Forms::TextBox^  textBox10;
			 Match ^mc;
	private: System::ComponentModel::BackgroundWorker^  backgroundWorker2;
	private: System::ComponentModel::BackgroundWorker^  backgroundWorker3;
	private: System::ComponentModel::BackgroundWorker^  backgroundWorker4;
	private: System::ComponentModel::BackgroundWorker^  backgroundWorker5;
			 array <System::Windows::Forms::TextBox^> ^dynamicTextBox;		//declare dynamicTextbox array

#pragma region Windows Form Designer generated code
		/// <summary>
		/// 此為設計工具支援所需的方法 - 請勿使用程式碼編輯器
		/// 修改這個方法的內容。
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->backgroundWorker1 = (gcnew System::ComponentModel::BackgroundWorker());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->backgroundWorker2 = (gcnew System::ComponentModel::BackgroundWorker());
			this->backgroundWorker3 = (gcnew System::ComponentModel::BackgroundWorker());
			this->backgroundWorker4 = (gcnew System::ComponentModel::BackgroundWorker());
			this->backgroundWorker5 = (gcnew System::ComponentModel::BackgroundWorker());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"新細明體", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(136)));
			this->label1->Location = System::Drawing::Point(189, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(72, 16);
			this->label1->TabIndex = 0;
			this->label1->Text = L"開始連線";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(12, 316);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(210, 22);
			this->textBox1->TabIndex = 1;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(72, 81);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(91, 36);
			this->button2->TabIndex = 5;
			this->button2->Text = L"連線";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(12, 272);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(210, 22);
			this->textBox2->TabIndex = 6;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(12, 228);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(210, 22);
			this->textBox3->TabIndex = 7;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(12, 181);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(210, 22);
			this->textBox4->TabIndex = 8;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(12, 134);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(210, 22);
			this->textBox5->TabIndex = 9;
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Tick += gcnew System::EventHandler(this, &Form1::timer1_Tick);
			// 
			// backgroundWorker1
			// 
			this->backgroundWorker1->DoWork += gcnew System::ComponentModel::DoWorkEventHandler(this, &Form1::backgroundWorker1_DoWork);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(305, 81);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(85, 36);
			this->button1->TabIndex = 10;
			this->button1->Text = L"連線";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(259, 134);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(190, 22);
			this->textBox6->TabIndex = 11;
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(259, 181);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(190, 22);
			this->textBox7->TabIndex = 12;
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(259, 228);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(190, 22);
			this->textBox8->TabIndex = 13;
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(259, 272);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(190, 22);
			this->textBox9->TabIndex = 14;
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(259, 316);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(190, 22);
			this->textBox10->TabIndex = 15;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(461, 366);
			this->Controls->Add(this->textBox10);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Name = L"Form1";
			this->Text = L"Client";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
		}
	private: System::Void backgroundWorker1_DoWork (System::Object^  sender, System::ComponentModel::DoWorkEventArgs^  e) {
			int i = count++;
			mySocket[i] = gcnew Socket(AddressFamily::InterNetwork, SocketType::Stream, ProtocolType::Tcp);
			
			try
			{
				mySocket[i]->Connect("stunion.nctu.edu.tw", 80); 
			}
			catch (Exception ^ee)
			{
				receivedata[i] = "主機無法連接 !! " + ee->Message;
				return;
			}
		    if (mySocket[i]->Connected){
				//send command
				String ^strTest = "GET /AOOP/aoop_lab4.php HTTP/1.1\r\nHost: 140.113.150.12\r\nConnection: Close\r\n\r\n";
				array<Byte>^bytesSent = Encoding::ASCII->GetBytes( strTest );
				mySocket[i]->Send(bytesSent);
				//receive
				receivedata[i] = nullptr;
				int dataLength = 0;
				array <Byte> ^myBufferBytes=gcnew array <Byte>(256);
				do
				{
					dataLength  = mySocket[i]->Receive(myBufferBytes);
					receivedata[i] += Encoding::ASCII->GetString(myBufferBytes, 0, dataLength);
				}while( dataLength > 0 );		
			 	//write
				file->WriteAllText("aoop_lab"+i+".html",receivedata[i]);
				
				}
		 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {		//left buttom
		  label1->Text = "開始連線";

		  for(int i=0;i<5;i++)
          {
	        mySocket[i] = gcnew Socket(AddressFamily::InterNetwork, SocketType::Stream, ProtocolType::Tcp);
			 try
			{
				mySocket[i]->Connect("stunion.nctu.edu.tw", 80); 
			}
			catch (Exception ^ee)
			{
				receivedata[i] = "主機無法連接 !! " + ee->Message;
				return;
			}
		    if (mySocket[i]->Connected){
				//send command
				String ^strTest = "GET /AOOP/aoop_lab4.php HTTP/1.1\r\nHost: 140.113.150.12\r\nConnection: Close\r\n\r\n";
				array<Byte>^bytesSent = Encoding::ASCII->GetBytes( strTest );
				mySocket[i]->Send(bytesSent);
				//receive
				receivedata[i] = nullptr;
				int dataLength = 0;
				array <Byte> ^myBufferBytes=gcnew array <Byte>(256);
				do
				{
					dataLength  = mySocket[i]->Receive(myBufferBytes);
					receivedata[i] += Encoding::ASCII->GetString(myBufferBytes, 0, dataLength);
				}while( dataLength > 0 );		
			 	//write
				file->WriteAllText("aoop_lab"+i+".html",receivedata[i]);
				mc = myRegex->Match(receivedata[i]);
                textBox[i]->Text = mc->Groups[1]->Value;
				}
         }
}



private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
			 for (int i = 0; i < 5; i++)
			 {
				 if (receivedata[i])
				 {
					mc = myRegex->Match(receivedata[i]);
					dynamicTextBox[i]->Text = mc->Groups[1]->Value;
				 }
			 }
		 }


private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {		//right buttom

			 MyBackground = gcnew array <System::ComponentModel::BackgroundWorker^>(5); 
			 MyBackground[0] = (gcnew System::ComponentModel::BackgroundWorker());
			 MyBackground[1] =  (gcnew System::ComponentModel::BackgroundWorker());
			 MyBackground[2] =  (gcnew System::ComponentModel::BackgroundWorker());
			 MyBackground[3] =  (gcnew System::ComponentModel::BackgroundWorker());
			 MyBackground[4] =  (gcnew System::ComponentModel::BackgroundWorker());
			 for(int i=0; i<5; i++)
				this->MyBackground[i]->DoWork += gcnew System::ComponentModel::DoWorkEventHandler(this, &Form1::backgroundWorker1_DoWork);		
			 count = 0;
			 for(int i=0; i<5; i++)
				MyBackground[i]->RunWorkerAsync();
		 }
};
}

