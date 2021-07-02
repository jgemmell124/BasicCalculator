#pragma once

namespace AppTestWithCLR {

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

	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::Button^ button17;
	private: System::Windows::Forms::Button^ button18;

	private: System::Windows::Forms::Button^ button20;
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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::WindowText;
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->textBox1->Enabled = false;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Symbol", 40, System::Drawing::FontStyle::Bold));
			this->textBox1->ForeColor = System::Drawing::Color::White;
			this->textBox1->Location = System::Drawing::Point(12, 25);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->textBox1->Size = System::Drawing::Size(356, 83);
			this->textBox1->TabIndex = 1;
			this->textBox1->Text = L"0";
			this->textBox1->Click += gcnew System::EventHandler(this, &MyForm::doOperation);
			// 
			// button1
			// 
			this->button1->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(12, 114);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(81, 89);
			this->button1->TabIndex = 2;
			this->button1->Text = L"AC";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::clearAll);
			// 
			// button2
			// 
			this->button2->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(99, 114);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(81, 89);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Del";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::delNumber);
			// 
			// button3
			// 
			this->button3->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(186, 114);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(81, 89);
			this->button3->TabIndex = 4;
			this->button3->Text = L"%";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Orange;
			this->button4->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->button4->FlatAppearance->BorderSize = 0;
			this->button4->FlatAppearance->CheckedBackColor = System::Drawing::Color::White;
			this->button4->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button4->Location = System::Drawing::Point(273, 114);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(81, 89);
			this->button4->TabIndex = 5;
			this->button4->Text = L"/";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::doOperation);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::Orange;
			this->button5->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->button5->FlatAppearance->BorderSize = 0;
			this->button5->FlatAppearance->CheckedBackColor = System::Drawing::Color::White;
			this->button5->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button5->Location = System::Drawing::Point(273, 209);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(81, 89);
			this->button5->TabIndex = 9;
			this->button5->Text = L"x";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::doOperation);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::SystemColors::GrayText;
			this->button6->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->button6->FlatAppearance->BorderSize = 0;
			this->button6->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button6->Location = System::Drawing::Point(186, 209);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(81, 89);
			this->button6->TabIndex = 8;
			this->button6->Text = L"9";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::SystemColors::GrayText;
			this->button7->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->button7->FlatAppearance->BorderSize = 0;
			this->button7->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button7->Location = System::Drawing::Point(99, 209);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(81, 89);
			this->button7->TabIndex = 7;
			this->button7->Text = L"8";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::SystemColors::GrayText;
			this->button8->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->button8->FlatAppearance->BorderSize = 0;
			this->button8->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button8->Location = System::Drawing::Point(12, 209);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(81, 89);
			this->button8->TabIndex = 6;
			this->button8->Text = L"7";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::Orange;
			this->button9->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->button9->FlatAppearance->BorderSize = 0;
			this->button9->FlatAppearance->CheckedBackColor = System::Drawing::Color::White;
			this->button9->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button9->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button9->Location = System::Drawing::Point(273, 304);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(81, 89);
			this->button9->TabIndex = 13;
			this->button9->Text = L"-";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::doOperation);
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::SystemColors::GrayText;
			this->button10->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->button10->FlatAppearance->BorderSize = 0;
			this->button10->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button10->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button10->Location = System::Drawing::Point(186, 304);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(81, 89);
			this->button10->TabIndex = 12;
			this->button10->Text = L"6";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::SystemColors::GrayText;
			this->button11->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->button11->FlatAppearance->BorderSize = 0;
			this->button11->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button11->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button11->Location = System::Drawing::Point(99, 304);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(81, 89);
			this->button11->TabIndex = 11;
			this->button11->Text = L"5";
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// button12
			// 
			this->button12->BackColor = System::Drawing::SystemColors::GrayText;
			this->button12->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->button12->FlatAppearance->BorderSize = 0;
			this->button12->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button12->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button12->Location = System::Drawing::Point(12, 304);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(81, 89);
			this->button12->TabIndex = 10;
			this->button12->Text = L"4";
			this->button12->UseVisualStyleBackColor = false;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// button13
			// 
			this->button13->BackColor = System::Drawing::Color::Orange;
			this->button13->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->button13->FlatAppearance->BorderSize = 0;
			this->button13->FlatAppearance->CheckedBackColor = System::Drawing::Color::White;
			this->button13->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button13->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button13->Location = System::Drawing::Point(273, 399);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(81, 89);
			this->button13->TabIndex = 17;
			this->button13->Text = L"+";
			this->button13->UseVisualStyleBackColor = false;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::doOperation);
			// 
			// button14
			// 
			this->button14->BackColor = System::Drawing::SystemColors::GrayText;
			this->button14->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->button14->FlatAppearance->BorderSize = 0;
			this->button14->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button14->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button14->Location = System::Drawing::Point(186, 399);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(81, 89);
			this->button14->TabIndex = 16;
			this->button14->Text = L"3";
			this->button14->UseVisualStyleBackColor = false;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// button15
			// 
			this->button15->BackColor = System::Drawing::SystemColors::GrayText;
			this->button15->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->button15->FlatAppearance->BorderSize = 0;
			this->button15->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button15->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button15->Location = System::Drawing::Point(99, 399);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(81, 89);
			this->button15->TabIndex = 15;
			this->button15->Text = L"2";
			this->button15->UseVisualStyleBackColor = false;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// button16
			// 
			this->button16->BackColor = System::Drawing::SystemColors::GrayText;
			this->button16->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->button16->FlatAppearance->BorderSize = 0;
			this->button16->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button16->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button16->Location = System::Drawing::Point(12, 399);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(81, 89);
			this->button16->TabIndex = 14;
			this->button16->Text = L"1";
			this->button16->UseVisualStyleBackColor = false;
			this->button16->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// button17
			// 
			this->button17->BackColor = System::Drawing::Color::Orange;
			this->button17->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->button17->FlatAppearance->BorderSize = 0;
			this->button17->FlatAppearance->CheckedBackColor = System::Drawing::Color::White;
			this->button17->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button17->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button17->Location = System::Drawing::Point(273, 494);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(81, 89);
			this->button17->TabIndex = 21;
			this->button17->Text = L"=";
			this->button17->UseVisualStyleBackColor = false;
			this->button17->Click += gcnew System::EventHandler(this, &MyForm::calculateResult);
			// 
			// button18
			// 
			this->button18->BackColor = System::Drawing::SystemColors::GrayText;
			this->button18->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->button18->FlatAppearance->BorderSize = 0;
			this->button18->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button18->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button18->Location = System::Drawing::Point(186, 494);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(81, 89);
			this->button18->TabIndex = 20;
			this->button18->Text = L".";
			this->button18->UseVisualStyleBackColor = false;
			this->button18->Click += gcnew System::EventHandler(this, &MyForm::addDecimal);
			// 
			// button20
			// 
			this->button20->BackColor = System::Drawing::SystemColors::GrayText;
			this->button20->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->button20->FlatAppearance->BorderSize = 0;
			this->button20->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button20->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button20->Location = System::Drawing::Point(12, 494);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(168, 89);
			this->button20->TabIndex = 18;
			this->button20->Text = L"0";
			this->button20->UseVisualStyleBackColor = false;
			this->button20->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->ClientSize = System::Drawing::Size(370, 597);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->button18);
			this->Controls->Add(this->button20);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"MyForm";
			this->Text = L"Basic Calculator";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		double firstNum, secondNum, result;
		String^ Operator;

	// add numbers to the number visible in the text box
	private: System::Void EnterNumber(System::Object^ sender, System::EventArgs^ e) {
		Button^ Numbers = safe_cast<Button^>(sender);

		// if the number is 'blank' replace it with the clicked number
		if (textBox1->Text == "0") {
			textBox1->Text = Numbers->Text;
		}
		// else add it to the text string
		else {
			textBox1->Text += Numbers->Text;
		}
	}

	// get operation from sender
	private: System::Void doOperation(System::Object^ sender, System::EventArgs^ e) {
		Button^ operation = safe_cast<Button^>(sender);
		this->firstNum = Double::Parse(textBox1->Text);
		this->Operator = operation->Text;
		this->textBox1->Text = "";
	}

	// when equal button is pressed, calculate result
	private: System::Void calculateResult(System::Object^ sender, System::EventArgs^ e) {
		if (!this->Operator) {
			return;
		}
		this->secondNum = Double::Parse(textBox1->Text);
		if (Operator == "+") {
			this->result = firstNum + secondNum;
		}
		else if (Operator == "/") {
			this->result = firstNum / secondNum;
		}
		else if (Operator == "x") {
			this->result = firstNum * secondNum;
		}
		else if (Operator == "-") {
			this->result = firstNum - secondNum;
		}

		this->textBox1->Text = Convert::ToString(this->result);
	}

	// backspace number in text box
	private: System::Void delNumber(System::Object^ sender, System::EventArgs^ e) {
		int textLen = textBox1->Text->Length;
		if (textLen > 0) {
			textBox1->Text = textBox1->Text->Remove(textLen - 1, 1);
		}
		if (textLen - 1 == 0) {
			textBox1->Text = "0";
		}
	}
	private: System::Void clearAll(System::Object^ sender, System::EventArgs^ e) {
		this->textBox1->Text = "0";
		this->Operator = "";
		this->firstNum = 0;
		this->secondNum = 0;
	}
	private: System::Void addDecimal(System::Object^ sender, System::EventArgs^ e) {
		if (!this->textBox1->Text->Contains(".")) {
			this->textBox1->Text = this->textBox1->Text + ".";
		}
	}
};
}
