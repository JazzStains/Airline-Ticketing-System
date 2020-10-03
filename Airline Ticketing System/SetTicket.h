#pragma once

namespace AirlineTicketingSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for SetTicket
	/// </summary>
	public ref class SetTicket : public System::Windows::Forms::Form
	{
	public:
		SetTicket(void)
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
		~SetTicket()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ lblName;
	private: System::Windows::Forms::Label^ lblPassengerType;

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
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->lblName = (gcnew System::Windows::Forms::Label());
			this->lblPassengerType = (gcnew System::Windows::Forms::Label());
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->comboBox2);
			this->groupBox2->Location = System::Drawing::Point(3, 74);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(200, 100);
			this->groupBox2->TabIndex = 2;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Seat Number";
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Location = System::Drawing::Point(10, 42);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(69, 24);
			this->comboBox2->TabIndex = 3;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(43, 208);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(125, 30);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Set Ticket";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// lblName
			// 
			this->lblName->AutoSize = true;
			this->lblName->Location = System::Drawing::Point(9, 9);
			this->lblName->Name = L"lblName";
			this->lblName->Size = System::Drawing::Size(45, 17);
			this->lblName->TabIndex = 4;
			this->lblName->Text = L"Name";
			// 
			// lblPassengerType
			// 
			this->lblPassengerType->AutoSize = true;
			this->lblPassengerType->Location = System::Drawing::Point(9, 37);
			this->lblPassengerType->Name = L"lblPassengerType";
			this->lblPassengerType->Size = System::Drawing::Size(112, 17);
			this->lblPassengerType->TabIndex = 5;
			this->lblPassengerType->Text = L"Passenger Type";
			// 
			// SetTicket
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(235, 274);
			this->Controls->Add(this->lblPassengerType);
			this->Controls->Add(this->lblName);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->groupBox2);
			this->Name = L"SetTicket";
			this->Text = L"SetTicket";
			this->groupBox2->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
