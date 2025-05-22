#pragma once

namespace попытканепытка {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Person
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
		/// Освободить все используемые ресурсы.
		/// </summary>
		~Person()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DateTimePicker^ date;
	private: System::Windows::Forms::Button^ done;

	private: System::Windows::Forms::PictureBox^ matrixOfPerson;
	private: System::Windows::Forms::Label^ A;
	private: System::Windows::Forms::Label^ B;
	private: System::Windows::Forms::Label^ C;
	private: System::Windows::Forms::Label^ D;
	private: System::Windows::Forms::Label^ E;
	private: System::Windows::Forms::Button^ personalityMinus;

	private: System::Windows::Forms::Button^ personalityPlus;


	private: System::Windows::Forms::Button^ zoneOfComfort;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ enter;


	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ exit;
	private: System::Windows::Forms::Button^ previous2;
	private: System::Windows::Forms::TextBox^ description;



	protected:

	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Person::typeid));
			this->date = (gcnew System::Windows::Forms::DateTimePicker());
			this->done = (gcnew System::Windows::Forms::Button());
			this->matrixOfPerson = (gcnew System::Windows::Forms::PictureBox());
			this->A = (gcnew System::Windows::Forms::Label());
			this->B = (gcnew System::Windows::Forms::Label());
			this->C = (gcnew System::Windows::Forms::Label());
			this->D = (gcnew System::Windows::Forms::Label());
			this->E = (gcnew System::Windows::Forms::Label());
			this->personalityMinus = (gcnew System::Windows::Forms::Button());
			this->personalityPlus = (gcnew System::Windows::Forms::Button());
			this->zoneOfComfort = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->enter = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->exit = (gcnew System::Windows::Forms::Button());
			this->previous2 = (gcnew System::Windows::Forms::Button());
			this->description = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->matrixOfPerson))->BeginInit();
			this->SuspendLayout();
			// 
			// date
			// 
			this->date->CalendarFont = (gcnew System::Drawing::Font(L"Arial", 48, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->date->CalendarForeColor = System::Drawing::Color::SaddleBrown;
			this->date->CalendarMonthBackground = System::Drawing::Color::LavenderBlush;
			this->date->CalendarTitleBackColor = System::Drawing::Color::LavenderBlush;
			this->date->CalendarTitleForeColor = System::Drawing::Color::SaddleBrown;
			this->date->Cursor = System::Windows::Forms::Cursors::Hand;
			this->date->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->date->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->date->Location = System::Drawing::Point(240, 198);
			this->date->Name = L"date";
			this->date->Size = System::Drawing::Size(340, 62);
			this->date->TabIndex = 0;
			// 
			// done
			// 
			this->done->BackColor = System::Drawing::Color::Transparent;
			this->done->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->done->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->done->ForeColor = System::Drawing::Color::LavenderBlush;
			this->done->Location = System::Drawing::Point(279, 292);
			this->done->Name = L"done";
			this->done->Size = System::Drawing::Size(243, 57);
			this->done->TabIndex = 1;
			this->done->Text = L"готово";
			this->done->UseVisualStyleBackColor = false;
			this->done->Click += gcnew System::EventHandler(this, &Person::button1_Click);
			// 
			// matrixOfPerson
			// 
			this->matrixOfPerson->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"matrixOfPerson.BackgroundImage")));
			this->matrixOfPerson->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->matrixOfPerson->Location = System::Drawing::Point(152, 443);
			this->matrixOfPerson->Name = L"matrixOfPerson";
			this->matrixOfPerson->Size = System::Drawing::Size(493, 493);
			this->matrixOfPerson->TabIndex = 2;
			this->matrixOfPerson->TabStop = false;
			this->matrixOfPerson->Click += gcnew System::EventHandler(this, &Person::matrixOfPerson_Click);
			// 
			// A
			// 
			this->A->AutoEllipsis = true;
			this->A->AutoSize = true;
			this->A->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(221)), static_cast<System::Int32>(static_cast<System::Byte>(210)),
				static_cast<System::Int32>(static_cast<System::Byte>(234)));
			this->A->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->A->ForeColor = System::Drawing::SystemColors::ControlText;
			this->A->Location = System::Drawing::Point(166, 675);
			this->A->Name = L"A";
			this->A->Size = System::Drawing::Size(26, 29);
			this->A->TabIndex = 3;
			this->A->Text = L"0";
			this->A->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->A->Click += gcnew System::EventHandler(this, &Person::A_Click);
			// 
			// B
			// 
			this->B->AutoEllipsis = true;
			this->B->AutoSize = true;
			this->B->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(221)), static_cast<System::Int32>(static_cast<System::Byte>(210)),
				static_cast<System::Int32>(static_cast<System::Byte>(234)));
			this->B->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->B->Location = System::Drawing::Point(386, 459);
			this->B->Name = L"B";
			this->B->Size = System::Drawing::Size(26, 29);
			this->B->TabIndex = 4;
			this->B->Text = L"0";
			this->B->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// C
			// 
			this->C->AutoEllipsis = true;
			this->C->AutoSize = true;
			this->C->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)), static_cast<System::Int32>(static_cast<System::Byte>(180)),
				static_cast<System::Int32>(static_cast<System::Byte>(165)));
			this->C->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->C->Location = System::Drawing::Point(601, 675);
			this->C->Name = L"C";
			this->C->Size = System::Drawing::Size(26, 29);
			this->C->TabIndex = 5;
			this->C->Text = L"0";
			this->C->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->C->Click += gcnew System::EventHandler(this, &Person::C_Click);
			// 
			// D
			// 
			this->D->AutoEllipsis = true;
			this->D->AutoSize = true;
			this->D->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)), static_cast<System::Int32>(static_cast<System::Byte>(180)),
				static_cast<System::Int32>(static_cast<System::Byte>(165)));
			this->D->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->D->Location = System::Drawing::Point(386, 892);
			this->D->Name = L"D";
			this->D->Size = System::Drawing::Size(26, 29);
			this->D->TabIndex = 6;
			this->D->Text = L"0";
			this->D->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->D->Click += gcnew System::EventHandler(this, &Person::D_Click);
			// 
			// E
			// 
			this->E->AutoEllipsis = true;
			this->E->AutoSize = true;
			this->E->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(205)), static_cast<System::Int32>(static_cast<System::Byte>(215)),
				static_cast<System::Int32>(static_cast<System::Byte>(200)));
			this->E->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->E->Location = System::Drawing::Point(386, 675);
			this->E->Name = L"E";
			this->E->Size = System::Drawing::Size(26, 29);
			this->E->TabIndex = 7;
			this->E->Text = L"0";
			this->E->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// personalityMinus
			// 
			this->personalityMinus->BackColor = System::Drawing::Color::Transparent;
			this->personalityMinus->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->personalityMinus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->personalityMinus->ForeColor = System::Drawing::Color::LavenderBlush;
			this->personalityMinus->Location = System::Drawing::Point(1032, 78);
			this->personalityMinus->Name = L"personalityMinus";
			this->personalityMinus->Size = System::Drawing::Size(194, 91);
			this->personalityMinus->TabIndex = 8;
			this->personalityMinus->Text = L"Характер человека в плюсе";
			this->personalityMinus->UseVisualStyleBackColor = false;
			this->personalityMinus->Click += gcnew System::EventHandler(this, &Person::personalityPlus_Click);
			// 
			// personalityPlus
			// 
			this->personalityPlus->BackColor = System::Drawing::Color::Transparent;
			this->personalityPlus->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->personalityPlus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->personalityPlus->ForeColor = System::Drawing::Color::LavenderBlush;
			this->personalityPlus->Location = System::Drawing::Point(1414, 78);
			this->personalityPlus->Name = L"personalityPlus";
			this->personalityPlus->Size = System::Drawing::Size(190, 91);
			this->personalityPlus->TabIndex = 9;
			this->personalityPlus->Text = L"Характер человека в минусе";
			this->personalityPlus->UseVisualStyleBackColor = false;
			this->personalityPlus->Click += gcnew System::EventHandler(this, &Person::personalityMinus_Click);
			// 
			// zoneOfComfort
			// 
			this->zoneOfComfort->BackColor = System::Drawing::Color::Transparent;
			this->zoneOfComfort->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->zoneOfComfort->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->zoneOfComfort->ForeColor = System::Drawing::Color::LavenderBlush;
			this->zoneOfComfort->Location = System::Drawing::Point(1414, 212);
			this->zoneOfComfort->Name = L"zoneOfComfort";
			this->zoneOfComfort->Size = System::Drawing::Size(190, 92);
			this->zoneOfComfort->TabIndex = 10;
			this->zoneOfComfort->Text = L"Зона комфорта и гармонии";
			this->zoneOfComfort->UseVisualStyleBackColor = false;
			this->zoneOfComfort->Click += gcnew System::EventHandler(this, &Person::zoneOfComfort_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Transparent;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->ForeColor = System::Drawing::Color::LavenderBlush;
			this->button2->Location = System::Drawing::Point(1032, 212);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(194, 92);
			this->button2->TabIndex = 11;
			this->button2->Text = L"Главная проработка души";
			this->button2->UseVisualStyleBackColor = false;
			// 
			// enter
			// 
			this->enter->BackColor = System::Drawing::Color::Transparent;
			this->enter->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->enter->ForeColor = System::Drawing::Color::LavenderBlush;
			this->enter->Location = System::Drawing::Point(105, 26);
			this->enter->Name = L"enter";
			this->enter->Size = System::Drawing::Size(621, 149);
			this->enter->TabIndex = 12;
			this->enter->Text = L"Для расчёта матрицы судьбы введите дату рождения";
			this->enter->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->ForeColor = System::Drawing::Color::LavenderBlush;
			this->label2->Location = System::Drawing::Point(1090, 337);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(429, 56);
			this->label2->TabIndex = 15;
			this->label2->Text = L"Название аркана";
			// 
			// exit
			// 
			this->exit->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->exit->BackColor = System::Drawing::Color::Transparent;
			this->exit->Cursor = System::Windows::Forms::Cursors::Hand;
			this->exit->FlatAppearance->BorderSize = 0;
			this->exit->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->exit->Font = (gcnew System::Drawing::Font(L"Soledago", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->exit->ForeColor = System::Drawing::Color::White;
			this->exit->Location = System::Drawing::Point(1873, 11);
			this->exit->Margin = System::Windows::Forms::Padding(2);
			this->exit->Name = L"exit";
			this->exit->Size = System::Drawing::Size(56, 56);
			this->exit->TabIndex = 16;
			this->exit->Text = L"Х";
			this->exit->UseVisualStyleBackColor = false;
			this->exit->Click += gcnew System::EventHandler(this, &Person::exit_Click);
			// 
			// previous2
			// 
			this->previous2->BackColor = System::Drawing::Color::Transparent;
			this->previous2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->previous2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->previous2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 48, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->previous2->ForeColor = System::Drawing::Color::LavenderBlush;
			this->previous2->Location = System::Drawing::Point(1, 1);
			this->previous2->Name = L"previous2";
			this->previous2->Size = System::Drawing::Size(124, 76);
			this->previous2->TabIndex = 17;
			this->previous2->Text = L"<";
			this->previous2->UseVisualStyleBackColor = false;
			this->previous2->Click += gcnew System::EventHandler(this, &Person::previous2_Click);
			// 
			// description
			// 
			this->description->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->description->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->description->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->description->ForeColor = System::Drawing::Color::LavenderBlush;
			this->description->Location = System::Drawing::Point(902, 443);
			this->description->Multiline = true;
			this->description->Name = L"description";
			this->description->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->description->Size = System::Drawing::Size(832, 564);
			this->description->TabIndex = 18;
			// 
			// Person
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1940, 1100);
			this->Controls->Add(this->description);
			this->Controls->Add(this->previous2);
			this->Controls->Add(this->exit);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->enter);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->zoneOfComfort);
			this->Controls->Add(this->personalityPlus);
			this->Controls->Add(this->personalityMinus);
			this->Controls->Add(this->E);
			this->Controls->Add(this->D);
			this->Controls->Add(this->C);
			this->Controls->Add(this->B);
			this->Controls->Add(this->A);
			this->Controls->Add(this->done);
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
		if (day < 23)  {
			sum = day;  
		}
		else {
			int tempDay = day;
			while (tempDay > 0) {
				sum += tempDay % 10;
				tempDay /= 10;
			}
			if (sum >= 22) {
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
		int sum2 =  month;
		int year = selectedDate.Year;
		int sum3 = 0;
		int sum4 = 0;
		int year1 = year / 100;
		int year2 = year % 100;
		if (year1<23) {
			sum3 = year1;
		}
		else {
			int tempYear1 = year1;
			while (tempYear1 > 0) {
				sum3 += tempYear1 % 10;
				tempYear1 /= 10;
			}
			if (sum3 >= 23) {
				int newSum3 = 0;
				int tempSum3 = sum3;
				while (tempSum3 > 0) {
					newSum3 += tempSum3 % 10;
					tempSum3 /= 10;
				}
				sum3 = newSum3;
			}
		}
		if (year2<23) {
			sum4 = year2;
		}
		else {
			int tempYear2 = year2;
			while (tempYear2 > 0) {
				sum4 += tempYear2 % 10;
				tempYear2 /= 10;
			}
			if (sum4 >= 23) {
				int newSum4 = 0;
				int tempSum4 = sum4;
				while (tempSum4 > 0) {
					newSum4 += tempSum4 % 10;
					tempSum4 /= 10;
				}
				sum4 = newSum4;
			}
		}
		int year3 = sum3+sum4;
		int sum5 = 0;
		if (year3 <23) {
			sum5 = year3;
		}
		else {
			int tempYear3 = year3;
			while (tempYear3 > 0) {
				sum5 += tempYear3 % 10;
				tempYear3 /= 10;
			}
			if (sum5 >= 23) {
				int newSum5 = 0;
				int tempSum5 = sum5;
				while (tempSum5 > 0) {
					newSum5 += tempSum5 % 10;
					tempSum5 /= 10;
				}
				sum5 = newSum5;
			}
		}
		int sum6 = sum + sum2 + sum5;
		int sum7 = 0;
		if (sum6<23) {
			sum7 = sum6;
		}
		else {
			int temp = sum6;
			while (temp> 0) {
				sum7 += temp % 10;
				temp /= 10;
			}
			if (sum7 >= 23) {
				int newSum = 0;
				int tempSum = sum7;
				while (tempSum > 0) {
					newSum += tempSum % 10;
					tempSum /= 10;
				}
				sum7 = newSum;
			}
		}
		int sumE = sum + sum2 + sum5 + sum7;
		int result = 0;
		if (sumE<23) {
			result = sumE;
		}
		else {
			int temp = sumE;
			while (temp > 0) {
				result += temp % 10;
				temp /= 10;
			}
			if (result >= 23) {
				int newSum = 0;
				int tempSum = result;
				while (tempSum > 0) {
					newSum += tempSum % 10;
					tempSum /= 10;
				}
				result = newSum;
			}
		}
		this->A->Text = sum.ToString();
		this->B->Text = sum2.ToString();
		this->C->Text = sum5.ToString();
		this->D->Text = sum7.ToString();
		this->E->Text = result.ToString();
	}
private: System::Void Person_Load(System::Object^ sender, System::EventArgs^ e) {
	
	System::Drawing::Drawing2D::GraphicsPath^ path = gcnew System::Drawing::Drawing2D::GraphicsPath();
	path->AddEllipse(0, 0, matrixOfPerson->Width, matrixOfPerson->Height);
	matrixOfPerson->Region = gcnew System::Drawing::Region(path);
}
private: System::Void matrixOfPerson_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void D_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void A_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void C_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void zoneOfComfort_Click(System::Object^ sender, System::EventArgs^ e) {
	if (this->E->Text == "1") {
		System::Text::StringBuilder^ sb = gcnew System::Text::StringBuilder();

		sb->AppendLine("Обладатель 1 аркана привык ставить себе амбициозные цели и умеет достигать их любой ценой. Такой человек, безусловно, талантлив и умеет управлять ресурсами, которые даёт ему судьба. Однако максимально комфортно он себя чувствует не в момент достижения цели, а в процессе движения к ней.");
		sb->AppendLine();
		sb->AppendLine("Для перехода в точку гармонии нужно:");
		sb->AppendLine("• Не бойтесь строить глобальные планы, чем больше цель — тем лучше.");
		sb->AppendLine("• Будьте активны, верьте в свои силы, не бойтесь совершить ошибку.");
		sb->AppendLine("• Помните, что путь к любой цели начинается с чёткого плана.");
		sb->AppendLine("• Ресурсы, которые вам необходимы — непременно появятся в процессе движения.");
		sb->AppendLine("• Только рациональное мышление поможет вам достичь высоких результатов.");
		sb->AppendLine("• Лучшая сфера для реализации — созидание чего-то нового.");
		sb->AppendLine("• Познавайте мир, изучайте всё, что может помочь вам на пути к вершине.");
		sb->AppendLine("• Смело берите на себя ответственность за людей и процессы, вы справитесь.");
		sb->AppendLine("• Достигнув промежуточной цели — не останавливайтесь, ставьте новую цель и двигайтесь дальше.");

		this->description->Text = sb->ToString();
	}
	else if (this->E->Text == "2") {
		System::Text::StringBuilder^ sb = gcnew System::Text::StringBuilder();

		sb->AppendLine("Обладатель 2 аркана обладает врождённой интуицией, мудр в словах и поступках, не склонен проявлять эмоции, всегда окутан ореолом некой тайны. Достигнуть гармонии такой человек может, если станет действительно самодостаточным, будет постоянно развиваться духовно и обретёт внутреннее спокойствие.");
		sb->AppendLine();
		sb->AppendLine("Что нужно сделать для перехода в точку гармонии:");
		sb->AppendLine("• Примите и раскройте женскую сторону своей натуры.");
		sb->AppendLine("• Доверяйте интуиции, в поиске ответов обращайте свой взгляд внутрь, а не наружу.");
		sb->AppendLine("• Будьте терпеливы и выдержаны, больше доверяйте людям. Помогайте советом всем, кто просит об этом.");
		sb->AppendLine("• По возможности придерживайтесь нейтральной позиции, не вмешивайтесь в процессы, которые не инициировали.");
		sb->AppendLine("• Освойте любые духовные практики, займитесь йогой.");
		sb->AppendLine("• Проанализируйте свой жизненный опыт, выработайте свою жизненную позицию и кредо.");
		sb->AppendLine("• Больше слушайте, не ведите пустых разговоров, старайтесь меньше лгать, прекратите сплетничать.");
		sb->AppendLine("• Примите собственную уникальность, поймите, что некоторые знания доступны лишь избранным.");
		sb->AppendLine("• Набирайтесь опыта, накапливайте и осмысляйте всю поступающую информацию.");
		sb->AppendLine("• Старайтесь реализовывать творческие идеи, они достойны, чтобы воплотить их в жизнь!");

		this->description->Text = sb->ToString();
	}
	else if (this->E->Text == "3") {
		System::Text::StringBuilder^ sb = gcnew System::Text::StringBuilder();

		sb->AppendLine("Обладатель 3 аркана на протяжении всей жизни стремится к комфортной и счастливой жизни. Такой человек хочет добиться высокого социального статуса, жить в роскоши и богатстве. Даже власть, которой они рано или поздно добиваются, нужна им для того, чтобы получить материальные плоды, а не из простого честолюбия.");
		sb->AppendLine();
		sb->AppendLine("Для перехода в точку гармонии нужно:");
		sb->AppendLine("• Принять женскую сущность в себе и в окружающих женщинах, наладить отношения с матерью.");
		sb->AppendLine("• Найти достойного партнёра, завести крепкую патриархальную семью, родить детей.");
		sb->AppendLine("• Старайтесь содержать дом в идеальной чистоте и порядке.");
		sb->AppendLine("• Поставить цель, совместно с партнёром, обеспечить семью всем необходимым, повысить уровень жизни.");
		sb->AppendLine("• Научиться доверять супругу, разрешить ему принимать решения и нести ответственность за семью.");
		sb->AppendLine("• Не давить на детей, не навязывать им собственное мнение, разрешить жить своей жизнью.");
		sb->AppendLine("• Попробовать жить, как хочется: не экономить деньги, покупать престижные вещи, путешествовать и т.п.");
		sb->AppendLine("• Добиться руководящей должности на работе, принять на себя ответственность за подчинённых.");
		sb->AppendLine("• Начать помогать нуждающимся, взять под опеку достойного человека, реализовав тягу к наставничеству.");

		this->description->Text = sb->ToString();
	}
	else if (this->E->Text == "4") {
		System::Text::StringBuilder^ sb = gcnew System::Text::StringBuilder();

		sb->AppendLine("4 аркан – наделён властью, уважает порядок, имеет талант управления людьми, может принимать важные и ответственные решения. Максимально комфортной для такого человека будет ситуация, где он будет в полной мере реализовывать заложенный потенциал.");
		sb->AppendLine();
		sb->AppendLine("Что нужно сделать для перехода в точку гармонии:");
		sb->AppendLine("• Император – отличный руководитель, не только в профессиональной деятельности, но и дома. Всё, что ему нужно сделать, чтобы стать лидером — захотеть этого и начать движение в этом направлении.");
		sb->AppendLine("• Если 4 энергия выпадает женщине, она не должна становиться «мужчиной в юбке». Своих целей нужно достигать, используя женскую силу: ум, красоту и хитрость.");
		sb->AppendLine("• Человек 4 аркана имеет критическое логическое мышление, может легко выстраивать стратегию развития, предусмотрителен в выборе пути. Ему нельзя руководствоваться эмоциями, только планирование и чистый расчёт.");
		sb->AppendLine("• Человеку с энергией Императора, нужно постоянно действовать, только активность принесёт хорошие плоды. Наметив план — сразу приступайте к его выполнению.");

		this->description->Text = sb->ToString();
	}
	if (this->E->Text == "5") {
		System::Text::StringBuilder^ sb = gcnew System::Text::StringBuilder();

		sb->AppendLine("\tОбладатель 5 аркана всей душой стремится к истине и знаниям. Считается, что он может открыть величайшие тайны и постичь божественное откровение. Достигнуть гармонии такой человек может только совершив долгий и трудный путь своего становления и передав накопленную мудрость ученикам. Иерофант символизирует знания, доступные каждому, знания которые помогут людям постичь Вселенную.");
		sb->AppendLine();
		sb->AppendLine("Для перехода в точку гармонии нужно:");
		sb->AppendLine("• Постоянно учиться и развиваться в выбранном направлении.");
		sb->AppendLine("• Применять полученные знания на практике, объединяя материю и дух.");
		sb->AppendLine("• Найти последователей, а во второй половине жизни и учеников.");
		sb->AppendLine("• С чистым сердцем нести свет истины всем желающим.");
		sb->AppendLine("• Вести людей к свету, поднимая их до своего уровня.");
		sb->AppendLine("• Придерживаться человеческих и божественных законов.");
		sb->AppendLine("• Развиваясь духовно, не забывать о своём теле.");
		sb->AppendLine("• Наладить отношения в семье, иметь духовную связь с предками.");
		sb->AppendLine("• Блюсти семейные традиции и традиционное мировоззрение.");

		this->description->Text = sb->ToString();
	}
	if (this->E->Text == "6") {
		System::Text::StringBuilder^ sb = gcnew System::Text::StringBuilder();

		sb->AppendLine("Обладатель 6 аркана всю жизнь будет стремиться к любви и красоте. Буквально всё в их жизни будет делаться из любви и ради любви. Обрести истинную гармонию и комфорт такой человек сможет в тот момент, когда сможет полюбить себя и весь окружающий мир. Постарайтесь постоянно улучшать окружающий мир и по мере сил наполняйте его красотой. Однако не забывайте, что на этом пути вас ждёт немало искушений и мук выбора.");
		sb->AppendLine();
		sb->AppendLine("Для перехода в точку гармонии нужно:");
		sb->AppendLine("• Полюбите себя, свою жизнь, своих врагов, друзей и весь окружающий мир.");
		sb->AppendLine("• Примите любовь Вселенной, поймите, что бог вас действительно любит.");
		sb->AppendLine("• Правильно выберите спутника жизни, не будьте идеалистом и не жертвуйте собой ради отношений.");
		sb->AppendLine("• Расширяйте свой круг общения, заводите новые знакомства, дружите с теми, кто замкнут и одинок.");
		sb->AppendLine("• Выбирайте профессию по сердцу, смело меняйте работу, если в душе её ненавидите.");
		sb->AppendLine("• Чаще собирайте у себя гостей, людям всегда не хватает ощущения праздника.");
		sb->AppendLine("• Будьте терпимее к себе и окружающим, никто в этом мире несовершенен.");
		sb->AppendLine("• Разрешайте любые конфликты путём переговоров, силовые решения не принесут вам результата.");
		sb->AppendLine("• Окружите себя комфортом и уютом, не пренебрегайте деньгами, постарайтесь полюбить и их.");
		sb->AppendLine("• Всегда помните чего хотите, научитесь отделять фантазию от реальности.");

		this->description->Text = sb->ToString();
	}
	else if (this->E->Text == "7") {
		System::Text::StringBuilder^ sb = gcnew System::Text::StringBuilder();

		sb->AppendLine("Обладатель 7 аркана всё время стремится двигаться и развиваться. На пути к цели он собран и дисциплинирован, старается контролировать обстановку и принимать верные решения. Однако настоящий душевный комфорт и гармонию он обретает только в момент победы.");
		sb->AppendLine();
		sb->AppendLine("Для перехода в точку гармонии нужно:");
		sb->AppendLine("• Наметить множество второстепенных и одну-две главных цели, так у вас постоянно будет мотивация не останавливаться в развитии.");
		sb->AppendLine("• Непременно нужно отмечать все значимые достижения.");
		sb->AppendLine("• Правильно выберите спутника жизни, не будьте идеалистом и не жертвуйте собой ради отношений.");
		sb->AppendLine("• Бороться с внутренним страхом поражения.");
		sb->AppendLine("• Стараться контролировать обстановку, а главное, самого себя.");
		sb->AppendLine("• Брать на себя ответственность за подчинённых и семью.");
		sb->AppendLine("• Выработать распорядок дня и неуклонно его придерживаться как в части работы, так и в части отдыха.");
		sb->AppendLine("• Развивать тело и дух. Заниматься спортом, обязательно участвовать в соревнованиях.");
		sb->AppendLine("• Найти хобби, больше путешествовать, крайне полезными будут конные прогулки.");

		this->description->Text = sb->ToString();
	}
	else if (this->E->Text == "8") {
		System::Text::StringBuilder^ sb = gcnew System::Text::StringBuilder();

		sb->AppendLine("Обладатель 8 аркана всю свою жизнь стремится к справедливости и балансу во всём. Считается, что у такого человека есть все способности, чтобы достичь истинной гармонии, обрести душевное равновесие и покой.");
		sb->AppendLine();
		sb->AppendLine("Для перехода в точку гармонии нужно:");
		sb->AppendLine("• Удерживайте равновесие между духовным и материальным, не впадайте в крайности, не теряйте себя как бы плохо или хорошо не обстояли ваши дела.");
		sb->AppendLine("• Воздержитесь от необдуманных импульсивных поступков, спокойно и уверенно идите своей дорогой.");
		sb->AppendLine("• Исполняйте все юридические, моральные или религиозные законы, которые вы приняли. За любой противозаконный поступок вы будете наказаны Вселенной.");
		sb->AppendLine("• Находите и принимайте правильные решения, не убегая от проблем. Ситуация будет неоднократно повторяться, пока вы не пройдёте этот кармический урок.");
		sb->AppendLine("• Важно не подавлять эмоции, а научиться их контролировать. Иначе в критической ситуации эмоции возьмут над вами верх и не дадут трезво мыслить.");
		sb->AppendLine("• Следуйте советам голоса справедливости внутри вас. Замечайте знаки судьбы, они помогут вам при принятии решения и выбора нужной дороги.");
		sb->AppendLine("• Старайтесь оставаться на правильном пути и поступать справедливо, независимо от собственных желаний, личной выгоды и общественного осуждения.");

		this->description->Text = sb->ToString();
	}
	else if (this->E->Text == "9") {
		System::Text::StringBuilder^ sb = gcnew System::Text::StringBuilder();

		sb->AppendLine("Человек с 9 энергией в Матрице судьбы всю свою жизнь стремиться получать знания, исследовать и узнавать что-то новое. Этот человек любит находиться наедине с самим собой, и в одиночестве вести поиск истины.");
		sb->AppendLine();
		sb->AppendLine("Для перехода в точку гармонии нужно:");
		sb->AppendLine("• Вы самый настоящий мудрец и должны постоянно собирать в свою копилку новые знания и опыт. Применяйте их в реальной жизни, увеличивайте свой авторитет в глазах окружающих.");
		sb->AppendLine("• Регулярное пребывание в одиночестве подпитает вас силами. Находясь наедине с собой, вы гораздо будете гораздо быстрее усваивать информацию и осмыслять полученный опыт.");
		sb->AppendLine("• Попробуйте себя в роли учителя или наставника. Обратите внимание, что порой после разговора с вами человеку становится легче. Больше общайтесь - вас очень воодушевит возможность делиться своим опытом.");
		sb->AppendLine("• Научитесь соблюдать баланс духовного и физического развития. Не замыкайтесь в одиночестве.");
		sb->AppendLine("• Вы не слишком эмоциональны от природы, однако это идёт вам на пользу. Не торопитесь с принятием решений, будьте спокойны и никогда не идите силовым путём.");
		sb->AppendLine("• У вас есть незаурядные творческие способности, обязательно попробуйте их реализовать. Не так важно чем вы займётесь, важен сам факт творения и самовыражения.");

		this->description->Text = sb->ToString();
	}
	else if (this->E->Text == "10") {
		System::Text::StringBuilder^ sb = gcnew System::Text::StringBuilder();

		sb->AppendLine("Человек с 10 арканом обычно верит в свою судьбу и удачу, никогда не унывает в случае неприятностей, всегда готов действовать и двигаться. Именно тогда, когда удача на стороне 10 аркана, а он находится в самой гуще событий, этот человек обретает истинную гармонию и счастье.");
		sb->AppendLine();
		sb->AppendLine("Для перехода в точку гармонии нужно:");
		sb->AppendLine("• Не забывайте, вы находитесь в руках судьбы, помните, это она вас ведёт, а не вы её.");
		sb->AppendLine("• Верьте в удачу, но не забывайте активно действовать, Колесо фортуны не любит пассивных.");
		sb->AppendLine("• Следите за знаками, не упускайте возможности, которые будут вам предоставлены.");
		sb->AppendLine("• Научитесь соблюдать баланс духовного и физического развития. Не замыкайтесь в одиночестве.");
		sb->AppendLine("• Не торопитесь с принятием решений, будьте спокойны и никогда не идите силовым путём.");
		sb->AppendLine("• Следуйте советам голоса справедливости внутри вас. Замечайте знаки судьбы.");
		sb->AppendLine("• У вас есть незаурядные творческие способности, обязательно попробуйте их реализовать.");

		this->description->Text = sb->ToString();
	}
	else if (this->E->Text == "11") {
		System::Text::StringBuilder^ sb = gcnew System::Text::StringBuilder();

		sb->AppendLine("Только баланс между духовной и физической силой дарит обладателю 11 аркана душевный комфорт и ощущение гармонии. Начиная постигать все аспекты своей силы равновесия с детства, этот человек постепенно движется к намеченной цели, становясь всё более уверенным в себе, спокойным и доброжелательным.");
		sb->AppendLine();
		sb->AppendLine("Для перехода в точку гармонии нужно:");
		sb->AppendLine("• Принять внутреннего «зверя», обуздать своё животное естество, не подавляя и не заключая в клетку.");
		sb->AppendLine("• Углублять свои знания, чтобы вложенная в вас энергия направлялась в верное русло.");
		sb->AppendLine("• Заботиться о теле правильно, не истощая, а укрепляя его.");
		sb->AppendLine("• Регулярно заниматься спортом, участвовать в соревнованиях.");
		sb->AppendLine("• Научиться отдыхать и делать перерывы, найти себе хобби.");
		sb->AppendLine("• Бороться с физическими слабостями, подталкивающими к распущенности, насилию.");
		sb->AppendLine("• Развивать стойкость, преодолевать все тяготы и лишения.");
		sb->AppendLine("• Помнить о помощи высших сил, поддерживающих тех, кто нашёл призвание.");
		sb->AppendLine("• Относиться к своему дарованию, как к возможности помогать окружающим.");
		sb->AppendLine("• Установить связь с окружающим миром через природу, духовные практики.");
		sb->AppendLine("• Набравшись опыта, помогать слабым, делиться с ними силой и опытом.");
		sb->AppendLine("• Достигнув богатства и успеха, использовать эти блага для добрых целей.");

		this->description->Text = sb->ToString();
	}
	else if (this->E->Text == "12") {
		System::Text::StringBuilder^ sb = gcnew System::Text::StringBuilder();

		sb->AppendLine("Обладатель 12 аркана прекрасно понимает людей, умеет сопереживать и сочувствовать, принимая на себя часть груза ближнего. Собственно именно в момент помощи такой человек действительно счастлив и достигает истинной гармонии.");
		sb->AppendLine();
		sb->AppendLine("Для перехода в точку гармонии нужно:");
		sb->AppendLine("• Старайтесь всё время развиваться духовно, это наполнит вас силой и уверенностью.");
		sb->AppendLine("• У вас есть своё мнение по любому вопросу и собственный взгляд на происходящее.");
		sb->AppendLine("• Вы отлично понимаете окружающих и умеете подбирать нужные слова для поддержки.");
		sb->AppendLine("• Если у вас нет материальных проблем — займитесь благотворительностью.");
		sb->AppendLine("• Почаще вспоминайте о своих потребностях, вы тоже достойны любви и сострадания.");
		sb->AppendLine("• Ухаживайте за собой, регулярно отдыхайте, больше бывайте на природе.");

		this->description->Text = sb->ToString();
	}
	else if (this->E->Text == "13") {
		System::Text::StringBuilder^ sb = gcnew System::Text::StringBuilder();

		sb->AppendLine("Обладатель 13 энергии всей душой стремится к переменам в жизни и личной духовной трансформации. Быстро адаптируется к любым изменениям сам и помогает в этом остальным.");
		sb->AppendLine();
		sb->AppendLine("Для перехода в точку гармонии нужно:");
		sb->AppendLine("• Поймите, что все перемены, которые несёт вам жизнь — к лучшему.");
		sb->AppendLine("• Решительно отпускайте прошлое, завершайте начатые дела.");
		sb->AppendLine("• Наряду с переменами в жизни, вы должны меняться и сами.");
		sb->AppendLine("• Занимайтесь духовным саморазвитием, следите за новыми технологиями.");
		sb->AppendLine("• Временами будет сложно, однако это ваш путь, доверьтесь судьбе.");
		sb->AppendLine("• Если ваша профессия не связана с риском, попробуйте экстремальное хобби.");

		this->description->Text = sb->ToString();
	}
	else if (this->E->Text == "14") {
		System::Text::StringBuilder^ sb = gcnew System::Text::StringBuilder();

		sb->AppendLine("Человек с 14 энергией ищет и рано или поздно находит ту самую золотую середину и идеальный баланс во всём. Именно тогда, когда вы сможете привести в состояние равновесия все свои дела и чувства — вы достигните истинной гармонии.");
		sb->AppendLine();
		sb->AppendLine("Для перехода в точку гармонии нужно:");
		sb->AppendLine("• Научиться управлять своими эмоциями, быть спокойным и умиротворённым.");
		sb->AppendLine("• Никогда не торопите события, вряд ли что-то будет происходить быстро.");
		sb->AppendLine("• Перед принятием решений оценивайте ситуацию с разных сторон.");
		sb->AppendLine("• Будьте скромны во всём, добившись успеха — не хвастайте этим.");
		sb->AppendLine("• В любых проблемах избегайте полярных решений, ищите компромисс.");
		sb->AppendLine("• В итоге вы должны прийти к балансу во всех сферах.");

		this->description->Text = sb->ToString();
	}
	else if (this->E->Text == "15") {
		System::Text::StringBuilder^ sb = gcnew System::Text::StringBuilder();

		sb->AppendLine("15 энергия олицетворяет неизбежное зло, живущее в каждом человеке. Обладатели приходят к гармонии только при полном принятии себя, сумев подчинить своей воле все тайные желания.");
		sb->AppendLine();
		sb->AppendLine("Для перехода в точку гармонии нужно:");
		sb->AppendLine("• Контролировать свои желания и страсти.");
		sb->AppendLine("• Разорвать цепи зависимостей (отношения, вещи, привычки).");
		sb->AppendLine("• Понять, что абсолютной независимости достичь нереально.");
		sb->AppendLine("• Отказаться от послаблений в самодисциплине.");
		sb->AppendLine("• Взять ситуацию под контроль, сосредоточиться на себе.");
		sb->AppendLine("• Мудро пользоваться властью, не подавлять окружающих.");
		sb->AppendLine("• Завершить отношения, которые склоняют к дурным поступкам.");
		sb->AppendLine("• Окружить себя добрыми людьми.");
		sb->AppendLine("• Научиться прощать — себя и других.");

		this->description->Text = sb->ToString();
	}
	else if (this->E->Text == "16") {
		System::Text::StringBuilder^ sb = gcnew System::Text::StringBuilder();

		sb->AppendLine("Носителя 16 аркана всю жизнь будут преследовать различные испытания, победы будут сменяться поражениями. Причём именно в момент успешного преодоления испытания он обретает истинную гармонию.");
		sb->AppendLine();
		sb->AppendLine("Для перехода в точку гармонии нужно:");
		sb->AppendLine("• Не бояться бед, предательства и материальных потерь.");
		sb->AppendLine("• Быть твёрдым и решительным, не прогибаться под ударами судьбы.");
		sb->AppendLine("• Отбросить всё, что не даёт развиваться и тормозит в пути.");
		sb->AppendLine("• Мыслить конструктивно, побороть деструктивные мысли.");
		sb->AppendLine("• Помогать нуждающимся в вашей помощи.");
		sb->AppendLine("• Никогда не переоценивать себя, избегать гордыни.");

		this->description->Text = sb->ToString();
	}
	else if (this->E->Text == "17") {
		System::Text::StringBuilder^ sb = gcnew System::Text::StringBuilder();

		sb->AppendLine("Обладатель 17 аркана всю свою жизнь стремится к некой мечте или цели всей жизни. Гармония воцаряется при выполнении промежуточных шагов на пути к мечте.");
		sb->AppendLine();
		sb->AppendLine("Для перехода в точку гармонии нужно:");
		sb->AppendLine("• Иметь главную мечту и цель своей жизни.");
		sb->AppendLine("• Мечтать в конструктивном ключе (например, карта желаний).");
		sb->AppendLine("• Раскрыть свой главный талант.");
		sb->AppendLine("• Верить в свои способности, но не переоценивать себя.");
		sb->AppendLine("• Терпеливо трудиться самому и помогать окружающим.");
		sb->AppendLine("• Общаться с достойными, талантливыми людьми.");
		sb->AppendLine("• Не стесняться проявлять свою уникальность.");
		sb->AppendLine("• Заниматься саморазвитием, получать новые знания.");
		sb->AppendLine("• Не забывать развиваться духовно.");

		this->description->Text = sb->ToString();
	}
	else if (this->E->Text == "18") {
		System::Text::StringBuilder^ sb = gcnew System::Text::StringBuilder();

		sb->AppendLine("18 аркан наделяет человека богатой фантазией, живым умом, творческим талантом, а главное, способностью материализовать в реальности свои мысли.");
		sb->AppendLine();
		sb->AppendLine("Для перехода в точку гармонии нужно:");
		sb->AppendLine("• Сформировать свой внутренний мир.");
		sb->AppendLine("• Мыслить позитивно, бороться со страхами.");
		sb->AppendLine("• Заниматься самообразованием.");
		sb->AppendLine("• Выражать мысли через искусство.");
		sb->AppendLine("• Научиться доверять своему внутреннему голосу.");
		sb->AppendLine("• Больше общаться с окружающими.");
		sb->AppendLine("• Все мечты направлять в конструктивное русло.");
		sb->AppendLine("• Постоянно тренировать дар материализатора.");
		sb->AppendLine("• Ставить перед собой разумные цели.");

		this->description->Text = sb->ToString();
	}
	else if (this->E->Text == "19") {
		System::Text::StringBuilder^ sb = gcnew System::Text::StringBuilder();

		sb->AppendLine("Обладатель 19 аркана всегда энергичен, излучает тепло и позитив, предпочитает ставить себе амбициозные цели. Именно в процессе движения к целям такой человек чувствует себя комфортно.");
		sb->AppendLine();
		sb->AppendLine("Для перехода в точку гармонии нужно:");
		sb->AppendLine("• Ставить себе несколько целей в разных направлениях.");
		sb->AppendLine("• Фиксировать достигнутый прогресс.");
		sb->AppendLine("• Не допускать хаоса в работе.");
		sb->AppendLine("• Создать семью, завести детей.");
		sb->AppendLine("• Заниматься спортом, следить за здоровьем.");
		sb->AppendLine("• Быть добрее с окружающими.");
		sb->AppendLine("• Сдерживать сильные эмоции.");
		sb->AppendLine("• Не хвалиться своим положением.");
		sb->AppendLine("• Стараться не быть жадным.");

		this->description->Text = sb->ToString();
	}
	else if (this->E->Text == "20") {
		System::Text::StringBuilder^ sb = gcnew System::Text::StringBuilder();

		sb->AppendLine("Обладатель 20 аркана может достичь полного комфорта, если ему удастся решить все проблемы своего рода, а также найти свой личный путь и добиться успеха.");
		sb->AppendLine();
		sb->AppendLine("Для перехода в точку гармонии нужно:");
		sb->AppendLine("• Решить все задачи рода.");
		sb->AppendLine("• Учесть ошибки предков.");
		sb->AppendLine("• Уважительно относиться к памяти предков.");
		sb->AppendLine("• Регулярно устраивать семейные встречи.");
		sb->AppendLine("• В какой-то момент пробудить собственное сознание.");
		sb->AppendLine("• Заниматься духовным развитием.");
		sb->AppendLine("• Обретя власть — решительно принимать решения.");
		sb->AppendLine("• Начать семейный бизнес.");
		sb->AppendLine("• Смотреть на мир позитивно.");
		sb->AppendLine("• Продолжать учиться, получать образование.");

		this->description->Text = sb->ToString();
	}
	else if (this->E->Text == "21") {
		System::Text::StringBuilder^ sb = gcnew System::Text::StringBuilder();

		sb->AppendLine("Человек с 21 энергией стремится охватить своим вниманием весь мир. Гармония воцаряется, когда он чувствует себя частью глобального проекта, цель которого сделать мир лучше.");
		sb->AppendLine();
		sb->AppendLine("Для перехода в точку гармонии нужно:");
		sb->AppendLine("• Сформулировать личную философию.");
		sb->AppendLine("• Определить главную цель в жизни.");
		sb->AppendLine("• Быть толерантным к другим культурам.");
		sb->AppendLine("• Поддерживать высокий темп развития.");
		sb->AppendLine("• Ломать стереотипы и привычные рамки.");
		sb->AppendLine("• Стремиться расширить свой кругозор.");
		sb->AppendLine("• Больше путешествовать.");
		sb->AppendLine("• Изучать новые языки.");

		this->description->Text = sb->ToString();
	}
	else if (this->E->Text == "22") {
		System::Text::StringBuilder^ sb = gcnew System::Text::StringBuilder();

		sb->AppendLine("Владельца 22 энергии ничто не может остановить на дороге к мечте. Такой человек обладает настоящей внутренней свободой. Его путь проходит по краю пропасти.");
		sb->AppendLine();
		sb->AppendLine("Что нужно сделать для перехода в точку гармонии:");
		sb->AppendLine("• Принять данную от природы свободу.");
		sb->AppendLine("• Снять внутренние барьеры.");
		sb->AppendLine("• Быть открытым людям.");
		sb->AppendLine("• Искать новые ощущения, больше путешествовать.");
		sb->AppendLine("• Завести экстремальное хобби.");
		sb->AppendLine("• Иметь настоящего друга и соратника.");

		this->description->Text = sb->ToString();
	}
}
	private: System::Void exit_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();}
	private: System::Void previous2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
