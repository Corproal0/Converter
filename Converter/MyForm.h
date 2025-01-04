#pragma once

namespace Converter {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:




	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label3;




	private: System::Windows::Forms::Label^ label4;





	private: System::Windows::Forms::RadioButton^ radioButton5;
	private: System::Windows::Forms::RadioButton^ radioButton6;
	private: System::Windows::Forms::RadioButton^ radioButton7;
	private: System::Windows::Forms::RadioButton^ radioButton8;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::RadioButton^ radioButton4;

	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::RadioButton^ radioButton3;



	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label5;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->radioButton5 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton6 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton7 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton8 = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton4 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(23, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(76, 13);
			this->label1->TabIndex = 5;
			this->label1->Text = L"У меня есть :";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(23, 75);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(90, 13);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Введите сумму :";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(119, 75);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 7;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			this->textBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox1_KeyPress);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(23, 115);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(98, 13);
			this->label3->TabIndex = 8;
			this->label3->Text = L"Хочу приобрести :";
			this->label3->Click += gcnew System::EventHandler(this, &MyForm::label3_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(28, 212);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(59, 13);
			this->label4->TabIndex = 13;
			this->label4->Text = L"Выходит : ";
			this->label4->Click += gcnew System::EventHandler(this, &MyForm::label4_Click);
			// 
			// radioButton5
			// 
			this->radioButton5->AutoSize = true;
			this->radioButton5->Location = System::Drawing::Point(12, 18);
			this->radioButton5->Name = L"radioButton5";
			this->radioButton5->Size = System::Drawing::Size(49, 17);
			this->radioButton5->TabIndex = 19;
			this->radioButton5->TabStop = true;
			this->radioButton5->Text = L"RUR";
			this->radioButton5->UseVisualStyleBackColor = true;
			// 
			// radioButton6
			// 
			this->radioButton6->AutoSize = true;
			this->radioButton6->Location = System::Drawing::Point(67, 19);
			this->radioButton6->Name = L"radioButton6";
			this->radioButton6->Size = System::Drawing::Size(48, 17);
			this->radioButton6->TabIndex = 20;
			this->radioButton6->TabStop = true;
			this->radioButton6->Text = L"USD";
			this->radioButton6->UseVisualStyleBackColor = true;
			// 
			// radioButton7
			// 
			this->radioButton7->AutoSize = true;
			this->radioButton7->Location = System::Drawing::Point(121, 18);
			this->radioButton7->Name = L"radioButton7";
			this->radioButton7->Size = System::Drawing::Size(48, 17);
			this->radioButton7->TabIndex = 21;
			this->radioButton7->TabStop = true;
			this->radioButton7->Text = L"EUR\r\n";
			this->radioButton7->UseVisualStyleBackColor = true;
			this->radioButton7->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton7_CheckedChanged);
			// 
			// radioButton8
			// 
			this->radioButton8->AutoSize = true;
			this->radioButton8->Location = System::Drawing::Point(175, 18);
			this->radioButton8->Name = L"radioButton8";
			this->radioButton8->Size = System::Drawing::Size(48, 17);
			this->radioButton8->TabIndex = 22;
			this->radioButton8->TabStop = true;
			this->radioButton8->Text = L"GBR\r\n";
			this->radioButton8->UseVisualStyleBackColor = true;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->radioButton5);
			this->groupBox1->Controls->Add(this->radioButton8);
			this->groupBox1->Controls->Add(this->radioButton6);
			this->groupBox1->Controls->Add(this->radioButton7);
			this->groupBox1->Location = System::Drawing::Point(26, 131);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(231, 41);
			this->groupBox1->TabIndex = 23;
			this->groupBox1->TabStop = false;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->radioButton1);
			this->groupBox2->Controls->Add(this->radioButton4);
			this->groupBox2->Controls->Add(this->radioButton2);
			this->groupBox2->Controls->Add(this->radioButton3);
			this->groupBox2->Location = System::Drawing::Point(26, 25);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(231, 41);
			this->groupBox2->TabIndex = 24;
			this->groupBox2->TabStop = false;
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(12, 18);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(49, 17);
			this->radioButton1->TabIndex = 19;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"RUR";
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// radioButton4
			// 
			this->radioButton4->AutoSize = true;
			this->radioButton4->Location = System::Drawing::Point(175, 18);
			this->radioButton4->Name = L"radioButton4";
			this->radioButton4->Size = System::Drawing::Size(48, 17);
			this->radioButton4->TabIndex = 22;
			this->radioButton4->TabStop = true;
			this->radioButton4->Text = L"GBR\r\n";
			this->radioButton4->UseVisualStyleBackColor = true;
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(67, 19);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(48, 17);
			this->radioButton2->TabIndex = 20;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"USD";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Location = System::Drawing::Point(121, 18);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(48, 17);
			this->radioButton3->TabIndex = 21;
			this->radioButton3->TabStop = true;
			this->radioButton3->Text = L"EUR\r\n";
			this->radioButton3->UseVisualStyleBackColor = true;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(103, 178);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 25;
			this->button1->Text = L"OK";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(86, 212);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(0, 13);
			this->label5->TabIndex = 26;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(362, 261);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {

	}
	
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	

}
private: System::Void radioButton2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void radioButton7_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox1_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	if( (e->KeyChar >= '0') && (e->KeyChar <= '9')) return;
if (e->KeyChar == '.')e->KeyChar=',';
	if (e->KeyChar == ',') {
		if(textBox1->Text->IndexOf(',')!=-1)
			e->Handled=true;
			return;
	}
