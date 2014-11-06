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
	/// staff ���K�n
	/// </summary>
	public ref class staff : public System::Windows::Forms::Form
	{
	public:
		staff(void)
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
		~staff()
		{
			if (components)
			{
				delete components;
			}
		}

	protected: 

	protected: 

	private: System::Windows::Forms::Button^  buttonAddStaff;

	private: System::Windows::Forms::DataGridView^  dataGridViewStaff;

	private:
		/// <summary>
		/// �]�p�u��һݪ��ܼơC
		/// </summary>

		int start, end;
		int time;
		int wage;
		String^ name;

		System::ComponentModel::Container ^components;

	public:
		MySqlConnection ^conDataBase;   //------------------------
		MySqlCommand ^cmdDataBase;          //------------------------
	private: System::Windows::Forms::DataGridView^  dataGridViewWage;
	public: 

	public: 
	private: System::Windows::Forms::TextBox^  textBoxStart;
	private: System::Windows::Forms::TextBox^  textBoxEnd;
	private: System::Windows::Forms::TextBox^  textBoxName;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column5;
	private: System::Windows::Forms::Button^  buttonOutput;

		MySqlDataReader ^myReader;    //------------------------


#pragma region Windows Form Designer generated code
		/// <summary>
		/// �����]�p�u��䴩�һݪ���k - �ФŨϥε{���X�s�边
		/// �ק�o�Ӥ�k�����e�C
		/// </summary>
		void InitializeComponent(void)
		{
			this->buttonAddStaff = (gcnew System::Windows::Forms::Button());
			this->dataGridViewStaff = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewWage = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->textBoxStart = (gcnew System::Windows::Forms::TextBox());
			this->textBoxEnd = (gcnew System::Windows::Forms::TextBox());
			this->textBoxName = (gcnew System::Windows::Forms::TextBox());
			this->buttonOutput = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridViewStaff))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridViewWage))->BeginInit();
			this->SuspendLayout();
			// 
			// buttonAddStaff
			// 
			this->buttonAddStaff->Location = System::Drawing::Point(327, 11);
			this->buttonAddStaff->Name = L"buttonAddStaff";
			this->buttonAddStaff->Size = System::Drawing::Size(50, 23);
			this->buttonAddStaff->TabIndex = 10;
			this->buttonAddStaff->Text = L"���d";
			this->buttonAddStaff->UseVisualStyleBackColor = true;
			this->buttonAddStaff->Click += gcnew System::EventHandler(this, &staff::buttonAddStaff_Click);
			// 
			// dataGridViewStaff
			// 
			this->dataGridViewStaff->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridViewStaff->Location = System::Drawing::Point(12, 12);
			this->dataGridViewStaff->Name = L"dataGridViewStaff";
			this->dataGridViewStaff->RowTemplate->Height = 24;
			this->dataGridViewStaff->Size = System::Drawing::Size(112, 251);
			this->dataGridViewStaff->TabIndex = 11;
			this->dataGridViewStaff->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &staff::dataGridViewStaff_CellClick);
			// 
			// dataGridViewWage
			// 
			this->dataGridViewWage->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridViewWage->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {this->Column1, 
				this->Column2, this->Column3, this->Column4, this->Column5});
			this->dataGridViewWage->Location = System::Drawing::Point(131, 39);
			this->dataGridViewWage->Name = L"dataGridViewWage";
			this->dataGridViewWage->RowTemplate->Height = 24;
			this->dataGridViewWage->Size = System::Drawing::Size(374, 197);
			this->dataGridViewWage->TabIndex = 14;
			// 
			// Column1
			// 
			this->Column1->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->Column1->HeaderText = L"�m�W";
			this->Column1->Name = L"Column1";
			this->Column1->Width = 54;
			// 
			// Column2
			// 
			this->Column2->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->Column2->HeaderText = L"�}�l�ɶ�";
			this->Column2->Name = L"Column2";
			this->Column2->Width = 78;
			// 
			// Column3
			// 
			this->Column3->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->Column3->HeaderText = L"�����ɶ�";
			this->Column3->Name = L"Column3";
			this->Column3->Width = 78;
			// 
			// Column4
			// 
			this->Column4->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->Column4->HeaderText = L"�`�ɶ�";
			this->Column4->Name = L"Column4";
			this->Column4->Width = 66;
			// 
			// Column5
			// 
			this->Column5->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->Column5->HeaderText = L"�~��";
			this->Column5->Name = L"Column5";
			this->Column5->Width = 54;
			// 
			// textBoxStart
			// 
			this->textBoxStart->ForeColor = System::Drawing::SystemColors::WindowFrame;
			this->textBoxStart->Location = System::Drawing::Point(207, 12);
			this->textBoxStart->Name = L"textBoxStart";
			this->textBoxStart->Size = System::Drawing::Size(54, 22);
			this->textBoxStart->TabIndex = 15;
			this->textBoxStart->Text = L"�}�l�ɶ�";
			// 
			// textBoxEnd
			// 
			this->textBoxEnd->ForeColor = System::Drawing::SystemColors::WindowFrame;
			this->textBoxEnd->Location = System::Drawing::Point(267, 12);
			this->textBoxEnd->Name = L"textBoxEnd";
			this->textBoxEnd->Size = System::Drawing::Size(54, 22);
			this->textBoxEnd->TabIndex = 16;
			this->textBoxEnd->Text = L"�����ɶ�";
			// 
			// textBoxName
			// 
			this->textBoxName->Location = System::Drawing::Point(143, 11);
			this->textBoxName->Name = L"textBoxName";
			this->textBoxName->Size = System::Drawing::Size(58, 22);
			this->textBoxName->TabIndex = 17;
			// 
			// buttonOutput
			// 
			this->buttonOutput->Location = System::Drawing::Point(414, 240);
			this->buttonOutput->Name = L"buttonOutput";
			this->buttonOutput->Size = System::Drawing::Size(75, 23);
			this->buttonOutput->TabIndex = 18;
			this->buttonOutput->Text = L"��Xlog��";
			this->buttonOutput->UseVisualStyleBackColor = true;
			this->buttonOutput->Click += gcnew System::EventHandler(this, &staff::buttonOutput_Click);
			// 
			// staff
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(513, 270);
			this->Controls->Add(this->buttonOutput);
			this->Controls->Add(this->textBoxName);
			this->Controls->Add(this->textBoxEnd);
			this->Controls->Add(this->textBoxStart);
			this->Controls->Add(this->dataGridViewWage);
			this->Controls->Add(this->dataGridViewStaff);
			this->Controls->Add(this->buttonAddStaff);
			this->Name = L"staff";
			this->Text = L"���u���d�t��";
			this->Load += gcnew System::EventHandler(this, &staff::staff_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridViewStaff))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridViewWage))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void comboBoxName_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {

			 }
	private: System::Void staff_Load(System::Object^  sender, System::EventArgs^  e) {
				 String^ constring="Network Address=127.0.0.1;"+"Persist Security Info=no;"+
						  "User Name=root;"+"Password=123456;";
			conDataBase=gcnew MySqlConnection(constring);
			cmdDataBase=gcnew MySqlCommand("select name from convenience_store.staff;",conDataBase);

			try{
				MySqlDataAdapter ^ sda = gcnew MySqlDataAdapter();
				sda->SelectCommand = cmdDataBase;
				DataTable^ dbdataset = gcnew DataTable();
				sda->Fill(dbdataset);
				BindingSource^ bSource = gcnew BindingSource();

				bSource->DataSource = dbdataset;
				dataGridViewStaff->DataSource = bSource;
				//sda->Update(dbdataset);

			}catch(Exception^ex){
				MessageBox::Show(ex->Message);
			}
			dataGridViewStaff->Columns[0]->Width = 70;
			 }
	private: System::Void dataGridViewStaff_CellClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
            if (dataGridViewStaff->Rows[e->RowIndex]->Cells[0]->Value == nullptr)
                return;
			textBoxName->Text = dataGridViewStaff->Rows[e->RowIndex]->Cells[0]->Value->ToString();
			 }
