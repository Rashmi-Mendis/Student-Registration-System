#pragma once

namespace StuRegSystemProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm3
	/// </summary>
	public ref class MyForm3 : public System::Windows::Forms::Form
	{
	public:
		MyForm3(void)
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
		~MyForm3()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnCourse;
	private: System::Windows::Forms::Button^ btnAccount;
	private: System::Windows::Forms::Label^ label7;
	protected:

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
			this->btnCourse = (gcnew System::Windows::Forms::Button());
			this->btnAccount = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// btnCourse
			// 
			this->btnCourse->Font = (gcnew System::Drawing::Font(L"Raleway", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCourse->Location = System::Drawing::Point(80, 263);
			this->btnCourse->Name = L"btnCourse";
			this->btnCourse->Size = System::Drawing::Size(300, 60);
			this->btnCourse->TabIndex = 0;
			this->btnCourse->Text = L"Create Course";
			this->btnCourse->UseVisualStyleBackColor = true;
			// 
			// btnAccount
			// 
			this->btnAccount->Font = (gcnew System::Drawing::Font(L"Raleway", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAccount->Location = System::Drawing::Point(80, 346);
			this->btnAccount->Name = L"btnAccount";
			this->btnAccount->Size = System::Drawing::Size(300, 60);
			this->btnAccount->TabIndex = 1;
			this->btnAccount->Text = L"Create Account";
			this->btnAccount->UseVisualStyleBackColor = true;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Maiandra GD", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(128, 82);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(205, 72);
			this->label7->TabIndex = 7;
			this->label7->Text = L"Admin";
			// 
			// MyForm3
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(482, 553);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->btnAccount);
			this->Controls->Add(this->btnCourse);
			this->Name = L"MyForm3";
			this->Text = L"AdminForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
