#pragma once

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();

			pnlTerms->Hide();
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
	private: System::Windows::Forms::TextBox^ textBox1;

	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::FlowLayoutPanel^ pnlTerms;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Button^ button3;






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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->pnlTerms = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->pnlTerms->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(45, 63);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(169, 62);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Sign in";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.2F));
			this->label2->Location = System::Drawing::Point(52, 253);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(67, 19);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Password";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.2F));
			this->label3->Location = System::Drawing::Point(52, 161);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(71, 19);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Username";
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.8F));
			this->textBox1->ForeColor = System::Drawing::SystemColors::InactiveBorder;
			this->textBox1->Location = System::Drawing::Point(56, 183);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(251, 24);
			this->textBox1->TabIndex = 3;
			this->textBox1->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::textBox1_KeyDown);
			// 
			// panel1
			// 
			this->panel1->Location = System::Drawing::Point(56, 213);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(249, 2);
			this->panel1->TabIndex = 5;
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.8F));
			this->textBox2->ForeColor = System::Drawing::SystemColors::InactiveBorder;
			this->textBox2->Location = System::Drawing::Point(56, 275);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(251, 24);
			this->textBox2->TabIndex = 6;
			this->textBox2->UseSystemPasswordChar = true;
			this->textBox2->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::textBox2_KeyDown);
			// 
			// panel2
			// 
			this->panel2->Location = System::Drawing::Point(56, 305);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(249, 2);
			this->panel2->TabIndex = 7;
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->checkBox1->Checked = true;
			this->checkBox1->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox1->Location = System::Drawing::Point(56, 364);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(109, 21);
			this->checkBox1->TabIndex = 8;
			this->checkBox1->Text = L"I agree to the";
			this->checkBox1->UseVisualStyleBackColor = false;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox1_CheckedChanged);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::SystemColors::HotTrack;
			this->label4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.2F));
			this->label4->Location = System::Drawing::Point(161, 364);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(139, 19);
			this->label4->TabIndex = 9;
			this->label4->Text = L"Terms and conditions";
			this->label4->Click += gcnew System::EventHandler(this, &MyForm::label4_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::HotTrack;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.8F));
			this->button1->Location = System::Drawing::Point(56, 426);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(109, 49);
			this->button1->TabIndex = 10;
			this->button1->Text = L"Sign in";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.8F));
			this->button2->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->button2->Location = System::Drawing::Point(171, 426);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(109, 49);
			this->button2->TabIndex = 11;
			this->button2->Text = L"Exit";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// pnlTerms
			// 
			this->pnlTerms->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->pnlTerms->Controls->Add(this->label5);
			this->pnlTerms->Controls->Add(this->textBox3);
			this->pnlTerms->Controls->Add(this->button3);
			this->pnlTerms->Location = System::Drawing::Point(341, 12);
			this->pnlTerms->Name = L"pnlTerms";
			this->pnlTerms->Size = System::Drawing::Size(482, 324);
			this->pnlTerms->TabIndex = 12;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Segoe UI", 18.8F));
			this->label5->Location = System::Drawing::Point(3, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(324, 45);
			this->label5->TabIndex = 0;
			this->label5->Text = L"Terms and conditions";
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.8F));
			this->textBox3->ForeColor = System::Drawing::SystemColors::InactiveBorder;
			this->textBox3->Location = System::Drawing::Point(3, 48);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(475, 212);
			this->textBox3->TabIndex = 1;
			this->textBox3->Text = resources->GetString(L"textBox3.Text");
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::HotTrack;
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.8F));
			this->button3->Location = System::Drawing::Point(3, 266);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(109, 49);
			this->button3->TabIndex = 11;
			this->button3->Text = L"OK";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click_1);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 17);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(835, 596);
			this->Controls->Add(this->pnlTerms);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Segoe UI", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Sign in Form";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::MyForm_MouseDown);
			this->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::MyForm_MouseMove);
			this->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::MyForm_MouseUp);
			this->pnlTerms->ResumeLayout(false);
			this->pnlTerms->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

	if (textBox1->Text == "admin") {

		if (textBox2->Text == "root") {

			MessageBox::Show("Access Granted", "Sign in Successful!", MessageBoxButtons::OK, MessageBoxIcon::Information);
			Application::Exit();
		}
		else {

			MessageBox::Show("Incorrect password", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	else {

		MessageBox::Show("Incorrect username", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}

	 
}
private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {

	if (checkBox1->Checked) {

		button1->Enabled == true;
	}
	else {

		button1->Enabled == false;
	}
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

	Application::Exit();
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {

	pnlTerms->Hide();
}
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {

	pnlTerms->Show();
}
private: System::Void button3_Click_1(System::Object^ sender, System::EventArgs^ e) {

	pnlTerms->Hide();
}

	   //Dragging the form ..
	   bool dragging;
	   Point offset;
private: System::Void MyForm_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {

	//enable dragging and get mouse position ..

	dragging = true;
	offset.X = e->X;
	offset.Y = e->Y;


}
private: System::Void MyForm_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {

	//Check whether able to move..
	if (dragging) {

		Point currentScreenPosition = PointToScreen(Point(e->X, e->Y));
		Location = Point(currentScreenPosition.X - offset.X , currentScreenPosition.Y - offset.Y);
	}
}
private: System::Void MyForm_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {

	dragging = false;
}

	   //admin
private: System::Void textBox1_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {

	if (e->KeyValue == (int)Keys::Enter) {

		textBox2->Focus();
	}
}

	   //password
private: System::Void textBox2_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {

	if (e->KeyValue == (int)Keys::Enter) {

		button1->PerformClick();
	}
}
};
}