private: System::Void buttonAddStaff_Click(System::Object^  sender, System::EventArgs^  e) {
			 //�p��ɶ��M�~��
			 start = Convert::ToInt32(textBoxStart->Text);
			 end = Convert::ToInt32(textBoxEnd->Text);
			 name = textBoxName->Text;
				
			 if(end >= start) {
				time = end-start;
				wage = time*115;
				dataGridViewWage->Rows->Add(name, start, end, time, wage);
			 }
			 else MessageBox::Show("�ɶ���J���~");
		 }
private: System::Void buttonStaffInfo_Click(System::Object^  sender, System::EventArgs^  e) {

		 }
private: System::Void buttonOutput_Click(System::Object^  sender, System::EventArgs^  e) {
	
			 DateTime^ date = DateTime::Today;
			 String ^staffWageTime = Convert::ToString(date->Date);
			 //staffWageTitle->Replace('/', ' ');

			 //�L�X���u����~��P�ɶ��ӳ����
			 StreamWriter ^printReceipt = gcnew StreamWriter("���u�~��.txt");
			 printReceipt->WriteLine("�m�W\t�}�l\t����\t�`�ɶ�\t�~��\r\n");
			 for(int i = 0; i < dataGridViewWage->Rows->Count; i++) {
					printReceipt->WriteLine(
											dataGridViewWage->Rows[i]->Cells[0]->Value + "\t" +
											dataGridViewWage->Rows[i]->Cells[1]->Value + "\t" +
											dataGridViewWage->Rows[i]->Cells[2]->Value + "\t" +
											dataGridViewWage->Rows[i]->Cells[3]->Value + "\t" +
											dataGridViewWage->Rows[i]->Cells[4]->Value + "\t" );
					printReceipt->WriteLine("\r\n");
			 }
			 printReceipt->WriteLine(staffWageTime);
			 printReceipt->Close();
		 }
};
}