private: System::Void personalityMinus_Click(System::Object^ sender, System::EventArgs^ e) {
	if (this->B->Text == "1") {
		System::Text::StringBuilder^ sb = gcnew System::Text::StringBuilder();
		sb->AppendLine("Состояние человека «в минусе»:");
		sb->AppendLine();
		sb->AppendLine("• Неверие себе. Худшее, что может произойти с 1 арканом — он перестаёт верить в свои силы и возможности. И действительно, чем больше он себя будет убеждать в этом, тем меньше будет энергии, тем меньше возможностей будет давать ему Вселенная. В результате у человека не получается завершить начатое, он не принимает советы и отрицает любую конструктивную критику.");
		sb->AppendLine("• Отсутствие цели. Если Маг не ставит себе цель, не ищет точку приложения сил и мотивацию двигаться — он неминуемо деградирует. Из жизнерадостного человека, любящего жизнь, превращается в брюзгу, который всем недоволен и крайне раздражителен. Может пуститься «во все тяжкие», прожигая жизнь и разменивая талант «по рублю».");
		sb->AppendLine("• Тщеславие и беспринципность. В некоторых случаях люди с 1 энергией болезненно тщеславны, эгоистичны, жаждут признания во власти. Они готовы добиваться этого любой ценой и не сковывают себя какими-то предрассудками, пустить в ход могут любые средства.");
		sb->AppendLine("• Потребительское отношение к людям. Как в личных, так и в рабочих отношениях, в погоне за результатом может крайне потребительски относиться к людям. Очень категоричен и требователен, не умеет прощать и уступать, не стесняется оказывать моральное давление. Лишается друзей, любви, ругается с родственниками и коллегами.");
		sb->AppendLine("• Депрессия достижений. Энергия первого аркана даёт человеку силы и возможности, но когда он достигает задуманного, вместо чувства удовлетворения это приносит разочарование. Такое состояния будет длиться ровно до тех пор, пока не появится новая цель.");

		this->description->Text = sb->ToString();
	}
	else if (this->B->Text == "2") {
		System::Text::StringBuilder^ sb = gcnew System::Text::StringBuilder();
		sb->AppendLine("Состояние человека «в минусе»:");
		sb->AppendLine();
		sb->AppendLine("• Примитивный взгляд. Мудрость в минусе превращается в глупость. Человек упрощает модель мира, деля его на хорошее и плохое, принимает крайне спорные или вовсе абсурдные решения.");
		sb->AppendLine("• Пассивность. Даже если знает решение, может долго следить за ситуацию и не вмешиваться. Зачем так делает не может объяснить даже себе. Любит прокрастинировать, предпочитает дать проблеме «отлежаться», нежели сразу приступит к её реализации. Смиряется с несправедливостью, апеллируя к воле высших сил.");
		sb->AppendLine("• Переменчивость. Часто меняет всё в своей жизни: причёску, одежду, настроение, модели поведения. Не имеют своего мнения ни по какому вопросу или также меняют его ежедневно. Окружающие это замечают, не понимают, что происходит, и прекращают общаться.");
		sb->AppendLine("• Лишние эмоции. В минусе самодостаточность превращается в излишнюю эмоциональность. Человек становится без меры болтлив, постоянно чем-то недоволен, много сплетничает, часто лжёт без веской причины.");
		sb->AppendLine("• Одиночество. Со временем между обладателем 2 аркана и окружающими образуется незримая стена, препятствующая нормальным отношениям. Такому человеку сложно найти спутника жизни, отношения либо «зависают» либо люди расстаются.");

		this->description->Text = sb->ToString();
	}
	else if (this->B->Text == "3") {
		System::Text::StringBuilder^ sb = gcnew System::Text::StringBuilder();
		sb->AppendLine("Состояние человека «в минусе»:");
		sb->AppendLine();
		sb->AppendLine("• Непринятие женского начала. (для женщин). Такая женщина не хочет взрослеть и не желает брать на себя ответственность. Не желает развиваться, учиться, двигаться по карьерной лестнице. Постоянно скандалит с сёстрами, матерью, бабушкой. В молодости может открыто презирать семейные ценности, сознательно отказываясь от рождения детей и замужества. В зрелом возрасте предъявляет заведомо невыполнимые требования к партнёру, находится в вечном пассивном поиске. В итоге заводит кошку и смиряется со статусом старой девы.");
		sb->AppendLine("• Инфантильность (для мужчин). В минусе это очень инфантильный или «забитый» мужчина. Может всю жизнь жить за счёт жены или матери. У него нет стремления к развитию, он всегда надеется на авось и плывёт по течению. У такого человека может в принципе не быть семейной жизни, а если и будет, то станет для него скорее обременением. Из-за этого он может впадать в агрессию, виня женщин во всех своих бедах.");
		sb->AppendLine("• Нетерпение. Крайнее нетерпение и непунктуальность — самые частые негативные черты Императрицы, хоть и не самые страшные. Их высочество может пренебрегать временем или, наоборот, быть особо требовательной ко всем окружающим. За малейшее несоответствие её требованиям вы получите скандал.");
		sb->AppendLine("• Гордыня и заносчивость. Два других не менее частых минуса этой энергии. Достигнув определённого достатка и социального статуса, Императрица ставит себя выше других и становится недосягаемой для обычных простолюдинов. В таком состоянии может игнорировать старых друзей, родственников и коллег. Много хвастается, кичась своим положением и деньгами.");
		sb->AppendLine("• Злоупотребление властью. При отсутствии более честолюбивых людей, например, Императора, Императрица может получить в свои руки всю власть. Вседозволенность может вскружить ей голову, и тогда она переходит все границы дозволенного. Как правило, становясь меркантильной, агрессивной и беспринципной стервой. В результате женщина теряет свою суть и становится предельно несчастлива.");

		this->description->Text = sb->ToString();
	}
	else if (this->A->Text == "4 аркан Император") {
		System::Text::StringBuilder^ sb = gcnew System::Text::StringBuilder();
		sb->AppendLine("Состояние человека «в минусе»:");
		sb->AppendLine();
		sb->AppendLine("• Контроль или тирания. Если энергия развивается в минусе, авторитетный лидер превращается в тирана или контролёра. Человек начинает требовать от окружающих безупречного выполнения своей воли, невзирая на личные цели и интересы. В первую очередь это сказывается на членах семьи. Чем больше его терпят, тем хуже становится поведение.");
		sb->AppendLine("• Высокомерие. Если такой человек добивается определённых успехов и не занимается саморазвитием, то становится крайне высокомерным. Он завышает собственную важность, предвзято оценивает окружающих, ему сложно угодить и тем более донести свою точку зрения. В подростковом возрасте скандалит с родителями, особенно с отцом.");
		sb->AppendLine("• Страх потерпеть неудачу. В некоторых случаях этого человека обуревает страх потерпеть неудачу. Он боится, что какое-то внезапное вмешательство, навредит идеальному плану. Постепенно страх перерастает в фобию, забирает много сил, и наносит серьёзный удар по авторитету и высокому положению человека.");
		sb->AppendLine("• Женское начало. В тех случаях, когда аркан достаётся женщине, она легко может потерять своё женское начало и стать настоящим «мужиком в юбке». Может найти себе заведомо слабого, ведомого партнёра, которым будет манипулировать и помыкать.");
		sb->AppendLine("• Напряжённость в отношениях. Близкое общение с Императором, который уходит в минус, со временем становится невозможным. С годами его характер становится хуже, требования всё жёстче. Развивается мания величия, общение становится крайне неприятным.");
		sb->AppendLine("• Худший вариант. При уходе в «глубокий минус» такие люди могут потерять все положительные черты характера и скатываются в противоположную крайность. Боятся брать на себя ответственность, постоянно болеют, лишаются стабильного дохода.");

		this->description->Text = sb->ToString();
	}
	else if (this->A->Text == "5 аркан Иерофант") {
		System::Text::StringBuilder^ sb = gcnew System::Text::StringBuilder();
		sb->AppendLine("Состояние человека «в минусе»:");
		sb->AppendLine();
		sb->AppendLine("• Внутренний конфликт. Следуя принятым правилам и традициям, такому человеку бывает невозможно получать знания и идти к истине. Каждый раз, упираясь в тупик непонимания, он вынужден страдать, так как нет никакой возможности избавиться от внутреннего давления. Вместе с тем нельзя поделиться с кем-то, чтобы не поставить под удар свой авторитет. Классический пример — все мужчины в семье традиционно кузнецы, а человек с 5 арканом в душе хочет быть химиком.");
		sb->AppendLine("• Контролёр. Контроль за тем, чтобы всё вокруг происходило правильно — одно из любимых занятий такого человека. Он ревностно и кропотливо будет контролировать всё и всех вокруг, чтобы добиться соблюдения идеального порядка и традиций. В минусе эта черта выражена сильно и человек буквально доводит до истерики членов семьи и коллег своим занудством.");
		sb->AppendLine("• Инквизитор. Этот аркан бывает буквально одержим собственным понятием истины, что может навредить окружающим. В минусе он объявляет «охоту на ведьм» и благодаря своему авторитету собирает значительную армию, готовую «жечь на костре» всех неугодных. Может придерживаться ортодоксальных течений, проповедовать нетрадиционные религии, агрессивно вербуя сторонников.");
		sb->AppendLine("• Бедный мудрец. Если энергия находится в минусе, человек может не раскрыться как признанный специалист или не будет обращать внимание на достойное вознаграждение своего труда. В результате он скатывается в нищету, и втайне даже гордится этим.");
		sb->AppendLine("• Отчаявшийся. Находясь в минусе, 5 аркан расходует массу сил, чтобы раскрыть людям истину и передать свои знания. Однако, если вокруг только неблагодарные ученики, никакой подпитки у него не будет. Чаще всего такой человек отчаивается или выгорает. Отказывается от своего признания, теряет авторитет, уходит от людей, оставаясь наедине и со своими знаниями.");

		this->description->Text = sb->ToString();
	}
	else if (this->A->Text == "6 аркан Влюблённые") {
		System::Text::StringBuilder^ sb = gcnew System::Text::StringBuilder();
		sb->AppendLine("Состояние человека «в минусе»");
		sb->AppendLine();
		sb->AppendLine("• Неприятный человек. В минусе любовь превращается в сухой расчёт и такой человек отталкивает от себя окружающих. Может стать мнительным и высокомерным, воспринимать любые проблемы излишне остро. Завышает требования к близким, часто обижается, не умеет прощать, мстит за нанесённые обиды.");
		sb->AppendLine("• Неправильный выбор. Остаётся в уверенности, что всё делает правильно, однако через какое-то время понимает, что совершил ошибку, однако что-то исправить уже невозможно. Зачастую такой неправильный выбор в корне меняет жизнь человека.");
		sb->AppendLine("• Пессимизм. Со временем проблемы накапливаются, и минусовой аркан всей тяжестью ложится на плечи своего обладателя. В результате человек становится угрюмым пессимистом, перестаёт верить людям, искренне считает, что не в силах поменять свою жизнь.");
		sb->AppendLine("• Не от мира сего. Зачастую 6 аркан живёт в собственном придуманном мире, где хорошо и ничего не угрожает. Например: с головой уходит в своё хобби, переносит общение в социальные сети, погружается в виртуальные игры.");
		sb->AppendLine("• Дискриминация по внешним признакам. Искренне считает, что его внимания достойны только такие же прекрасные люди как он сам. Оценивает окружающих по внешности, делает акцент на статусных атрибутах. Хотя точно так же придирчиво относится и к собственной внешности.");
		sb->AppendLine("• Глупые траты. Не умеет копить и контролировать траты, часто совершает необдуманные спонтанные покупки. Отказывается заниматься элементарным финансовым планированием, может потратить всю зарплату за неделю, а дальше жить в кредит.");

		this->description->Text = sb->ToString();
	}
	else if (this->A->Text == "7 аркан Колесница") {
		System::Text::StringBuilder^ sb = gcnew System::Text::StringBuilder();
		sb->AppendLine("Состояние человека «в минусе»:");
		sb->AppendLine();
		sb->AppendLine("• Застой. Если жизнь заставляет такого человека остановиться, ему очень сложно вновь начать движение вперёд. Поэтому любые достаточно серьёзные препятствия на пути Колесницы — могут стать фатальными. В некоторых случаях неудачи бывают случайными, а обстоятельства приведшие к остановке мелкими и несущественными.");
		sb->AppendLine("• Внутренние страхи. В минусе такого человека постоянно преследуют различные внутренние страхи. Он боится не справиться и проиграть, думает о том, верный ли путь выбран, страшится совершить ошибку и подвести доверившихся людей.");
		sb->AppendLine("• Беспорядочные действия. При отсутствии дисциплины, чёткого плана этот человек начинает совершать энергичные, но беспорядочные действия. Такое поведение непременно приводит их к остановке и дальнейшей стагнации.");
		sb->AppendLine("• Злой погонщик. Вступив в «битву» и не достигнув успеха, 7 аркан может утратить моральные ориентиры и озлобиться на весь мир. В таком случае он срывает злобу на близких, становится буквально невыносимым. Хуже всего, что злоба не даёт ему желанной победы.");
		sb->AppendLine("• Загнанный конь. В других случаях он обрушивает силу гнева не на посторонних, а на себя. Ругая себя за совершённые ошибки, он пытается всеми силами исправить ситуацию, постепенно теряя силы и, в конце концов, совершенно лишаясь сил.");

		this->description->Text = sb->ToString();
	}
	else if (this->A->Text == "8 аркан Справедливость") {
		System::Text::StringBuilder^ sb = gcnew System::Text::StringBuilder();
		sb->AppendLine("Состояние человека «в минусе»:");
		sb->AppendLine();
		sb->AppendLine("• Отстранённость и эгоизм. В минусе это может быть закрытый, замкнутый или погружённый в себя человек. Больше всего он думает о себе, а значит, ему сложно строить построить здоровые отношения. Втайне может гордиться своей принципиальностью и считать окружающих недостойными себя.");
		sb->AppendLine("• Чрезмерная ответственность. Гипертрофированное чувство ответственности мешает принимать решения и достигать успеха в жизни. Зачастую 8 аркан стремится контролировать таким образом не только себя, но и членов семьи, что, конечно, плохо сказывается на отношениях.");
		sb->AppendLine("• Эмоциональность и агрессия. В глубоком минусе может утратить способность здраво мыслить, перестаёт контролировать эмоции. В погоне за правдой и справедливостью становится крайне агрессивен, совершает массу неразумных поступков.");
		sb->AppendLine("• Наивность. Верит всем подряд, поддаётся чужим манипуляциям, легко обманывается, живёт иллюзиями. Вследствие чего, не имеет веса среди коллег и партнёров, его часто делают крайним в конфликтах. Часто попадается на уловки мошенников.");

		this->description->Text = sb->ToString();
	}
	else if (this->A->Text == "9 аркан Отшельник") {
		System::Text::StringBuilder^ sb = gcnew System::Text::StringBuilder();
		sb->AppendLine("Состояние человека «в минусе»:");
		sb->AppendLine();
		sb->AppendLine("• Замкнутость. Отшельник может настолько погружаться в свой внутренний мир, что разучивается контактировать с окружающими. Совершенствуясь в выбранном направлении, он перестаёт воспринимать внешний мир, семью, житейские проблемы. Со временем такой стиль жизни погружает человека в апатию, из которой ему сложно выйти самостоятельно.");
		sb->AppendLine("• Страх одиночества. Есть и другая крайность минуса 9 энергии, в этом случае человек, наоборот, панически боится остаться один. Возможно, после серьёзной ошибки или из-за страха показаться глупым. В результате окружает себя сомнительными друзьями совершенно несоответствующими его уровню. Постепенно «скатывается» к бездумному существованию, полностью теряя себя.");
		sb->AppendLine("• Невостребованная мудрость. По мере взросления Отшельник копит знания, опыт и мудрость. И в какой-то момент он должен начать передавать накопленное всем желающим. Если этого не случится и Отшельник не найдёт учеников или последователей, избыток энергии постепенно будет разрушать его сущность.");
		sb->AppendLine("• Упрямство и придирчивость. Зачастую этот человек довольно высокомерен, и считает себя умнее всех. Если вы захотите рассказать ему некую альтернативную точку зрения, то, вероятно, ничего не получится. Скорее всего, Отшельник вас выслушает и задаст массу вопросов, пытаясь придраться и найти изъян. Но даже если вы ответите верно, это вряд ли поменяет его точку зрения.");
		sb->AppendLine("• Отсутствие физического развития. В погоне за знаниями и духовным развитием 9 аркан может совершенно забыть о собственном теле и здоровье. Чрезмерное умственное напряжение и слабое тело приводят к болезням и психологическим расстройствам.");

		this->description->Text = sb->ToString();
	}
}
private: System::Void personalityPlus_Click(System::Object^ sender, System::EventArgs^ e) {
	if (this->A->Text == "1") {
		System::Text::StringBuilder^ sb = gcnew System::Text::StringBuilder();

		sb->AppendLine("Человек с энергией Мага крайне неординарно смотрит на жизнь, он очень амбициозен и уверен в собственных силах. Его невозможно поставить в тупик, умеет находить ответы на все вопросы, инициативен и легко принимает ответственные решения. Такой человек не стесняется ставить перед собой грандиозные цели и уверенно идёт к цели. Природа наделяет его немалыми способностями, а Вселенная отрывает перед ним массу возможностей.");
		sb->AppendLine();
		sb->AppendLine("Состояние человека «в плюсе»:");
		sb->AppendLine();
		sb->AppendLine("• Амбициозность. Первый аркан умеет ставить себе амбициозные цели, нисколько не сомневается в своих силах, никогда не слушает скептиков, игнорируя любой негатив. Впрочем, все амбиции имеют под собой основу и назвать его пустым прожектёром нельзя.");
		sb->AppendLine("• Масса возможностей. Такому человеку удаётся реализовать практически всё задуманное, так как Вселенная даёт ему все возможности. Обстоятельства складываются так, что у 1 аркана по мере необходимости всегда находятся необходимые ресурсы, знания и люди.");
		sb->AppendLine("• Созидательное начало. Этот человек — настоящий творец и никогда не станет что-то разрушать. Он повелевает материей и энергией, соединяя их воедино и созидая нечто новое из ничего.");
		sb->AppendLine("• Познание мира. Первый аркан любит получать новую информацию и расширять картину мира. Это прирождённый путешественник и естествоиспытатель.");
		sb->AppendLine("• Активная позиция. Люди первого аркана обладают неиссякаемой жизненной энергией, никогда не сидят на месте, крайне активны, излучают позитив и мотивируют окружающих. Многие берут пример с таких людей и восхищаются таким подходом к жизни.");
		sb->AppendLine("• Задатки лидера. Острый ум, амбиции и внутренняя энергия буквально заставляют Мага становиться лидером. Он знает, как организовать людей на совместный труд и замотивировать их на достижение намеченных целей. Со временем такие люди становятся опытными и весьма жёсткими руководителями.");
		this->description->Text = sb->ToString();
	}
	else if (this->A->Text == "2") {
		System::Text::StringBuilder^ sb = gcnew System::Text::StringBuilder();

		sb->AppendLine("Человек со второй энергией — очень проницателен и мудр, обладает богатым жизненным опытом. Далеко не всё рассказывает о себе и вообще окутан некой тайной. Обладает поразительной интуицией, видит людей насквозь, часто принимает верные, но совсем нелогичные решения. Умеет слушать и многое понимает без слов, даёт очень ценные и своевременные советы.");
		sb->AppendLine();
		sb->AppendLine("Состояние человека «в плюсе»:");
		sb->AppendLine();
		sb->AppendLine("• Мудрость и интуиция. Принимает себя и весь мир таким, какой он есть. Умеет сострадать, а жизненный опыт, позволяет вовремя распознать и понять знаки Вселенной. При принятии решений практически всегда руководствуется интуицией, гораздо меньше доверяет логике.");
		sb->AppendLine("• Ореол тайны. Об этом человеке многое неизвестно, да и он не спешит расставаться со своими секретами. Умеет исцелять словом и делом, видит то, что другим недоступно. Считается, что такие люди имеют особый талант к гаданиям и магии.");
		sb->AppendLine("• Спокойствие и проницательность. 2 аркан всегда зрит в корень и знает, как обрести и удерживать внутренний баланс между внешним и внутренним миром. Умеет отделять сиюминутные эмоции и порывы, от настоящих глубоких чувств. Даже в самой сложной ситуации не теряет лица и сохраняет спокойствие.");
		sb->AppendLine("• Самодостаточность. Такой человек редко кого пускает в свою жизнь. Обладая огромным внутренним миром, 2 аркан не испытывает острой потребности в общении с посторонними, хотя и совсем один быть не любит. Часто носит «маску» и только дома позволяет быть самой собой. Любит читать и знает толк в хорошей литературе.");
		sb->AppendLine("• Теневой дипломат. Человек, обладающий 2 энергией, вызывает необъяснимую симпатию у окружающих. Он умеет находить общий язык с людьми, и его очень любят животные. Однако сама Жрица не любит руководить напрямую, предпочитая занять место теневого лидера и скрытно управлять окружающими. Этот человек умеет мирить спорщиков, неплохо ведёт переговоры.");
		this->description->Text = sb->ToString();
	}
	else if (this->A->Text == "3") {
		System::Text::StringBuilder^ sb = gcnew System::Text::StringBuilder();

		sb->AppendLine("Третья энергия символизирует сильное женское начало, материальный достаток, комфорт и некое покровительство. Если энергия выпадает женщине, она может считаться настоящим воплощением Великой матери – идеальной хозяйки, жены, матери. Кроме того, эта энергия означает заботу об окружающих, помощь слабым и покровительство высших сил. Аркан имеет практически одинаковое значение как для мужчины, так и для женщины, кроме первого пункта.");
		sb->AppendLine();
		sb->AppendLine("Состояние человека «в плюсе»:");
		sb->AppendLine();
		sb->AppendLine("• Женское начало (для женщин). Обладательница 3 аркана — настоящая хранительница семейного очага. Она отличная хозяйка, верная жена и ответственная мать, окружающие стараются брать с неё пример и подражать во всём. Она красива и женственна, искренне любит своего мужа и обеспечивает ему всю необходимую поддержку. Быт и домашние дела являются для Императрицы любимым делом, которое рассматривается не как тяготеющая обязанность, а как любимое и необременительное занятие.");
		sb->AppendLine("• Женское начало (для мужчин). Обладатель 3 аркана прекрасно понимает всех женщин, имеет глубокую духовную связь со всеми женщинами в роду: бабушкой, матерью, сестрой. Женившись, становится прекрасным мужем, очень домовит, всегда помогает супруге по хозяйству, любит порядок и чистоту. Готов брать на себя ответственность и обеспечивать семью.");
		sb->AppendLine("• Изобилие и плодородие. Этому человеку удалось достичь многого, в процессе был получен богатый жизненный опыт и немалые материальные блага. Всё, к чему Императрица прикасается, начинает расти и плодоносить. Она знает, как распоряжаться деньгами, что приобрести в первую очередь, повысив уровень жизни. Имеет чувство вкуса и такта, прививает любовь к прекрасному всем желающим.");
		sb->AppendLine("• Покровительство. Довольно часто обладатель 3 аркана становится наставником или скорее покровителем. Может без всякой выгоды для себя заниматься воспитанием, обучением или оказывать материальную поддержку нуждающимся. Надо сказать, что и Вселенная не остаётся в долгу и покровительствует Императрице во многих начинаниях.");
		sb->AppendLine("• Роскошь и комфорт. Другой важный аспект этой энергии – любовь к роскоши и комфорту. Такой человек хочет иметь всё только самое лучшее и дорогое, его дом всегда «полная чаша» и выглядит как дворец. Любит дарить и получать подарки, по возможности старается делать жизнь интересной, наполненной счастливыми событиями.");
		sb->AppendLine("• Власть и стабильность. Человек с такой энергией привык решать глобальные вопросы и может на каком-то жизненном этапе обрести власть. Однако он не честолюбив, и власть для него не самоцель как для Императора. Скорее Императрице нравится состояние стабильности и уверенности в завтрашнем дне, которое даёт власть. Ну и прилагающая роскошь с комфортом — тоже играют свою роль.");
		this->description->Text = sb->ToString();
	}
	else if (this->A->Text == "4 аркан Император") {
		System::Text::StringBuilder^ sb = gcnew System::Text::StringBuilder();

		sb->AppendLine("Четвёртый аркан символизирует некую влиятельную личность, с довольно серьёзным социальным статусом и мощной харизмой. К главным характеристикам этой энергии можно отнести честолюбие, рациональный подход делам, желание контролировать все происходящие вокруг процессы. Император убеждённый прагматик с крайне стабильным эмоциональным фоном, властный и авторитетный.");
		sb->AppendLine();
		sb->AppendLine("Состояние человека «в плюсе»:");
		sb->AppendLine();
		sb->AppendLine("• Власть и успех. Обычно такой человек, так или иначе, пробивается к власти и достигает успеха. Он по праву заслуживает авторитет в коллективе, последнее слово всегда за ним, как дома, так и на работе. Эта энергия психологически зрелых людей, которые состоялись в жизни и умеют достичь успеха.");
		sb->AppendLine("• Авторитетный лидер. Совсем необязательно, что 4 аркан будет занимать некую официальную высокую должность. Это вполне может быть теневой лидер, обладающий авторитетом. Он умеет руководить, не стесняется делегировать обязанности, контролирует выполнение, всегда доводит начатое до конца.");
		sb->AppendLine("• Рациональность. Такой человек не может позволить себе проявлять эмоции. Даже в самых сложных ситуациях, он спокоен и рационален, все его действия слаженные и чёткие. Умеет распоряжаться деньгами, стремится преумножить капитал.");
		sb->AppendLine("• Порядок. Четвёртый аркан ценит порядок и старается исключить любые случайности, которые могут внести хаос в жизнь. Его идеал: чёткое исполнение обязанностей, строгая иерархия и жёсткая дисциплина. Умеет вести переговоры и выстраивать системы.");
		sb->AppendLine("• Защита. Это довольно мощная энергия, которая дарует своему владельцу неплохую защиту и возможность преодолеть любые преграды на пути к цели. Практически в любой ситуации Император способен защитить себя и отстоять всё, что ему дорого.");
		sb->AppendLine("• Семья, клан. Рано или поздно этот человек становится главой рода, семьи, клана, где устанавливает строгую иерархию. Пол в этом случае значения не имеет. 4 аркан готов сделать всё, чтобы его семья жила в достатке.");

		this->description->Text = sb->ToString();
	}
	else if (this->A->Text == "5 аркан Иерофант") {
		System::Text::StringBuilder^ sb = gcnew System::Text::StringBuilder();

		sb->AppendLine("Такой человек всю жизнь ищет истину и знания, придерживается традиционных взглядов. Интересно, что в большинстве случаев знания его почерпнуты не из науки или религии, а даны свыше. Считается, что 5 энергия Иерофанта влияет на человека независимо от того, принадлежит он к какой-то конфессии или нет. Основной акцент здесь на накоплении и передаче знаний, влиянии на умы окружающих и поиске истины.");
		sb->AppendLine();
		sb->AppendLine("Состояние человека «в плюсе»:");
		sb->AppendLine();
		sb->AppendLine("• Просветлённый. Вы уверенно двигаетесь в направлении своих целей, а, возможно, уже смогли дойти до самой вершины. Такой человек стойко принимаете все вызовы и не сдаётся, берёт ответственность на себя, понимает свою миссию. Верит себе и знает, что, пройдя земной путь познаёт Вселенную.");
		sb->AppendLine("• Учитель и ученик. Вы всю жизнь копите, систематизируете и преумножаете знания. Считается, что в молодости ему важно найти Наставника, человека который передаст накопленные ранее знания. А в зрелом возрасте, наоборот, завести учеников, с которыми можно поделиться своими знаниями или опытом.");
		sb->AppendLine("• Авторитетный специалист. Вы обладаете массой знаний по определённому вопросу, что увеличило ваш авторитет в глазах окружающих. Вы неплохой оратор, и смело проповедуете свои принципы, всем желающим. Увлечение и преданность своим идеям заражает окружающих, они с большим удовольствием следуют за вами. Такого человека редко интересуют материальные блага, однако знания зачастую стоят очень дорого.");
		sb->AppendLine("• Хранитель традиций. Человек с 5 энергией чтит все традиции, для него важно находиться в определённой системе ценностей, следовать законам и принципам. Соблюдение и передача семейных традиций — также неотъемлемая часть его жизни. Пятый аркан свято чтит семейное родство и благоприятно влияет на отношения с родственниками.");
		sb->AppendLine("• Справедливый судья. В жизни такого человека, справедливость занимает одно из главных мест. Он чтит и свято верит в принятые им принципы, опираясь на которые определяет свои поступки. В определённый момент жизни, благодаря полученному авторитету -— может стать неким неофициальным судьёй.");

		this->description->Text = sb->ToString();
	}
	else if (this->A->Text == "6 аркан Влюблённые") {
		System::Text::StringBuilder^ sb = gcnew System::Text::StringBuilder();

		sb->AppendLine("Человек с 6 энергией сознаёт о себе очень приятное впечатление в глазах окружающих. Он красив и обаятелен, имеет отличный вкус, умеет поддержать разговор, искренне любит этот мир и тот отвечает тем же. В то же время шестой аркан подвержен влиянию эмоций и сиюминутных порывов, из-за которых часто оказывается перед непростым выбором. Довольно часто разум и сердце находятся в конфликте, который приходится разрешать. Зачастую живёт в своей личной реальности, старается окружить себя комфортом и атмосферой праздника. Если ему удаётся достичь личной гармонии, то становится по-настоящему успешным во всех сферах жизни.");
		sb->AppendLine();
		sb->AppendLine("Состояние человека «в плюсе»:");
		sb->AppendLine();
		sb->AppendLine("• Любовь ко всему. Всё, что вы будете делать в этой жизни, должно делаться по любви. Не ищите выгоды, не подключайте логику, не думайте, что полюбите потом — сердце самый точный советчик. Ищите любимого человека, учебное заведение, работу, машину и т. п. И первое, что такому человеку нужно научиться сделать — научиться любить себя, а через себя уже весь остальной мир.");
		sb->AppendLine("• Правильный выбор. Нетрудно догадаться, что судьба будет постоянно ставить вас перед выбором, кого слушать: разум или сердце. В каких-то случаях выбор будет сделать просто, в каких-то нет. Впрочем, если вы будете принимать решение из состояния любви — никогда не ошибётесь.");
		sb->AppendLine("• Обаяние и эмоции. Человек с 6 арканом очень обаятельный и всегда симпатичен окружающим. Он умеет понравиться, знает, как поддержать любой разговор, всегда весел и приветлив. Хорошо воспринимает чужие и транслирует свои эмоции.");
		sb->AppendLine("• Душа компании. Обладатель 6 энергии очень дружелюбен, имеет массу приятелей и знакомых. Для него важно быть принятым окружением, поэтому никогда ни с кем не ругается. Умеет мирить друзей и сглаживать конфликтные ситуации.");
		sb->AppendLine("• Ценитель прекрасного. Как у многих эмоциональных людей, у 6 аркана, сильно развито понимание прекрасного. Он хорошо выглядит, со вкусом одевается, ценит предметы искусства. Довольно артистичен, легко перевоплощается в нужный образ.");
		sb->AppendLine("• Радушный хозяин. Такой человек очень любит атмосферу праздника, поэтому с удовольствием принимает гостей у себя, любит ходить в гости к другим. С удовольствием организует праздничные мероприятия, а иногда даже делает это своей профессией.");

		this->description->Text = sb->ToString();
	}
	else if (this->A->Text == "7 аркан Колесница") {
		System::Text::StringBuilder^ sb = gcnew System::Text::StringBuilder();

		sb->AppendLine("Такой человек постоянно находится в движении, старается контролировать происходящее, быстро реагирует на любое изменение обстоятельств. 7 аркан наделяет своего владельца острым умом, отменной реакцией, силой и ловкостью. Отменная дисциплина и навыки управления людьми делают из него неплохого руководителя.");
		sb->AppendLine();
		sb->AppendLine("Состояние человека «в плюсе»:");
		sb->AppendLine();
		sb->AppendLine("• Движение. Подобно Колеснице этот человек уверенно движется вперёд, умело преодолевая все преграды на пути. Он любит скорость и динамичное развитие событий, любое промедление, а тем более остановка для него неприемлемы.");
		sb->AppendLine("• Сосредоточенность и дисциплина. Седьмой аркан привык концентрироваться на деле, которое выполняет, и это вполне удаётся. Он умеет отстраниться от эмоций и никогда не суетится. Впрочем, внутренняя сосредоточенность не делает его «однозадачным», при необходимости он может делать несколько дел одновременно. Редко нарушает свои обещания, всегда дисциплинирован и ожидает того же от окружающих. Терпеть не может расхлябанности и попустительского отношения к процессу.");
		sb->AppendLine("• Острый ум, реакция и сила. Колесничий умеет быстро реагировать на изменение обстановки. При этом он успевает принять верное, а зачастую, весьма остроумное решение. Его тяжело застать врасплох или смутить глупыми вопросами. Обычно этот человек от природы наделён силой и ловкостью. Не всегда эта сила физическая, зачастую речь идёт о силе воли и «внутреннем стержне».");
		sb->AppendLine("• Воля к победе. Несмотря на возникающие сложности этот человек достаточно оптимистичен и готов побеждать. Для победы он готов сделать всё: работать, развиваться, активно действовать, созидать и разрушать. Колесничий привык быть в самой гуще схватки и может сокрушить любого противника.");
		sb->AppendLine("• Власть и контроль. Решительность и привычка непрерывно контролировать процесс делает этого человека умелым руководителем. Хоть он и не умеет мыслить стратегически, руководство малыми коллективами ему удаётся без труда. Если у такого человека нет амбиций, он становится отличным командным игроком и прекрасно вписывается в любой коллектив.");
		this->description->Text = sb->ToString();
	}
	else if (this->A->Text == "8 аркан Справедливость") {
		System::Text::StringBuilder^ sb = gcnew System::Text::StringBuilder();

		sb->AppendLine("Такой человек не подвержен эмоциям, умеет усмирять свои чувства и спокойно подходить к решению любых проблем. При принятии решений руководствуется логикой и фактами, старается быть максимально справедлив и честен, как с самим собой, так и с окружающими. Всегда соблюдает закон, не любит что-то нарушать.");
		sb->AppendLine();
		sb->AppendLine("Состояние человека «в плюсе»:");
		sb->AppendLine();
		sb->AppendLine("• Проницательность. Такой человек очень проницателен, быстро понимает истинные причины происходящего, хорошо чувствует мотивы и предвидит события. Хочет разобраться в мельчайших подробностях, всегда и всё любит «раскладывать по полочкам», и это обычно ему удаётся.");
		sb->AppendLine("• Баланс. Стремится соблюдать баланс во всём. Работать и заниматься спортом, питаться вкусно, но невредно, строить карьеру и не забывать о семье и т. д. Задача это сложная, но 8 аркан не опускает рук и терпеливо строит систему сдержек и противовесов.");
		sb->AppendLine("• Закон и совесть. Это прямой, открытый человек, беспристрастный. Всегда держит слово, соблюдает юридические и моральные законы, очень переживает, если приходится идти против совести. Очень теряется, когда не может ничего сделать законными методами.");
		sb->AppendLine("• Здравый смысл. Этот человек умеет справляться с эмоциями, здраво смотреть на всё происходящее, руководствуясь логикой. Редко нервничает, умеет сосредоточиться на деле, независим от мнения окружающих.");
		sb->AppendLine("• Поиск правильного пути. Всегда старается найти правильное решение, иногда пренебрегая более выгодными и заманчивыми вариантами. За это окружающие считают его наивным идеалистом.");
		this->description->Text = sb->ToString();
	}
	else if (this->A->Text == "9 аркан Отшельник") {
		System::Text::StringBuilder^ sb = gcnew System::Text::StringBuilder();

		sb->AppendLine("Для человека с 9 энергией важно время от времени находиться в уединении. Причём, оставаясь наедине со своими мыслями, он не страдает от одиночества, скорее оно доставляет ему удовольствие. Тихий и умиротворённый, мудрый и образованный – вот качества, хорошо описывающие настоящего Отшельника. Обычно это состоявшийся человек с серьёзным жизненным опытом, который всегда берёт на себя ответственность и умеет принимать непростые решения.");
		sb->AppendLine();
		sb->AppendLine("Состояние человека «в плюсе»:");
		sb->AppendLine();
		sb->AppendLine("• Мудрость. Отшельник очень умён и внимателен, любит получать новые знания и осмысливать происходящее вокруг. В результате со временем, его жизнь наполняется глубоким смыслом и мудростью. Он умеет слушать и слышать людей, а в зрелом возрасте к нему часто обращаются окружающие, чтобы получить совет или независимую оценку своих действий.");
		sb->AppendLine("• Знания и опыт. Такой человек любит учиться и применять полученные знания на практике. При этом он, обычно выбирает какое-то одно направление и совершенствуется в нём долгие годы. В процессе он никогда не воспринимает информацию поверхностно, для него важно дойти до самой сути. Зачастую у Отшельника непростой жизненный путь, и в процессе жизни он получает массу ценного и разнообразного опыта. Одна из главных задач 9 аркана — передать накопленные знания и опыт следующим поколениям.");
		sb->AppendLine("• Уединение. Даже занимаясь повседневными делами такому человеку важно время от времени фокусироваться на своём внутреннем мире. Именно в себе самом он черпает силы для дальнейших свершений. Впрочем, это не значит, что Отшельник отстраняется от остальной жизни и готов вечно находиться в одиночестве.");
		sb->AppendLine("• Рассудительность и внимательность. Обладателя 9 аркана вполне можно назвать самым внимательным и рассудительным. Он умеет отринуть эмоции, взглянуть на ситуацию со стороны, не спеша оценить все обстоятельства и принять исчерпывающее решение. Надо сказать, что в делах он также нетороплив и основателен.");
		sb->AppendLine("• Творческий талант. Этот человек имеет ряд несомненных творческих талантов. Он прекрасный оратор, отлично владеет письменной речью, умеет сопоставлять факты и делать прогнозы. Может добиться значительного успеха в любых гуманитарных науках.");
		sb->AppendLine("• Аскетизм и духовная сила. Для Отшельника материальные достижения не играют особой роли, скорее его заинтересует духовный рост иногда общественное признание. Такой человек живёт скромно и даже аскетично, не ориентируется на моду и общественное мнение. У него есть собственные ориентиры и некий личный путь, по которому он следует в течение всей жизни.");
		this->description->Text = sb->ToString();
	}
}
};
}