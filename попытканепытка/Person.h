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
	private: System::Windows::Forms::Button^ personalityPlus;
	private: System::Windows::Forms::Button^ personalityMinus;
	private: System::Windows::Forms::Button^ zoneOfComfort;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ enter;
	private: System::Windows::Forms::Label^ description;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ exit;
	private: System::Windows::Forms::Button^ previous2;


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
			this->personalityPlus = (gcnew System::Windows::Forms::Button());
			this->personalityMinus = (gcnew System::Windows::Forms::Button());
			this->zoneOfComfort = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->enter = (gcnew System::Windows::Forms::Label());
			this->description = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->exit = (gcnew System::Windows::Forms::Button());
			this->previous2 = (gcnew System::Windows::Forms::Button());
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
			this->A->AutoSize = true;
			this->A->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(221)), static_cast<System::Int32>(static_cast<System::Byte>(210)),
				static_cast<System::Int32>(static_cast<System::Byte>(234)));
			this->A->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->A->ForeColor = System::Drawing::SystemColors::ControlText;
			this->A->Location = System::Drawing::Point(165, 675);
			this->A->Name = L"A";
			this->A->Size = System::Drawing::Size(31, 33);
			this->A->TabIndex = 3;
			this->A->Text = L"0";
			this->A->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->A->Click += gcnew System::EventHandler(this, &Person::A_Click);
			// 
			// B
			// 
			this->B->AutoSize = true;
			this->B->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(221)), static_cast<System::Int32>(static_cast<System::Byte>(210)),
				static_cast<System::Int32>(static_cast<System::Byte>(234)));
			this->B->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->B->Location = System::Drawing::Point(388, 458);
			this->B->Name = L"B";
			this->B->Size = System::Drawing::Size(31, 33);
			this->B->TabIndex = 4;
			this->B->Text = L"0";
			this->B->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// C
			// 
			this->C->AutoSize = true;
			this->C->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)), static_cast<System::Int32>(static_cast<System::Byte>(180)),
				static_cast<System::Int32>(static_cast<System::Byte>(165)));
			this->C->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->C->Location = System::Drawing::Point(601, 675);
			this->C->Name = L"C";
			this->C->Size = System::Drawing::Size(31, 33);
			this->C->TabIndex = 5;
			this->C->Text = L"0";
			this->C->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->C->Click += gcnew System::EventHandler(this, &Person::C_Click);
			// 
			// D
			// 
			this->D->AutoSize = true;
			this->D->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)), static_cast<System::Int32>(static_cast<System::Byte>(180)),
				static_cast<System::Int32>(static_cast<System::Byte>(165)));
			this->D->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->D->Location = System::Drawing::Point(386, 890);
			this->D->Name = L"D";
			this->D->Size = System::Drawing::Size(31, 33);
			this->D->TabIndex = 6;
			this->D->Text = L"0";
			this->D->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->D->Click += gcnew System::EventHandler(this, &Person::D_Click);
			// 
			// E
			// 
			this->E->AutoSize = true;
			this->E->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(205)), static_cast<System::Int32>(static_cast<System::Byte>(215)),
				static_cast<System::Int32>(static_cast<System::Byte>(200)));
			this->E->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->E->Location = System::Drawing::Point(386, 675);
			this->E->Name = L"E";
			this->E->Size = System::Drawing::Size(31, 33);
			this->E->TabIndex = 7;
			this->E->Text = L"0";
			this->E->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// personalityPlus
			// 
			this->personalityPlus->BackColor = System::Drawing::Color::Transparent;
			this->personalityPlus->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->personalityPlus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->personalityPlus->ForeColor = System::Drawing::Color::LavenderBlush;
			this->personalityPlus->Location = System::Drawing::Point(1032, 78);
			this->personalityPlus->Name = L"personalityPlus";
			this->personalityPlus->Size = System::Drawing::Size(194, 91);
			this->personalityPlus->TabIndex = 8;
			this->personalityPlus->Text = L"Характер человека в минусе";
			this->personalityPlus->UseVisualStyleBackColor = false;
			// 
			// personalityMinus
			// 
			this->personalityMinus->BackColor = System::Drawing::Color::Transparent;
			this->personalityMinus->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->personalityMinus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->personalityMinus->ForeColor = System::Drawing::Color::LavenderBlush;
			this->personalityMinus->Location = System::Drawing::Point(1414, 78);
			this->personalityMinus->Name = L"personalityMinus";
			this->personalityMinus->Size = System::Drawing::Size(190, 91);
			this->personalityMinus->TabIndex = 9;
			this->personalityMinus->Text = L"Характер человека в плюсе";
			this->personalityMinus->UseVisualStyleBackColor = false;
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
			// description
			// 
			this->description->BackColor = System::Drawing::Color::LavenderBlush;
			this->description->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->description->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->description->Location = System::Drawing::Point(845, 443);
			this->description->Name = L"description";
			this->description->Size = System::Drawing::Size(953, 612);
			this->description->TabIndex = 13;
			this->description->Text = L"Описание вашего аркана";
			this->description->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->description->Click += gcnew System::EventHandler(this, &Person::label1_Click);
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
			// previous
			// 
			this->previous2->BackColor = System::Drawing::Color::Transparent;
			this->previous2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->previous2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->previous2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 48, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->previous2->ForeColor = System::Drawing::Color::LavenderBlush;
			this->previous2->Location = System::Drawing::Point(1, 1);
			this->previous2->Name = L"previous";
			this->previous2->Size = System::Drawing::Size(124, 76);
			this->previous2->TabIndex = 17;
			this->previous2->Text = L"<";
			this->previous2->UseVisualStyleBackColor = false;
			this->previous2->Click += gcnew System::EventHandler(this, &Person::previous2_Click);
			// 
			// Person
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1940, 1100);
			this->Controls->Add(this->previous2);
			this->Controls->Add(this->exit);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->description);
			this->Controls->Add(this->enter);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->zoneOfComfort);
			this->Controls->Add(this->personalityMinus);
			this->Controls->Add(this->personalityPlus);
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
		this->description->Text = "Обладатель 1 аркана привык ставить себе амбициозные цели и умеет достигать их любой ценой. Такой человек, безусловно, талантлив и умеет управлять ресурсами, которые даёт ему судьба. Однако максимально комфортно он себя чувствует не в момент достижения цели, а в процессе движения к ней. Конечно, при условии, что всё идёт как задумано.\tДля перехода в точку гармонии нужно:"+			
			"\n•Не бойтесь строить глобальные планы, чем больше цель — тем лучше."+
			"\n•Будьте активны, верьте в свои силы, не бойтесь совершить ошибку.\t"+
			"\n•Помните, что путь к любой цели начинается с чёткого плана" +
			"\n•Ресурсы, которые вам необходимы — непременно появятся в процессе движения" +
			"\n•Только рациональное мышление поможет вам достичь высоких результатов.\t" +
			"\n•Лучшая сфера для реализации — созидание чего - то нового.\t" +
			"\n•Познавайте мир, изучайте всё, что может помочь вам на пути к вершине." +
			"\n•Смело берите на себя ответственность за людей и процессы, вы справитесь." +
			"\n•Достигнув промежуточной цели — не останавливайтесь, ставьте новую цель и двигайтесь дальше";
	}
	if (this->E->Text == "2") {
		this->description->Text = "Обладатель 2 аркана обладает врождённой интуицией, мудр в словах и поступках, не склонен проявлять эмоции, всегда окутан ореолом некой тайны. Достигнуть гармонии такой человек может, если станет действительно самодостаточным, будет постоянно развиваться духовно и обретёт внутреннее спокойствие. \nЧто нужно сделать для перехода в точку гармонии:" +
			"\n•Примите и раскройте женскую сторону своей натуры." +
			"\n•Доверяйте интуиции, в поиске ответов обращайте свой взгляд внутрь, а не наружу." +
			"\n•Будьте терпеливы и выдержаны, больше доверяйте людям.Помогайте советом всем, кто просит об этом." +
			"\n•По возможности придерживайтесь нейтральной позиции, не вмешивайтесь в процессы, которые не инициировали."+
			"\n•Освойте любые духовные практики, займитесь йогой."+
			"\n•Проанализируйте свой жизненный опыт, выработайте свою жизненную позицию и кредо."+
			"\n•Больше слушайте, не ведите пустых разговоров, старайтесь меньше лгать, прекратите сплетничать."+
			"\n•Примите собственную уникальность, поймите, что некоторые знания доступны лишь избранным."+
			"\n•Набирайтесь опыта, накапливайте и осмысляйте всю поступающую информацию." +
			"\n•Старайтесь реализовывать творческие идеи, они достойны, чтобы воплотить их в жизнь!";
	}
	if (this->E->Text == "3") {
		this->description->Text = "Обладатель 3 аркана на протяжении всей жизни стремится к комфортной и счастливой жизни. Такой человек хочет добиться высокого социального статуса, жить в роскоши и богатстве. Даже власть, которой они рано или поздно добиваются, нужна им для того, чтобы получить материальные плоды, а не из простого честолюбия. Надо сказать, что Императрица вполне может воплотить свои мечты в жизнь, однако для этого придётся кое-что сделать."+

			"\n•Для перехода в точку гармонии нужно :" +
			"\n•Принять женскую сущность в себе и в окружающих женщинах, наладить отношения с матерью." +
			"\n•Найти достойного партнёра, завести крепкую патриархальную семью, родить детей." +
			"\n•Старайтесь содержать дом в идеальной чистоте и порядке." +
			"\n•Поставить цель, совместно с партнёром, обеспечить семью всем необходимым, повысить уровень жизни." +
			"\n•Научиться доверять супругу, разрешить ему принимать решения и нести ответственность за семью." +
			"\n•Не давить на детей, не навязывать им собственное мнение, разрешить жить своей жизнью." +
			"\n•Попробовать жить, как хочется : не экономить деньги, покупать престижные вещи, путешествовать и т.п." +
			"\n•Добиться руководящей должности на работе, принять на себя ответственность за подчинённых." +
			"\n•Начать помогать нуждающимся, взять под опеку достойного человека, реализовав тягу к наставничеству.";
	}
	if (this->E->Text == "4") {
		this->description->Text = "4 аркан – наделён властью, уважает порядок, имеет талант управления людьми, может принимать важные и ответственные решения. Максимально комфортной для такого человека будет ситуация, где он будет в полной мере реализовывать заложенный потенциал. \nЧто нужно сделать для перехода в точку гармонии:" +
			"\n•Император – отличный руководитель, не только в профессиональной деятельности, но и дома. Всё, что ему нужно сделать, чтобы стать лидером — захотеть этого и начать движение в этом направлении." +
			"\n•Если 4 энергия выпадает женщине, она не должна становиться «мужчиной в юбке». Своих целей нужно достигать, используя женскую силу: ум, красоту и хитрость." +
			"\n•Человек 4 аркана имеет критическое логическое мышление, может легко выстраивать стратегию развития, предусмотрителен в выборе пути. Ему нельзя руководствоваться эмоциями, только планирование и чистый расчёт." +
			"\n•Человеку с энергией Императора, нужно постоянно действовать, только активность принесёт хорошие плоды. Наметив план — сразу приступайте к его выполнению.";		
	}
	if (this->E->Text == "5") {
		this->description->Text = "Обладатель 5 аркана всей душой стремится к истине и знаниям. Считается, что он может открыть величайшие тайны и постичь божественное откровение. Достигнуть гармонии такой человек может только совершив долгий и трудный путь своего становления и передав накопленную мудрость ученикам. Иерофант символизирует знания, доступные каждому, знания которые помогут людям постичь Вселенную. \n Для перехода в точку гармонии нужно:" +
			"\n•Постоянно учиться и развиваться в выбранном направлении." +
			"\n•Применять полученные знания на практике, объединяя материю и дух." +
			"\n•Найти последователей, а во второй половине жизни и учеников, которым можно передать знания." +
			"\n•С чистым сердцем нести свет истины всем желающим, давать советы, судить спорщиков."+
			"\n•Получив власть, вести людей к свету, поднимая их до своего уровня, а не опускаться на их." +
			"\n•Придерживаться человеческих и божественных законов." +
			"\n•Развиваясь духовно не забывать о своём теле. Осваивать духовные практики и йогу." +
			"\n•Наладить отношения в семьи, иметь крепкую духовную связь с дедом и отцом."+
			"\n•Блюсти семейные традиции, придерживаться традиционного мировоззрения.";
	}
	if (this->E->Text == "6") {
		this->description->Text = "Обладатель 6 аркана всю жизнь будет стремиться к любви и красоте. Буквально всё в их жизни будет делаться из любви и ради любви. Обрести истинную гармонию и комфорт такой человек сможет в тот момент, когда сможет полюбить себя и весь окружающий мир. Постарайтесь постоянно улучшать окружающий мир и по мере сил наполняйте его красотой. Однако не забывайте, что на этом пути вас ждёт немало искушений и мук выбора. \nДля перехода в точку гармонии нужно : " +
			"\n•Полюбите себя, свою жизнь, своих врагов, друзей и весь окружающий мир." +
			"\n•Примите любовь Вселенной, поймите, что бог вас действительно любит." +
			"\n•Правильно выберите спутника жизни, не будьте идеалистом и не жертвуйте собой ради отношений." +
			"\n•Расширяйте свой круг общения, заводите новые знакомства, дружите с теми, кто замкнут и одинок." +
			"\n•Выбирайте профессию по сердцу, смело меняйте работу, если в душе её ненавидите." +
			"\n•Чаще собирайте у себя гостей, людям всегда не хватает ощущения праздника." +
			"\n•Будьте терпимее к себе и окружающим, никто в этом мире несовершенен." +
			"\n•Разрешайте любые конфликты путём переговоров, силовые решения не принесут вам результата." +
			"\n•Окружите себя комфортом и уютом, не пренебрегайте деньгами, постарайтесь полюбить и их." +
			"\n•Всегда помните чего хотите, научитесь отделять фантазию от реальности.";
	}
	if (this->E->Text == "7") {
		this->description->Text = "Обладатель 7 аркана всё время стремится двигаться и развиваться. На пути к цели он собран и дисциплинирован, старается контролировать обстановку и принимать верные решения. Однако настоящий душевный комфорт и гармонию он обретает только в момент победы. Момент этот крайне короткий, однако его хватает, чтобы «подзарядить» колесничего энергией и дать стимул двигаться к следующей цели.  Для перехода в точку гармонии нужно : " +
			"\n•Наметить множество второстепенных и одну две главных, так у вас постоянно будет мотивация не останавливаться в развитии." +
			"\n•Непременно нужно отмечать все значимые достижения." +
			"\n•Правильно выберите спутника жизни, не будьте идеалистом и не жертвуйте собой ради отношений." +
			"\n•Бороться с внутренним страхом поражения." +
			"\n•Стараться контролировать обстановку, а главное, самого себя." +
			"\n•Брать на себя ответственность за подчинённых и семью." +
			"\n•Выработать распорядок дня и неуклонно его придерживаться как в части работы, так и в части отдыха." +
			"\n•Развивать тело и дух. Заниматься спортом, обязательно участвовать в соревнованиях." +
			"\n•Найти хобби, больше путешествовать, крайне полезными будут конные прогулки.";
	}
	if (this->E->Text == "8") {
		this->description->Text = "Обладатель 8 аркана всю свою жизнь стремится к справедливости и балансу во всём. Считается, что у такого человека есть все способности, чтобы достичь истинной гармонии, обрести душевное равновесие и покой. Он очень проницателен и справедлив, видит закономерности во всё происходящем, умеет разобраться в вопросе. Принимает взвешенные решения, не обращая внимания на эмоции. Для перехода в точку гармонии нужно : " +
			"\n•Удерживайте равновесие между духовным и материальным, не впадайте в крайности, не теряйте себя как бы плохо или хорошо не обстояли ваши дела." +
			"\n•Воздержитесь от необдуманных импульсивных поступков, спокойно и уверенно идите своей дорогой." +
			"\n•Исполняйте все юридические, моральные или религиозные законы, которые вы прияли. За любой противозаконный поступок вы будете наказаны Вселенной." +
			"\n•Находите и принимайте правильные решения, не убегая от проблем. Ситуация будет неоднократно повторятся, пока вы не пройдёте этот кармический урок." +
			"\n•Важно не подавлять эмоции, а научиться их контролировать. Иначе в критической ситуации эмоции возьмут над вами верх и не дадут трезво мыслить." +
			"\n•Следуйте советам голоса справедливости внутри вас. Замечайте знаки судьбы, они помогут вам при принятии решения и выбора нужной дороги." +
			"\n•Старайтесь оставаться на правильном пути и поступать справедливо, независимо от собственных желаний, личной выгоды и общественного осуждения.";
	}
	if (this->E->Text == "9") {
		this->description->Text = "Человек с 9 энергией в Матрице судьбы всю свою жизнь стремиться получать знания, исследовать и узнавать что-то новое. Этот человек любит находиться наедине с самим собой, и в одиночестве вести поиск истины. Неудивительно, что наиболее комфортно и гармонично он ощущает себя, когда имеет возможность спокойно получать информацию, систематизировать её набираться мудрости и практического опыта. А вот материальные проблемы совсем не заботят Отшельника, и он предпочитает о них не думать.  Для перехода в точку гармонии нужно : " +
			"\n•Вы самый настоящий мудрец и должны постоянно собирать в свою копилку новые знания и опыт. Применяйте их в реальной жизни, увеличивайте свой авторитет в глазах окружающих. Старайтесь как можно глубже разобраться в своём предмете, а вместе с истиной придёт и мудрость." +
			"\n•Регулярное пребывание в одиночестве подпитает вас силами. Находясь наедине с собой, вы гораздо будете гораздо быстрее усваивать информацию и осмыслять полученный опыт." +
			"\n•Далеко не все могут учиться и постигать науки без посторонней помощи. Попробуйте себя в роли учителя или наставника. Обратите внимание, что порой после разговора с вами человеку становится легче. Больше общайтесь — вас очень воодушевит возможность делиться своим опытом." +
			"\n•Научитесь соблюдать баланс духовного и физического развития. Не замыкайтесь в одиночестве. Когда будет необходимо, вы легко должны погружаться в себя, а потом также с лёгкостью выходить в общество, создавать новые проекты или просто общаться." +
			"\n•Вы не слишком эмоциональны, от природы, однако это идёт вам на пользу. Не торопитесь с принятием решений, будьте спокойны и никогда не идите силовым путём. Однако не отказывайтесь от выражения чувство — помните о балансе." +
			"\n•Следуйте советам голоса справедливости внутри вас. Замечайте знаки судьбы, они помогут вам при принятии решения и выбора нужной дороги." +
			"\n•У вас есть незаурядные творческие способности, обязательно попробуйте их реализовать. Не так важно чем вы займётесь, важен сам факт творения и самовыражения.";
	}
	if (this->E->Text == "10") {
		this->description->Text = "Человек с 10 арканом обычно верит в свою судьбу и удачу, никогда не унывает в случае неприятностей, всегда готов действовать и двигаться. Именно тогда, когда удача на стороне 10 аркана, а он находится в самой гуще событий, этот человек обретает истинную гармонию и счастье. Однако чтобы успех не казался вам слишком простым, Колесо фортуны предоставит вам немало испытаний. Только на фоне испытаний, ваши победы будут чувствоваться гораздо ярче.  Для перехода в точку гармонии нужно : " +
			"\n•Не забывайте, вы находитесь в руках судьбы, помните, это она вас ведёт, а не вы её." +
			"\n•Верьте в удачу, но не забывайте активно действовать, Колесо фортуны не любит пассивных." +
			"\n•Следите за знаками, не упускайте возможности, которые будут вам предоставлены." +
			"\n•Научитесь соблюдать баланс духовного и физического развития. Не замыкайтесь в одиночестве. Когда будет необходимо, вы легко должны погружаться в себя, а потом также с лёгкостью выходить в общество, создавать новые проекты или просто общаться." +
			"\n•Вы не слишком эмоциональны, от природы, однако это идёт вам на пользу. Не торопитесь с принятием решений, будьте спокойны и никогда не идите силовым путём. Однако не отказывайтесь от выражения чувство — помните о балансе." +
			"\n•Следуйте советам голоса справедливости внутри вас. Замечайте знаки судьбы, они помогут вам при принятии решения и выбора нужной дороги." +
			"\n•У вас есть незаурядные творческие способности, обязательно попробуйте их реализовать. Не так важно чем вы займётесь, важен сам факт творения и самовыражения.";
	}
}
private: System::Void exit_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();}
private: System::Void previous2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
};
}