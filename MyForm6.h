#pragma once

namespace StuRegSystemProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm6
	/// </summary>
	public ref class MyForm6 : public System::Windows::Forms::Form
	{
	public:
		MyForm6(void)
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
		~MyForm6()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnCourseAdd;
	protected:
	private: System::Windows::Forms::Button^ btnCourseDelete;
	private: System::Windows::Forms::Button^ btnCourseUpdate;
	private: System::Windows::Forms::Button^ btnCourceBack;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;



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
			this->btnCourseAdd = (gcnew System::Windows::Forms::Button());
			this->btnCourseDelete = (gcnew System::Windows::Forms::Button());
			this->btnCourseUpdate = (gcnew System::Windows::Forms::Button());
			this->btnCourceBack = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// btnCourseAdd
			// 
			this->btnCourseAdd->Font = (gcnew System::Drawing::Font(L"Raleway", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCourseAdd->Location = System::Drawing::Point(57, 392);
			this->btnCourseAdd->Name = L"btnCourseAdd";
			this->btnCourseAdd->Size = System::Drawing::Size(180, 60);
			this->btnCourseAdd->TabIndex = 18;
			this->btnCourseAdd->Text = L"Add";
			this->btnCourseAdd->UseVisualStyleBackColor = true;
			// 
			// btnCourseDelete
			// 
			this->btnCourseDelete->Font = (gcnew System::Drawing::Font(L"Raleway", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCourseDelete->Location = System::Drawing::Point(243, 392);
			this->btnCourseDelete->Name = L"btnCourseDelete";
			this->btnCourseDelete->Size = System::Drawing::Size(180, 60);
			this->btnCourseDelete->TabIndex = 2;
			this->btnCourseDelete->Text = L"Delete";
			this->btnCourseDelete->UseVisualStyleBackColor = true;
			// 
			// btnCourseUpdate
			// 
			this->btnCourseUpdate->Font = (gcnew System::Drawing::Font(L"Raleway", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCourseUpdate->Location = System::Drawing::Point(57, 458);
			this->btnCourseUpdate->Name = L"btnCourseUpdate";
			this->btnCourseUpdate->Size = System::Drawing::Size(180, 60);
			this->btnCourseUpdate->TabIndex = 3;
			this->btnCourseUpdate->Text = L"Update";
			this->btnCourseUpdate->UseVisualStyleBackColor = true;
			// 
			// btnCourceBack
			// 
			this->btnCourceBack->Font = (gcnew System::Drawing::Font(L"Raleway", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCourceBack->Location = System::Drawing::Point(243, 458);
			this->btnCourceBack->Name = L"btnCourceBack";
			this->btnCourceBack->Size = System::Drawing::Size(180, 60);
			this->btnCourceBack->TabIndex = 19;
			this->btnCourceBack->Text = L"Back";
			this->btnCourceBack->UseVisualStyleBackColor = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Corbel", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(32, 203);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(109, 29);
			this->label1->TabIndex = 20;
			this->label1->Text = L"Course ID";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Corbel", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(32, 250);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(148, 29);
			this->label2->TabIndex = 21;
			this->label2->Text = L"Course Name";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Corbel", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(32, 297);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(84, 29);
			this->label3->TabIndex = 22;
			this->label3->Text = L"Credits";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Maiandra GD", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(128, 63);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(228, 72);
			this->label4->TabIndex = 23;
			this->label4->Text = L"Course ";
			// 
			// MyForm6
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(482, 553);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btnCourceBack);
			this->Controls->Add(this->btnCourseUpdate);
			this->Controls->Add(this->btnCourseDelete);
			this->Controls->Add(this->btnCourseAdd);
			this->Name = L"MyForm6";
			this->Text = L"Course";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
