#pragma once
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace MySql::Data::MySqlClient;  
using namespace System::Text;
using namespace System::IO;

#include "customer.h"
#include "food.h"
#include "drink.h"
#include "book.h"
#include "daily_necessities.h"

namespace MYSQL_Example {
	
	/// <summary>
	/// store 的摘要
	/// </summary>
	public ref class store : public System::Windows::Forms::Form
	{
	public:
		store(void)
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
		~store()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;

	private: System::Windows::Forms::Button^  button1;
	protected: 

	private:
		/// <summary>
		/// 設計工具所需的變數。
		/// </summary>
		customer Customer;
		String ^name;		// 品名
		int id;
        double price; // 單價
        double number; // 數量
        double subTotal; // 小計
		
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::DataGridView^  dataGridViewOrder;
	private: System::Windows::Forms::DataGridView^  dataGridViewMenu;
	private: System::Windows::Forms::TextBox^  textBoxPrice;
	private: System::Windows::Forms::NumericUpDown^  numericUpDownNumber;
	private: System::Windows::Forms::TextBox^  textBoxSubTotal;
	private: System::Windows::Forms::Button^  buttonAdd;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::TextBox^  textBoxTotal;
	private: System::Windows::Forms::TextBox^  textBoxName;

	private: System::Windows::Forms::Label^  labelCost;
	private: System::Windows::Forms::Label^  labelLeft;
	private: System::Windows::Forms::Label^  labelLeftMoney;
	private: System::Windows::Forms::Label^  labelStartMoney;
	private: System::Windows::Forms::TextBox^  textBoxMoney;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  ColumnID;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column4;
	private: System::Windows::Forms::Label^  labelID;

	private: System::Windows::Forms::TextBox^  textBoxID;
	private: System::Windows::Forms::ComboBox^  comboBox1;

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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->dataGridViewOrder = (gcnew System::Windows::Forms::DataGridView());
			this->ColumnID = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewMenu = (gcnew System::Windows::Forms::DataGridView());
			this->textBoxPrice = (gcnew System::Windows::Forms::TextBox());
			this->numericUpDownNumber = (gcnew System::Windows::Forms::NumericUpDown());
			this->textBoxSubTotal = (gcnew System::Windows::Forms::TextBox());
			this->buttonAdd = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->textBoxTotal = (gcnew System::Windows::Forms::TextBox());
			this->textBoxName = (gcnew System::Windows::Forms::TextBox());
			this->labelCost = (gcnew System::Windows::Forms::Label());
			this->labelLeft = (gcnew System::Windows::Forms::Label());
			this->labelLeftMoney = (gcnew System::Windows::Forms::Label());
			this->labelStartMoney = (gcnew System::Windows::Forms::Label());
			this->textBoxMoney = (gcnew System::Windows::Forms::TextBox());
			this->labelID = (gcnew System::Windows::Forms::Label());
			this->textBoxID = (gcnew System::Windows::Forms::TextBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridViewOrder))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridViewMenu))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDownNumber))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 12);
			this->label1->TabIndex = 0;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(33, 9);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(53, 12);
			this->label2->TabIndex = 1;
			this->label2->Text = L"您共帶了";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(162, 9);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(17, 12);
			this->label3->TabIndex = 2;
			this->label3->Text = L"元";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(185, 4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(45, 23);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Enter";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &store::button1_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->ForeColor = System::Drawing::Color::OrangeRed;
			this->label4->Location = System::Drawing::Point(33, 56);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(188, 12);
			this->label4->TabIndex = 5;
			this->label4->Text = L"商品最低金額為10$ ，請重新輸入~";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(569, 267);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 6;
			this->button2->Text = L"結帳";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &store::button2_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(150, 267);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(0, 12);
			this->label5->TabIndex = 7;
			// 
			// dataGridViewOrder
			// 
			this->dataGridViewOrder->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridViewOrder->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {this->ColumnID, 
				this->Column1, this->Column2, this->Column3, this->Column4});
			this->dataGridViewOrder->Location = System::Drawing::Point(292, 76);
			this->dataGridViewOrder->Name = L"dataGridViewOrder";
			this->dataGridViewOrder->RowTemplate->Height = 24;
			this->dataGridViewOrder->Size = System::Drawing::Size(364, 185);
			this->dataGridViewOrder->TabIndex = 8;
			// 
			// ColumnID
			// 
			this->ColumnID->HeaderText = L"編號";
			this->ColumnID->Name = L"ColumnID";
			this->ColumnID->Width = 28;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"名稱";
			this->Column1->Name = L"Column1";
			this->Column1->Width = 73;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"單價";
			this->Column2->Name = L"Column2";
			this->Column2->Width = 73;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"數量";
			this->Column3->Name = L"Column3";
			this->Column3->Width = 73;
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"小計";
			this->Column4->Name = L"Column4";
			this->Column4->Width = 73;
			// 
			// dataGridViewMenu
			// 
			this->dataGridViewMenu->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridViewMenu->Location = System::Drawing::Point(14, 76);
			this->dataGridViewMenu->Name = L"dataGridViewMenu";
			this->dataGridViewMenu->ReadOnly = true;
			this->dataGridViewMenu->RowTemplate->Height = 24;
			this->dataGridViewMenu->Size = System::Drawing::Size(244, 185);
			this->dataGridViewMenu->TabIndex = 9;
			this->dataGridViewMenu->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &store::dataGridViewMenu_CellClick);
			// 
			// textBoxPrice
			// 
			this->textBoxPrice->Location = System::Drawing::Point(418, 46);
			this->textBoxPrice->Name = L"textBoxPrice";
			this->textBoxPrice->Size = System::Drawing::Size(66, 22);
			this->textBoxPrice->TabIndex = 11;
			// 
			// numericUpDownNumber
			// 
			this->numericUpDownNumber->Location = System::Drawing::Point(504, 46);
			this->numericUpDownNumber->Name = L"numericUpDownNumber";
			this->numericUpDownNumber->Size = System::Drawing::Size(59, 22);
			this->numericUpDownNumber->TabIndex = 12;
			this->numericUpDownNumber->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) {1, 0, 0, 0});
			this->numericUpDownNumber->ValueChanged += gcnew System::EventHandler(this, &store::numericUpDownNumber_ValueChanged);
			// 
			// textBoxSubTotal
			// 
			this->textBoxSubTotal->Location = System::Drawing::Point(579, 45);
			this->textBoxSubTotal->Name = L"textBoxSubTotal";
			this->textBoxSubTotal->Size = System::Drawing::Size(63, 22);
			this->textBoxSubTotal->TabIndex = 13;
			// 
			// buttonAdd
			// 
			this->buttonAdd->Location = System::Drawing::Point(648, 43);
			this->buttonAdd->Name = L"buttonAdd";
			this->buttonAdd->Size = System::Drawing::Size(50, 23);
			this->buttonAdd->TabIndex = 14;
			this->buttonAdd->Text = L"加入";
			this->buttonAdd->UseVisualStyleBackColor = true;
			this->buttonAdd->Click += gcnew System::EventHandler(this, &store::button4_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(359, 29);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(29, 12);
			this->label6->TabIndex = 15;
			this->label6->Text = L"名稱";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(434, 29);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(29, 12);
			this->label7->TabIndex = 16;
			this->label7->Text = L"單價";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(388, 161);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(0, 12);
			this->label8->TabIndex = 17;
			this->label8->Click += gcnew System::EventHandler(this, &store::label8_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(445, 161);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(0, 12);
			this->label9->TabIndex = 18;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(516, 13);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(0, 12);
			this->label10->TabIndex = 19;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(522, 29);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(29, 12);
			this->label11->TabIndex = 20;
			this->label11->Text = L"數量";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(594, 29);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(29, 12);
			this->label12->TabIndex = 21;
			this->label12->Text = L"小計";
			// 
			// textBoxTotal
			// 
			this->textBoxTotal->Location = System::Drawing::Point(357, 268);
			this->textBoxTotal->Name = L"textBoxTotal";
			this->textBoxTotal->Size = System::Drawing::Size(67, 22);
			this->textBoxTotal->TabIndex = 23;
			// 
			// textBoxName
			// 
			this->textBoxName->Location = System::Drawing::Point(335, 46);
			this->textBoxName->Name = L"textBoxName";
			this->textBoxName->Size = System::Drawing::Size(77, 22);
			this->textBoxName->TabIndex = 24;
			// 
			// labelCost
			// 
			this->labelCost->AutoSize = true;
			this->labelCost->Location = System::Drawing::Point(298, 272);
			this->labelCost->Name = L"labelCost";
			this->labelCost->Size = System::Drawing::Size(53, 12);
			this->labelCost->TabIndex = 25;
			this->labelCost->Text = L"購物金額";
			// 
			// labelLeft
			// 
			this->labelLeft->AutoSize = true;
			this->labelLeft->Location = System::Drawing::Point(12, 272);
			this->labelLeft->Name = L"labelLeft";
			this->labelLeft->Size = System::Drawing::Size(125, 12);
			this->labelLeft->TabIndex = 26;
			this->labelLeft->Text = L"扣除目前點選商品剩餘";
			// 
			// labelLeftMoney
			// 
			this->labelLeftMoney->AutoSize = true;
			this->labelLeftMoney->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(136)));
			this->labelLeftMoney->ForeColor = System::Drawing::Color::SteelBlue;
			this->labelLeftMoney->Location = System::Drawing::Point(147, 268);
			this->labelLeftMoney->Name = L"labelLeftMoney";
			this->labelLeftMoney->Size = System::Drawing::Size(83, 27);
			this->labelLeftMoney->TabIndex = 27;
			this->labelLeftMoney->Text = L"label13";
			// 
			// labelStartMoney
			// 
			this->labelStartMoney->AutoSize = true;
			this->labelStartMoney->Location = System::Drawing::Point(110, 9);
			this->labelStartMoney->Name = L"labelStartMoney";
			this->labelStartMoney->Size = System::Drawing::Size(0, 12);
			this->labelStartMoney->TabIndex = 28;
			// 
			// textBoxMoney
			// 
			this->textBoxMoney->Location = System::Drawing::Point(86, 5);
			this->textBoxMoney->Name = L"textBoxMoney";
			this->textBoxMoney->Size = System::Drawing::Size(70, 22);
			this->textBoxMoney->TabIndex = 29;
			// 
			// labelID
			// 
			this->labelID->AutoSize = true;
			this->labelID->Location = System::Drawing::Point(298, 29);
			this->labelID->Name = L"labelID";
			this->labelID->Size = System::Drawing::Size(29, 12);
			this->labelID->TabIndex = 30;
			this->labelID->Text = L"編號";
			// 
			// textBoxID
			// 
			this->textBoxID->Location = System::Drawing::Point(294, 45);
			this->textBoxID->Name = L"textBoxID";
			this->textBoxID->Size = System::Drawing::Size(35, 22);
			this->textBoxID->TabIndex = 31;
			// 
			// comboBox1
			// 
			this->comboBox1->ForeColor = System::Drawing::SystemColors::WindowFrame;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(4) {L"食物", L"飲料", L"日常用品", L"報章雜誌"});
			this->comboBox1->Location = System::Drawing::Point(35, 33);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(183, 20);
			this->comboBox1->TabIndex = 32;
			this->comboBox1->Text = L"歡迎光臨~  請選擇購物項目";
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &store::comboBox1_SelectedIndexChanged);
			// 
			// store
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(705, 302);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->textBoxID);
			this->Controls->Add(this->labelID);
			this->Controls->Add(this->textBoxMoney);
			this->Controls->Add(this->labelStartMoney);
			this->Controls->Add(this->labelLeftMoney);
			this->Controls->Add(this->labelLeft);
			this->Controls->Add(this->labelCost);
			this->Controls->Add(this->textBoxName);
			this->Controls->Add(this->textBoxTotal);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->buttonAdd);
			this->Controls->Add(this->textBoxSubTotal);
			this->Controls->Add(this->numericUpDownNumber);
			this->Controls->Add(this->textBoxPrice);
			this->Controls->Add(this->dataGridViewMenu);
			this->Controls->Add(this->dataGridViewOrder);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"store";
			this->Text = L"商店";
			this->Load += gcnew System::EventHandler(this, &store::store_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridViewOrder))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridViewMenu))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDownNumber))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	public: 
			MySqlConnection ^conDataBase;   //------------------------
			MySqlCommand ^cmdDataBase;          //------------------------
			MySqlDataReader ^myReader;    //------------------------
			String ^selectedItem;
	
	private: System::Void store_Load(System::Object^  sender, System::EventArgs^  e) {
	
			 label4->Visible = false;
			 labelLeft->Visible = false;
			 labelLeftMoney->Visible = false;
			 labelCost->Visible = false;
			 comboBox1->Visible = false;
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

			 Customer.set_money(int::Parse(textBoxMoney->Text));
			 
			 labelLeftMoney->Text = textBoxMoney->Text;
			 
			 if(Customer.show_money()>=10) {
				 label4->Visible = false;
				 labelLeft->Visible = true;
				 labelCost->Visible = true;
				 labelLeftMoney->Visible = true;
				 comboBox1->Visible = true;
			 }else	 {
				label4->Visible = true;
				labelLeft->Visible = false;
				labelCost->Visible = false;
				labelLeftMoney->Visible = false;
				comboBox1->Visible = false;
			 }
			 //讓使用者只能輸入一次價錢
			 button1->Visible = false;
	}
	
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {		//結帳

			 double total = 0.0;
			 
			 for (int i = 0; i < dataGridViewOrder->Rows->Count; i++) {
               total += Convert::ToInt32(dataGridViewOrder->Rows[i]->Cells[4]->Value);
            }
			 Customer.buy(total);

			 //印出交易明細
			 StreamWriter ^printReceipt = gcnew StreamWriter("交易明細.txt");
			 printReceipt->WriteLine("項目\t名稱\t\t價格\t數量\t小計\r\n");
			 for(int i = 0; i < dataGridViewOrder->Rows->Count; i++) {
					printReceipt->WriteLine((i+1)+".\t"+
											dataGridViewOrder->Rows[i]->Cells[1]->Value + "\t" +
											dataGridViewOrder->Rows[i]->Cells[2]->Value + "\t" +
											dataGridViewOrder->Rows[i]->Cells[3]->Value + "\t" +
											dataGridViewOrder->Rows[i]->Cells[4]->Value + "\t" );
					printReceipt->WriteLine("\r\n");
			 }
			 printReceipt->WriteLine("共花費: " + textBoxTotal->Text + "\r\n您還剩: " + labelLeftMoney->Text);
			 printReceipt->Close();
			 
			 //Update資料庫內的商品數量
			 String ^strSQL;
			 for (int i = 0; i < dataGridViewOrder->Rows->Count; i++) {
				     try
					{
						strSQL ="update convenience_store." + selectedItem + " set number=number-" + Convert::ToInt32(dataGridViewOrder->Rows[i]->Cells[3]->Value)+" where id="+Convert::ToInt32(dataGridViewOrder->Rows[i]->Cells[0]->Value)+";";	 
						conDataBase->Open();
						cmdDataBase = gcnew MySqlCommand(strSQL , conDataBase );
						cmdDataBase->ExecuteNonQuery();
						conDataBase->Close();
						delete cmdDataBase;
					}
					catch( Exception ^e )
					{
						System::Windows::Forms::DialogResult result;
						result = MessageBox::Show( e->ToString() );
						conDataBase->Close();
						delete cmdDataBase;
					}					
            }

			 //離開商店
			 this->Close();
		 }
