#pragma once

namespace test {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// e ���K�n
	/// </summary>
	public ref class e : public System::Windows::Forms::Form
	{
	public:
		e(void)
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
		~e()
		{
			if (components)
			{
				delete components;
			}
		}

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
			// e
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 262);
			this->Name = L"e";
			this->Text = L"e";
			this->Load += gcnew System::EventHandler(this, &e::e_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void e_Load(System::Object^  sender, System::EventArgs^  e) {
			 }
	};
}
