#pragma once
#include "AddProfile.h"
namespace AirlineTicketingSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for AddPassenger
	/// </summary>
	public ref class AddPassenger : public System::Windows::Forms::Form
	{
	public:
		AddPassenger(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~AddPassenger()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:



	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::ComboBox^ cboxFrom;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::ComboBox^ cBoxTo;




	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ComboBox^ comboCabin;

	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::ComboBox^ comboBox5;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::ComboBox^ comboBox4;
	private: System::Windows::Forms::ComboBox^ comboBox3;
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::ListView^ listView1;
	private: System::Windows::Forms::Button^ button1;




	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->cboxFrom = (gcnew System::Windows::Forms::ComboBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->cBoxTo = (gcnew System::Windows::Forms::ComboBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->comboCabin = (gcnew System::Windows::Forms::ComboBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->comboBox5 = (gcnew System::Windows::Forms::ComboBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->comboBox4 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(17, 42);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(46, 17);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Origin";
			// 
			// cboxFrom
			// 
			this->cboxFrom->FormattingEnabled = true;
			this->cboxFrom->Location = System::Drawing::Point(69, 39);
			this->cboxFrom->Name = L"cboxFrom";
			this->cboxFrom->Size = System::Drawing::Size(121, 24);
			this->cboxFrom->TabIndex = 5;
			this->cboxFrom->SelectedIndexChanged += gcnew System::EventHandler(this, &AddPassenger::cboxFrom_SelectedIndexChanged);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(196, 42);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(79, 17);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Destination";
			// 
			// cBoxTo
			// 
			this->cBoxTo->FormattingEnabled = true;
			this->cBoxTo->Location = System::Drawing::Point(281, 39);
			this->cBoxTo->Name = L"cBoxTo";
			this->cBoxTo->Size = System::Drawing::Size(121, 24);
			this->cBoxTo->TabIndex = 7;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(18, 437);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 29);
			this->button2->TabIndex = 12;
			this->button2->Text = L"Search ";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(15, 92);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(48, 34);
			this->label1->TabIndex = 13;
			this->label1->Text = L"Cabin \r\nClass";
			// 
			// comboCabin
			// 
			this->comboCabin->FormattingEnabled = true;
			this->comboCabin->Location = System::Drawing::Point(69, 89);
			this->comboCabin->Name = L"comboCabin";
			this->comboCabin->Size = System::Drawing::Size(121, 24);
			this->comboCabin->TabIndex = 14;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label7);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->comboBox5);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->comboBox4);
			this->groupBox1->Controls->Add(this->comboBox3);
			this->groupBox1->Controls->Add(this->comboBox2);
			this->groupBox1->Location = System::Drawing::Point(18, 144);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(410, 118);
			this->groupBox1->TabIndex = 15;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Passengers";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(275, 45);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(95, 17);
			this->label7->TabIndex = 21;
			this->label7->Text = L"Senior Citizen";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(175, 45);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(94, 17);
			this->label6->TabIndex = 20;
			this->label6->Text = L"Infant On Lap";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(94, 45);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(60, 17);
			this->label5->TabIndex = 17;
			this->label5->Text = L"Children";
			// 
			// comboBox5
			// 
			this->comboBox5->FormattingEnabled = true;
			this->comboBox5->Location = System::Drawing::Point(278, 69);
			this->comboBox5->Name = L"comboBox5";
			this->comboBox5->Size = System::Drawing::Size(43, 24);
			this->comboBox5->TabIndex = 19;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(27, 45);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(47, 17);
			this->label2->TabIndex = 16;
			this->label2->Text = L"Adults";
			// 
			// comboBox4
			// 
			this->comboBox4->FormattingEnabled = true;
			this->comboBox4->Location = System::Drawing::Point(178, 69);
			this->comboBox4->Name = L"comboBox4";
			this->comboBox4->Size = System::Drawing::Size(43, 24);
			this->comboBox4->TabIndex = 18;
			// 
			// comboBox3
			// 
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Location = System::Drawing::Point(97, 69);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(43, 24);
			this->comboBox3->TabIndex = 17;
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Location = System::Drawing::Point(32, 69);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(43, 24);
			this->comboBox2->TabIndex = 16;
			// 
			// listView1
			// 
			this->listView1->HideSelection = false;
			this->listView1->Location = System::Drawing::Point(12, 299);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(416, 122);
			this->listView1->TabIndex = 16;
			this->listView1->UseCompatibleStateImageBehavior = false;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(342, 437);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(86, 29);
			this->button1->TabIndex = 11;
			this->button1->Text = L"Continue";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &AddPassenger::button1_Click);
			// 
			// AddPassenger
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(481, 506);
			this->Controls->Add(this->listView1);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->comboCabin);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->cBoxTo);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->cboxFrom);
			this->Controls->Add(this->label3);
			this->Name = L"AddPassenger";
			this->Text = L"AddPassenger";
			this->Load += gcnew System::EventHandler(this, &AddPassenger::AddPassenger_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void cboxFrom_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {

	}
private: System::Void AddPassenger_Load(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	AddProfile^ addProfile = gcnew AddProfile();
	addProfile->Show();
}
};
}