private: System::Void label8_Click(System::Object^  sender, System::EventArgs^  e) {
		 }

private: System::Void dataGridViewMenu_CellClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {

			  // 選取某項目，將該項目的品名價格放入待購項目中。
            if (dataGridViewMenu->Rows[e->RowIndex]->Cells[1]->Value == nullptr)
                return;
			textBoxID->Text = dataGridViewMenu->Rows[e->RowIndex]->Cells[0]->Value->ToString();
			textBoxName->Text = dataGridViewMenu->Rows[e->RowIndex]->Cells[1]->Value->ToString();
            textBoxPrice->Text = dataGridViewMenu->Rows[e->RowIndex]->Cells[2]->Value->ToString();
			textBoxSubTotal->Text = dataGridViewMenu->Rows[e->RowIndex]->Cells[2]->Value->ToString();	
		 }

private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {		//buttonAdd
			 //計算小計
			 id = Convert::ToInt32(textBoxID->Text);
			 name = textBoxName->Text;
			 price = double::Parse(textBoxPrice->Text);
             number = (double)numericUpDownNumber->Value;
             subTotal = price * number; // 小計 = 價格 * 數量
             textBoxSubTotal->Text = Convert::ToString(subTotal);

			 //檢查是否有錢購買
			 double checkEnough = 0.0;
			 for (int i = 0; i < dataGridViewOrder->Rows->Count; i++) {
               checkEnough += Convert::ToInt32(dataGridViewOrder->Rows[i]->Cells[4]->Value);
            }

			if((Customer.show_money()-checkEnough-price)>=0) {
				//將想買商品顯示在訂單上
				dataGridViewOrder->Rows->Add ( id, name, price, number, subTotal ); 
            
				 //計算總價
				 double total = 0.0;
			 
				for (int i = 0; i < dataGridViewOrder->Rows->Count; i++) {
					total += Convert::ToInt32(dataGridViewOrder->Rows[i]->Cells[4]->Value);
				}
				textBoxTotal->Text = Convert::ToString(total);

				//計算顧客帶的錢減去總價
				labelLeftMoney->Text = Convert::ToString(Customer.show_money()-total);
				//數量還原為初始值1
				numericUpDownNumber->Value = 1;
			 }
			 else MessageBox::Show("您的金錢不足以買點選之商品~");
		 }
