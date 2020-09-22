#pragma once

namespace AirlineTicketingSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for TicketingSystem
	/// </summary>
	public ref class TicketingSystem : public System::Windows::Forms::Form
	{
	public:
		TicketingSystem(void)
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
		~TicketingSystem()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnAddPassenger;
	protected:
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ btnPassengerProfile;
	private: System::Windows::Forms::ListView^ listView1;

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
			this->btnAddPassenger = (gcnew System::Windows::Forms::Button());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btnPassengerProfile = (gcnew System::Windows::Forms::Button());
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->SuspendLayout();
			// 
			// btnAddPassenger
			// 
			this->btnAddPassenger->Location = System::Drawing::Point(604, 22);
			this->btnAddPassenger->Name = L"btnAddPassenger";
			this->btnAddPassenger->Size = System::Drawing::Size(117, 35);
			this->btnAddPassenger->TabIndex = 0;
			this->btnAddPassenger->Text = L"Add Passenger";
			this->btnAddPassenger->UseVisualStyleBackColor = true;
			this->btnAddPassenger->Click += gcnew System::EventHandler(this, &TicketingSystem::btnAddPassenger_Click);
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Location = System::Drawing::Point(66, 22);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(200, 22);
			this->dateTimePicker1->TabIndex = 2;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 22);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(38, 17);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Date";
			// 
			// btnPassengerProfile
			// 
			this->btnPassengerProfile->Location = System::Drawing::Point(604, 80);
			this->btnPassengerProfile->Name = L"btnPassengerProfile";
			this->btnPassengerProfile->Size = System::Drawing::Size(117, 42);
			this->btnPassengerProfile->TabIndex = 4;
			this->btnPassengerProfile->Text = L"Passenger Profile";
			this->btnPassengerProfile->UseVisualStyleBackColor = true;
			// 
			// listView1
			// 
			this->listView1->HideSelection = false;
			this->listView1->Location = System::Drawing::Point(15, 80);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(540, 435);
			this->listView1->TabIndex = 5;
			this->listView1->UseCompatibleStateImageBehavior = false;
			// 
			// TicketingSystem
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(772, 549);
			this->Controls->Add(this->listView1);
			this->Controls->Add(this->btnPassengerProfile);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->btnAddPassenger);
			this->Name = L"TicketingSystem";
			this->Text = L"TicketingSystem";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnAddPassenger_Click(System::Object^ sender, System::EventArgs^ e) {
	}

};
}
