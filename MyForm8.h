#pragma once

namespace StuRegSystemProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm8
	/// </summary>
	public ref class MyForm8 : public System::Windows::Forms::Form
	{
	public:
		MyForm8(void)
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
		~MyForm8()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label4;

	private: System::Windows::Forms::Button^ btnAccountBack;
	private: System::Windows::Forms::Button^ btnLogout;


	protected:

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
			this->btnLogout = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Maiandra GD", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(6, 53);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(470, 72);
			this->label4->TabIndex = 32;
			this->label4->Text = L"Register Students";
			// 
			// btnAccountBack
			// 
			this->btnAccountBack->Font = (gcnew System::Drawing::Font(L"Raleway", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAccountBack->Location = System::Drawing::Point(243, 451);
			this->btnAccountBack->Name = L"btnAccountBack";
			this->btnAccountBack->Size = System::Drawing::Size(180, 60);
			this->btnAccountBack->TabIndex = 36;
			this->btnAccountBack->Text = L"Back";
			this->btnAccountBack->UseVisualStyleBackColor = true;
			//this->btnAccountBack->Click += gcnew System::EventHandler(this, &MyForm8::btnAccountBack_Click);
			// 
			// btnLogout
			// 
			this->btnLogout->Font = (gcnew System::Drawing::Font(L"Raleway", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnLogout->Location = System::Drawing::Point(57, 451);
			this->btnLogout->Name = L"btnLogout";
			this->btnLogout->Size = System::Drawing::Size(180, 60);
			this->btnLogout->TabIndex = 34;
			this->btnLogout->Text = L"Logout";
			this->btnLogout->UseVisualStyleBackColor = true;
			//this->btnLogout->Click += gcnew System::EventHandler(this, &MyForm8::btnAccountUpdate_Click);
			// 
			// MyForm8
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(482, 553);
			this->Controls->Add(this->btnAccountBack);
			this->Controls->Add(this->btnLogout);
			this->Controls->Add(this->label4);
			this->Name = L"MyForm8";
			this->Text = L"RegisterStudents";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

};
}
