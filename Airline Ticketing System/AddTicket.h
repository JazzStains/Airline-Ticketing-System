#pragma once

namespace AirlineTicketingSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for AddTicket
	/// </summary>
	public ref class AddTicket : public System::Windows::Forms::Form
	{
	public:
		AddTicket(void)
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
		~AddTicket()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ComboBox^ comboCabin;
	protected:
	private: System::Windows::Forms::ComboBox^ cBoxTo;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::ComboBox^ cboxFrom;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;

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
			this->comboCabin = (gcnew System::Windows::Forms::ComboBox());
			this->cBoxTo = (gcnew System::Windows::Forms::ComboBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->cboxFrom = (gcnew System::Windows::Forms::ComboBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// comboCabin
			// 
			this->comboCabin->FormattingEnabled = true;
			this->comboCabin->Location = System::Drawing::Point(12, 126);
			this->comboCabin->Name = L"comboCabin";
			this->comboCabin->Size = System::Drawing::Size(121, 24);
			this->comboCabin->TabIndex = 20;
			// 
			// cBoxTo
			// 
			this->cBoxTo->FormattingEnabled = true;
			this->cBoxTo->Location = System::Drawing::Point(171, 58);
			this->cBoxTo->Name = L"cBoxTo";
			this->cBoxTo->Size = System::Drawing::Size(121, 24);
			this->cBoxTo->TabIndex = 18;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(168, 29);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(79, 17);
			this->label4->TabIndex = 17;
			this->label4->Text = L"Destination";
			// 
			// cboxFrom
			// 
			this->cboxFrom->FormattingEnabled = true;
			this->cboxFrom->Location = System::Drawing::Point(12, 58);
			this->cboxFrom->Name = L"cboxFrom";
			this->cboxFrom->Size = System::Drawing::Size(121, 24);
			this->cboxFrom->TabIndex = 16;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(12, 29);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(46, 17);
			this->label3->TabIndex = 15;
			this->label3->Text = L"Origin";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(18, 173);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(116, 27);
			this->button1->TabIndex = 21;
			this->button1->Text = L"Search Plane";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 16;
			this->listBox1->Location = System::Drawing::Point(18, 218);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(368, 84);
			this->listBox1->TabIndex = 22;
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(73, 321);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(60, 24);
			this->comboBox1->TabIndex = 23;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(293, 318);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(93, 27);
			this->button2->TabIndex = 25;
			this->button2->Text = L"Add Ticket";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(21, 324);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(37, 17);
			this->label2->TabIndex = 26;
			this->label2->Text = L"Seat";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 106);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(82, 17);
			this->label1->TabIndex = 27;
			this->label1->Text = L"Cabin Class";
			// 
			// AddTicket
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(409, 376);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->comboCabin);
			this->Controls->Add(this->cBoxTo);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->cboxFrom);
			this->Controls->Add(this->label3);
			this->Name = L"AddTicket";
			this->Text = L"AddTicket";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
