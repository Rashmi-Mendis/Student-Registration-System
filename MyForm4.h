#pragma once

namespace StuRegSystemProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm4
	/// </summary>
	public ref class MyForm4 : public System::Windows::Forms::Form
	{
	public:
		MyForm4(void)
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
		~MyForm4()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnViewRegStudents;
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
			this->btnViewRegStudents = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// btnViewRegStudents
			// 
			this->btnViewRegStudents->Font = (gcnew System::Drawing::Font(L"Raleway", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnViewRegStudents->Location = System::Drawing::Point(32, 240);
			this->btnViewRegStudents->Name = L"btnViewRegStudents";
			this->btnViewRegStudents->Size = System::Drawing::Size(420, 60);
			this->btnViewRegStudents->TabIndex = 2;
			this->btnViewRegStudents->Text = L"View Registered Student";
			this->btnViewRegStudents->UseVisualStyleBackColor = true;
			// 
			// MyForm4
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(482, 553);
			this->Controls->Add(this->btnViewRegStudents);
			this->Name = L"MyForm4";
			this->Text = L"StaffForm";
			this->ResumeLayout(false);

		}
#pragma endregion
	};
}