private: System::Void numericUpDownNumber_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
			 id = Convert::ToInt32(textBoxID->Text);
			 name = textBoxName->Text;
			 price = double::Parse(textBoxPrice->Text);
             number = (double)numericUpDownNumber->Value;
             subTotal = price * number;			// 小計 = 價格 * 數量
             textBoxSubTotal->Text = Convert::ToString(subTotal);
		 }

private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			 String ^a;
			 a = (String^)comboBox1->SelectedItem;
			 if(a=="食物") selectedItem = "food";
			 else if(a=="飲料") selectedItem = "drink";
			 else if(a=="日常用品") selectedItem = "daily_necessities";
			 else if(a=="報章雜誌") selectedItem = "book";

			 String^ constring="Network Address=127.0.0.1;"+"Persist Security Info=no;"+
						  "User Name=root;"+"Password=123456;";
			conDataBase=gcnew MySqlConnection(constring);
			cmdDataBase=gcnew MySqlCommand("select id,name,price from convenience_store."+ selectedItem + ";",conDataBase);

			try{
				MySqlDataAdapter ^ sda = gcnew MySqlDataAdapter();
				sda->SelectCommand = cmdDataBase;
				DataTable^ dbdataset = gcnew DataTable();
				sda->Fill(dbdataset);
				BindingSource^ bSource = gcnew BindingSource();

				bSource->DataSource = dbdataset;
				dataGridViewMenu->DataSource = bSource;
				//sda->Update(dbdataset);

			}catch(Exception^ex){
				MessageBox::Show(ex->Message);
			}
			
			//resize the columns
			dataGridViewMenu->Columns[0]->Width = 30;
			dataGridViewMenu->Columns[1]->Width = 75;
			dataGridViewMenu->Columns[2]->Width = 75;
		 }
};
}
