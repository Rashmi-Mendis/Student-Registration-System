#pragma once

namespace StuRegSystemProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm2
	/// </summary>
	public ref class MyForm2 : public System::Windows::Forms::Form
	{
	public:
		MyForm2(void)
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
		~MyForm2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnAdmin;
	protected:
	private: System::Windows::Forms::Button^ btnStaff;
	private: System::Windows::Forms::Button^ btnStudent;
	private: System::Windows::Forms::Button^ btnAcademic;

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
			this->btnAdmin = (gcnew System::Windows::Forms::Button());
			this->btnStaff = (gcnew System::Windows::Forms::Button());
			this->btnStudent = (gcnew System::Windows::Forms::Button());
			this->btnAcademic = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// btnAdmin
			// 
			this->btnAdmin->Font = (gcnew System::Drawing::Font(L"Raleway", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAdmin->Location = System::Drawing::Point(89, 102);
			this->btnAdmin->Name = L"btnAdmin";
			this->btnAdmin->Size = System::Drawing::Size(300, 60);
			this->btnAdmin->TabIndex = 0;
			this->btnAdmin->Text = L"Admin";
			this->btnAdmin->UseVisualStyleBackColor = true;
			this->btnAdmin->Click += gcnew System::EventHandler(this, &MyForm2::btnAdmin_Click);
			// 
			// btnStaff
			// 
			this->btnStaff->Font = (gcnew System::Drawing::Font(L"Raleway", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnStaff->Location = System::Drawing::Point(59, 288);
			this->btnStaff->Name = L"btnStaff";
			this->btnStaff->Size = System::Drawing::Size(360, 60);
			this->btnStaff->TabIndex = 1;
			this->btnStaff->Text = L"Management Staff";
			this->btnStaff->UseVisualStyleBackColor = true;
			// 
			// btnStudent
			// 
			this->btnStudent->Font = (gcnew System::Drawing::Font(L"Raleway", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnStudent->Location = System::Drawing::Point(89, 381);
			this->btnStudent->Name = L"btnStudent";
			this->btnStudent->Size = System::Drawing::Size(300, 60);
			this->btnStudent->TabIndex = 2;
			this->btnStudent->Text = L"Student";
			this->btnStudent->UseVisualStyleBackColor = true;
			// 
			// btnAcademic
			// 
			this->btnAcademic->Font = (gcnew System::Drawing::Font(L"Raleway", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAcademic->Location = System::Drawing::Point(89, 195);
			this->btnAcademic->Name = L"btnAcademic";
			this->btnAcademic->Size = System::Drawing::Size(300, 60);
			this->btnAcademic->TabIndex = 3;
			this->btnAcademic->Text = L"Academic Staff";
			this->btnAcademic->UseVisualStyleBackColor = true;
			this->btnAcademic->Click += gcnew System::EventHandler(this, &MyForm2::btnAcademic_Click);
			// 
			// MyForm2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(482, 553);
			this->Controls->Add(this->btnAcademic);
			this->Controls->Add(this->btnStudent);
			this->Controls->Add(this->btnStaff);
			this->Controls->Add(this->btnAdmin);
			this->Name = L"MyForm2";
			this->Text = L"AccountForm";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void btnAcademic_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void btnAdmin_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
