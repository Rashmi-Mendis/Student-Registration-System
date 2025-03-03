#pragma once

namespace StuRegSystemProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm9
	/// </summary>
	public ref class MyForm9 : public System::Windows::Forms::Form
	{
	public:
		MyForm9(void)
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
		~MyForm9()
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
			this->label4->Location = System::Drawing::Point(28, 31);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(432, 72);
			this->label4->TabIndex = 32;
			this->label4->Text = L"Register Course";
			// 
			// btnAccountBack
			// 
			this->btnAccountBack->Font = (gcnew System::Drawing::Font(L"Raleway", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAccountBack->Location = System::Drawing::Point(245, 456);
			this->btnAccountBack->Name = L"btnAccountBack";
			this->btnAccountBack->Size = System::Drawing::Size(180, 60);
			this->btnAccountBack->TabIndex = 38;
			this->btnAccountBack->Text = L"Back";
			this->btnAccountBack->UseVisualStyleBackColor = true;
			// 
			// btnLogout
			// 
			this->btnLogout->Font = (gcnew System::Drawing::Font(L"Raleway", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnLogout->Location = System::Drawing::Point(59, 456);
			this->btnLogout->Name = L"btnLogout";
			this->btnLogout->Size = System::Drawing::Size(180, 60);
			this->btnLogout->TabIndex = 37;
			this->btnLogout->Text = L"Logout";
			this->btnLogout->UseVisualStyleBackColor = true;
			// 
			// MyForm9
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(482, 553);
			this->Controls->Add(this->btnAccountBack);
			this->Controls->Add(this->btnLogout);
			this->Controls->Add(this->label4);
			this->Name = L"MyForm9";
			this->Text = L"RegisterCourse";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