if (Char::IsControl(e->KeyChar)) {
	if(e->KeyChar==(char)Keys::Enter)

		button1->Focus();
		return;
}
e->Handled = true;
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	double rur, usd, eur, gbr, value = Convert::ToDouble(textBox1->Text);
	
	
	try {
		if (radioButton1->Checked) {
			if (radioButton6->Checked) {
				double RurToUsdRate = 0.0098;
				label5->Text = Convert::ToString(value * RurToUsdRate);
			}
			else if (radioButton7->Checked) {
				double RurToEurRate = 0.0094;
				label5->Text = Convert::ToString(value * RurToEurRate);
			}
			else if (radioButton8->Checked) {
				double RurToGbrRate = 0.0078;
				label5->Text = Convert::ToString(value * RurToGbrRate);
			}
			else {
				label5->Text = Convert::ToString(value);
			}
		}
		else if (radioButton2->Checked) {
			if (radioButton5->Checked) {
				double UsdToRubRate = 101.6797;
				label5->Text = Convert::ToString(value * UsdToRubRate);
			}
			else if (radioButton7->Checked) {
				double UsdToEurRate = 0.9583;
				label5->Text = Convert::ToString(value * UsdToEurRate);
			}
			else if (radioButton8->Checked) {
				double UsdToGbrRate = 0.7975;
				label5->Text = Convert::ToString(value * UsdToGbrRate);
			}
			else {
				label5->Text = Convert::ToString(value);
			}
		}
		else if (radioButton3->Checked) {
			if (radioButton5->Checked) {
				double EurToRurRate = 106.1028;
				label5->Text = Convert::ToString(value * EurToRurRate);
			}
			else if (radioButton6->Checked) {
				double EurToUsdRate =1.0435;
				label5->Text = Convert::ToString(value * EurToUsdRate);
			}
			else if (radioButton8->Checked) {
				double EurToGbrRate = 0.8322;
				label5->Text = Convert::ToString(value * EurToGbrRate);

			}
			else {
				label5->Text = Convert::ToString(value);
			}
		}
		else if (radioButton4->Checked) {
			if (radioButton5->Checked) {
				double GbrToUsdRate = 127.4962;
				label5->Text = Convert::ToString(value * GbrToUsdRate);
			}
			else if (radioButton6->Checked) {
				double GbrToUsdRate = 1.2539;
				label5->Text = Convert::ToString(value * GbrToUsdRate);
			}
			else if (radioButton7->Checked) {
				double GbrToEurRate = 1.2016;
				label5->Text = Convert::ToString(value * GbrToEurRate);
			}
			else {
				label5->Text = Convert::ToString(value);
			}
		}
		
		
		
	}
	catch (System::FormatException^ ex) {
		MessageBox::Show(
			"Нужно ввести корректные исходные данные.",
			"Ошибка ввода",
			MessageBoxButtons::OK,
			MessageBoxIcon::Exclamation);
		textBox1->Focus();
	}

}
};
}

