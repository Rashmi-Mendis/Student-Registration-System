#pragma once

namespace StuRegSystemProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm7
	/// </summary>
	public ref class MyForm7 : public System::Windows::Forms::Form
	{
	public:
		MyForm7(void)
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
		~MyForm7()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label4;
	protected:



	private: System::Windows::Forms::Button^ btnAccountBack;

	private: System::Windows::Forms::Button^ btnAccountUpdate;

	private: System::Windows::Forms::Button^ btnAccountDelete;

	private: System::Windows::Forms::Button^ btnAccountAdd;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;


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
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->btnAccountBack = (gcnew System::Windows::Forms::Button());
			this->btnAccountUpdate = (gcnew System::Windows::Forms::Button());
			this->btnAccountDelete = (gcnew System::Windows::Forms::Button());
			this->btnAccountAdd = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Maiandra GD", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(121, 20);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(243, 72);
			this->label4->TabIndex = 31;
			this->label4->Text = L"Account";
			// 
			// btnAccountBack
			// 
			this->btnAccountBack->Font = (gcnew System::Drawing::Font(L"Raleway", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAccountBack->Location = System::Drawing::Point(245, 470);
			this->btnAccountBack->Name = L"btnAccountBack";
			this->btnAccountBack->Size = System::Drawing::Size(180, 60);
			this->btnAccountBack->TabIndex = 27;
			this->btnAccountBack->Text = L"Back";
			this->btnAccountBack->UseVisualStyleBackColor = true;
			// 
			// btnAccountUpdate
			// 
			this->btnAccountUpdate->Font = (gcnew System::Drawing::Font(L"Raleway", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAccountUpdate->Location = System::Drawing::Point(59, 470);
			this->btnAccountUpdate->Name = L"btnAccountUpdate";
			this->btnAccountUpdate->Size = System::Drawing::Size(180, 60);
			this->btnAccountUpdate->TabIndex = 25;
			this->btnAccountUpdate->Text = L"Update";
			this->btnAccountUpdate->UseVisualStyleBackColor = true;
			// 
			// btnAccountDelete
			// 
			this->btnAccountDelete->Font = (gcnew System::Drawing::Font(L"Raleway", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAccountDelete->Location = System::Drawing::Point(245, 404);
			this->btnAccountDelete->Name = L"btnAccountDelete";
			this->btnAccountDelete->Size = System::Drawing::Size(180, 60);
			this->btnAccountDelete->TabIndex = 24;
			this->btnAccountDelete->Text = L"Delete";
			this->btnAccountDelete->UseVisualStyleBackColor = true;
			// 
			// btnAccountAdd
			// 
			this->btnAccountAdd->Font = (gcnew System::Drawing::Font(L"Raleway", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAccountAdd->Location = System::Drawing::Point(59, 404);
			this->btnAccountAdd->Name = L"btnAccountAdd";
			this->btnAccountAdd->Size = System::Drawing::Size(180, 60);
			this->btnAccountAdd->TabIndex = 26;
			this->btnAccountAdd->Text = L"Add";
			this->btnAccountAdd->UseVisualStyleBackColor = true;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Corbel", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(30, 148);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(50, 29);
			this->label6->TabIndex = 37;
			this->label6->Text = L"NIC";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Corbel", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(30, 274);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(78, 29);
			this->label5->TabIndex = 36;
			this->label5->Text = L"E-mail";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Corbel", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(30, 232);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(94, 29);
			this->label1->TabIndex = 35;
			this->label1->Text = L"Address";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Corbel", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(30, 316);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(170, 29);
			this->label3->TabIndex = 34;
			this->label3->Text = L"Mobile Number";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Corbel", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(30, 190);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(141, 29);
			this->label2->TabIndex = 33;
			this->label2->Text = L"Date of Birth";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Corbel", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(30, 106);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(74, 29);
			this->label7->TabIndex = 32;
			this->label7->Text = L"Name";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Corbel", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(30, 358);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(95, 29);
			this->label8->TabIndex = 38;
			this->label8->Text = L"Position";
			// 
			// MyForm7
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(482, 553);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->btnAccountBack);
			this->Controls->Add(this->btnAccountUpdate);
			this->Controls->Add(this->btnAccountDelete);
			this->Controls->Add(this->btnAccountAdd);
			this->Name = L"MyForm7";
			this->Text = L"Account";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
