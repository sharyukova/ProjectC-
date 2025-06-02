#pragma once

namespace попытканепытка {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Relationship
	/// </summary>
	public ref class Relationship : public System::Windows::Forms::Form
	{
	public:
		Relationship(void)
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
		~Relationship()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

	private: System::Windows::Forms::Label^ enter;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ zoneOfComfort;
	private: System::Windows::Forms::Button^ personalityPlus;
	private: System::Windows::Forms::Button^ personalityMinus;
	private: System::Windows::Forms::Button^ done;
	private: System::Windows::Forms::DateTimePicker^ date;
	private: System::Windows::Forms::PictureBox^ matrixOfPerson;
	private: System::Windows::Forms::TextBox^ description;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::DateTimePicker^ date1;
	private: System::Windows::Forms::DateTimePicker^ date2;




	private: System::Windows::Forms::Label^ E;

	private: System::Windows::Forms::Label^ D;
	private: System::Windows::Forms::Label^ C;


	private: System::Windows::Forms::Label^ B;

	private: System::Windows::Forms::Label^ A;
	private: System::Windows::Forms::PictureBox^ matrixOfRelation2;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ exit;
	private: System::Windows::Forms::Button^ previous1;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Relationship::typeid));
			this->enter = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->zoneOfComfort = (gcnew System::Windows::Forms::Button());
			this->personalityPlus = (gcnew System::Windows::Forms::Button());
			this->personalityMinus = (gcnew System::Windows::Forms::Button());
			this->done = (gcnew System::Windows::Forms::Button());
			this->date = (gcnew System::Windows::Forms::DateTimePicker());
			this->matrixOfPerson = (gcnew System::Windows::Forms::PictureBox());
			this->description = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->date1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->date2 = (gcnew System::Windows::Forms::DateTimePicker());
			this->E = (gcnew System::Windows::Forms::Label());
			this->D = (gcnew System::Windows::Forms::Label());
			this->C = (gcnew System::Windows::Forms::Label());
			this->B = (gcnew System::Windows::Forms::Label());
			this->A = (gcnew System::Windows::Forms::Label());
			this->matrixOfRelation2 = (gcnew System::Windows::Forms::PictureBox());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->exit = (gcnew System::Windows::Forms::Button());
			this->previous1 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->matrixOfPerson))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->matrixOfRelation2))->BeginInit();
			this->SuspendLayout();
			// 
			// enter
			// 
			this->enter->BackColor = System::Drawing::Color::Transparent;
			this->enter->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->enter->ForeColor = System::Drawing::Color::LavenderBlush;
			this->enter->Location = System::Drawing::Point(-672, -360);
			this->enter->Name = L"enter";
			this->enter->Size = System::Drawing::Size(621, 149);
			this->enter->TabIndex = 29;
			this->enter->Text = L"Для расчёта матрицы судьбы введите дату рождения";
			this->enter->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Transparent;
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->ForeColor = System::Drawing::Color::LavenderBlush;
			this->button2->Location = System::Drawing::Point(255, -174);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(194, 92);
			this->button2->TabIndex = 28;
			this->button2->Text = L"Главная проработка души";
			this->button2->UseVisualStyleBackColor = false;
			// 
			// zoneOfComfort
			// 
			this->zoneOfComfort->BackColor = System::Drawing::Color::Transparent;
			this->zoneOfComfort->Cursor = System::Windows::Forms::Cursors::Hand;
			this->zoneOfComfort->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->zoneOfComfort->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->zoneOfComfort->ForeColor = System::Drawing::Color::LavenderBlush;
			this->zoneOfComfort->Location = System::Drawing::Point(637, -174);
			this->zoneOfComfort->Name = L"zoneOfComfort";
			this->zoneOfComfort->Size = System::Drawing::Size(190, 92);
			this->zoneOfComfort->TabIndex = 27;
			this->zoneOfComfort->Text = L"Зона комфорта и гармонии";
			this->zoneOfComfort->UseVisualStyleBackColor = false;
			// 
			// personalityPlus
			// 
			this->personalityPlus->BackColor = System::Drawing::Color::Transparent;
			this->personalityPlus->Cursor = System::Windows::Forms::Cursors::Hand;
			this->personalityPlus->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->personalityPlus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->personalityPlus->ForeColor = System::Drawing::Color::LavenderBlush;
			this->personalityPlus->Location = System::Drawing::Point(637, -308);
			this->personalityPlus->Name = L"personalityPlus";
			this->personalityPlus->Size = System::Drawing::Size(190, 91);
			this->personalityPlus->TabIndex = 26;
			this->personalityPlus->Text = L"Характер человека в минусе";
			this->personalityPlus->UseVisualStyleBackColor = false;
			// 
			// personalityMinus
			// 
			this->personalityMinus->BackColor = System::Drawing::Color::Transparent;
			this->personalityMinus->Cursor = System::Windows::Forms::Cursors::Hand;
			this->personalityMinus->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->personalityMinus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->personalityMinus->ForeColor = System::Drawing::Color::LavenderBlush;
			this->personalityMinus->Location = System::Drawing::Point(255, -308);
			this->personalityMinus->Name = L"personalityMinus";
			this->personalityMinus->Size = System::Drawing::Size(194, 91);
			this->personalityMinus->TabIndex = 25;
			this->personalityMinus->Text = L"Характер человека в плюсе";
			this->personalityMinus->UseVisualStyleBackColor = false;
			// 
			// done
			// 
			this->done->BackColor = System::Drawing::Color::Transparent;
			this->done->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->done->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->done->ForeColor = System::Drawing::Color::LavenderBlush;
			this->done->Location = System::Drawing::Point(-498, -94);
			this->done->Name = L"done";
			this->done->Size = System::Drawing::Size(243, 57);
			this->done->TabIndex = 20;
			this->done->Text = L"готово";
			this->done->UseVisualStyleBackColor = false;
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
			this->date->Location = System::Drawing::Point(-537, -188);
			this->date->Name = L"date";
			this->date->Size = System::Drawing::Size(340, 62);
			this->date->TabIndex = 19;
			// 
			// matrixOfPerson
			// 
			this->matrixOfPerson->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"matrixOfPerson.BackgroundImage")));
			this->matrixOfPerson->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->matrixOfPerson->Location = System::Drawing::Point(-625, 57);
			this->matrixOfPerson->Name = L"matrixOfPerson";
			this->matrixOfPerson->Size = System::Drawing::Size(493, 493);
			this->matrixOfPerson->TabIndex = 21;
			this->matrixOfPerson->TabStop = false;
			// 
			// description
			// 
			this->description->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->description->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->description->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->description->ForeColor = System::Drawing::Color::LavenderBlush;
			this->description->Location = System::Drawing::Point(945, 457);
			this->description->Multiline = true;
			this->description->Name = L"description";
			this->description->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->description->Size = System::Drawing::Size(832, 564);
			this->description->TabIndex = 40;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::Color::LavenderBlush;
			this->label1->Location = System::Drawing::Point(1133, 351);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(429, 56);
			this->label1->TabIndex = 39;
			this->label1->Text = L"Название аркана";
			// 
			// label2
			// 
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->ForeColor = System::Drawing::Color::LavenderBlush;
			this->label2->Location = System::Drawing::Point(149, 9);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(621, 149);
			this->label2->TabIndex = 38;
			this->label2->Text = L"Для расчёта матрицы судьбы введите дату рождения";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Transparent;
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->ForeColor = System::Drawing::Color::LavenderBlush;
			this->button1->Location = System::Drawing::Point(1075, 226);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(194, 92);
			this->button1->TabIndex = 37;
			this->button1->Text = L"Главная проработка души";
			this->button1->UseVisualStyleBackColor = false;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Transparent;
			this->button3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->ForeColor = System::Drawing::Color::LavenderBlush;
			this->button3->Location = System::Drawing::Point(1457, 226);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(190, 92);
			this->button3->TabIndex = 36;
			this->button3->Text = L"Зона комфорта и гармонии";
			this->button3->UseVisualStyleBackColor = false;
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Transparent;
			this->button4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button4->ForeColor = System::Drawing::Color::LavenderBlush;
			this->button4->Location = System::Drawing::Point(1457, 92);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(190, 91);
			this->button4->TabIndex = 35;
			this->button4->Text = L"Характер человека в минусе";
			this->button4->UseVisualStyleBackColor = false;
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::Transparent;
			this->button5->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button5->ForeColor = System::Drawing::Color::LavenderBlush;
			this->button5->Location = System::Drawing::Point(1075, 92);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(194, 91);
			this->button5->TabIndex = 34;
			this->button5->Text = L"Характер человека в плюсе";
			this->button5->UseVisualStyleBackColor = false;
			// 
			// date1
			// 
			this->date1->CalendarFont = (gcnew System::Drawing::Font(L"Arial", 48, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->date1->CalendarForeColor = System::Drawing::Color::SaddleBrown;
			this->date1->CalendarMonthBackground = System::Drawing::Color::LavenderBlush;
			this->date1->CalendarTitleBackColor = System::Drawing::Color::LavenderBlush;
			this->date1->CalendarTitleForeColor = System::Drawing::Color::SaddleBrown;
			this->date1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->date1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->date1->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->date1->Location = System::Drawing::Point(348, 227);
			this->date1->Name = L"date1";
			this->date1->Size = System::Drawing::Size(340, 62);
			this->date1->TabIndex = 32;
			// 
			// date2
			// 
			this->date2->CalendarFont = (gcnew System::Drawing::Font(L"Arial", 48, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->date2->CalendarForeColor = System::Drawing::Color::SaddleBrown;
			this->date2->CalendarMonthBackground = System::Drawing::Color::LavenderBlush;
			this->date2->CalendarTitleBackColor = System::Drawing::Color::LavenderBlush;
			this->date2->CalendarTitleForeColor = System::Drawing::Color::SaddleBrown;
			this->date2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->date2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->date2->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->date2->Location = System::Drawing::Point(348, 295);
			this->date2->Name = L"date2";
			this->date2->Size = System::Drawing::Size(340, 62);
			this->date2->TabIndex = 41;
			// 
			// E
			// 
			this->E->AutoEllipsis = true;
			this->E->AutoSize = true;
			this->E->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(205)), static_cast<System::Int32>(static_cast<System::Byte>(215)),
				static_cast<System::Int32>(static_cast<System::Byte>(200)));
			this->E->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->E->Location = System::Drawing::Point(429, 689);
			this->E->Name = L"E";
			this->E->Size = System::Drawing::Size(26, 29);
			this->E->TabIndex = 47;
			this->E->Text = L"0";
			this->E->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// D
			// 
			this->D->AutoEllipsis = true;
			this->D->AutoSize = true;
			this->D->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)), static_cast<System::Int32>(static_cast<System::Byte>(180)),
				static_cast<System::Int32>(static_cast<System::Byte>(165)));
			this->D->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->D->Location = System::Drawing::Point(429, 906);
			this->D->Name = L"D";
			this->D->Size = System::Drawing::Size(26, 29);
			this->D->TabIndex = 46;
			this->D->Text = L"0";
			this->D->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// C
			// 
			this->C->AutoEllipsis = true;
			this->C->AutoSize = true;
			this->C->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)), static_cast<System::Int32>(static_cast<System::Byte>(180)),
				static_cast<System::Int32>(static_cast<System::Byte>(165)));
			this->C->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->C->Location = System::Drawing::Point(644, 689);
			this->C->Name = L"C";
			this->C->Size = System::Drawing::Size(26, 29);
			this->C->TabIndex = 45;
			this->C->Text = L"0";
			this->C->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// B
			// 
			this->B->AutoEllipsis = true;
			this->B->AutoSize = true;
			this->B->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(221)), static_cast<System::Int32>(static_cast<System::Byte>(210)),
				static_cast<System::Int32>(static_cast<System::Byte>(234)));
			this->B->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->B->Location = System::Drawing::Point(429, 473);
			this->B->Name = L"B";
			this->B->Size = System::Drawing::Size(26, 29);
			this->B->TabIndex = 44;
			this->B->Text = L"0";
			this->B->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
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
			this->A->Location = System::Drawing::Point(209, 689);
			this->A->Name = L"A";
			this->A->Size = System::Drawing::Size(26, 29);
			this->A->TabIndex = 43;
			this->A->Text = L"0";
			this->A->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// matrixOfRelation2
			// 
			this->matrixOfRelation2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"matrixOfRelation2.BackgroundImage")));
			this->matrixOfRelation2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->matrixOfRelation2->Location = System::Drawing::Point(195, 457);
			this->matrixOfRelation2->Name = L"matrixOfRelation2";
			this->matrixOfRelation2->Size = System::Drawing::Size(493, 493);
			this->matrixOfRelation2->TabIndex = 42;
			this->matrixOfRelation2->TabStop = false;
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::Transparent;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button6->ForeColor = System::Drawing::Color::LavenderBlush;
			this->button6->Location = System::Drawing::Point(445, 378);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(243, 57);
			this->button6->TabIndex = 48;
			this->button6->Text = L"готово";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &Relationship::button6_Click);
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
			this->exit->TabIndex = 49;
			this->exit->Text = L"Х";
			this->exit->UseVisualStyleBackColor = false;
			this->exit->Click += gcnew System::EventHandler(this, &Relationship::exit_Click);
			// 
			// previous1
			// 
			this->previous1->BackColor = System::Drawing::Color::Transparent;
			this->previous1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->previous1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->previous1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 48, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->previous1->ForeColor = System::Drawing::Color::LavenderBlush;
			this->previous1->Location = System::Drawing::Point(-1, -9);
			this->previous1->Name = L"previous1";
			this->previous1->Size = System::Drawing::Size(124, 76);
			this->previous1->TabIndex = 50;
			this->previous1->Text = L"<";
			this->previous1->UseVisualStyleBackColor = false;
			this->previous1->Click += gcnew System::EventHandler(this, &Relationship::previous1_Click);
			// 
			// Relationship
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1940, 1100);
			this->Controls->Add(this->previous1);
			this->Controls->Add(this->exit);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->E);
			this->Controls->Add(this->D);
			this->Controls->Add(this->C);
			this->Controls->Add(this->B);
			this->Controls->Add(this->A);
			this->Controls->Add(this->matrixOfRelation2);
			this->Controls->Add(this->date2);
			this->Controls->Add(this->description);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->date1);
			this->Controls->Add(this->enter);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->zoneOfComfort);
			this->Controls->Add(this->personalityPlus);
			this->Controls->Add(this->personalityMinus);
			this->Controls->Add(this->done);
			this->Controls->Add(this->date);
			this->Controls->Add(this->matrixOfPerson);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Relationship";
			this->Text = L"Relationship";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &Relationship::Relationship_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->matrixOfPerson))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->matrixOfRelation2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Relationship_Load(System::Object^ sender, System::EventArgs^ e) {
		System::Drawing::Drawing2D::GraphicsPath^ path = gcnew System::Drawing::Drawing2D::GraphicsPath();
		path->AddEllipse(0, 0, matrixOfRelation2->Width, matrixOfRelation2->Height);
		matrixOfRelation2->Region = gcnew System::Drawing::Region(path);
	}
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
		DateTime selectedDate1 = this->date1->Value;
		int day1 = selectedDate1.Day;
		DateTime selectedDate2 = this->date2->Value;
		int day2 = selectedDate2.Day;
		int day = day1 + day2;
		int sum = 0;
		if (day < 23) {
			sum = day;
		}
		else {
			int tempDay = day;
			while (tempDay > 0) {
				sum += tempDay % 10;
				tempDay /= 10;
			}
			if (sum >= 23) {
				int newSum = 0;
				int tempSum = sum;
				while (tempSum > 0) {
					newSum += tempSum % 10;
					tempSum /= 10;
				}
				sum = newSum;
			}
		}
		int sumDay1 = 0;
		if (day1 < 23) {
			sumDay1 = day1;
		}
		else {
			int tempDay = day1;
			while (tempDay > 0) {
				sumDay1 += tempDay % 10;
				tempDay /= 10;
			}
			if (sumDay1 >= 23) {
				int newSum = 0;
				int tempSum = sumDay1;
				while (tempSum > 0) {
					newSum += tempSum % 10;
					tempSum /= 10;
				}
				sumDay1 = newSum;
			}
		}
		int sumDay2 = 0;
		if (day2 < 23) {
			sumDay2 = day2;
		}
		else {
			int tempDay = day2;
			while (tempDay > 0) {
				sumDay2 += tempDay % 10;
				tempDay /= 10;
			}
			if (sumDay2 >= 23) {
				int newSum = 0;
				int tempSum = sumDay2;
				while (tempSum > 0) {
					newSum += tempSum % 10;
					tempSum /= 10;
				}
				sumDay2 = newSum;
			}
		}
		int month1 = selectedDate1.Month;
		int month2 = selectedDate2.Month;
		int month = month1 + month2;
		int sum2 = 0;
		if (month < 23) {
			sum2 = month;
		}
		else {
			int tempMonth = month;
			while (tempMonth > 0) {
				sum2 += tempMonth % 10;
				tempMonth /= 10;
			}
			if (sum2 >= 23) {
				int newSum = 0;
				int tempSum = sum2;
				while (tempSum > 0) {
					newSum += tempSum % 10;
					tempSum /= 10;
				}
				sum2 = newSum;
			}
		}	
		int sumMonth1 = 0;
		if (month1 < 23) {
			sumMonth1 = month1;
		}
		else {
			int tempMonth = month1;
			while (tempMonth > 0) {
				sumMonth1 += tempMonth % 10;
				tempMonth /= 10;
			}
			if (sumMonth1 >= 23) {
				int newSum = 0;
				int tempSum = sumMonth1;
				while (tempSum > 0) {
					newSum += tempSum % 10;
					tempSum /= 10;
				}
				sumMonth1 = newSum;
			}
		}
		int sumMonth2 = 0;
		if (month2 < 23) {
			sumMonth2 = month2;
		}
		else {
			int tempMonth = month2;
			while (tempMonth > 0) {
				sumMonth2 += tempMonth % 10;
				tempMonth /= 10;
			}
			if (sumMonth2 >= 23) {
				int newSum = 0;
				int tempSum = sumMonth2;
				while (tempSum > 0) {
					newSum += tempSum % 10;
					tempSum /= 10;
				}
				sumMonth2 = newSum;
			}
		}
		int year11 = selectedDate1.Year;
		int year22 = selectedDate2.Year;
		int year = year11 + year22;
		int sum3 = 0;
		int sum4 = 0;
		int year1 = year / 100;
		int year2 = year % 100;
		if (year1 < 23) {
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
		if (year2 < 23) {
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
		int year3 = sum3 + sum4;
		int sum5 = 0;
		if (year3 < 23) {
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

		int sum31 = 0;
		int sum41 = 0;
		int year111 = year11 / 100;
		int year211 = year11 % 100;
		if (year111 < 23) {
			sum31 = year111;
		}
		else {
			int tempYear1 = year111;
			while (tempYear1 > 0) {
				sum31 += tempYear1 % 10;
				tempYear1 /= 10;
			}
			if (sum31 >= 23) {
				int newSum3 = 0;
				int tempSum3 = sum31;
				while (tempSum3 > 0) {
					newSum3 += tempSum3 % 10;
					tempSum3 /= 10;
				}
				sum31 = newSum3;
			}
		}
		if (year211 < 23) {
			sum41 = year211;
		}
		else {
			int tempYear2 = year211;
			while (tempYear2 > 0) {
				sum41 += tempYear2 % 10;
				tempYear2 /= 10;
			}
			if (sum41 >= 23) {
				int newSum4 = 0;
				int tempSum4 = sum41;
				while (tempSum4 > 0) {
					newSum4 += tempSum4 % 10;
					tempSum4 /= 10;
				}
				sum41 = newSum4;
			}
		}
		int year311 = sum31 + sum41;
		int sum51 = 0;
		if (year311 < 23) {
			sum51 = year311;
		}
		else {
			int tempYear3 = year311;
			while (tempYear3 > 0) {
				sum51 += tempYear3 % 10;
				tempYear3 /= 10;
			}
			if (sum51 >= 23) {
				int newSum5 = 0;
				int tempSum5 = sum51;
				while (tempSum5 > 0) {
					newSum5 += tempSum5 % 10;
					tempSum5 /= 10;
				}
				sum51 = newSum5;
			}
		}
		int sum32 = 0;
		int sum42 = 0;
		int year122 = year22 / 100;
		int year222 = year22 % 100;
		if (year122 < 23) {
			sum32 = year122;
		}
		else {
			int tempYear1 = year122;
			while (tempYear1 > 0) {
				sum32 += tempYear1 % 10;
				tempYear1 /= 10;
			}
			if (sum32 >= 23) {
				int newSum3 = 0;
				int tempSum3 = sum32;
				while (tempSum3 > 0) {
					newSum3 += tempSum3 % 10;
					tempSum3 /= 10;
				}
				sum32 = newSum3;
			}
		}
		if (year222 < 23) {
			sum42 = year222;
		}
		else {
			int tempYear2 = year222;
			while (tempYear2 > 0) {
				sum42 += tempYear2 % 10;
				tempYear2 /= 10;
			}
			if (sum42 >= 23) {
				int newSum4 = 0;
				int tempSum4 = sum42;
				while (tempSum4 > 0) {
					newSum4 += tempSum4 % 10;
					tempSum4 /= 10;
				}
				sum42 = newSum4;
			}
		}
		int year322 = sum32 + sum42;
		int sum52 = 0;
		if (year322 < 23) {
			sum52 = year322;
		}
		else {
			int tempYear3 = year322;
			while (tempYear3 > 0) {
				sum52 += tempYear3 % 10;
				tempYear3 /= 10;
			}
			if (sum52 >= 23) {
				int newSum5 = 0;
				int tempSum5 = sum52;
				while (tempSum5 > 0) {
					newSum5 += tempSum5 % 10;
					tempSum5 /= 10;
				}
				sum52 = newSum5;
			}
		}
		
		int sum6 = sum + sum2 + sum5;
		int sum7 = 0;
		if (sum6 < 23) {
			sum7 = sum6;
		}
		else {
			int temp = sum6;
			while (temp > 0) {
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
		int sum61 = sumDay1 + sumMonth1 + sum51;
	

		int sum71 = 0;
		if (sum61 < 23) {
			sum71 = sum61;
		}
		else {
			int temp = sum61;
			while (temp > 0) {
				sum71 += temp % 10;
				temp /= 10;
			}
			if (sum71 >= 23) {
				int newSum = 0;
				int tempSum = sum71;
				while (tempSum > 0) {
					newSum += tempSum % 10;
					tempSum /= 10;
				}
				sum71 = newSum;
			}
		}
		int sumE1 = sumDay1 + sumMonth1 + sum51 + sum71;
		int result1 = 0;
		if (sumE1 < 23) {
			result1 = sumE1;
		}
		else {
			int temp = sumE1;
			while (temp > 0) {
				result1 += temp % 10;
				temp /= 10;
			}
			if (result1 >= 23) {
				int newSum = 0;
				int tempSum = result1;
				while (tempSum > 0) {
					newSum += tempSum % 10;
					tempSum /= 10;
				}
				result1 = newSum;
			}
		}
		int sum62 = sumDay2 + sumMonth2 + sum52;
		int sum72 = 0;
		if (sum62 < 23) {
			sum72 = sum62;
		}
		else {
			int temp = sum62;
			while (temp > 0) {
				sum72 += temp % 10;
				temp /= 10;
			}
			if (sum72 >= 23) {
				int newSum = 0;
				int tempSum = sum72;
				while (tempSum > 0) {
					newSum += tempSum % 10;
					tempSum /= 10;
				}
				sum72 = newSum;
			}
		}
		int sumE2 = sumDay2 + sumMonth2 + sum52 + sum72;
		int result2 = 0;
		if (sumE2 < 23) {
			result2 = sumE2;
		}
		else {
			int temp = sumE2;
			while (temp > 0) {
				result2 += temp % 10;
				temp /= 10;
			}
			if (result2 >= 23) {
				int newSum = 0;
				int tempSum = result2;
				while (tempSum > 0) {
					newSum += tempSum % 10;
					tempSum /= 10;
				}
				result2 = newSum;
			}
		}
		int sumE12 = sumE1 + sumE2;
		int result12 = 0;
		if (sumE12 < 23) {
			result12 = sumE12;
		}
		else {
			int temp = sumE12;
			while (temp > 0) {
				result12 += temp % 10;
				temp /= 10;
			}
			if (result12 >= 23) {
				int newSum = 0;
				int tempSum = result12;
				while (tempSum > 0) {
					newSum += tempSum % 10;
					tempSum /= 10;
				}
				result12 = newSum;
			}
		}
		this->A->Text = sum.ToString();
		this->B->Text = sum2.ToString();
		this->C->Text = sum5.ToString();
		this->D->Text = sum7.ToString();
		this->E->Text = result12.ToString();
	}
private: System::Void exit_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
}
private: System::Void previous1_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
}
};
}
