#pragma once

namespace learn {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Form1 ���K�n
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: �b���[�J�غc�禡�{���X
			//
		}

	protected:
		/// <summary>
		/// �M������ϥΤ����귽�C
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
		/// �]�p�u��һݪ��ܼơC
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// �����]�p�u��䴩�һݪ���k - �ФŨϥε{���X�s�边
		/// �ק�o�Ӥ�k�����e�C
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

