#pragma once
#include "LinkMessageBox.h"

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


	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ viewInSociety;
	private: System::Windows::Forms::Button^ carma;
	private: System::Windows::Forms::Button^ inspiration;





	private: System::Windows::Forms::Button^ generalCharasteristic;


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
	private: System::Windows::Forms::RichTextBox^ description;
	private: System::Windows::Forms::Button^ other;



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
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->viewInSociety = (gcnew System::Windows::Forms::Button());
			this->carma = (gcnew System::Windows::Forms::Button());
			this->inspiration = (gcnew System::Windows::Forms::Button());
			this->generalCharasteristic = (gcnew System::Windows::Forms::Button());
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
			this->description = (gcnew System::Windows::Forms::RichTextBox());
			this->other = (gcnew System::Windows::Forms::Button());
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
			// label2
			// 
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->ForeColor = System::Drawing::Color::LavenderBlush;
			this->label2->Location = System::Drawing::Point(151, 21);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(621, 149);
			this->label2->TabIndex = 38;
			this->label2->Text = L"Для расчёта матрицы совместимости введите даты\r\n рождения";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// viewInSociety
			// 
			this->viewInSociety->BackColor = System::Drawing::Color::Transparent;
			this->viewInSociety->Cursor = System::Windows::Forms::Cursors::Hand;
			this->viewInSociety->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->viewInSociety->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->viewInSociety->ForeColor = System::Drawing::Color::LavenderBlush;
			this->viewInSociety->Location = System::Drawing::Point(1075, 226);
			this->viewInSociety->Name = L"viewInSociety";
			this->viewInSociety->Size = System::Drawing::Size(194, 92);
			this->viewInSociety->TabIndex = 37;
			this->viewInSociety->Text = L"Как общество видит пару";
			this->viewInSociety->UseVisualStyleBackColor = false;
			this->viewInSociety->Click += gcnew System::EventHandler(this, &Relationship::viewInSociety_Click);
			// 
			// carma
			// 
			this->carma->BackColor = System::Drawing::Color::Transparent;
			this->carma->Cursor = System::Windows::Forms::Cursors::Hand;
			this->carma->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->carma->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->carma->ForeColor = System::Drawing::Color::LavenderBlush;
			this->carma->Location = System::Drawing::Point(1457, 226);
			this->carma->Name = L"carma";
			this->carma->Size = System::Drawing::Size(190, 92);
			this->carma->TabIndex = 36;
			this->carma->Text = L"Кармические уроки";
			this->carma->UseVisualStyleBackColor = false;
			this->carma->Click += gcnew System::EventHandler(this, &Relationship::carma_Click);
			// 
			// inspiration
			// 
			this->inspiration->BackColor = System::Drawing::Color::Transparent;
			this->inspiration->Cursor = System::Windows::Forms::Cursors::Hand;
			this->inspiration->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->inspiration->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->inspiration->ForeColor = System::Drawing::Color::LavenderBlush;
			this->inspiration->Location = System::Drawing::Point(1457, 92);
			this->inspiration->Name = L"inspiration";
			this->inspiration->Size = System::Drawing::Size(190, 91);
			this->inspiration->TabIndex = 35;
			this->inspiration->Text = L"Что вдохновляет пару";
			this->inspiration->UseVisualStyleBackColor = false;
			this->inspiration->Click += gcnew System::EventHandler(this, &Relationship::inspiration_Click);
			// 
			// generalCharasteristic
			// 
			this->generalCharasteristic->BackColor = System::Drawing::Color::Transparent;
			this->generalCharasteristic->Cursor = System::Windows::Forms::Cursors::Hand;
			this->generalCharasteristic->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->generalCharasteristic->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->generalCharasteristic->ForeColor = System::Drawing::Color::LavenderBlush;
			this->generalCharasteristic->Location = System::Drawing::Point(1075, 92);
			this->generalCharasteristic->Name = L"generalCharasteristic";
			this->generalCharasteristic->Size = System::Drawing::Size(194, 91);
			this->generalCharasteristic->TabIndex = 34;
			this->generalCharasteristic->Text = L"Общая характеристика пары";
			this->generalCharasteristic->UseVisualStyleBackColor = false;
			this->generalCharasteristic->Click += gcnew System::EventHandler(this, &Relationship::generalCharasteristic_Click);
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
			this->E->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->E->Location = System::Drawing::Point(433, 694);
			this->E->Name = L"E";
			this->E->Size = System::Drawing::Size(20, 24);
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
			this->D->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->D->Location = System::Drawing::Point(433, 909);
			this->D->Name = L"D";
			this->D->Size = System::Drawing::Size(20, 24);
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
			this->C->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->C->Location = System::Drawing::Point(651, 693);
			this->C->Name = L"C";
			this->C->Size = System::Drawing::Size(20, 24);
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
			this->B->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->B->Location = System::Drawing::Point(435, 475);
			this->B->Name = L"B";
			this->B->Size = System::Drawing::Size(20, 24);
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
			this->A->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->A->ForeColor = System::Drawing::SystemColors::ControlText;
			this->A->Location = System::Drawing::Point(214, 694);
			this->A->Name = L"A";
			this->A->Size = System::Drawing::Size(20, 24);
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
			// description
			// 
			this->description->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->description->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 24, System::Drawing::FontStyle::Bold));
			this->description->ForeColor = System::Drawing::Color::LavenderBlush;
			this->description->Location = System::Drawing::Point(945, 457);
			this->description->Name = L"description";
			this->description->Size = System::Drawing::Size(832, 564);
			this->description->TabIndex = 51;
			this->description->Text = L"";
			// 
			// other
			// 
			this->other->BackColor = System::Drawing::Color::Transparent;
			this->other->Cursor = System::Windows::Forms::Cursors::Hand;
			this->other->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->other->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->other->ForeColor = System::Drawing::Color::LavenderBlush;
			this->other->Location = System::Drawing::Point(348, 977);
			this->other->Name = L"other";
			this->other->Size = System::Drawing::Size(194, 91);
			this->other->TabIndex = 52;
			this->other->Text = L"Другие характеристики";
			this->other->UseVisualStyleBackColor = false;
			this->other->Click += gcnew System::EventHandler(this, &Relationship::other_Click);
			// 
			// Relationship
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1940, 1100);
			this->Controls->Add(this->other);
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
			this->Controls->Add(this->label2);
			this->Controls->Add(this->viewInSociety);
			this->Controls->Add(this->carma);
			this->Controls->Add(this->inspiration);
			this->Controls->Add(this->generalCharasteristic);
			this->Controls->Add(this->date1);
			this->Controls->Add(this->enter);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->zoneOfComfort);
			this->Controls->Add(this->personalityPlus);
			this->Controls->Add(this->personalityMinus);
			this->Controls->Add(this->done);
			this->Controls->Add(this->date);
			this->Controls->Add(this->matrixOfPerson);
			this->Controls->Add(this->description);
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
private: System::Void generalCharasteristic_Click(System::Object^ sender, System::EventArgs^ e) {
	if (this->E->Text == "3") {
		this->description->Text = "3 аркан – такая пара встретилась для того, чтобы продолжить свой род. \n\nЧасто такие пары бывают многодетны, у них дом – это полная чаша.\n В таких отношениях присутствует по истине материнская забота, а женщине может уделяться либо особое внимание, либо женщина будет в принципе главной.\n В минусе такие пары патологически избегают детей и разговорах о них, не берут на себя ответственность даже за животных. Могут также иметь проблемы с финансами и их распределением.";
	}
	else if (this->E->Text == "4") {
		this->description->Text = "4 аркан – такая динамика, на мой взгляд, прекрасна для бизнесовых пар. \n\nИменно такие пары способны правильно направить энергию на создание собственного дела. Однако, скорее всего такие отношения будут крайне консервативными и традиционными, где мужчина – добытчик и авторитет, а жена управляет финансами и домом. Основная проблема такой пары – неумение говорить о своих чувствах, скупость на нежности и проявления любви.";
	}
	else if (this->E->Text == "5") {
		this->description->Text = "5 аркан – по такому положению также проходят традиционные пары, которые, однако, склонны чтить традиции и семейные ценности. \n\nИменно с таким характером стоит заниматься выстраиванием семейной династии, возрождением забытых культурных традиций и продолжением рода. В таких парах, как правило, кто-то из партнёров пришел научить другого чему-то. Слаба сторона таких пар – попытка исправить партнёра, сделать другого удобным для себя и \"под себя\", морализм и консерваторство вплоть до того, где должны стоять чашки.";
	}
	else if (this->E->Text == "6") {
		this->description->Text = "6 аркан – абсолютный идеал пары для тех, кто жаждет романтики.  \n\nТакие пары видно издалека, так как это люди, которые не стесняются проявлять свою любовь на публике. Партнёры также могут хорошо выглядеть вместе, быть невыносимо красивы. Однако, перед такими союзами стоит непростая задача – научиться прощать своих партнёров за их изъяны, научиться любить не за что-то, а безусловно. Иначе, если этот урок не усвоен, кто-то из партнёров может с легкостью ходить налево.";
	}
	else if (this->E->Text == "7") {
		this->description->Text = "7 аркан – пара, не стоящая на месте. \n\nОни амбициозны, всё время выдумывают что-то новое и ставят перед собой глобальные цели. В минусовом проявлении могут быть крайне суетливы и всё время куда-то спешить. Идеальный союз для тех, кто мечтает путешествовать вместе со своими партнёрами, так как по такому сочетанию проходит даже совместный переезд или жизнь на две страны. В минусовом проявлении такие пары могут стагнировать, целыми днями лежать на диване и \"пилить\" друг друга из-за внутреннего ощущения нереализованности и растраченного потенциала.";
	}
	else if (this->E->Text == "8") {
		this->description->Text = "8 аркан – аркан, сигнализирующий кармические отношения. \n\nНаверняка, вы успели натворить дел в прошлых жизнях и теперь встретились для искупления грехов. Такие пары нуждаются в браке, им нельзя затягивать с подтверждением своих отношений официально. Основная их задача – научиться выдерживать баланс. Несмотря ни на что, такие партнёры стоят друг друга, даже если уверены, что это не так. Следовательно, необходимо понимать, что как любые хорошие поступки, так и любые нечестные дела в сторону партнёра, вернутся вам.";
	}
	else if (this->E->Text == "9") {
		this->description->Text = "9 аркан – по такому характеру проходят пары, которым гораздо лучше поодиночке, чем вдвоем. \n\nТакие партнёры самодостаточны и независимы, любят уединение, и поэтому их союзы скорее напоминают дружеские, чем романтические. Подходящим будут редкие, но качественные встречи, гостевой брак или жизнь раздельно. Главная проблема таких пар – утаивание и умалчивание проблем, попытка замести их под ковёр. Необходимо научиться доверять друг другу, иначе ваш союз будет существовать только на словах, но не на делах. Могут быть проблемы с сексуальной жизнью и либидо.";
	}
	else if (this->E->Text == "10") {
		this->description->Text = "10 аркан – такие пары, как правило, встречаются случайно и ощущают, словно их встреча была дарована судьбой. \n\nИменно такие пары гармоничны и умеют наслаждаться жизнью и друг другом. Часто такие пары очень общительны, любят компании и эти компании в ответ оказывают им в нужные моменты помощь. Когда эти двое вместе, то им как-будто патологически везёт, к чему бы они не прикоснулись. Однако, если такая пара в минусе, то они не могут расслабиться и отдохнуть в компании друг друга, зациклены над работой над отношениями, а также над внешними обстоятельствами.";
	}
	else if (this->E->Text == "11") {
		this->description->Text = "11 аркан – в подобных отношениях присутствует животный магнетизм. \n\nС первой встречи их как будто невыносимо тянет друг к другу. У такой пары огромная часть жизни построена на сексе и сексуальности. Хорошо вместе также заниматься спортом и посещать различные тренинги личностного роста. Не всё так сладко становится тогда, когда партнёры начинают давить друг на друга, выплёскивая агрессию и неудовлетворенность. Ссоры на почве борьбы за власть, попытки доказать своё превосходство – это то, что будет приводить эту пару к разрывам. В таких парах напряжение может доходить даже до рукоприкладства и насилия.";
	}
	else if (this->E->Text == "12") {
		this->description->Text = "12 аркан – достаточно тревожный аркан для пары.  \n\nС одной стороны, в таких отношениях партнёры готовы на то, чтобы всегда прийти на помощь друг другу. В плюсе они способны на глубокую работу над личными травмами и над отношениями в принципе. Часто даже свои интересы ставят ниже интересов партнёра. С другой стороны, в такой паре крайне вероятна игра в жертву и агрессора. Причем роли могут периодически меняться, но партнёры всё равно не будут признавать свою неправоту. Могут возникать созависимые отношения.";
	}
	else if (this->E->Text == "13") {
		this->description->Text = "13 аркан – откровенно сложное положение.\n\nЧасто это те, кто вечно сходится и расходится по разным причинам, так как вместе быть невозможно, а порознь – ещё хуже. Таким парам постоянно нужно прорабатывать страхи, непрерывно трансформироваться, иначе союз не выстоит. Нельзя затягивать с переходом из одной фазы в другую: если уже давно пора жениться, не откладывайте на годы, если уже хотите детей, не ждите чуда и т.д. Именно умение отпускать прошлое, долгие и глубинные разговоры, вскрывающие суть комплексов и проблем, позволяют держать такую пару на плаву. В подобных отношениях не стоит рассчитывать на стабильность, но ведь и в буре можно найти свою гармонию.";
	}
	else if (this->E->Text == "14") {
		this->description->Text = "14 аркан – несмотря на то, что партнёры в таких союзах разные (у них могут разниться статус, цели, взгляды и многое другое), вместе они представляют собой крайне гармоничный союз. \n\nБолее всего подойдут отношения типа \"художник и его муза\". Таким парам нужно научиться реализовывать свой творческий потенциал и не скрывать от широкой публики свою чувственность (как пример, таким парам можно продавать картины, созданные вместе). Однако, часто такие пары могут конфликтовать из-за своей \"разности\" и отказываться от компромиссов. Необходимо научиться договариваться и не пытаться переделать партнёра";
	}
	else if (this->E->Text == "15") {
		this->description->Text = "15 аркан – ещё один кармический союз. \n\nТакие пары словно притягивает магнитом: у них есть и взаимная привязанность, и сексуальное притяжение, но словно они не могут избавиться от налёта язвительности по отношению друг к другу. Могут даже вступать в одну зависимость вместе, склонны к изменам. К сожалению, такие пары часто сопровождают манипуляции, издевательства друг над другом, ревность, зависть и прочие формы неприязни. Однако, когда такие партнёры принимают как себя, так и друг друга со всеми грехами и пороками, они способны на невероятные вершины и заработки.";
	}
	else if (this->E->Text == "16") {
		this->description->Text = "16 аркан – ещё один пример крайне сложных отношений. \n\nЧаще всего, для таких пар большая проблема – это материальные привязки (деньги, имущество, статус и так далее). Часто такие пары расстаются и берут паузы в отношениях, как из-за внешних, так и из-за внутренних обстоятельств. Единственный выход для них – это духовный рост, ведь именно для него они и встретились в этой жизни. Над такими отношениями необходимо постоянно работать, переосмыслять старое и избавляться от ненужного. Например, если такая пара крайне привязана к общей квартире, то жизнь вынудит от неё избавится и чтобы это не повлияло на отношения, необходимо с благодарностью отпускать.";
	}
	else if (this->E->Text == "17") {
		this->description->Text = "17 аркан – такие отношения можно назвать истинно «чистыми»: безукоризненные ухаживания, ясные намерения и красивые слова.  \n\nУ подобных союзов также очень высокий творческий потенциал, так как они идеалисты и способны создавать во имя своих идеалов. Иногда бывает так, что такие пары хранят себя до брака. Более того, если партнёры – известные люди, то такой союз может принести дополнительную популярность и славу. У такой чистоты, однако, есть и обратная сторона. Попытка поддерживать идеальный образ отношений на людях часто приводит к тому, что скрываемый негатив рано или поздно выходит наружу.";
	}
	else if (this->E->Text == "18") {
		this->description->Text = "18 аркан – магнитический, таинственный союз, который построен на духовной связи.\n\nЯрким примером такой пары являются Анджелина Джоли и Брэд Питт. Между ними действительно космическое притяжение, которое не поддаётся описанию. Способны даже на совместные чувственные и духовные практики (например, тантру). Однако, их ахиллесовой пятой являются страхи и иллюзии, как относительно партнёра, так и относительно отношений. При отсутствии работы над страхами друг друга, есть риск в этих страхах оказываться (например, пара боится при совместных поездках попасть в аварию и это неизбежно происходит).";
	}
	else if (this->E->Text == "19") {
		this->description->Text = "19 аркан – динамичная, красивая и радостная пара, которая светится от всепоглащающей любви. \n\nИменно такая пара при правильной динамике может стать семьёй миллионеров. Равно как и партнёры 3 и 22 аркана, они встретились для того, чтобы иметь много детей и \"плодиться и размножаться\". У таких пар есть интересная особенность, они могут начать встречаться или пожениться со второго или третьего раза. Однако, и у таких пар есть определённые проблемы, в виде гиперконтроля относительно друг друга м чувства вины за некоторые поступки.";
	}
	else if (this->E->Text == "20") {
		this->description->Text = "20 аркан – истинно семейные союзы. В таких отношениях создается ощущение, что люди как будто всегда были семьей. \n\nДело в том, что такие люди пришли для того, чтобы решить негативные родовые программы (например, побороться с зависимостями). В таких отношениях могут быть неравные условия – разница в возрасте, в достатке или положении в обществе. Несмотря на то, что таким парам также характерно сходиться и расходиться, необходимо понимать, что у такого союза большой потенциал для создания крепких и истинно семейных отношений. Из главных препятствий – родственники, которые могут не поддерживать такой союз. Часто такие пары из-за этого стагнируют и зависают в одном положении.";
	}
	else if (this->E->Text == "21") {
		this->description->Text = "21 аркан – прекрасное сочетание для любого рода отношений. \n\nЧасто именно такие пары реализуют глобальные проекты, открывают интернет-бизнесы, объединяют вокруг себя разных людей. Также нередко бывает так, что такие партнёры – представители разных культур, религий, воспитания и т.д. В этой паре необходимо избавляться от предубеждений, от любого рода стереотипов и ограничивающих убеждений, иначе можно зависнуть и не реализоваться. Необходимо быть толерантными как друг к другу, так и к окружающим. Проблемы и сложности должны только укреплять такой союз.";
	}
	else if (this->E->Text == "22") {
		this->description->Text = "22 аркан – лёгкие, ни к чему не обязывающие, свободные отношения. \n\nКак правило, такие пары не остаются друг с другом надолго, так как им необходима свобода и независимость. Для того, чтобы строить таким парам долгосрочные отношения, категорически нельзя ограничивать друг друга каким-либо образом. Нужно путешествовать (подойдут даже поездки дикарём), дурачиться, не стесняться своей нужды в том, чтобы разукрасить мир яркими красками. В перспективе могут стать многодетным союзом и вместе с детьми быть лёгкой, задорной и постоянно ищущей приключения семьёй.";
	}
}
private: System::Void carma_Click(System::Object^ sender, System::EventArgs^ e) {
	if (this->D->Text == "2") {
		this->description->Text = "Аркан 2 – Верховная Жрица\n\nКармический урок: Урок доверия и интуиции. Люди учатся слушать внутренний голос, не торопиться с выводами, уважать личное пространство партнёра. Возможно, отношения строятся на тайнах или неясности — задача раскрыть истину без давления.";
}
	else if (this->D->Text == "3") {
		this->description->Text = "Аркан 3 – Императрица\n\nКармический урок: Проработка женских энергий, принятия и заботы. Учитесь развивать плодородие в отношениях: давать, поддерживать, взращивать. Возможны проблемы с родом, материнством, отношением к женщинам.";
}
	else if (this->D->Text == "4") {
		this->description->Text = "Аркан 4 – Император\n\nКармический урок : Тема власти, контроля и дисциплины.Нужно научиться строить структуру отношений без тирании.Один из партнёров может давить, навязывать своё мнение.Урок — перейти от авторитарности к партнёрству.";
}
	else if (this->D->Text == "5") {
		this->description->Text = "Аркан 5 – Иерофант\n\nКармический урок : Принятие традиций и духовных ценностей.В отношениях может стоять задача соблюдения моральных норм, верности, духовного роста.Важно не осуждать, не навязывать свои убеждения.";
}
	else if (this->D->Text == "6") {
		this->description->Text = "Аркан 6 – Влюблённые\n\nКармический урок: Урок выбора, любви без привязанности. Часто приходится выбирать между партнёром и другими важными аспектами жизни. Учитесь любить свободно, не ожидая возврата.";
}
	else if (this->D->Text == "7") {
		this->description->Text = "Аркан 7 – Колесница\n\nКармический урок: Умение двигаться вперёд вместе. Контроль, амбиции и стремление быть «вожатым» в отношениях могут привести к конфликтам. Учитесь равноправному движению в союзе.";
}
	else if (this->D->Text == "8") {
		this->description->Text = "Аркан 8 – Справедливость\n\nКармический урок: Урок равновесия, справедливости и честности. Возможно, в прошлых жизнях была нечестность, манипуляции. Важно научиться объективности, не судить и не оценивать.";
}
	else if (this->D->Text == "9") {
		this->description->Text = "Аркан 9 – Отшельник\n\nКармический урок: Одиночество и внутреннее развитие в отношениях. Часто один из партнёров чувствует себя одиноким. Урок — научиться быть вместе, сохраняя личную глубину и не уходя в себя полностью.";
}
	else if (this->D->Text == "10") {
		this->description->Text = "Аркан 10 – Колесо Фортуны\n\nКармический урок: Принятие цикличности и перемен. Отношения могут быть нестабильными, меняться по фазам. Урок — принятие перемен и веры в судьбу, отпустить контроль над результатом.";
}
	else if (this->D->Text == "11") {
		this->description->Text = "Аркан 11 – Сила\n\nКармический урок : Урок мягкой силы и принятия инстинктов.Отношения учат управлять эмоциями, агрессией, сексуальностью.Нужна мягкость, терпение, трансформация страсти в любовь.";
}
	else if (this->D->Text == "12") {
		this->description->Text = "Аркан 12 – Повешенный\n\nКармический урок: Урок жертвы и принятия. Один из партнёров может жертвовать собой. Нужно понять, где самопожертвование переходит в унижение. Учитесь отпускать, не зацикливаться.";
	}
	else if (this->D->Text == "13") {
		this->description->Text = "Аркан 13 – Смерть\n\nКармический урок : Глубокая трансформация через кризисы.Отношения могут переживать болезненные переломы.Урок — научиться отпускать старое, не цепляться, проходить метаморфозы.";
	}
	else if (this->D->Text == "14") {
		this->description->Text = "Аркан 14 – Умеренность\n\nКармический урок: Урок терпения, баланса и адаптации. Важно научиться ждать, соблюдать гармонию, работать с противоположностями. В отношениях — умение не спешить и не давить.";
	}
	else if (this->D->Text == "15") {
		this->description->Text = "Аркан 15 – Дьявол\n\nКармический урок: Урок освобождения от зависимости и страстей. Отношения часто строятся на привязанностях, сексуальной зависимости или материальных интересах. Нужно научиться свободе и честности.";
	}
	else if (this->D->Text == "16") {
		this->description->Text = "Аркан 16 – Башня\n\nКармический урок: Разрушение иллюзий. Урок болезненный — партнёр может стать «разрушителем», снося ложные убеждения. Это переход на новый уровень через кризис.";
	}
	else if (this->D->Text == "17") {
		this->description->Text = "Аркан 17 – Звезда\n\nКармический урок: Надежда, вера и исцеление. Отношения могут быть на расстоянии, «недостижимыми». Урок — сохранить веру, научиться строить мечты вместе, не теряя реальности.";
	}
	else if (this->D->Text == "18") {
		this->description->Text = "Аркан 18 – Луна\n\nКармический урок: Иллюзии, страхи и эмоциональные лабиринты. Отношения как зеркало страхов и теней. Урок — пройти сквозь туман, научиться видеть суть без самообмана.";
	}
	else if (this->D->Text == "19") {
		this->description->Text = "Аркан 19 – Солнце\n\nКармический урок: Проработка эго и раскрытие истинной радости.";
	}
	else if (this->D->Text == "20") {
		this->description->Text = "Аркан 20 – Суд\n\nКармический урок: Пробуждение, возрождение, родовая карма. Отношения даны для исцеления прошлого, часто связаны с детьми или родителями. Урок — завершить «висящие» дела.";
	}
	else if (this->D->Text == "21") {
		this->description->Text = "Аркан 21 – Мир\n\nКармический урок: Завершение, принятие целостности. Союз может быть итоговым, завершающим цикл воплощений. Учитесь принимать другого без условий, интегрировать опыт.";
	}
	else if (this->D->Text == "22") {
		this->description->Text = "Аркан 22 (0) – Шут\n\nКармический урок: Урок спонтанности, свободы и лёгкости. Часто отношения кажутся нестабильными, легкомысленными. Задача — научиться быть в моменте, не бояться нового, не контролировать.";
	}
}
private: System::Void inspiration_Click(System::Object^ sender, System::EventArgs^ e) {
	if (this->B->Text == "2") {
		this->description->Text = "Аркан 2 – Верховная Жрица\n\nЧто вдохновляет пару: Глубокая духовная и душевная связь. Уважение к личному пространству и тайнам друг друга. Вдохновение приходит через интуицию, тонкие разговоры, ощущение «телепатии».";
}
	else if (this->B->Text == "3") {
		this->description->Text = "Аркан 3 – Императрица\n\nЧто вдохновляет пару: Созидание, рождение нового — дети, проекты, уютный дом. Пара вдохновляется красотой, комфортом и изобилием, стремлением заботиться и проявлять любовь в материальном.";
}
	else if (this->B->Text == "4") {
		this->description->Text = "Аркан 4 – Император\n\nЧто вдохновляет пару: Стабильность, уверенность, сила. Вдохновение приходит через общие цели, амбиции, построение чего-то надёжного — бизнеса, рода, «империи».";
}
	else if (this->B->Text == "5") {
		this->description->Text = "Аркан 5 – Иерофант\n\nЧто вдохновляет пару: Общие ценности, мораль, духовный рост. Пара может вдохновляться служением обществу, передаче знаний, воспитанием, ведением за собой как наставники.";
}
	else if (this->B->Text == "6") {
		this->description->Text = "Аркан 6 – Влюблённые\n\nЧто вдохновляет пару: Настоящая любовь, романтика, союз душ. Вдохновение — в чувствах, искренности, выборе друг друга каждый день. Также — в искусстве, красоте, наслаждении моментом.";
}
	else if (this->B->Text == "7") {
		this->description->Text = "Аркан 7 – Колесница\n\nЧто вдохновляет пару: Движение вперёд, победы, путешествия, динамика. Партнёры чувствуют прилив сил, когда вместе стремятся к цели, преодолевают трудности и побеждают.";
}
	else if (this->B->Text == "8") {
		this->description->Text = "Аркан 8 – Справедливость\n\nЧто вдохновляет пару: Честность, равенство, справедливые отношения. Союз вдохновляется гармонией, балансом и уважением к личным границам. Пара может быть примером зрелых отношений.";
}
	else if (this->B->Text == "9") {
		this->description->Text = "Аркан 9 – Отшельник\n\nЧто вдохновляет пару: Уединение, мудрость, внутренний путь. Вдохновение в глубоких беседах, совместном саморазвитии, поиске смысла. Также — в поддержке одиночества друг друга.";
}
	else if (this->B->Text == "10") {
		this->description->Text = "Аркан 10 – Колесо Фортуны\n\nЧто вдохновляет пару: Удача, перемены, игра жизни. Партнёров вдохновляют авантюры, неожиданные повороты, лёгкость и принятие потока. Вместе они умеют находить шанс даже в хаосе.";
}
	else if (this->B->Text == "11") {
		this->description->Text = "Аркан 11 – Сила\n\nЧто вдохновляет пару: Страсть, сила духа, чувственность. Вдохновение — в преодолении, поддержке и трансформации через любовь. Союз заряжен энергией жизни и сердечного огня.";
}
	else if (this->B->Text == "12") {
		this->description->Text = "Аркан 12 – Повешенный\n\nЧто вдохновляет пару: Глубина чувств, безусловное принятие, умение смотреть на мир иначе. Вдохновение приходит через жертвенность ради любви, служение, отказ от эго.";
}
	else if (this->B->Text == "13") {
		this->description->Text = "Аркан 13 – Смерть\n\nЧто вдохновляет пару: Перерождения, обновления, кризис как путь к росту. Пара вдохновляется тем, что вместе могут пройти через всё и выйти сильнее. Мощный путь трансформации.";
	}
	else if (this->B->Text == "14") {
		this->description->Text = "Аркан 14 – Умеренность\n\nЧто вдохновляет пару: Гармония, баланс, совместное исцеление. Партнёры вдохновляются спокойствием, поддержкой, умением быть в ритме друг друга. Также — путешествия, природа.";
	}
	else if (this->B->Text == "15") {
		this->description->Text = "Аркан 15 – Дьявол\n\nЧто вдохновляет пару: Сила страсти, сексуальность, материальный успех. Пара чувствует прилив энергии через искушения, желания и мощное влечение. Важно уметь управлять этой энергией.";
	}
	else if (this->B->Text == "16") {
		this->description->Text = "Аркан 16 – Башня\n\nЧто вдохновляет пару: Освобождение от иллюзий, снос ограничений. Союз может вдохновляться идеей свободы, истины, разрушения старого ради построения нового. Мощный революционный импульс.";
	}
	else if (this->B->Text == "17") {
		this->description->Text = "Аркан 17 – Звезда\n\nЧто вдохновляет пару: Мечты, вдохновение, надежда и красота. Союз питается возвышенными целями, светлой верой, искусством, будущим. Это пара-мечта, которая верит в лучшее.";
	}
	else if (this->B->Text == "18") {
		this->description->Text = "Аркан 18 – Луна\n\nЧто вдохновляет пару: Эмоциональность, тайны, совместное творчество. Союз питается глубиной, магией, тонкими переживаниями. Вдохновение — в мистике, во сне, в фантазии.";
	}
	else if (this->B->Text == "19") {
		this->description->Text = "Аркан 19 – Солнце\n\nЧто вдохновляет пару: Радость, яркость, энергия жизни. Вдохновение — в совместном счастье, детях, отдыхе, признании. Такая пара сияет и заряжает окружающих.";
	}
	else if (this->B->Text == "20") {
		this->description->Text = "Аркан 20 – Суд\n\nЧто вдохновляет пару: Пробуждение, возрождение, высшая миссия. Вдохновение приходит через осознание: «мы вместе не просто так». Это союз, который может менять мир, исцелять род.";
	}
	else if (this->B->Text == "21") {
		this->description->Text = "Аркан 21 – Мир\n\nЧто вдохновляет пару: Завершённость, гармония, свобода. Вдохновение — в путешествиях, творчестве, глобальных проектах. Пара живёт в потоке и создаёт ощущение полноты бытия.";
	}
	else if (this->B->Text == "22") {
		this->description->Text = "Аркан 22 (0) – Шут\n\nЧто вдохновляет пару: Игра, лёгкость, спонтанность. Вдохновение — в свободе быть собой, в смехе, в отсутствии правил. Это пара-открытие, они вместе пробуют новое и идут навстречу неизвестному.";
	}
}
	private: System::Void viewInSociety_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->A->Text == "2") {
			this->description->Text = "Аркан 2 – Верховная Жрица\n\nКак пару видит общество: Загадочные, глубокие, закрытые. Кажутся мистическими, «не такими как все», возможно, мало делятся личным. Люди чувствуют от них мудрость и тайну.";
	}
		else if (this->A->Text == "3") {
			this->description->Text = "Аркан 3 – Императрица\n\nКак пару видит общество: Красивая, гармоничная пара. Излучают тепло, уют, плодовитость. Часто видятся как идеальная семья — любящие, ухоженные, заботливые.";
	}
		else if (this->A->Text == "4") {
			this->description->Text = "Аркан 4 – Император\n\nКак пару видит общество: Сильные, стабильные, статусные. Люди видят в них опору, надёжность, уверенность. Это «влиятельная пара» с чувством власти и контроля.";
	}
		else if (this->A->Text == "5") {
			this->description->Text = "Аркан 5 – Иерофант\n\nКак пару видит общество: Моральные авторитеты. Пара, у которой «всё по правилам», может казаться традиционной, духовной или даже учительской. Их уважают, к ним прислушиваются.";
	}
		else if (this->A->Text == "6") {
			this->description->Text = "Аркан 6 – Влюблённые\n\nКак пару видит общество: Влюблённые, красивые, романтичные. Люди воспринимают их как чувственный союз, ярких, харизматичных партнёров, которых свела судьба.";
	}
		else if (this->A->Text == "7") {
			this->description->Text = "Аркан 7 – Колесница\n\nКак пару видит общество: Победители, движущая сила. Пара ассоциируется с активностью, энергией, целеустремлённостью. Люди видят в них команду, которая добьётся своего.";
	}
		else if (this->A->Text == "8") {
			this->description->Text = "Аркан 8 – Справедливость\n\nКак пару видит общество: Зрелые, справедливые, уравновешенные. Они производят впечатление честной и логичной пары, которая умеет договариваться и строит отношения на равноправии.";
	}
		else if (this->A->Text == "9") {
			this->description->Text = "Аркан 9 – Отшельник\n\nКак пару видит общество: Закрытые, самодостаточные, немного отчуждённые. Могут казаться замкнутыми, не очень социальными. Пара, которая живёт «в своём мире».";
	}
		else if (this->A->Text == "10") {
			this->description->Text = "Аркан 10 – Колесо Фортуны\n\nКак пару видит общество: Удачливые, лёгкие, «везунчики». Их воспринимают как спонтанную, яркую пару, у которой то взлёт, то спад, но они всегда всплывают на поверхность.";
	}
		else if (this->A->Text == "11") {
			this->description->Text = "Аркан 11 – Сила\n\nКак пару видит общество: Страстные, яркие, сильные духом. Люди чувствуют в них мощную энергетику, харизму, сексуальность. Их уважают за внутреннюю силу и эмоциональность.";
	}
		else if (this->A->Text == "12") {
			this->description->Text = "Аркан 12 – Повешенный\n\nКак пару видит общество: Необычные, нестандартные. Их союз может казаться странным или непонятным. Возможно, общество считает, что кто-то жертвует собой. Восприятие неоднозначное.";
	}
		else if (this->A->Text == "13") {
			this->description->Text = "Аркан 13 – Смерть\n\nКак пару видит общество: Трансформаторы. Пара, после встречи с которой «что-то меняется». Могут вызывать страх или восхищение, воспринимаются как сила перемен.";
		}
		else if (this->A->Text == "14") {
			this->description->Text = "Аркан 14 – Умеренность\n\nКак пару видит общество: Спокойные, гармоничные, уравновешенные. Их считают идеалом в плане терпения и внутреннего мира. Не конфликтуют, вдохновляют спокойствием.";
		}
		else if (this->A->Text == "15") {
			this->description->Text = "Аркан 15 – Дьявол\n\nКак пару видит общество: Сексуальные, магнетические, опасные. Люди чувствуют страсть, власть, возможно — зависимость в отношениях. Могут восприниматься как слишком яркие или вызывающие.";
		}
		else if (this->A->Text == "16") {
			this->description->Text = "Аркан 16 – Башня\n\nКак пару видит общество: Взрывные, нестабильные, но интересные. Часто — «скандальная пара» или та, о которой много говорят. У них бурная энергетика, ломают шаблоны.";
		}
		else if (this->A->Text == "17") {
			this->description->Text = "Аркан 17 – Звезда\n\nКак пару видит общество: Светлые, вдохновляющие, «звёздная пара». Их считают красивыми, воздушными, с миссией. Часто кажутся идеальными, мечтательными, далекими.";
		}
		else if (this->A->Text == "18") {
			this->description->Text = "Аркан 18 – Луна\n\nКак пару видит общество: Загадочные, эмоциональные, неясные. Их союз может быть окутан слухами, недосказанностью. Часто вызывают интерес, но и подозрения.";
		}
		else if (this->A->Text == "19") {
			this->description->Text = "Аркан 19 – Солнце\n\nКак пару видит общество: Яркие, харизматичные, солнечные. Все тянутся к ним — они сияют, вдохновляют, дарят радость. Часто популярны, на виду, дети и творчество — важная тема.";
		}
		else if (this->A->Text == "20") {
			this->description->Text = "Аркан 20 – Суд\n\nКак пару видит общество: Судьбоносные, мощные, «возрожденные». Их воспринимают как тех, кто пришёл изменить мир, часто — как людей, которые соединились не случайно, после трансформации.";
		}
		else if (this->A->Text == "21") {
			this->description->Text = "Аркан 21 – Мир\n\nКак пару видит общество: Гармоничные, универсальные, свободные. Люди чувствуют в них полноту, зрелость, завершённость. Их воспринимают как людей мира, без границ.";
		}
		else if (this->A->Text == "22") {
			this->description->Text = "Аркан 22 (0) – Шут\n\nКак пару видит общество: Весёлые, лёгкие, спонтанные. Они могут казаться «вечными детьми», непредсказуемыми, странными, но притягательными. Их не всегда воспринимают всерьёз — и зря.";
		}
	}
	private: System::Void other_Click(System::Object^ sender, System::EventArgs^ e) {
		LinkMessageBox^ msg = gcnew LinkMessageBox();
		msg->SetMessage("Больше информации смотрите на сайте:", "https://gadalkindom.ru/matritsa-sudby/sovmestimost.html");
		msg->ShowDialog();
	}
};
}
