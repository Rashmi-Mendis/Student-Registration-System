#pragma once

#include "MyForm1.h"
#include "MyForm2.h"


namespace StuRegSystemProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
		/*SqlConnection^ sqlConn = gcnew SqlConnection();
		SqlCommand^ sqlCmd = gcnew SqlCommand();
		DataTable^ sqlDt = gcnew DataTable();
		SqlDataAdapter^ sqlDta = gcnew SqlDataAdapter();
		SqlDataReader^ sqlRd;
		DataSet^ DS = gcnew DataSet();

		String^ sqlQuery;
		String^ server="localhost";
		String^ username="root";
		String^ password="root";
		String^ database="regSystem";
		*/

	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ txtUsername;
	private: System::Windows::Forms::TextBox^ txtPassword;


	private: System::Windows::Forms::Button^ btnLogSubmit;

	private: System::Windows::Forms::Button^ btnRegister;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->txtUsername = (gcnew System::Windows::Forms::TextBox());
			this->txtPassword = (gcnew System::Windows::Forms::TextBox());
			this->btnLogSubmit = (gcnew System::Windows::Forms::Button());
			this->btnRegister = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Maiandra GD", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(151, 42);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(173, 72);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Login";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(102, 174);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(131, 28);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Username";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(102, 265);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(128, 28);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Password";
			// 
			// txtUsername
			// 
			this->txtUsername->Font = (gcnew System::Drawing::Font(L"Arial", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtUsername->Location = System::Drawing::Point(102, 209);
			this->txtUsername->Name = L"txtUsername";
			this->txtUsername->Size = System::Drawing::Size(270, 34);
			this->txtUsername->TabIndex = 3;
			// 
			// txtPassword
			// 
			this->txtPassword->Font = (gcnew System::Drawing::Font(L"Arial", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtPassword->Location = System::Drawing::Point(102, 300);
			this->txtPassword->Name = L"txtPassword";
			this->txtPassword->PasswordChar = '*';
			this->txtPassword->Size = System::Drawing::Size(270, 34);
			this->txtPassword->TabIndex = 4;
			// 
			// btnLogSubmit
			// 
			this->btnLogSubmit->Font = (gcnew System::Drawing::Font(L"Raleway", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnLogSubmit->Location = System::Drawing::Point(147, 392);
			this->btnLogSubmit->Name = L"btnLogSubmit";
			this->btnLogSubmit->Size = System::Drawing::Size(180, 60);
			this->btnLogSubmit->TabIndex = 5;
			this->btnLogSubmit->Text = L"Submit";
			this->btnLogSubmit->UseVisualStyleBackColor = true;
			this->btnLogSubmit->Click += gcnew System::EventHandler(this, &MyForm::btnLogSubmit_Click);
			// 
			// btnRegister
			// 
			this->btnRegister->Font = (gcnew System::Drawing::Font(L"Raleway", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnRegister->Location = System::Drawing::Point(147, 458);
			this->btnRegister->Name = L"btnRegister";
			this->btnRegister->Size = System::Drawing::Size(180, 60);
			this->btnRegister->TabIndex = 6;
			this->btnRegister->Text = L"Register";
			this->btnRegister->UseVisualStyleBackColor = true;
			this->btnRegister->Click += gcnew System::EventHandler(this, &MyForm::btnRegister_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(482, 553);
			this->Controls->Add(this->btnRegister);
			this->Controls->Add(this->btnLogSubmit);
			this->Controls->Add(this->txtPassword);
			this->Controls->Add(this->txtUsername);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"LoginForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}

		/*private: System::Void studentUpload()
		{
			String^ username = this->txtUsername->Text;
			String^ password = this->txtPassword->Text;

			sqlConn->ConnectionString = "server" + server + ";" + "username =" + username + ";" + "password=" + password + ";" + "database=" + database;
			sqlConn->Open();
			sqlCmd->Connection = sqlConn;
			sqlCmd->CommandText = "select * from regSystem";
	        
			sqlRd = sqlCmd->ExecuteReader();
			sqlDt->Load(sqlRd);
			sqlRd->Close();
			sqlConn->Close();
			DataGridView->DataSource = sqlDt;
		}*/
#pragma endregion
	private: System::Void btnLogSubmit_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ username = this->txtUsername->Text;
		String^ password = this->txtPassword->Text;

		if (username->Length == 0 || password->Length == 0)
		{
			MessageBox::Show("Please enter email and password", "Email or Password Empty", MessageBoxButtons::OK);
			return;
		}
		try
		{
			String^ connString = "Data Source=localhost;Initial Catalog=regSystem;Integrated Security=True";
			SqlConnection sqlConn(connString);
			sqlConn.Open();

			String^ sqlQuery = "SELECT * FROM adminTable,staffTable,RegStuTable WHERE username=@NIC AND password=@Password";
			SqlCommand command(sqlQuery, % sqlConn);
			command.Parameters->AddWithValue("@NIC", username);
			command.Parameters->AddWithValue("@Password", password);

			SqlDataReader^ reader = command.ExecuteReader();
			int count = 0;

			while (reader->Read())
			{
				count = count + 1;
			}
			if(count==1)
			{
				MessageBox::Show("Email or password is incorrect", "Email or Password Error", MessageBoxButtons::OK);
				this->Hide();
				MyForm2^ f2 = gcnew MyForm2();
				f2->ShowDialog();
			}
			else
			{
				MessageBox::Show("Email or password is incorrect", "Email or Password Error", MessageBoxButtons::OK);
			}

		}
		catch (Exception^ e)
		{
			MessageBox::Show("Failed to connnect to database", "Database Connection Error", MessageBoxButtons::OK);
		}
	}
private: System::Void btnRegister_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	MyForm1^ f1 = gcnew MyForm1();
	f1->ShowDialog();
}
};
}
