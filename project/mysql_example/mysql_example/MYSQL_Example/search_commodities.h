#pragma once
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace System::IO;
using namespace MySql::Data::MySqlClient;  

#include "commodity.h"

namespace MYSQL_Example {

	/// <summary>
	/// search_commodities ���K�n
	/// </summary>
	public ref class search_commodities : public System::Windows::Forms::Form
	{
	public:
		search_commodities(void)
		{
			InitializeComponent();
			//
			//TODO: �b���[�J�غc�禡�{���X
			//
			label1->Visible = false;
		}

	protected:
		/// <summary>
		/// �M������ϥΤ����귽�C
		/// </summary>
		~search_commodities()
		{
			if (components)
			{
				delete components;
			}
		}

	protected: 
	protected: 
	private: System::Windows::Forms::Label^  labelSearch;
	private: System::Windows::Forms::ComboBox^  comboBoxType;



	private: System::Windows::Forms::DataGridView^  dataGridViewInfo;


	private:
		/// <summary>
		/// �]�p�u��һݪ��ܼơC
		/// </summary>
		commodity Commodity;

		System::ComponentModel::Container ^components;
	public:
		MySqlConnection ^conDataBase;   //------------------------
		MySqlCommand ^cmdDataBase;          //------------------------
		MySqlDataReader ^myReader;    //------------------------
		String^ searchCommand;
	private: System::Windows::Forms::ComboBox^  comboBoxOrder;
	private: System::Windows::Forms::Label^  label1;
	public: 

	private: System::Windows::Forms::Button^  button1;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// �����]�p�u��䴩�һݪ���k - �ФŨϥε{���X�s�边
		/// �ק�o�Ӥ�k�����e�C
		/// </summary>
		void InitializeComponent(void)
		{
			this->labelSearch = (gcnew System::Windows::Forms::Label());
			this->comboBoxType = (gcnew System::Windows::Forms::ComboBox());
			this->dataGridViewInfo = (gcnew System::Windows::Forms::DataGridView());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->comboBoxOrder = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridViewInfo))->BeginInit();
			this->SuspendLayout();
			// 
			// labelSearch
			// 
			this->labelSearch->AutoSize = true;
			this->labelSearch->Location = System::Drawing::Point(243, 23);
			this->labelSearch->Name = L"labelSearch";
			this->labelSearch->Size = System::Drawing::Size(0, 12);
			this->labelSearch->TabIndex = 1;
			// 
			// comboBoxType
			// 
			this->comboBoxType->ForeColor = System::Drawing::SystemColors::Desktop;
			this->comboBoxType->FormattingEnabled = true;
			this->comboBoxType->Items->AddRange(gcnew cli::array< System::Object^  >(4) {L"����", L"����", L"��`�Ϋ~", L"�������x"});
			this->comboBoxType->Location = System::Drawing::Point(108, 12);
			this->comboBoxType->Name = L"comboBoxType";
			this->comboBoxType->Size = System::Drawing::Size(83, 20);
			this->comboBoxType->TabIndex = 2;
			this->comboBoxType->Text = L"����";
			this->comboBoxType->SelectedIndexChanged += gcnew System::EventHandler(this, &search_commodities::comboBoxHow_SelectedIndexChanged);
			// 
			// dataGridViewInfo
			// 
			this->dataGridViewInfo->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridViewInfo->Location = System::Drawing::Point(12, 39);
			this->dataGridViewInfo->Name = L"dataGridViewInfo";
			this->dataGridViewInfo->RowTemplate->Height = 24;
			this->dataGridViewInfo->Size = System::Drawing::Size(639, 251);
			this->dataGridViewInfo->TabIndex = 4;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(348, 12);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 5;
			this->button1->Text = L"�j�M";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &search_commodities::button1_Click);
			// 
			// comboBoxOrder
			// 
			this->comboBoxOrder->FormattingEnabled = true;
			this->comboBoxOrder->Items->AddRange(gcnew cli::array< System::Object^  >(4) {L"�W��", L"���滼�W", L"���滼��", L"�ƶq"});
			this->comboBoxOrder->Location = System::Drawing::Point(209, 13);
			this->comboBoxOrder->Name = L"comboBoxOrder";
			this->comboBoxOrder->Size = System::Drawing::Size(121, 20);
			this->comboBoxOrder->TabIndex = 3;
			this->comboBoxOrder->Text = L"�ӫ~�Ƨ�";
			this->comboBoxOrder->SelectedIndexChanged += gcnew System::EventHandler(this, &search_commodities::comboBoxOrder_SelectedIndexChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"�L�n������", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(136)));
			this->label1->ForeColor = System::Drawing::Color::SaddleBrown;
			this->label1->Location = System::Drawing::Point(205, 11);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(54, 20);
			this->label1->TabIndex = 6;
			this->label1->Text = L"label1";
			// 
			// search_commodities
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(663, 302);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dataGridViewInfo);
			this->Controls->Add(this->comboBoxOrder);
			this->Controls->Add(this->comboBoxType);
			this->Controls->Add(this->labelSearch);
			this->Name = L"search_commodities";
			this->Text = L"�ӫ~�d��";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridViewInfo))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void comboBoxHow_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
				 searchCommand = nullptr;
				 comboBoxOrder->Visible = true;
				 label1->Visible = false;
				 if(comboBoxType->Text == "����"){
					 searchCommand = "select id, name, content, number, price, time, producer, weight, Kcal, temperature from convenience_store.food";
				 }else if(comboBoxType->Text == "����"){
					 searchCommand = "select id, name, capacity, number, price, time, producer from convenience_store.drink";
				 }else if(comboBoxType->Text == "��`�Ϋ~"){
				     searchCommand = "select id, name, content, number, price, time, producer from convenience_store.daily_necessities";
				 }else if(comboBoxType->Text == "�������x"){
					  searchCommand = "select id, name, number, price, issue_date, author from convenience_store.book";
				 }

			 }
private: System::Void comboBoxOrder_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			 if(comboBoxOrder->Text == "�W�ٱƧ�") {
				searchCommand = searchCommand + " order by id";
				label1->Text = "�W�ٱƧ�";
			 }
			 else if(comboBoxOrder->Text == "���滼�W"){
				searchCommand = searchCommand + " order by price";
				label1->Text = "���滼�W�Ƨ�";
			 }
			 else if(comboBoxOrder->Text == "���滼��"){
				searchCommand = searchCommand + " order by price desc";
				label1->Text = "���滼��Ƨ�";
			 }else if(comboBoxOrder->Text == "�ƶq"){
				searchCommand = searchCommand + " order by number";
				label1->Text = "�ƶq���W�Ƨ�";
			 }
			 comboBoxOrder->Visible = false;
			 label1->Visible = true;
		 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			   
			    String^ constring="Network Address=127.0.0.1;"+"Persist Security Info=no;"+
						  "User Name=root;"+"Password=123456;";
			conDataBase=gcnew MySqlConnection(constring);
			cmdDataBase=gcnew MySqlCommand(searchCommand+";", conDataBase);

			try{
				MySqlDataAdapter ^ sda = gcnew MySqlDataAdapter();
				sda->SelectCommand = cmdDataBase;
				DataTable^ dbdataset = gcnew DataTable();
				sda->Fill(dbdataset);
				BindingSource^ bSource = gcnew BindingSource();

				bSource->DataSource = dbdataset;
				dataGridViewInfo->DataSource = bSource;
				//sda->Update(dbdataset);

			}catch(Exception^ex){
				MessageBox::Show(ex->Message);
			}

		 }

};
}
