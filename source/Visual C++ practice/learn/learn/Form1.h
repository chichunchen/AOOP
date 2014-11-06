#pragma once

namespace learn {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

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
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	protected: 
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::Label^  label1;

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
			this->SuspendLayout();
			// 
			// Form1
			// 
			this->ClientSize = System::Drawing::Size(284, 262);
			this->Name = L"Form1";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Click);
			this->ResumeLayout(false);

		}
#pragma endregion


	private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {

			 }
	private: System::Void textBox2_TextChanged(System::Object^  sender, System::EventArgs^  e) {

		 }
	private: System::Void textBox3_TextChanged(System::Object^  sender, System::EventArgs^  e) {

		 }
	private: System::Void textBox4_TextChanged(System::Object^  sender, System::EventArgs^  e) {

		 }
	private: System::Void label1(System::Object^  sender, System::EventArgs^  e) {
		 }
	private: System::Void label2(System::Object^  sender, System::EventArgs^  e) {
		 }

	private: System::Void Form1_Click(System::Object^  sender, System::EventArgs^  e) {
			 float x;
			 double y;
			 unsigned short i;
			 unsigned long j;
			 Random ^myRandom = gcnew Random();
			 
			 x = myRandom->NextDouble();
			 y = myRandom->NextDouble();
			 i = myRandom->Next();
			 j = myRandom->Next();

			 textBox1->Text = Convert::ToString(x);
			 textBox2->Text = Convert::ToString(y);
			 textBox3->Text = Convert::ToString(i);
			 textBox4->Text = j.ToString();
			 }
	};
}

