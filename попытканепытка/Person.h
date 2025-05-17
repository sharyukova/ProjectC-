#pragma once

namespace попытканепытка {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ Person
	/// </summary>
	public ref class Person : public System::Windows::Forms::Form
	{
	public:
		Person(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~Person()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DateTimePicker^ date;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::PictureBox^ matrixOfPerson;
	private: System::Windows::Forms::Label^ A;
	private: System::Windows::Forms::Label^ B;
	protected:

	protected:

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Person::typeid));
			this->date = (gcnew System::Windows::Forms::DateTimePicker());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->matrixOfPerson = (gcnew System::Windows::Forms::PictureBox());
			this->A = (gcnew System::Windows::Forms::Label());
			this->B = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->matrixOfPerson))->BeginInit();
			this->SuspendLayout();
			// 
			// date
			// 
			this->date->CalendarFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->date->CalendarForeColor = System::Drawing::Color::SaddleBrown;
			this->date->CalendarMonthBackground = System::Drawing::Color::LavenderBlush;
			this->date->CalendarTitleForeColor = System::Drawing::Color::SaddleBrown;
			this->date->Cursor = System::Windows::Forms::Cursors::Hand;
			this->date->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->date->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->date->Location = System::Drawing::Point(254, 189);
			this->date->Name = L"date";
			this->date->Size = System::Drawing::Size(340, 62);
			this->date->TabIndex = 0;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 48, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(296, 70);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(261, 76);
			this->button1->TabIndex = 1;
			this->button1->Text = L"готово";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Person::button1_Click);
			// 
			// matrixOfPerson
			// 
			this->matrixOfPerson->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"matrixOfPerson.BackgroundImage")));
			this->matrixOfPerson->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->matrixOfPerson->Location = System::Drawing::Point(151, 339);
			this->matrixOfPerson->Name = L"matrixOfPerson";
			this->matrixOfPerson->Size = System::Drawing::Size(493, 493);
			this->matrixOfPerson->TabIndex = 2;
			this->matrixOfPerson->TabStop = false;
			this->matrixOfPerson->Click += gcnew System::EventHandler(this, &Person::matrixOfPerson_Click);
			// 
			// A
			// 
			this->A->AutoSize = true;
			this->A->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(221)), static_cast<System::Int32>(static_cast<System::Byte>(210)),
				static_cast<System::Int32>(static_cast<System::Byte>(234)));
			this->A->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->A->ForeColor = System::Drawing::SystemColors::ControlText;
			this->A->Location = System::Drawing::Point(166, 572);
			this->A->Name = L"A";
			this->A->Size = System::Drawing::Size(31, 33);
			this->A->TabIndex = 3;
			this->A->Text = L"0";
			// 
			// B
			// 
			this->B->AutoSize = true;
			this->B->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(221)), static_cast<System::Int32>(static_cast<System::Byte>(210)),
				static_cast<System::Int32>(static_cast<System::Byte>(234)));
			this->B->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->B->Location = System::Drawing::Point(388, 354);
			this->B->Name = L"B";
			this->B->Size = System::Drawing::Size(31, 33);
			this->B->TabIndex = 4;
			this->B->Text = L"0";
			// 
			// Person
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1440, 1100);
			this->Controls->Add(this->B);
			this->Controls->Add(this->A);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->date);
			this->Controls->Add(this->matrixOfPerson);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Person";
			this->Text = L"Person";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &Person::Person_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->matrixOfPerson))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		DateTime selectedDate = this->date->Value;
		int day = selectedDate.Day;
		int sum = 0;
		if (day == 11 || day == 22) {
			sum = day;  
		}
		else {
			int tempDay = day;
			while (tempDay > 0) {
				sum += tempDay % 10;
				tempDay /= 10;
			}
			if (sum >= 10) {
				int newSum = 0;
				int tempSum = sum;
				while (tempSum > 0) {
					newSum += tempSum % 10;
					tempSum /= 10;
				}
				sum = newSum;
			}
		}
		int month = selectedDate.Month;
		int sum2 = 0;
		if (month==11) {
			sum2 = month;
		}
		else {
			int tempMonth = month;
			while (tempMonth > 0) {
				sum2 += tempMonth % 10;
				tempMonth /= 10;
			}
			if (sum2 >= 10) {
				int newSum2 = 0;
				int tempSum2 = sum2;
				while (tempSum2 > 0) {
					newSum2 += tempSum2 % 10;
					tempSum2 /= 10;
				}
				sum2 = newSum2;
			}
		}
		int year = selectedDate.Year;
		int sum3 = 0;
		this->A->Text = sum.ToString();
		this->B->Text = sum2.ToString();
	}
private: System::Void Person_Load(System::Object^ sender, System::EventArgs^ e) {
	
	System::Drawing::Drawing2D::GraphicsPath^ path = gcnew System::Drawing::Drawing2D::GraphicsPath();
	path->AddEllipse(0, 0, matrixOfPerson->Width, matrixOfPerson->Height);
	matrixOfPerson->Region = gcnew System::Drawing::Region(path);
}
private: System::Void matrixOfPerson_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
