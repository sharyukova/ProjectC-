#pragma once
#include "LinkMessageBox.h"
namespace �������������� {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ������ ��� Person
	/// </summary>
	public ref class Person : public System::Windows::Forms::Form
	{
	public:
		Person(void)
		{
			InitializeComponent();
			//
			//TODO: �������� ��� ������������
			//
		}

	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
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
	private: System::Windows::Forms::Button^ soul;

	private: System::Windows::Forms::Label^ enter;
	private: System::Windows::Forms::Label^ nameOfArcana;



	private: System::Windows::Forms::Button^ exit;
	private: System::Windows::Forms::Button^ previous2;
	private: System::Windows::Forms::TextBox^ description;
	private: System::Windows::Forms::Button^ other;



	protected:

	protected:

	private:
		/// <summary>
		/// ������������ ���������� ������������.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
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
			this->soul = (gcnew System::Windows::Forms::Button());
			this->enter = (gcnew System::Windows::Forms::Label());
			this->nameOfArcana = (gcnew System::Windows::Forms::Label());
			this->exit = (gcnew System::Windows::Forms::Button());
			this->previous2 = (gcnew System::Windows::Forms::Button());
			this->description = (gcnew System::Windows::Forms::TextBox());
			this->other = (gcnew System::Windows::Forms::Button());
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
			this->done->Text = L"������";
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
			this->personalityMinus->Cursor = System::Windows::Forms::Cursors::Hand;
			this->personalityMinus->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->personalityMinus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->personalityMinus->ForeColor = System::Drawing::Color::LavenderBlush;
			this->personalityMinus->Location = System::Drawing::Point(1032, 78);
			this->personalityMinus->Name = L"personalityMinus";
			this->personalityMinus->Size = System::Drawing::Size(194, 91);
			this->personalityMinus->TabIndex = 8;
			this->personalityMinus->Text = L"�������� �������� � �����";
			this->personalityMinus->UseVisualStyleBackColor = false;
			this->personalityMinus->Click += gcnew System::EventHandler(this, &Person::personalityPlus_Click);
			// 
			// personalityPlus
			// 
			this->personalityPlus->BackColor = System::Drawing::Color::Transparent;
			this->personalityPlus->Cursor = System::Windows::Forms::Cursors::Hand;
			this->personalityPlus->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->personalityPlus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->personalityPlus->ForeColor = System::Drawing::Color::LavenderBlush;
			this->personalityPlus->Location = System::Drawing::Point(1414, 78);
			this->personalityPlus->Name = L"personalityPlus";
			this->personalityPlus->Size = System::Drawing::Size(190, 91);
			this->personalityPlus->TabIndex = 9;
			this->personalityPlus->Text = L"�������� �������� � ������";
			this->personalityPlus->UseVisualStyleBackColor = false;
			this->personalityPlus->Click += gcnew System::EventHandler(this, &Person::personalityMinus_Click);
			// 
			// zoneOfComfort
			// 
			this->zoneOfComfort->BackColor = System::Drawing::Color::Transparent;
			this->zoneOfComfort->Cursor = System::Windows::Forms::Cursors::Hand;
			this->zoneOfComfort->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->zoneOfComfort->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->zoneOfComfort->ForeColor = System::Drawing::Color::LavenderBlush;
			this->zoneOfComfort->Location = System::Drawing::Point(1414, 212);
			this->zoneOfComfort->Name = L"zoneOfComfort";
			this->zoneOfComfort->Size = System::Drawing::Size(190, 92);
			this->zoneOfComfort->TabIndex = 10;
			this->zoneOfComfort->Text = L"���� �������� � ��������";
			this->zoneOfComfort->UseVisualStyleBackColor = false;
			this->zoneOfComfort->Click += gcnew System::EventHandler(this, &Person::zoneOfComfort_Click);
			// 
			// soul
			// 
			this->soul->BackColor = System::Drawing::Color::Transparent;
			this->soul->Cursor = System::Windows::Forms::Cursors::Hand;
			this->soul->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->soul->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->soul->ForeColor = System::Drawing::Color::LavenderBlush;
			this->soul->Location = System::Drawing::Point(1032, 212);
			this->soul->Name = L"soul";
			this->soul->Size = System::Drawing::Size(194, 92);
			this->soul->TabIndex = 11;
			this->soul->Text = L"������� ���������� ����";
			this->soul->UseVisualStyleBackColor = false;
			this->soul->Click += gcnew System::EventHandler(this, &Person::button2_Click);
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
			this->enter->Text = L"��� ������� ������� ������ ������� ���� ��������";
			this->enter->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// nameOfArcana
			// 
			this->nameOfArcana->AutoSize = true;
			this->nameOfArcana->BackColor = System::Drawing::Color::Transparent;
			this->nameOfArcana->Font = (gcnew System::Drawing::Font(L"Arial", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->nameOfArcana->ForeColor = System::Drawing::Color::LavenderBlush;
			this->nameOfArcana->Location = System::Drawing::Point(1090, 337);
			this->nameOfArcana->Name = L"nameOfArcana";
			this->nameOfArcana->Size = System::Drawing::Size(429, 56);
			this->nameOfArcana->TabIndex = 15;
			this->nameOfArcana->Text = L"�������� ������";
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
			this->exit->Text = L"�";
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
			// other
			// 
			this->other->BackColor = System::Drawing::Color::Transparent;
			this->other->Cursor = System::Windows::Forms::Cursors::Hand;
			this->other->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->other->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->other->ForeColor = System::Drawing::Color::LavenderBlush;
			this->other->Location = System::Drawing::Point(303, 971);
			this->other->Name = L"other";
			this->other->Size = System::Drawing::Size(194, 91);
			this->other->TabIndex = 19;
			this->other->Text = L"������ ��������������";
			this->other->UseVisualStyleBackColor = false;
			this->other->Click += gcnew System::EventHandler(this, &Person::other_Click);
			// 
			// Person
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1940, 1100);
			this->Controls->Add(this->other);
			this->Controls->Add(this->description);
			this->Controls->Add(this->previous2);
			this->Controls->Add(this->exit);
			this->Controls->Add(this->nameOfArcana);
			this->Controls->Add(this->enter);
			this->Controls->Add(this->soul);
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

		sb->AppendLine("���������� 1 ������ ������ ������� ���� ����������� ���� � ����� ��������� �� ����� �����. ����� �������, ����������, ��������� � ����� ��������� ���������, ������� ��� ��� ������. ������ ����������� ��������� �� ���� ��������� �� � ������ ���������� ����, � � �������� �������� � ���.");
		sb->AppendLine();
		sb->AppendLine("��� �������� � ����� �������� �����:");
		sb->AppendLine("� �� ������� ������� ���������� �����, ��� ������ ���� � ��� �����.");
		sb->AppendLine("� ������ �������, ������ � ���� ����, �� ������� ��������� ������.");
		sb->AppendLine("� �������, ��� ���� � ����� ���� ���������� � ������� �����.");
		sb->AppendLine("� �������, ������� ��� ���������� � ���������� �������� � �������� ��������.");
		sb->AppendLine("� ������ ������������ �������� ������� ��� ������� ������� �����������.");
		sb->AppendLine("� ������ ����� ��� ���������� � ��������� ����-�� ������.");
		sb->AppendLine("� ���������� ���, �������� ��, ��� ����� ������ ��� �� ���� � �������.");
		sb->AppendLine("� ����� ������ �� ���� ��������������� �� ����� � ��������, �� ����������.");
		sb->AppendLine("� ��������� ������������� ���� � �� ����������������, ������� ����� ���� � ���������� ������.");

		this->description->Text = sb->ToString();
		this->nameOfArcana->Text = "1 ����� - ���";
	}
	else if (this->E->Text == "2") {
		System::Text::StringBuilder^ sb = gcnew System::Text::StringBuilder();

		sb->AppendLine("���������� 2 ������ �������� ��������� ���������, ���� � ������ � ���������, �� ������� ��������� ������, ������ ������ ������� ����� �����. ���������� �������� ����� ������� �����, ���� ������ ������������� ���������������, ����� ��������� ����������� ������� � ������ ���������� �����������.");
		sb->AppendLine();
		sb->AppendLine("��� ����� ������� ��� �������� � ����� ��������:");
		sb->AppendLine("� ������� � ��������� ������� ������� ����� ������.");
		sb->AppendLine("� ��������� ��������, � ������ ������� ��������� ���� ������ ������, � �� ������.");
		sb->AppendLine("� ������ ��������� � ���������, ������ ��������� �����. ��������� ������� ����, ��� ������ �� ����.");
		sb->AppendLine("� �� ����������� ��������������� ����������� �������, �� ������������ � ��������, ������� �� ������������.");
		sb->AppendLine("� ������� ����� �������� ��������, ��������� �����.");
		sb->AppendLine("� ��������������� ���� ��������� ����, ����������� ���� ��������� ������� � �����.");
		sb->AppendLine("� ������ ��������, �� ������ ������ ����������, ���������� ������ �����, ���������� �����������.");
		sb->AppendLine("� ������� ����������� ������������, �������, ��� ��������� ������ �������� ���� ���������.");
		sb->AppendLine("� ����������� �����, ������������ � ���������� ��� ����������� ����������.");
		sb->AppendLine("� ���������� ������������� ���������� ����, ��� ��������, ����� ��������� �� � �����!");

		this->description->Text = sb->ToString();
		this->nameOfArcana->Text = "2 ����� - ��������� �����";
	}
	else if (this->E->Text == "3") {
		System::Text::StringBuilder^ sb = gcnew System::Text::StringBuilder();

		sb->AppendLine("���������� 3 ������ �� ���������� ���� ����� ��������� � ���������� � ���������� �����. ����� ������� ����� �������� �������� ����������� �������, ���� � ������� � ���������. ���� ������, ������� ��� ���� ��� ������ ����������, ����� �� ��� ����, ����� �������� ������������ �����, � �� �� �������� ����������.");
		sb->AppendLine();
		sb->AppendLine("��� �������� � ����� �������� �����:");
		sb->AppendLine("� ������� ������� �������� � ���� � � ���������� ��������, �������� ��������� � �������.");
		sb->AppendLine("� ����� ���������� �������, ������� ������� �������������� �����, ������ �����.");
		sb->AppendLine("� ���������� ��������� ��� � ��������� ������� � �������.");
		sb->AppendLine("� ��������� ����, ��������� � ��������, ���������� ����� ���� �����������, �������� ������� �����.");
		sb->AppendLine("� ��������� �������� �������, ��������� ��� ��������� ������� � ����� ��������������� �� �����.");
		sb->AppendLine("� �� ������ �� �����, �� ���������� �� ����������� ������, ��������� ���� ����� ������.");
		sb->AppendLine("� ����������� ����, ��� �������: �� ��������� ������, �������� ���������� ����, �������������� � �.�.");
		sb->AppendLine("� �������� ����������� ��������� �� ������, ������� �� ���� ��������������� �� ����������.");
		sb->AppendLine("� ������ �������� �����������, ����� ��� ����� ���������� ��������, ���������� ���� � ��������������.");

		this->description->Text = sb->ToString();
		this->nameOfArcana->Text = "3 ����� - �����������";
	}
	else if (this->E->Text == "4") {
		System::Text::StringBuilder^ sb = gcnew System::Text::StringBuilder();

		sb->AppendLine("4 ����� � ������ �������, ������� �������, ����� ������ ���������� ������, ����� ��������� ������ � ������������� �������. ����������� ���������� ��� ������ �������� ����� ��������, ��� �� ����� � ������ ���� ������������� ���������� ���������.");
		sb->AppendLine();
		sb->AppendLine("��� ����� ������� ��� �������� � ����� ��������:");
		sb->AppendLine("� ��������� � �������� ������������, �� ������ � ���������������� ������������, �� � ����. ��, ��� ��� ����� �������, ����� ����� ������� � �������� ����� � ������ �������� � ���� �����������.");
		sb->AppendLine("� ���� 4 ������� �������� �������, ��� �� ������ ����������� ��������� � ����. ����� ����� ����� ���������, ��������� ������� ����: ��, ������� � ��������.");
		sb->AppendLine("� ������� 4 ������ ����� ����������� ���������� ��������, ����� ����� ����������� ��������� ��������, ���������������� � ������ ����. ��� ������ ����������������� ��������, ������ ������������ � ������ ������.");
		sb->AppendLine("� �������� � �������� ����������, ����� ��������� �����������, ������ ���������� ������� ������� �����. ������� ���� � ����� ����������� � ��� ����������.");

		this->description->Text = sb->ToString();
		this->nameOfArcana->Text = "4 ����� - ����������";
	}
	if (this->E->Text == "5") {
		System::Text::StringBuilder^ sb = gcnew System::Text::StringBuilder();

		sb->AppendLine("\t���������� 5 ������ ���� ����� ��������� � ������ � �������. ���������, ��� �� ����� ������� ���������� ����� � ������� ������������ ����������. ���������� �������� ����� ������� ����� ������ �������� ������ � ������� ���� ������ ����������� � ������� ����������� �������� ��������. �������� ������������� ������, ��������� �������, ������ ������� ������� ����� ������� ���������.");
		sb->AppendLine();
		sb->AppendLine("��� �������� � ����� �������� �����:");
		sb->AppendLine("� ��������� ������� � ����������� � ��������� �����������.");
		sb->AppendLine("� ��������� ���������� ������ �� ��������, ��������� ������� � ���.");
		sb->AppendLine("� ����� ��������������, � �� ������ �������� ����� � ��������.");
		sb->AppendLine("� � ������ ������� ����� ���� ������ ���� ��������.");
		sb->AppendLine("� ����� ����� � �����, �������� �� �� ������ ������.");
		sb->AppendLine("� �������������� ������������ � ������������ �������.");
		sb->AppendLine("� ���������� �������, �� �������� � ���� ����.");
		sb->AppendLine("� �������� ��������� � �����, ����� �������� ����� � ��������.");
		sb->AppendLine("� ������ �������� �������� � ������������ �������������.");

		this->description->Text = sb->ToString();
		this->nameOfArcana->Text = "5 ����� - ��������";
	}
	if (this->E->Text == "6") {
		System::Text::StringBuilder^ sb = gcnew System::Text::StringBuilder();

		sb->AppendLine("���������� 6 ������ ��� ����� ����� ���������� � ����� � �������. ��������� �� � �� ����� ����� �������� �� ����� � ���� �����. ������� �������� �������� � ������� ����� ������� ������ � ��� ������, ����� ������ �������� ���� � ���� ���������� ���. ������������ ��������� �������� ���������� ��� � �� ���� ��� ���������� ��� ��������. ������ �� ���������, ��� �� ���� ���� ��� ��� ������ ��������� � ��� ������.");
		sb->AppendLine();
		sb->AppendLine("��� �������� � ����� �������� �����:");
		sb->AppendLine("� �������� ����, ���� �����, ����� ������, ������ � ���� ���������� ���.");
		sb->AppendLine("� ������� ������ ���������, �������, ��� ��� ��� ������������� �����.");
		sb->AppendLine("� ��������� �������� �������� �����, �� ������ ���������� � �� ��������� ����� ���� ���������.");
		sb->AppendLine("� ���������� ���� ���� �������, �������� ����� ����������, ������� � ����, ��� ������� � ������.");
		sb->AppendLine("� ��������� ��������� �� ������, ����� ������� ������, ���� � ���� � ����������.");
		sb->AppendLine("� ���� ��������� � ���� ������, ����� ������ �� ������� �������� ���������.");
		sb->AppendLine("� ������ �������� � ���� � ����������, ����� � ���� ���� ������������.");
		sb->AppendLine("� ���������� ����� ��������� ���� �����������, ������� ������� �� �������� ��� ����������.");
		sb->AppendLine("� �������� ���� ��������� � �����, �� ������������� ��������, ������������ �������� � ��.");
		sb->AppendLine("� ������ ������� ���� ������, ��������� �������� �������� �� ����������.");

		this->description->Text = sb->ToString();
		this->nameOfArcana->Text = "6 ����� - ���������";
	}
	else if (this->E->Text == "7") {
		System::Text::StringBuilder^ sb = gcnew System::Text::StringBuilder();

		sb->AppendLine("���������� 7 ������ �� ����� ��������� ��������� � �����������. �� ���� � ���� �� ������ � ���������������, ��������� �������������� ���������� � ��������� ������ �������. ������ ��������� �������� ������� � �������� �� �������� ������ � ������ ������.");
		sb->AppendLine();
		sb->AppendLine("��� �������� � ����� �������� �����:");
		sb->AppendLine("� �������� ��������� �������������� � ����-��� ������� ����, ��� � ��� ��������� ����� ��������� �� ��������������� � ��������.");
		sb->AppendLine("� ���������� ����� �������� ��� �������� ����������.");
		sb->AppendLine("� ��������� �������� �������� �����, �� ������ ���������� � �� ��������� ����� ���� ���������.");
		sb->AppendLine("� �������� � ���������� ������� ���������.");
		sb->AppendLine("� ��������� �������������� ����������, � �������, ������ ����.");
		sb->AppendLine("� ����� �� ���� ��������������� �� ���������� � �����.");
		sb->AppendLine("� ���������� ���������� ��� � ��������� ��� �������������� ��� � ����� ������, ��� � � ����� ������.");
		sb->AppendLine("� ��������� ���� � ���. ���������� �������, ����������� ����������� � �������������.");
		sb->AppendLine("� ����� �����, ������ ��������������, ������ ��������� ����� ������ ��������.");

		this->description->Text = sb->ToString();
		this->nameOfArcana->Text = "7 ����� - ���������";
	}
	else if (this->E->Text == "8") {
		System::Text::StringBuilder^ sb = gcnew System::Text::StringBuilder();

		sb->AppendLine("���������� 8 ������ ��� ���� ����� ��������� � �������������� � ������� �� ���. ���������, ��� � ������ �������� ���� ��� �����������, ����� ������� �������� ��������, ������� �������� ���������� � �����.");
		sb->AppendLine();
		sb->AppendLine("��� �������� � ����� �������� �����:");
		sb->AppendLine("� ����������� ���������� ����� �������� � ������������, �� �������� � ���������, �� ������� ���� ��� �� ����� ��� ������ �� �������� ���� ����.");
		sb->AppendLine("� ������������ �� ������������ ������������ ���������, �������� � �������� ����� ����� �������.");
		sb->AppendLine("� ���������� ��� �����������, ��������� ��� ����������� ������, ������� �� �������. �� ����� ��������������� �������� �� ������ �������� ���������.");
		sb->AppendLine("� �������� � ���������� ���������� �������, �� ������ �� �������. �������� ����� ������������ �����������, ���� �� �� ������� ���� ����������� ����.");
		sb->AppendLine("� ����� �� ��������� ������, � ��������� �� ��������������. ����� � ����������� �������� ������ ������� ��� ���� ���� � �� ����� ������ �������.");
		sb->AppendLine("� �������� ������� ������ �������������� ������ ���. ��������� ����� ������, ��� ������� ��� ��� �������� ������� � ������ ������ ������.");
		sb->AppendLine("� ���������� ���������� �� ���������� ���� � ��������� �����������, ���������� �� ����������� �������, ������ ������ � ������������� ���������.");

		this->description->Text = sb->ToString();
		this->nameOfArcana->Text = "8 ����� - ��������������";
	}
	else if (this->E->Text == "9") {
		System::Text::StringBuilder^ sb = gcnew System::Text::StringBuilder();

		sb->AppendLine("������� � 9 �������� � ������� ������ ��� ���� ����� ���������� �������� ������, ����������� � �������� ���-�� �����. ���� ������� ����� ���������� ������� � ����� �����, � � ����������� ����� ����� ������.");
		sb->AppendLine();
		sb->AppendLine("��� �������� � ����� �������� �����:");
		sb->AppendLine("� �� ����� ��������� ������ � ������ ��������� �������� � ���� ������� ����� ������ � ����. ���������� �� � �������� �����, ������������ ���� ��������� � ������ ����������.");
		sb->AppendLine("� ���������� ���������� � ����������� ��������� ��� ������. �������� ������� � �����, �� ������� ������ ������� ������� ��������� ���������� � ��������� ���������� ����.");
		sb->AppendLine("� ���������� ���� � ���� ������� ��� ����������. �������� ��������, ��� ����� ����� ��������� � ���� �������� ���������� �����. ������ ��������� - ��� ����� ���������� ����������� �������� ����� ������.");
		sb->AppendLine("� ��������� ��������� ������ ��������� � ����������� ��������. �� ����������� � �����������.");
		sb->AppendLine("� �� �� ������� ������������ �� �������, ������ ��� ��� ��� �� ������. �� ���������� � ��������� �������, ������ �������� � ������� �� ����� ������� ����.");
		sb->AppendLine("� � ��� ���� ����������� ���������� �����������, ����������� ���������� �� �����������. �� ��� ����� ��� �� ��������, ����� ��� ���� �������� � �������������.");

		this->description->Text = sb->ToString();
		this->nameOfArcana->Text = "9 ����� - ���������";
	}
	else if (this->E->Text == "10") {
		System::Text::StringBuilder^ sb = gcnew System::Text::StringBuilder();

		sb->AppendLine("������� � 10 ������� ������ ����� � ���� ������ � �����, ������� �� ������� � ������ �������������, ������ ����� ����������� � ���������. ������ �����, ����� ����� �� ������� 10 ������, � �� ��������� � ����� ���� �������, ���� ������� �������� �������� �������� � �������.");
		sb->AppendLine();
		sb->AppendLine("��� �������� � ����� �������� �����:");
		sb->AppendLine("� �� ���������, �� ���������� � ����� ������, �������, ��� ��� ��� ����, � �� �� �.");
		sb->AppendLine("� ������ � �����, �� �� ��������� ������� �����������, ������ ������� �� ����� ���������.");
		sb->AppendLine("� ������� �� �������, �� ��������� �����������, ������� ����� ��� �������������.");
		sb->AppendLine("� ��������� ��������� ������ ��������� � ����������� ��������. �� ����������� � �����������.");
		sb->AppendLine("� �� ���������� � ��������� �������, ������ �������� � ������� �� ����� ������� ����.");
		sb->AppendLine("� �������� ������� ������ �������������� ������ ���. ��������� ����� ������.");
		sb->AppendLine("� � ��� ���� ����������� ���������� �����������, ����������� ���������� �� �����������.");

		this->description->Text = sb->ToString();
		this->nameOfArcana->Text = "10 ����� - ������ �������";
	}
	else if (this->E->Text == "11") {
		System::Text::StringBuilder^ sb = gcnew System::Text::StringBuilder();

		sb->AppendLine("������ ������ ����� �������� � ���������� ����� ����� ���������� 11 ������ �������� ������� � �������� ��������. ������� ��������� ��� ������� ����� ���� ���������� � �������, ���� ������� ���������� �������� � ���������� ����, ��������� �� ����� ��������� � ����, ��������� � ����������������.");
		sb->AppendLine();
		sb->AppendLine("��� �������� � ����� �������� �����:");
		sb->AppendLine("� ������� ����������� �������, �������� ��� �������� ��������, �� �������� � �� �������� � ������.");
		sb->AppendLine("� ��������� ���� ������, ����� ��������� � ��� ������� ������������ � ������ �����.");
		sb->AppendLine("� ���������� � ���� ���������, �� �������, � �������� ���.");
		sb->AppendLine("� ��������� ���������� �������, ����������� � �������������.");
		sb->AppendLine("� ��������� �������� � ������ ��������, ����� ���� �����.");
		sb->AppendLine("� �������� � ����������� ����������, ��������������� � �������������, �������.");
		sb->AppendLine("� ��������� ���������, ������������ ��� ������ � �������.");
		sb->AppendLine("� ������� � ������ ������ ���, �������������� ���, ��� ����� ���������.");
		sb->AppendLine("� ���������� � ������ ���������, ��� � ����������� �������� ����������.");
		sb->AppendLine("� ���������� ����� � ���������� ����� ����� �������, �������� ��������.");
		sb->AppendLine("� ���������� �����, �������� ������, �������� � ���� ����� � ������.");
		sb->AppendLine("� ��������� ��������� � ������, ������������ ��� ����� ��� ������ �����.");

		this->description->Text = sb->ToString();
		this->nameOfArcana->Text = "11 ����� - ����";
	}
	else if (this->E->Text == "12") {
		System::Text::StringBuilder^ sb = gcnew System::Text::StringBuilder();

		sb->AppendLine("���������� 12 ������ ��������� �������� �����, ����� ������������ � �������������, �������� �� ���� ����� ����� ��������. ���������� ������ � ������ ������ ����� ������� ������������� �������� � ��������� �������� ��������.");
		sb->AppendLine();
		sb->AppendLine("��� �������� � ����� �������� �����:");
		sb->AppendLine("� ���������� �� ����� ����������� �������, ��� �������� ��� ����� � ������������.");
		sb->AppendLine("� � ��� ���� ��� ������ �� ������ ������� � ����������� ������ �� ������������.");
		sb->AppendLine("� �� ������� ��������� ���������� � ������ ��������� ������ ����� ��� ���������.");
		sb->AppendLine("� ���� � ��� ��� ������������ ������� � ��������� ��������������������.");
		sb->AppendLine("� ������ ����������� � ����� ������������, �� ���� �������� ����� � �����������.");
		sb->AppendLine("� ���������� �� �����, ��������� ���������, ������ ������� �� �������.");
		this->nameOfArcana->Text = "12 ����� - ����������";

		this->description->Text = sb->ToString();
	}
	else if (this->E->Text == "13") {
		System::Text::StringBuilder^ sb = gcnew System::Text::StringBuilder();

		sb->AppendLine("���������� 13 ������� ���� ����� ��������� � ��������� � ����� � ������ �������� �������������. ������ ������������ � ����� ���������� ��� � �������� � ���� ���������.");
		sb->AppendLine();
		sb->AppendLine("��� �������� � ����� �������� �����:");
		sb->AppendLine("� �������, ��� ��� ��������, ������� ���� ��� ����� � � �������.");
		sb->AppendLine("� ���������� ���������� �������, ���������� ������� ����.");
		sb->AppendLine("� ������ � ���������� � �����, �� ������ �������� � ����.");
		sb->AppendLine("� ����������� �������� �������������, ������� �� ������ ������������.");
		sb->AppendLine("� ��������� ����� ������, ������ ��� ��� ����, ���������� ������.");
		sb->AppendLine("� ���� ���� ��������� �� ������� � ������, ���������� ������������� �����.");
		this->nameOfArcana->Text = "13 ����� - ������";

		this->description->Text = sb->ToString();
	}
	else if (this->E->Text == "14") {
		System::Text::StringBuilder^ sb = gcnew System::Text::StringBuilder();

		sb->AppendLine("������� � 14 �������� ���� � ���� ��� ������ ������� �� ����� ������� �������� � ��������� ������ �� ���. ������ �����, ����� �� ������� �������� � ��������� ���������� ��� ���� ���� � ������� � �� ���������� �������� ��������.");
		sb->AppendLine();
		sb->AppendLine("��� �������� � ����� �������� �����:");
		sb->AppendLine("� ��������� ��������� ������ ��������, ���� ��������� � �������������.");
		sb->AppendLine("� ������� �� �������� �������, ���� �� ���-�� ����� ����������� ������.");
		sb->AppendLine("� ����� ��������� ������� ���������� �������� � ������ ������.");
		sb->AppendLine("� ������ ������� �� ���, ��������� ������ � �� ��������� ����.");
		sb->AppendLine("� � ����� ��������� ��������� �������� �������, ����� ����������.");
		sb->AppendLine("� � ����� �� ������ ������ � ������� �� ���� ������.");

		this->description->Text = sb->ToString();
		this->nameOfArcana->Text = "14 ����� - �����������";
	}
	else if (this->E->Text == "15") {
		System::Text::StringBuilder^ sb = gcnew System::Text::StringBuilder();

		sb->AppendLine("15 ������� ������������ ���������� ���, ������� � ������ ��������. ���������� �������� � �������� ������ ��� ������ �������� ����, ����� ��������� ����� ���� ��� ������ �������.");
		sb->AppendLine();
		sb->AppendLine("��� �������� � ����� �������� �����:");
		sb->AppendLine("� �������������� ���� ������� � �������.");
		sb->AppendLine("� ��������� ���� ������������ (���������, ����, ��������).");
		sb->AppendLine("� ������, ��� ���������� ������������� ������� ���������.");
		sb->AppendLine("� ���������� �� ����������� � ��������������.");
		sb->AppendLine("� ����� �������� ��� ��������, ��������������� �� ����.");
		sb->AppendLine("� ����� ������������ �������, �� ��������� ����������.");
		sb->AppendLine("� ��������� ���������, ������� �������� � ������ ���������.");
		sb->AppendLine("� �������� ���� ������� ������.");
		sb->AppendLine("� ��������� ������� � ���� � ������.");

		this->description->Text = sb->ToString();
		this->nameOfArcana->Text = "15 ����� - ������";
	}
	else if (this->E->Text == "16") {
		System::Text::StringBuilder^ sb = gcnew System::Text::StringBuilder();

		sb->AppendLine("�������� 16 ������ ��� ����� ����� ������������ ��������� ���������, ������ ����� ��������� �����������. ������ ������ � ������ ��������� ����������� ��������� �� �������� �������� ��������.");
		sb->AppendLine();
		sb->AppendLine("��� �������� � ����� �������� �����:");
		sb->AppendLine("� �� ������� ���, ������������� � ������������ ������.");
		sb->AppendLine("� ���� ������ � �����������, �� ����������� ��� ������� ������.");
		sb->AppendLine("� ��������� ��, ��� �� ��� ����������� � �������� � ����.");
		sb->AppendLine("� ������� �������������, �������� ������������� �����.");
		sb->AppendLine("� �������� ����������� � ����� ������.");
		sb->AppendLine("� ������� �� ������������� ����, �������� �������.");

		this->description->Text = sb->ToString();
		this->nameOfArcana->Text = "16 ����� - �����";
	}
	else if (this->E->Text == "17") {
		System::Text::StringBuilder^ sb = gcnew System::Text::StringBuilder();

		sb->AppendLine("���������� 17 ������ ��� ���� ����� ��������� � ����� ����� ��� ���� ���� �����. �������� ���������� ��� ���������� ������������� ����� �� ���� � �����.");
		sb->AppendLine();
		sb->AppendLine("��� �������� � ����� �������� �����:");
		sb->AppendLine("� ����� ������� ����� � ���� ����� �����.");
		sb->AppendLine("� ������� � �������������� ����� (��������, ����� �������).");
		sb->AppendLine("� �������� ���� ������� ������.");
		sb->AppendLine("� ������ � ���� �����������, �� �� ������������� ����.");
		sb->AppendLine("� ��������� ��������� ������ � �������� ����������.");
		sb->AppendLine("� �������� � ����������, ������������ ������.");
		sb->AppendLine("� �� ���������� ��������� ���� ������������.");
		sb->AppendLine("� ���������� �������������, �������� ����� ������.");
		sb->AppendLine("� �� �������� ����������� �������.");

		this->description->Text = sb->ToString();
		this->nameOfArcana->Text = "17 ����� - ������";
	}
	else if (this->E->Text == "18") {
		System::Text::StringBuilder^ sb = gcnew System::Text::StringBuilder();

		sb->AppendLine("18 ����� �������� �������� ������� ���������, ����� ����, ���������� ��������, � �������, ������������ ��������������� � ���������� ���� �����.");
		sb->AppendLine();
		sb->AppendLine("��� �������� � ����� �������� �����:");
		sb->AppendLine("� ������������ ���� ���������� ���.");
		sb->AppendLine("� ������� ���������, �������� �� ��������.");
		sb->AppendLine("� ���������� ����������������.");
		sb->AppendLine("� �������� ����� ����� ���������.");
		sb->AppendLine("� ��������� �������� ������ ����������� ������.");
		sb->AppendLine("� ������ �������� � �����������.");
		sb->AppendLine("� ��� ����� ���������� � �������������� �����.");
		sb->AppendLine("� ��������� ����������� ��� ���������������.");
		sb->AppendLine("� ������� ����� ����� �������� ����.");

		this->description->Text = sb->ToString();
		this->nameOfArcana->Text = "18 ����� - ����";
	}
	else if (this->E->Text == "19") {
		System::Text::StringBuilder^ sb = gcnew System::Text::StringBuilder();

		sb->AppendLine("���������� 19 ������ ������ ���������, �������� ����� � �������, ������������ ������� ���� ����������� ����. ������ � �������� �������� � ����� ����� ������� ��������� ���� ���������.");
		sb->AppendLine();
		sb->AppendLine("��� �������� � ����� �������� �����:");
		sb->AppendLine("� ������� ���� ��������� ����� � ������ ������������.");
		sb->AppendLine("� ����������� ����������� ��������.");
		sb->AppendLine("� �� ��������� ����� � ������.");
		sb->AppendLine("� ������� �����, ������� �����.");
		sb->AppendLine("� ���������� �������, ������� �� ���������.");
		sb->AppendLine("� ���� ������ � �����������.");
		sb->AppendLine("� ���������� ������� ������.");
		sb->AppendLine("� �� ��������� ����� ����������.");
		sb->AppendLine("� ��������� �� ���� ������.");

		this->description->Text = sb->ToString();
		this->nameOfArcana->Text = "19 ����� - ������";
	}
	else if (this->E->Text == "20") {
		System::Text::StringBuilder^ sb = gcnew System::Text::StringBuilder();

		sb->AppendLine("���������� 20 ������ ����� ������� ������� ��������, ���� ��� ������� ������ ��� �������� ������ ����, � ����� ����� ���� ������ ���� � �������� ������.");
		sb->AppendLine();
		sb->AppendLine("��� �������� � ����� �������� �����:");
		sb->AppendLine("� ������ ��� ������ ����.");
		sb->AppendLine("� ������ ������ �������.");
		sb->AppendLine("� ����������� ���������� � ������ �������.");
		sb->AppendLine("� ��������� ���������� �������� �������.");
		sb->AppendLine("� � �����-�� ������ ��������� ����������� ��������.");
		sb->AppendLine("� ���������� �������� ���������.");
		sb->AppendLine("� ������ ������ � ���������� ��������� �������.");
		sb->AppendLine("� ������ �������� ������.");
		sb->AppendLine("� �������� �� ��� ���������.");
		sb->AppendLine("� ���������� �������, �������� �����������.");

		this->description->Text = sb->ToString();
		this->nameOfArcana->Text = "20 ����� - �������� ���";
	}
	else if (this->E->Text == "21") {
		System::Text::StringBuilder^ sb = gcnew System::Text::StringBuilder();

		sb->AppendLine("������� � 21 �������� ��������� �������� ����� ��������� ���� ���. �������� ����������, ����� �� ��������� ���� ������ ����������� �������, ���� �������� ������� ��� �����.");
		sb->AppendLine();
		sb->AppendLine("��� �������� � ����� �������� �����:");
		sb->AppendLine("� �������������� ������ ���������.");
		sb->AppendLine("� ���������� ������� ���� � �����.");
		sb->AppendLine("� ���� ����������� � ������ ���������.");
		sb->AppendLine("� ������������ ������� ���� ��������.");
		sb->AppendLine("� ������ ���������� � ��������� �����.");
		sb->AppendLine("� ���������� ��������� ���� ��������.");
		sb->AppendLine("� ������ ��������������.");
		sb->AppendLine("� ������� ����� �����.");

		this->description->Text = sb->ToString();
		this->nameOfArcana->Text = "21 ����� - ���";
	}
	else if (this->E->Text == "22") {
		System::Text::StringBuilder^ sb = gcnew System::Text::StringBuilder();

		sb->AppendLine("��������� 22 ������� ����� �� ����� ���������� �� ������ � �����. ����� ������� �������� ��������� ���������� ��������. ��� ���� �������� �� ���� ��������.");
		sb->AppendLine();
		sb->AppendLine("��� ����� ������� ��� �������� � ����� ��������:");
		sb->AppendLine("� ������� ������ �� ������� �������.");
		sb->AppendLine("� ����� ���������� �������.");
		sb->AppendLine("� ���� �������� �����.");
		sb->AppendLine("� ������ ����� ��������, ������ ��������������.");
		sb->AppendLine("� ������� ������������� �����.");
		sb->AppendLine("� ����� ���������� ����� � ���������.");

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
		sb->AppendLine("��������� �������� �� ������:");
		sb->AppendLine();
		sb->AppendLine("� ������� ����. ������, ��� ����� ��������� � 1 ������� � �� �������� ������ � ���� ���� � �����������. � �������������, ��� ������ �� ���� ����� �������� � ����, ��� ������ ����� �������, ��� ������ ������������ ����� ������ ��� ���������. � ���������� � �������� �� ���������� ��������� �������, �� �� ��������� ������ � �������� ����� �������������� �������.");
		sb->AppendLine("� ���������� ����. ���� ��� �� ������ ���� ����, �� ���� ����� ���������� ��� � ��������� ��������� � �� ��������� �����������. �� ��������������� ��������, �������� �����, ������������ � ������, ������� ���� ��������� � ������ �������������. ����� ��������� ��� ��� ������, �������� ����� � ���������� ������ ��� ������.");
		sb->AppendLine("� ��������� � ���������������. � ��������� ������� ���� � 1 �������� ���������� ���������, ����������, ������ ��������� �� ������. ��� ������ ���������� ����� ����� ����� � �� ��������� ���� ������-�� ��������������, ������� � ��� ����� ����� ��������.");
		sb->AppendLine("� ��������������� ��������� � �����. ��� � ������, ��� � � ������� ����������, � ������ �� ����������� ����� ������ �������������� ���������� � �����. ����� ����������� � ������������, �� ����� ������� � ��������, �� ���������� ��������� ��������� ��������. �������� ������, �����, �������� � �������������� � ���������.");
		sb->AppendLine("� ��������� ����������. ������� ������� ������ ��� �������� ���� � �����������, �� ����� �� ��������� �����������, ������ ������� �������������� ��� �������� �������������. ����� ��������� ����� ������� ����� �� ��� ���, ���� �� �������� ����� ����.");

		this->description->Text = sb->ToString();
		this->nameOfArcana->Text = "1 ����� - ���";
	}
	else if (this->B->Text == "2") {
		System::Text::StringBuilder^ sb = gcnew System::Text::StringBuilder();
		sb->AppendLine("��������� �������� �� ������:");
		sb->AppendLine();
		sb->AppendLine("� ����������� ������. �������� � ������ ������������ � ��������. ������� �������� ������ ����, ���� ��� �� ������� � ������, ��������� ������ ������� ��� ����� ��������� �������.");
		sb->AppendLine("� �����������. ���� ���� ����� �������, ����� ����� ������� �� �������� � �� �����������. ����� ��� ������ �� ����� ��������� ���� ����. ����� �����������������, ������������ ���� �������� ������������, ������ ����� ��������� � � ����������. ��������� � �����������������, ��������� � ���� ������ ���.");
		sb->AppendLine("� ��������������. ����� ������ �� � ����� �����: ��������, ������, ����������, ������ ���������. �� ����� ������ ������ �� �� ������ ������� ��� ����� ������ ��� ���������. ���������� ��� ��������, �� ��������, ��� ����������, � ���������� ��������.");
		sb->AppendLine("� ������ ������. � ������ ����������������� ������������ � �������� ���������������. ������� ���������� ��� ���� �������, ��������� ���-�� ���������, ����� �����������, ����� ��� ��� ������ �������.");
		sb->AppendLine("� �����������. �� �������� ����� ����������� 2 ������ � ����������� ���������� �������� �����, �������������� ���������� ����������. ������ �������� ������ ����� �������� �����, ��������� ���� ��������� ���� ���� ����������.");

		this->description->Text = sb->ToString();
		this->nameOfArcana->Text = "2 ����� - ��������� �����";
	}
	else if (this->B->Text == "3") {
		System::Text::StringBuilder^ sb = gcnew System::Text::StringBuilder();
		sb->AppendLine("��������� �������� �� ������:");
		sb->AppendLine();
		sb->AppendLine("� ���������� �������� ������. (��� ������). ����� ������� �� ����� ��������� � �� ������ ����� �� ���� ���������������. �� ������ �����������, �������, ��������� �� ��������� ��������. ��������� ��������� � �������, �������, ��������. � ��������� ����� ������� ��������� �������� ��������, ����������� ����������� �� �������� ����� � ����������. � ������ �������� ����������� �������� ������������ ���������� � �������, ��������� � ������ ��������� ������. � ����� ������� ����� � ��������� �� �������� ������ ����.");
		sb->AppendLine("� �������������� (��� ������). � ������ ��� ����� ������������ ��� �������� �������. ����� ��� ����� ���� �� ���� ���� ��� ������. � ���� ��� ���������� � ��������, �� ������ �������� �� ����� � ����� �� �������. � ������ �������� ����� � �������� �� ���� �������� �����, � ���� � �����, �� ������ ��� ���� ������ ������������. ��-�� ����� �� ����� ������� � ��������, ���� ������ �� ���� ����� �����.");
		sb->AppendLine("� ����������. ������� ���������� � ���������������� � ����� ������ ���������� ����� �����������, ���� � �� ����� ��������. �� ���������� ����� ������������ �������� ���, ��������, ���� ����� �������������� �� ���� ����������. �� �������� �������������� � ����������� �� �������� �������.");
		sb->AppendLine("� ������� � ������������. ��� ������ �� ����� ������ ������ ���� �������. ��������� ������������ �������� � ����������� �������, ����������� ������ ���� ���� ������ � ���������� ������������ ��� ������� �������������. � ����� ��������� ����� ������������ ������ ������, ������������� � ������. ����� ����������, ������ ����� ���������� � ��������.");
		sb->AppendLine("� ��������������� �������. ��� ���������� ����� ������������ �����, ��������, ����������, ����������� ����� �������� � ���� ���� ��� ������. ���������������� ����� ��������� �� ������, � ����� ��� ��������� ��� ������� ������������. ��� �������, ��������� �������������, ����������� � ������������� �������. � ���������� ������� ������ ���� ���� � ���������� ��������� �����������.");

		this->description->Text = sb->ToString();
		this->nameOfArcana->Text = "3 ����� - �����������";
	}
	else if (this->B->Text == "4") {
		System::Text::StringBuilder^ sb = gcnew System::Text::StringBuilder();
		sb->AppendLine("��������� �������� �� ������:");
		sb->AppendLine();
		sb->AppendLine("� �������� ��� �������. ���� ������� ����������� � ������, ������������ ����� ������������ � ������ ��� ���������. ������� �������� ��������� �� ���������� ������������ ���������� ����� ����, �������� �� ������ ���� � ��������. � ������ ������� ��� ����������� �� ������ �����. ��� ������ ��� ������, ��� ���� ���������� ���������.");
		sb->AppendLine("� �����������. ���� ����� ������� ���������� ����������� ������� � �� ���������� �������������, �� ���������� ������ ������������. �� �������� ����������� ��������, ��������� ��������� ����������, ��� ������ ������� � ��� ����� ������� ���� ����� ������. � ������������ �������� ��������� � ����������, �������� � �����.");
		sb->AppendLine("� ����� ��������� �������. � ��������� ������� ����� �������� ��������� ����� ��������� �������. �� ������, ��� �����-�� ��������� �������������, �������� ���������� �����. ���������� ����� ����������� � �����, �������� ����� ���, � ������� ��������� ���� �� ���������� � �������� ��������� ��������.");
		sb->AppendLine("� ������� ������. � ��� �������, ����� ����� �������� �������, ��� ����� ����� �������� ��� ������� ������ � ����� ��������� �������� � ����. ����� ����� ���� �������� �������, �������� �������, ������� ����� �������������� � ��������.");
		sb->AppendLine("� ������������ � ����������. ������� ������� � �����������, ������� ������ � �����, �� �������� ���������� �����������. � ������ ��� �������� ���������� ����, ���������� �� �����. ����������� ����� �������, ������� ���������� ������ ����������.");
		sb->AppendLine("� ������ �������. ��� ����� � ��������� ����� ����� ���� ����� �������� ��� ������������� ����� ��������� � ����������� � ��������������� ���������. ������ ����� �� ���� ���������������, ��������� ������, �������� ����������� ������.");

		this->description->Text = sb->ToString();
		this->nameOfArcana->Text = "4 ����� - ���������";
	}
	else if (this->B->Text == "5") {
		System::Text::StringBuilder^ sb = gcnew System::Text::StringBuilder();
		sb->AppendLine("��������� �������� �� ������:");
		sb->AppendLine();
		sb->AppendLine("� ���������� ��������. ������ �������� �������� � ���������, ������ �������� ������ ���������� �������� ������ � ���� � ������. ������ ���, �������� � ����� �����������, �� �������� ��������, ��� ��� ��� ������� ����������� ���������� �� ����������� ��������. ������ � ��� ������ ���������� � ���-��, ����� �� ��������� ��� ���� ���� ���������. ������������ ������ � ��� ������� � ����� ����������� �������, � ������� � 5 ������� � ���� ����� ���� �������.");
		sb->AppendLine("� ��������. �������� �� ���, ����� �� ������ ����������� ��������� � ���� �� ������� ������� ������ ��������. �� ��������� � ���������� ����� �������������� �� � ���� ������, ����� �������� ���������� ���������� ������� � ��������. � ������ ��� ����� �������� ������ � ������� ��������� ������� �� �������� ������ ����� � ������ ����� ����������.");
		sb->AppendLine("� ����������. ���� ����� ������ ��������� ������� ����������� �������� ������, ��� ����� ��������� ����������. � ������ �� ��������� ������ �� ����� � ��������� ������ ���������� �������� ������������ �����, ������� ����� �� ������ ���� ���������. ����� �������������� �������������� �������, ������������� �������������� �������, ���������� ������ �����������.");
		sb->AppendLine("� ������ ������. ���� ������� ��������� � ������, ������� ����� �� ���������� ��� ���������� ���������� ��� �� ����� �������� �������� �� ��������� �������������� ������ �����. � ���������� �� ����������� � ������, � ������ ���� �������� ����.");
		sb->AppendLine("� �����������. �������� � ������, 5 ����� ��������� ����� ���, ����� �������� ����� ������ � �������� ���� ������. ������, ���� ������ ������ ������������� �������, ������� �������� � ���� �� �����. ���� ����� ����� ������� ����������� ��� ��������. ������������ �� ������ ���������, ������ ���������, ������ �� �����, ��������� ������� � �� ������ ��������.");

		this->description->Text = sb->ToString();
		this->nameOfArcana->Text = "5 ����� - ��������";
	}
	else if (this->B->Text == "6") {
		System::Text::StringBuilder^ sb = gcnew System::Text::StringBuilder();
		sb->AppendLine("��������� �������� �� ������");
		sb->AppendLine();
		sb->AppendLine("� ���������� �������. � ������ ������ ������������ � ����� ������ � ����� ������� ����������� �� ���� ����������. ����� ����� ���������� � ������������, ������������ ����� �������� ������� �����. �������� ���������� � �������, ����� ���������, �� ����� �������, ����� �� ��������� �����.");
		sb->AppendLine("� ������������ �����. ������� � �����������, ��� �� ������ ���������, ������ ����� �����-�� ����� ��������, ��� �������� ������, ������ ���-�� ��������� ��� ����������. �������� ����� ������������ ����� � ����� ������ ����� ��������.");
		sb->AppendLine("� ���������. �� �������� �������� �������������, � ��������� ����� ���� �������� ������� �� ����� ������ ����������. � ���������� ������� ���������� ������� �����������, �������� ������ �����, �������� �������, ��� �� � ����� �������� ���� �����.");
		sb->AppendLine("� �� �� ���� ����. �������� 6 ����� ���� � ����������� ����������� ����, ��� ������ � ������ �� ��������. ��������: � ������� ������ � ��� �����, ��������� ������� � ���������� ����, ����������� � ����������� ����.");
		sb->AppendLine("� ������������� �� ������� ���������. �������� �������, ��� ��� �������� �������� ������ ����� �� ���������� ���� ��� �� ���. ��������� ���������� �� ���������, ������ ������ �� ��������� ���������. ���� ����� ��� �� ���������� ��������� � � ����������� ���������.");
		sb->AppendLine("� ������ �����. �� ����� ������ � �������������� �����, ����� ��������� ������������ ���������� �������. ������������ ���������� ������������ ���������� �������������, ����� ��������� ��� �������� �� ������, � ������ ���� � ������.");

		this->description->Text = sb->ToString();
		this->nameOfArcana->Text = "6 ����� - ���������";
	}
	else if (this->B->Text == "7") {
		System::Text::StringBuilder^ sb = gcnew System::Text::StringBuilder();
		sb->AppendLine("��������� �������� �� ������:");
		sb->AppendLine();
		sb->AppendLine("� ������. ���� ����� ���������� ������ �������� ������������, ��� ����� ������ ����� ������ �������� �����. ������� ����� ���������� ��������� ����������� �� ���� ��������� � ����� ����� ����������. � ��������� ������� ������� ������ ����������, � �������������� ��������� � ��������� ������� � ���������������.");
		sb->AppendLine("� ���������� ������. � ������ ������ �������� ��������� ���������� ��������� ���������� ������. �� ������ �� ���������� � ���������, ������ � ���, ������ �� ���� ������, ��������� ��������� ������ � �������� ������������ �����.");
		sb->AppendLine("� ������������� ��������. ��� ���������� ����������, ������� ����� ���� ������� �������� ��������� ����������, �� ������������� ��������. ����� ��������� ���������� �������� �� � ��������� � ���������� ���������.");
		sb->AppendLine("� ���� ��������. ������� � ������ � �� ��������� ������, 7 ����� ����� �������� ��������� ��������� � ���������� �� ���� ���. � ����� ������ �� ������� ����� �� �������, ���������� ��������� �����������. ���� �����, ��� ����� �� ��� ��� �������� ������.");
		sb->AppendLine("� ��������� ����. � ������ ������� �� ���������� ���� ����� �� �� �����������, � �� ����. ����� ���� �� ����������� ������, �� �������� ����� ������ ��������� ��������, ���������� ����� ���� �, � ����� ������, ���������� ������� ���.");

		this->description->Text = sb->ToString();
		this->nameOfArcana->Text = "7 ����� - ���������";
	}
	else if (this->B->Text == "8") {
		System::Text::StringBuilder^ sb = gcnew System::Text::StringBuilder();
		sb->AppendLine("��������� �������� �� ������:");
		sb->AppendLine();
		sb->AppendLine("� ������������� � ������. � ������ ��� ����� ���� ��������, ��������� ��� ���������� � ���� �������. ������ ����� �� ������ � ����, � ������, ��� ������ ������� ��������� �������� ���������. ������ ����� ��������� ����� ����������������� � ������� ���������� ������������ ����.");
		sb->AppendLine("� ���������� ���������������. ������������������ ������� ��������������� ������ ��������� ������� � ��������� ������ � �����. �������� 8 ����� ��������� �������������� ����� ������� �� ������ ����, �� � ������ �����, ���, �������, ����� ����������� �� ����������.");
		sb->AppendLine("� ��������������� � ��������. � �������� ������ ����� �������� ����������� ������ �������, �������� �������������� ������. � ������ �� ������� � ��������������� ���������� ������ ����������, ��������� ����� ���������� ���������.");
		sb->AppendLine("� ���������. ����� ���� ������, �������� ����� ������������, ����� ������������, ���� ���������. ���������� ����, �� ����� ���� ����� ������ � ��������, ��� ����� ������ ������� � ����������. ����� ���������� �� ������ ����������.");

		this->description->Text = sb->ToString();
		this->nameOfArcana->Text = "8 ����� - ��������������";
	}
	else if (this->B->Text == "9") {
		System::Text::StringBuilder^ sb = gcnew System::Text::StringBuilder();
		sb->AppendLine("��������� �������� �� ������:");
		sb->AppendLine();
		sb->AppendLine("� �����������. ��������� ����� ��������� ����������� � ���� ���������� ���, ��� ������������ �������������� � �����������. ��������������� � ��������� �����������, �� �������� ������������ ������� ���, �����, ��������� ��������. �� �������� ����� ����� ����� ��������� �������� � ������, �� ������� ��� ������ ����� ��������������.");
		sb->AppendLine("� ����� �����������. ���� � ������ ��������� ������ 9 �������, � ���� ������ �������, ��������, ��������� ������ �������� ����. ��������, ����� ��������� ������ ��� ��-�� ������ ���������� ������. � ���������� �������� ���� ������������� �������� ���������� ������������������ ��� ������. ���������� ������������� � ���������� �������������, ��������� ����� ����.");
		sb->AppendLine("� ���������������� ��������. �� ���� ���������� ��������� ����� ������, ���� � ��������. � � �����-�� ������ �� ������ ������ ���������� ����������� ���� ��������. ���� ����� �� �������� � ��������� �� ����� �������� ��� ��������������, ������� ������� ���������� ����� ��������� ��� ��������.");
		sb->AppendLine("� ��������� � �������������. �������� ���� ������� �������� �����������, � ������� ���� ����� ����. ���� �� �������� ���������� ��� ����� �������������� ����� ������, ��, ��������, ������ �� ���������. ������ �����, ��������� ��� ��������� � ������ ����� ��������, ������� ���������� � ����� �����. �� ���� ���� �� �������� �����, ��� ���� �� �������� ��� ����� ������.");
		sb->AppendLine("� ���������� ����������� ��������. � ������ �� �������� � �������� ��������� 9 ����� ����� ���������� ������ � ����������� ���� � ��������. ���������� ���������� ���������� � ������ ���� �������� � �������� � ��������������� �������������.");

		this->description->Text = sb->ToString();
		this->nameOfArcana->Text = "9 ����� - ���������";
	}
	else if (this->B->Text == "10") {
		System::Text::StringBuilder^ sb = gcnew System::Text::StringBuilder();
		sb->AppendLine("��������� �������� �� ������:");
		sb->AppendLine();
		sb->AppendLine("� ��������� ����. � ������ ������ �� ��� �� ��� 10 ������ ���������� ����������� ��� ��������, ������ ��� ��������� �������� ��. ����������� ��� ����� �� ������ ��������, �� ��������� ���� � ��� �� � �������� ������ ����������. � ���������� � �������� ����������� ������ �� ���� ���, ��������� � ������ ���� � ����� �����.");
		sb->AppendLine("� ��������������� ������. ����� �� ����� �� ������ ������ �������, ����� ������� ������� �� ������ �������. ����� ������, ��� ����� �������������, �� ����� ���������������� ���, ��� �������. ��, ��� ����������, �� ������� ������������� ����� ��������, ������, ����� ������ ����-�� �� ���������, � ������� ���� ���������.");
		sb->AppendLine("� �����������. ����� � ��������, �� ����� ������ ������, ����� �������� ������������ ������� �����. �� ����� ����� �� ���� ���������������, �������� �� �����, ���, ���� ���-�� ������ �������� ��� ��������. �� ������� ����� �����, �� �������� ��������, �� ����� ������� ���� ����, �� ������ ��� �� �� ����������.");
		sb->AppendLine("� ������������. ����� ���� ����� ������ ����������� ������ ����������, ����� ����������� �� �������� � �������. ����� ����� ������������ � �����, � ������� ���� �������� � �����������. ������ ����� � �������� ����� ���� ����� ������ ����� � ��� ����� ����, ���������� ��������, ��� � ���� �������� ����� ��� ������ ��������.");
		sb->AppendLine("� ������� �����������. � �������� ������ ���������� ������ ������� ������ ����� �� ����� � ���������� ������ ��������. ������ ��� �����, �������� �� ��������� �����������, ���������������� ��������� � �������, �������� � ����� �����. ����� �������� ��������� ������ ��� ������ �� ���������� ����.");

		this->description->Text = sb->ToString();
		this->nameOfArcana->Text = "10 ����� - ������ �������";
		}
	else if (this->B->Text == "11") {
		System::Text::StringBuilder^ sb = gcnew System::Text::StringBuilder();
		sb->AppendLine("��������� �������� �� ������:");
		sb->AppendLine();
		sb->AppendLine("� ��������� ���. ���� ������� � ���� ���������, �� �� �������� ������ ��-�� ���������� �������, �������� � ������. ��������� ������������� ��, � ��� �� ������� � � ��� ������ �������� � �������������, ����������� � ����������. � ���������� ���� ���������� ����������, � ��������� ������� ���������������. ������� ���������� ���������, �������� �������� � ������ ����� � ���������.");
		sb->AppendLine("� �������� �����. ����� �� ������������ � ������ �������� ���� � ������������ �����, � ������� ��� ����� �����, ����� � ������. ��� ����� ������������, �� ���������� ��� �������, �� ������� � ������� ���������. ������, ����� �� ������������ ������, ������� ��������� ���������� � ���� � �������� ����������� ��������.");
		sb->AppendLine("� �����. ������������� ���� ��� ����������, � �� ��� ������ � ��������� ������ ���� 11 ������ ������ � ������������. ���������� ���������� ����� ����, ��������� ����� ��-��� � �������. ��� ������� ��������� ����������, ������ �� ������� � ��������� � ������������ ����������. � ����� ��������� ������� �������� ����������� � ������������ �����������.");
		sb->AppendLine("� �������� �������. ��������� � ������� ������� ��������� ��� �����, ������� �� ��������� ����� ����������� �����. ������� �� ����� ���������� ������ ���� � ���������������, ������ ���� ����� ������� ���� � �������� � ����� ��� �������. ���� ������ ���� � ������ ���������� � �����, ���������� ���������� ����, ����� ������� � �������� �������.");
		sb->AppendLine("� ���������� ����. ��� ���� ��������� � ������ ������ ����, ��������� �� �������. � ���� ������ ������� ��������� ����������� ���������, ������� �� �������� ��������� ���� � ����. �������� ������ ����� �����, ���� � ���������� �������, ���������.");

		this->description->Text = sb->ToString();
		this->nameOfArcana->Text = "11 ����� - ����";
	}
	else if (this->A->Text == "12") {
		System::Text::StringBuilder^ sb = gcnew System::Text::StringBuilder();
		sb->AppendLine("��������� �������� �� ������:");
		sb->AppendLine();
		sb->AppendLine("� ����������� � ������������� - ������ ������ � ���������");
		sb->AppendLine("� ���������� ������� ���� - ����� ��� ������� �����������");
		sb->AppendLine("� ���������� ������ - ������������ ������� � ������");
		sb->AppendLine("� ��������� ������ - ��������� � ���� ������ �������������");
		sb->AppendLine("� ������� �������� - ���������� � ������������ ��� ������� ������� �� ����������");

		this->description->Text = sb->ToString();
		this->nameOfArcana->Text = "12 ����� - ����������";
	}
	else if (this->B->Text == "13") {
		System::Text::StringBuilder^ sb = gcnew System::Text::StringBuilder();
		sb->AppendLine("��������� �������� �� ������:");
		sb->AppendLine();
		sb->AppendLine("� ������ � ����� ������� - ������������� ����� ����������");
		sb->AppendLine("� ��������� � ������� - ���������� ���������� �����");
		sb->AppendLine("� �������� �� ���������� - ����������� ����� ��������� ������");
		sb->AppendLine("� ����� � ������ - ������������ ��������� � ������������ �����");

		this->description->Text = sb->ToString();
		this->nameOfArcana->Text = "13 ����� - ������";
	}
	else if (this->B->Text == "14") {
		System::Text::StringBuilder^ sb = gcnew System::Text::StringBuilder();
		sb->AppendLine("��������� �������� �� ������:");
		sb->AppendLine();
		sb->AppendLine("� ���������. � ������ ����� ������� ������ �������� �������, ��� �� ��������� ��� ���� ����������. ����� �������� ���������� ������ � �����, ��������� ����� ����������� ��� � �����-�� ����� ����� �����, ��� � �� ���� �����. ��������: ��������� �������� � �������� � ��������������� �� �������, ����� ������� ������� �������� ����, ��������� ���������������� ��������, ���������� ���� � ���������� � �. �.");
		sb->AppendLine("� ������������. ��� ���� �� ������� ������� ����������, ������ �� ������ ���� ������. ���������� 14 ������ ��������� ��������������� �� �������� ��������� � ���������� �������� �������������� ������������ ������. �������������� �����, �� ���������� �������� ��� ���������, � ����� ��������� ����������� ������, ��� � �����.");
		sb->AppendLine("� ������������. ���������� ���������� � ����� �������� ������ � ���� � ���������� ���� ���������� ���� � ���� � ���������� �� ������� �������. ������� ���������� �������� � �������, �� ����� �������� ������ ������� � ��������� � ������� �����. ���������� ������ ���� � ����, ���������� ��������������, ���� �������� �������.");
		sb->AppendLine("� ����������������. �������� ������� ������� � ��������� ��������� ���������� �����������, ���������� ������ �������� � ��������������� ������. �� �������� �� �������� ��������� � ����� ��� � ������ �� ����� � �����, ��������� ��������� ��������� � ���������� ���� ����������� ������.");

		this->description->Text = sb->ToString();
	}
	else if (this->B->Text == "15") {
		System::Text::StringBuilder^ sb = gcnew System::Text::StringBuilder();
		sb->AppendLine("��������� �������� �� ������:");
		sb->AppendLine();
		sb->AppendLine("� ���������� ��������. ������� 15 ������ ������� ����������� ��������, ���������� ��������. ���� ������� ������� ��� ��������� �� ������, �� �������� ����� ����������� � ������ � ���������� ����, � ������� ����� ������. ����� ������ �������� � ���������, �������� ������������ ��������� �����.");
		sb->AppendLine("� ��������������. ������� ��������, ��������, ���������������� � �� ��� ������ �������� ��������, ��������� ������ ��� ��������, ������ ��� ���������, ��� � ����������. ��� ����� ����� �������� �������� ��������, ���������� �������� �����, ����������� �����.");
		sb->AppendLine("� ��������. ������ ������ ��� �������, ������� ��������� ��������� �, ����������� �� ���� ���������� �����. ����� ���������� ������� ����� ���� ���������� ���������� ��������, �������� �������� ����� �����������, ������������� � �������������� �������. ����������� ��������� ������� ������������ � ���������� ����, �������� ��������� ����� ����� ������.");
		sb->AppendLine("� ���������. ������� ����� �������� �� ������ �������� � ������������ �������, �������� ��� ��������� ����� ��������. �� ����� ����� ���������� � ��������� ��������� � ���������� � ������� ��������� �� ���������, ����������� ��� ����, ����������� ��������������� ��� �����. �� ���� ��� ������� �������, �������� ������� ���� ������, �����������.");
		sb->AppendLine("� �����������. ������� ����, ���� ������� ���������� ������ �� ������ ����������, ���������� � �������. ��� �������� ������������ ��������� �� ��� � � ���������, ����������, ������ �����. ����� � ���� �������� ����, ������� ���������� ��� ����������, ��������� �������� � �����������.");

		this->description->Text = sb->ToString();
		this->nameOfArcana->Text = "15 ����� - ������";
	}
	else if (this->B->Text == "16") {
		System::Text::StringBuilder^ sb = gcnew System::Text::StringBuilder();
		sb->AppendLine("��������� �������� �� ������:");
		sb->AppendLine();
		sb->AppendLine("� �������� ������, ����������. � ������ ���� ������� ����������� ��� ������� ������ �, ��� ����������, ����������. ����� ����� ���������� � ����-�� ��������� � ��������������, ������ ��������. ��� ���� ���������� ������ ������� ������ � ������� �����. � ����������� �� ���������� ������� ����� ��������� � ������������� � ������ ��� ��������� ����, ��� � ��������� ���.");
		sb->AppendLine("� ����� � ������. ��������������� ������ ������� � ����������� �� �����, ��� ����� �������� �� ��� ����� � �������� ��������� ��� �����. � ���������� ������� ������ ������ ������� ����� � ��������� ����������� ���� ��� ����������� ��� ��������. �������� �������� � �����������, ������� ���� � �������� �����������.");
		sb->AppendLine("� ����������. � ������ ������ ��������������� � �������� ������������ � ��������� ����������. ��, � ���� ����������� ���� �������, ������� ��� ������� �������������. ������ 16 ����� ������������ � ����� ������� ������, ������ ������ �� ��� ������, �� ����� � ���.");
		sb->AppendLine("� �������, ���������� ����. ����� ���������� ������� ���������� 16 ������ ����� ������������ ����� � ������ ������������� ���� � ���� �������� �����������. � ���������� ��� ��������� ��������� �� ����������� ������� ������������� � ������ ��������� �� ����� ����������� �������������.");
		sb->AppendLine("� ������ ���������. �������� ���� ������� ���������� ����������� �������, ��� � ������ ������� ��������� �� ���� ����� �����. ���������� �������� � ���������� � ��������, ���� ��������� ������� �������� �����, ��� ������ ���������� ��������. � ����������� �������� ����� �������� �� ���������, ���������� ��������, � � ����� ������� � �����������.");

		this->description->Text = sb->ToString();
		this->nameOfArcana->Text = "16 ����� - �����";
	}
	else if (this->B->Text == "17") {
		System::Text::StringBuilder^ sb = gcnew System::Text::StringBuilder();
		sb->AppendLine("��������� �������� �� ������:");
		sb->AppendLine();
		sb->AppendLine("� ����� �����. � ������ ���� ������� �������� � ����� ����� � ��������� ����� �����. ��� ������������ ������ �����, ������������� ��� ������ ������� �������� �� �������� ���� � �������� �������� ����. �� ���� ���� �� �������� ��������� ���������, ��� ������ � ��������, ��� ���������� ����������� ������� � ��������� ������ ����� �����.");
		sb->AppendLine("� ������� � ����. ����� ���� �� ������ ���� � ������� ����-�� �������� ������. ���������� ���������� 17 ������ ������ ���� � ���� � ���� ���. �������� ������ ���� ������, � ���������� ��������� ���� � ��������� ������������. � ����� ��������������� � �������� � ���������� ������ �������.");
		sb->AppendLine("� ����� ����. ����� ������� �������� ����� ���������, �� ����� ���������� �� �����, ������ ������� ������. � ���� ������� ���� �������������� ������������ � ���� �� ��������� � ���, ����� ������ ��������� ���� �����. ���������� ������� ��������� ���, ������� ����������� � ��� ������ ����������� �������� �� ����.");
		sb->AppendLine("� ������� �������. ��� ��������������� ������� ��������. ������� � ���������� �����������, ������� � ������, ������� ����� � ���� �����������. ������ �������� �������� ���������� ����� ������� ������ �� ���� � ����� ��� �� ����� ����������� �����������. ��� �������, ��������� ������ ���������� ��������. � ������ ������ ��� ��� ��������, ����� ������� ��� ����������� ����.");
		sb->AppendLine("� ������ � ���������. � �������� ������, ��� ����������� �� �������� ��������, 17 ����� ������ ���� ���������� ���������� �������. ��������� �������� �� ���������������� ������, ����������, ������� �������� � �. �. ���������� ����� �������, ������� � ������, �� ���� �������������� ������ � ������������.");

		this->description->Text = sb->ToString();
		this->nameOfArcana->Text = "17 ����� - ������";
	}
	else if (this->B->Text == "18") {
		System::Text::StringBuilder^ sb = gcnew System::Text::StringBuilder();
		sb->AppendLine("��������� �������� �� ������:");
		sb->AppendLine();
		sb->AppendLine("� ������ � ��������. � ������ ���� ������� ��������� ��� ������� ������ ������. ������ ��������� �������, ��������� ����������� � ����. ��� �������� �������� ������ ��� ����������� � ���������� ��������� � �����������. �� ��� ������� ������ �� �������� ����� � ���������� ���������, �������� �������, �������� ����� � ������� �����.");
		sb->AppendLine("� ���������� ��������. ������ �������� ��������������� � ����������, � ����� ����������� �� ������ ����������� ��������. �� ���� � ���� ��� �������� � ������� �����, ������� ������ ������ � ������������ ����� �� �������. ������� �� ���������� ���������� ����� � ������������ �� ����������� ��������, ������ � ��������� ���������������� ���, ��� ����.");
		sb->AppendLine("� ������� �� ����������. �������� ���� �� ���������������, ���������� 18 ������ ������������ ������� �� ������� � ���� ���������� ���. � ����� �������������� �� ��������� ������� ������, �� ����� ����� ������ �������. ���������, ���� ���������� � ����� ������������, ���������, ��� ������� ���� ��� �������� �����.");
		sb->AppendLine("� �������� ����������. ��� ������ ������� �������� ������ �������� ��������� ���������� � �� ������ ���� ������, ��� �� �������� ������. ������� �� ��������� ������ ���������� ��� ����-�� ������������, �� ��� ���� ���� ������� ������ ������� ������. ���������� ������ ���� � �������, �������� ����� ������������ ��� ��������.");
		sb->AppendLine("� ��������� ��� ����. ���������� ���� ������ ����� �������� ���������, �� �������� �� ���� ����� ��� ����� � �������� � ��������� ���������� ������. ����� ����� ��������� � �����, �� �������� ��������������, ������ ������ � �����������. �������, �� �������� ���, �� ��������, ��� ����������, ������ �� ������ �������� �����, ����� ���������� ��������� ������� �������.");

		this->description->Text = sb->ToString();
		this->nameOfArcana->Text = "18 ����� - ����";
	}
	else if (this->B->Text == "19") {
		System::Text::StringBuilder^ sb = gcnew System::Text::StringBuilder();
		sb->AppendLine("��������� �������� �� ������:");
		sb->AppendLine();
		sb->AppendLine("� �����������. ����� ������� � ������ ���� ������� ��������� ������������� �� �����-�� ����� ���� � ��������� �������� ��� ��� ���������. ������ ������� �������� ����� ���������� ��� ������� ��� �������. ��������, �� ����� ��������� �������� ��������, ��� ������� �� ������.");
		sb->AppendLine("� �����������. ��������� ��������� �����������, ����� ������� ���������� ������������ ��������. ��� ����� ����������� ����������� ����������� �������, ������� ������������ ���������� ��� ������������ ���������. ����� ������������ ���������� ���������� � ������, ����� ���� ���� ���������.");
		sb->AppendLine("� �����������. ����� ���������� 19 ������ ����� ������������, ���������� ������� ���������� �������� ��� �������. � ���������� �������� �������� �������� � �������� ��������� � �����������. � ������� ������������ ������� ��� ���������� ��������� ���� ������ ��������� ���, ����� ��������� ������ ������������.");
		sb->AppendLine("� �������. � �������� ������ ��� ������� ��������� ����������� ����� ������ ���������, ����� ��� ���� ����������. �� �������� ��� ���������� � ��� ���������������� ������������, �������� ���������� ��� ������, �������������� � ������� ���������. ��������: ������� �� ����������� ���������, ����������� ��������, ������ � ��������.");
		sb->AppendLine("� ������������. � ��������� ������� ����� ������� ������ �� ����� ���� ������������ ��������������. ���������� ����, ��������� �� ��� ���������, ���� ���� ������ ������������, ����� ������������ ������� �����. ��� ���� ����� �������� ����� �����������, ���� ����� ������� �� �������������, ��������: ������������, ����������, ��������� ����.");

		this->description->Text = sb->ToString();
		this->nameOfArcana->Text = "19 ����� - ������";
	}
	else if (this->B->Text == "20") {
		System::Text::StringBuilder^ sb = gcnew System::Text::StringBuilder();
		sb->AppendLine("��������� �������� �� ������:");
		sb->AppendLine();
		sb->AppendLine("� ���������. ����� ������� ������ � �����, ���� ������� ������ �� �����, ���, ��������, ����� �� �����-�� �������� ��� ��������. �������� ����� ���������, ������ ��� ����� ����������� �������� ���� ������, ������� ��������������� � ��������� ��� ������ ��������.");
		sb->AppendLine("� ������������� �������. ���� ������ ����� ���� ������� ������������ � ����������, ������ ���������� ����� ������� � �������������. �� ������ � ����, ������� �� ������ �����, �� ��� ����� ������� � ������, ����� �������, ����� ���� ���� �������� ������.");
		sb->AppendLine("� ������ �����. ������ ���� ������ �������� �������� ������������� ���������, � ������� ��� ������� �������. ��� ������ ��������� ���������, ������� � �����, ��������� ������� ���� ������ � ������ �� ������. ���������� �������, ���������� �����, ���������� ������, ��������� � �������� ��������� ����.");
		sb->AppendLine("� ������. ����� ��������� �������������� ���� ��������� ���������, ���� ���� ���-�� ����������, �� ����� ������ ���������, � �� �����������. �� ����� ���������� ���� �������, �������� �������� ������������ �������, ��������� ����������� �� ����� ����� �������. ����� ��� ������� ��������, ������ ���, �� �������� ��� ������.");
		sb->AppendLine("� �������������� �����. ���� ������� ����� ������ ������ � �������� ���������� �� ����� ���������. �������� �������, ��� � ���� ���� ����� �����, � �� ���������� ����������� ��� ��������� � �����. � ��� ������� � ���� ����� �� ������������ �, ��� ����������, �� ���� ����� ������ �� ��������.");
		sb->AppendLine("� ��������� ���������. ����� ����������� �������, ���������, ���������� � ����� ������ ������ ������� �������� ��������� ��������. �� ������������ ������� � ������������ ���. ����� ��������� ������ ���� �������������, ���� � �������� �������������� ������, ������ �������� �������� �����.");

		this->description->Text = sb->ToString();
		this->nameOfArcana->Text = "20 ����� - �������� ���";
	}
	else if (this->B->Text == "21") {
			System::Text::StringBuilder^ sb = gcnew System::Text::StringBuilder();
			sb->AppendLine("��������� �������� �� ������:");
			sb->AppendLine();
			sb->AppendLine("� ��������������. ����� ����� � ������, ����� ������� ���������� ������ �������� � ����� ���������������� ��� �����, ������� �� ������������� ��� �������������. ����������� �������� �� ��������� � ����� ������, ����� ���������� ���� ������ ������ � �����. ������ ����� ����� ��������� ��������������, ��������������, ��������, ������ �� ����� ����������.");
			sb->AppendLine("� ����������� ������. ������ ����������� � ������� ��������, �� ����� � ���� ���� � ������������ �����������. � ���������� ����������� � ������ ������ ��� � ������� �����, �� ������� ��� �� ����� ���������. ��������� ��������� �������� �������, � ����� ��������������� ��� �� ���� ����������� �������������, �� ����� �������� �� ���� ��������.");
			sb->AppendLine("� ������ ����� � ����������. ������� ��������� ������� � ���� ��������, ������� � ���, ����� ������� ��� ���������, ������������ ���� � ���� ���������� ��������� ������. ������ ������ �� ������ ����� ��������� ����� � ����������, �������, ��� ����� �� �������� ��� ������������. � ���������� ������������ � ������� �����������, ������ �� ���������, ������� � ��������� � �������� ����.");
			sb->AppendLine("� ������� � ����������. �� ��������, ��� ��� ���������� �����������, ���������� ����� ������� � ����������. ������������ ���� � ������� � ��������� �� ������������ �����. ������ ��������, �� ��������� ����������, ����������� ��������� ������ ��������. ������� �������� �������������� �����������, ������ ��� ����������� ��������.");
			sb->AppendLine("� �����������. ��������� ����������� ����, �� ����� ������ � ����� ������, �������� ������ �������, ����������� ��������� ��� ������� � ���������� �����. �� �������� ����� �����, ��-�� ���� ����� �� ����� ����� ���������� �������. � ����� ���������� � ���� ��������� ����, ����������� �������� �� ���� ��� ������� ����������.");

			this->description->Text = sb->ToString();
			this->nameOfArcana->Text = "21 ����� - ���";
	}
	else if (this->B->Text == "22") {
			System::Text::StringBuilder^ sb = gcnew System::Text::StringBuilder();
			sb->AppendLine("��������� �������� �� ������:");
			sb->AppendLine();
			sb->AppendLine("� �����. ����� �����, � ����� � ���� ��������, ���������� ��������, �������� ������� ����� ������ ���������� ����� � ������ �����. ������ ���� ����� ���-�� ������ ��� ������ �������� ��������.");
			sb->AppendLine("� �������������. ����� ���������� ����� ����� ����� ���������� � �������: �����, ������ � ��, ��� ���� ����� � ������� ������. ����� ��� ����� ���������� �����������, ����� �� ����������� � ������ �������� �� ��� �����.");
			sb->AppendLine("� �������������. ����, � 22 ��������, ������ ������ ����������. ���� ������, ��� �� ����� ��� ������������, � �� ����� ������ ���������������, ��� ��������������. ��, ��� �� ������� ������ �������, ����� ���� ������������ � ��� ������, ���� ����� ����� ������� ������, ������������ � ���������� �����.");
			sb->AppendLine("� �����������. ���� � ����� ��������, ����� �������� � �����������. ��� ����� ���� �������, ����������� ��� ������������� �����������, ��� �������� � ���������� ������������, ������ �� ������� � �������.");
			sb->AppendLine("� ������������. ������ ����� ������� ������ ����������� �������������� ���. ��� �������, ��� ������ ��� �� ��������� ��������.");
			sb->AppendLine("� ������������. � ��������� ��������, � ���� ��������, ���� ����� ��������, ������� �������� ��� �� ����������. � ������, ������� ����� � ����������������� ���������� ��� �� �����. � ���������� �����, ������ �������� ������ ���������� ����������� ����������.");

			this->description->Text = sb->ToString();
			this->nameOfArcana->Text = "22 ����� - ���";
	}
}
private: System::Void personalityPlus_Click(System::Object^ sender, System::EventArgs^ e) {
	if (this->A->Text == "1") {
		System::Text::StringBuilder^ sb = gcnew System::Text::StringBuilder();

		sb->AppendLine("������� � �������� ���� ������ ����������� ������� �� �����, �� ����� ���������� � ������ � ����������� �����. ��� ���������� ��������� � �����, ����� �������� ������ �� ��� �������, ����������� � ����� ��������� ������������� �������. ����� ������� �� ���������� ������� ����� ����� ����������� ���� � �������� ��� � ����. ������� �������� ��� �������� �������������, � ��������� �������� ����� ��� ����� ������������.");
		sb->AppendLine();
		sb->AppendLine("��������� �������� �� �����:");
		sb->AppendLine();
		sb->AppendLine("� �������������. ������ ����� ����� ������� ���� ����������� ����, ��������� �� ����������� � ����� �����, ������� �� ������� ���������, ��������� ����� �������. �������, ��� ������� ����� ��� ����� ������ � ������� ��� ������ ���������� ������.");
		sb->AppendLine("� ����� ������������. ������ �������� ������ ����������� ����������� �� ����������, ��� ��� ��������� ��� ��� ��� �����������. �������������� ������������ ���, ��� � 1 ������ �� ���� ������������� ������ ��������� ����������� �������, ������ � ����.");
		sb->AppendLine("� ������������� ������. ���� ������� � ��������� ������ � ������� �� ������ ���-�� ���������. �� ���������� �������� � ��������, �������� �� ������� � ������� ����� ����� �� ������.");
		sb->AppendLine("� �������� ����. ������ ����� ����� �������� ����� ���������� � ��������� ������� ����. ��� ����������� �������������� � ������������������.");
		sb->AppendLine("� �������� �������. ���� ������� ������ �������� ������������ ��������� ��������, ������� �� ����� �� �����, ������ �������, �������� ������� � ���������� ����������. ������ ����� ������ � ����� ����� � ����������� ����� �������� � �����.");
		sb->AppendLine("� ������� ������. ������ ��, ������� � ���������� ������� ��������� ���������� ���� ����������� �������. �� �����, ��� ������������ ����� �� ���������� ���� � �������������� �� �� ���������� ���������� �����. �� �������� ����� ���� ���������� �������� � ������ ������� ��������������.");
		this->description->Text = sb->ToString();
		this->nameOfArcana->Text = "1 ����� - ���";
	}
	else if (this->A->Text == "2") {
		System::Text::StringBuilder^ sb = gcnew System::Text::StringBuilder();

		sb->AppendLine("������� �� ������ �������� � ����� ������������ � ����, �������� ������� ��������� ������. ������ �� �� ������������ � ���� � ������ ������ ����� ������. �������� ������������� ���������, ����� ����� ��������, ����� ��������� ������, �� ������ ���������� �������. ����� ������� � ������ �������� ��� ����, ��� ����� ������ � ������������� ������.");
		sb->AppendLine();
		sb->AppendLine("��������� �������� �� �����:");
		sb->AppendLine();
		sb->AppendLine("� �������� � ��������. ��������� ���� � ���� ��� �����, ����� �� ����. ����� ����������, � ��������� ����, ��������� ������� ���������� � ������ ����� ���������. ��� �������� ������� ����������� ������ ��������������� ���������, ������� ������ �������� ������.");
		sb->AppendLine("� ����� �����. �� ���� �������� ������ ����������, �� � �� �� ������ ������������ �� ������ ���������. ����� �������� ������ � �����, ����� ��, ��� ������ ����������. ���������, ��� ����� ���� ����� ������ ������ � �������� � �����.");
		sb->AppendLine("� ����������� � ����������������. 2 ����� ������ ���� � ������ � �����, ��� ������� � ���������� ���������� ������ ����� ������� � ���������� �����. ����� �������� ����������� ������ � ������, �� ��������� �������� ������. ���� � ����� ������� �������� �� ������ ���� � ��������� �����������.");
		sb->AppendLine("� �����������������. ����� ������� ����� ���� ������� � ���� �����. ������� �������� ���������� �����, 2 ����� �� ���������� ������ ����������� � ������� � ������������, ���� � ������ ���� ���� �� �����. ����� ����� ������ � ������ ���� ��������� ���� ����� �����. ����� ������ � ����� ���� � ������� ����������.");
		sb->AppendLine("� ������� ��������. �������, ���������� 2 ��������, �������� ������������ �������� � ����������. �� ����� �������� ����� ���� � ������, � ��� ����� ����� ��������. ������ ���� ����� �� ����� ���������� ��������, ����������� ������ ����� �������� ������ � ������� ��������� �����������. ���� ������� ����� ������ ���������, ������� ���� ����������.");
		this->description->Text = sb->ToString();
		this->nameOfArcana->Text = "2 ����� - ��������� �����";
	}
	else if (this->A->Text == "3") {
		System::Text::StringBuilder^ sb = gcnew System::Text::StringBuilder();

		sb->AppendLine("������ ������� ������������� ������� ������� ������, ������������ ��������, ������� � ����� ���������������. ���� ������� �������� �������, ��� ����� ��������� ��������� ����������� ������� ������ � ��������� �������, ����, ������. ����� ����, ��� ������� �������� ������ �� ����������, ������ ������ � ��������������� ������ ���. ����� ����� ����������� ���������� �������� ��� ��� �������, ��� � ��� �������, ����� ������� ������.");
		sb->AppendLine();
		sb->AppendLine("��������� �������� �� �����:");
		sb->AppendLine();
		sb->AppendLine("� ������� ������ (��� ������). �������������� 3 ������ � ��������� ������������� ��������� �����. ��� �������� �������, ������ ���� � ������������� ����, ���������� ��������� ����� � �� ������ � ��������� �� ���. ��� ������� � ����������, �������� ����� ������ ���� � ������������ ��� ��� ����������� ���������. ��� � �������� ���� �������� ��� ����������� ������� �����, ������� ��������������� �� ��� ���������� �����������, � ��� ������� � ����������������� �������.");
		sb->AppendLine("� ������� ������ (��� ������). ���������� 3 ������ ��������� �������� ���� ������, ����� �������� �������� ����� �� ����� ��������� � ����: ��������, �������, �������. ���������, ���������� ���������� �����, ����� �������, ������ �������� ������� �� ���������, ����� ������� � �������. ����� ����� �� ���� ��������������� � ������������ �����.");
		sb->AppendLine("� �������� � ����������. ����� �������� ������� ������� �������, � �������� ��� ������� ������� ��������� ���� � ������� ������������ �����. ��, � ���� ����������� �����������, �������� ����� � �����������. ��� �����, ��� ������������� ��������, ��� ���������� � ������ �������, ������� ������� �����. ����� ������� ����� � �����, ��������� ������ � ����������� ���� ��������.");
		sb->AppendLine("� ���������������. �������� ����� ���������� 3 ������ ���������� ����������� ��� ������ ������������. ����� ��� ������ ������ ��� ���� ���������� �����������, ��������� ��� ��������� ������������ ��������� �����������. ���� �������, ��� � ��������� �� ������� � ����� � ����������������� ����������� �� ������ ����������.");
		sb->AppendLine("� ������� � �������. ������ ������ ������ ���� ������� � ������ � ������� � ��������. ����� ������� ����� ����� �� ������ ����� ������ � �������, ��� ��� ������ ������� ���� � �������� ��� ������. ����� ������ � �������� �������, �� ����������� ��������� ������ ����� ����������, ����������� ����������� ���������.");
		sb->AppendLine("� ������ � ������������. ������� � ����� �������� ������ ������ ���������� ������� � ����� �� �����-�� ��������� ����� ������� ������. ������ �� �� ����������, � ������ ��� ���� �� �������� ��� ��� ����������. ������ ����������� �������� ��������� ������������ � ����������� � ���������� ���, ������� ��� ������. �� � ����������� ������� � ��������� � ���� ������ ���� ����.");
		this->description->Text = sb->ToString();
		this->nameOfArcana->Text = "3 ����� - �����������";
	}
	else if (this->A->Text == "4") {
		System::Text::StringBuilder^ sb = gcnew System::Text::StringBuilder();

		sb->AppendLine("�������� ����� ������������� ����� ����������� ��������, � �������� ��������� ���������� �������� � ������ ��������. � ������� ��������������� ���� ������� ����� ������� ����������, ������������ ������ �����, ������� �������������� ��� ������������ ������ ��������. ��������� ��������� ��������� � ������ ���������� ������������� �����, �������� � ������������.");
		sb->AppendLine();
		sb->AppendLine("��������� �������� �� �����:");
		sb->AppendLine();
		sb->AppendLine("� ������ � �����. ������ ����� �������, ��� ��� �����, ����������� � ������ � ��������� ������. �� �� ����� ����������� ��������� � ����������, ��������� ����� ������ �� ���, ��� ����, ��� � �� ������. ��� ������� �������������� ������ �����, ������� ���������� � ����� � ����� ������� ������.");
		sb->AppendLine("� ������������ �����. ������ �������������, ��� 4 ����� ����� �������� ����� ����������� ������� ���������. ��� ������ ����� ���� ������� �����, ���������� �����������. �� ����� ����������, �� ���������� ������������ �����������, ������������ ����������, ������ ������� ������� �� �����.");
		sb->AppendLine("� ��������������. ����� ������� �� ����� ��������� ���� ��������� ������. ���� � ����� ������� ���������, �� ������� � ����������, ��� ��� �������� ��������� � ������. ����� ������������� ��������, ��������� ����������� �������.");
		sb->AppendLine("� �������. �������� ����� ����� ������� � ��������� ��������� ����� �����������, ������� ����� ������ ���� � �����. ��� �����: ������ ���������� ������������, ������� �������� � ������ ����������. ����� ����� ���������� � ����������� �������.");
		sb->AppendLine("� ������. ��� �������� ������ �������, ������� ������ ������ ��������� �������� ������ � ����������� ���������� ����� �������� �� ���� � ����. ����������� � ����� �������� ��������� �������� �������� ���� � �������� ��, ��� ��� ������.");
		sb->AppendLine("� �����, ����. ���� ��� ������ ���� ������� ���������� ������ ����, �����, �����, ��� ������������� ������� ��������. ��� � ���� ������ �������� �� �����. 4 ����� ����� ������� ��, ����� ��� ����� ���� � ��������.");

		this->description->Text = sb->ToString();
		this->nameOfArcana->Text = "4 ����� - ���������";
	}
	else if (this->A->Text == "5") {
		System::Text::StringBuilder^ sb = gcnew System::Text::StringBuilder();

		sb->AppendLine("����� ������� ��� ����� ���� ������ � ������, �������������� ������������ ��������. ���������, ��� � ����������� ������� ������ ��� ���������� �� �� ����� ��� �������, � ���� �����. ���������, ��� 5 ������� ��������� ������ �� �������� ���������� �� ����, ����������� �� � �����-�� ��������� ��� ���. �������� ������ ����� �� ���������� � �������� ������, ������� �� ��� ���������� � ������ ������.");
		sb->AppendLine();
		sb->AppendLine("��������� �������� �� �����:");
		sb->AppendLine();
		sb->AppendLine("� ������������. �� �������� ���������� � ����������� ����� �����, �, ��������, ��� ������ ����� �� ����� �������. ����� ������� ������ ���������� ��� ������ � �� ������, ���� ��������������� �� ����, �������� ���� ������. ����� ���� � �����, ���, ������ ������ ���� ������ ���������.");
		sb->AppendLine("� ������� � ������. �� ��� ����� ������, ���������������� � ������������ ������. ���������, ��� � ��������� ��� ����� ����� ����������, �������� ������� �������� ����������� ����� ������. � � ������ ��������, ��������, ������� ��������, � �������� ����� ���������� ������ �������� ��� ������.");
		sb->AppendLine("� ������������ ����������. �� ��������� ������ ������ �� ������������ �������, ��� ��������� ��� ��������� � ������ ����������. �� �������� ������, � ����� ������������ ���� ��������, ���� ��������. ��������� � ����������� ����� ����� �������� ����������, ��� � ������� ������������� ������� �� ����. ������ �������� ����� ���������� ������������ �����, ������ ������ �������� ����� ����� ������.");
		sb->AppendLine("� ��������� ��������. ������� � 5 �������� ���� ��� ��������, ��� ���� ����� ���������� � ����������� ������� ���������, ��������� ������� � ���������. ���������� � �������� �������� �������� � ����� ������������ ����� ��� �����. ����� ����� ����� ���� �������� ������� � ������������ ������ �� ��������� � ��������������.");
		sb->AppendLine("� ������������ �����. � ����� ������ ��������, �������������� �������� ���� �� ������� ����. �� ���� � ����� ����� � �������� �� ��������, �������� �� ������� ���������� ���� ��������. � ����������� ������ �����, ��������� ����������� ���������� -� ����� ����� ����� ������������� ������.");

		this->description->Text = sb->ToString();
		this->nameOfArcana->Text = "5 ����� - ��������";
	}
	else if (this->A->Text == "6") {
		System::Text::StringBuilder^ sb = gcnew System::Text::StringBuilder();

		sb->AppendLine("������� � 6 �������� ������ � ���� ����� �������� ����������� � ������ ����������. �� ������ � ���������, ����� �������� ����, ����� ���������� ��������, �������� ����� ���� ��� � ��� �������� ��� ��. � �� �� ����� ������ ����� ��������� ������� ������ � ����������� �������, ��-�� ������� ����� ����������� ����� ��������� �������. �������� ����� ����� � ������ ��������� � ���������, ������� ���������� ���������. �������� ���� � ����� ������ ����������, ��������� �������� ���� ��������� � ���������� ���������. ���� ��� ������ ������� ������ ��������, �� ���������� ��-���������� �������� �� ���� ������ �����.");
		sb->AppendLine();
		sb->AppendLine("��������� �������� �� �����:");
		sb->AppendLine();
		sb->AppendLine("� ������ �� �����. ��, ��� �� ������ ������ � ���� �����, ������ �������� �� �����. �� ����� ������, �� ����������� ������, �� �������, ��� �������� ����� � ������ ����� ������ ��������. ����� �������� ��������, ������� ���������, ������, ������ � �. �. � ������, ��� ������ �������� ����� ��������� ������� � ��������� ������ ����, � ����� ���� ��� ���� ��������� ���.");
		sb->AppendLine("� ���������� �����. �������� ����������, ��� ������ ����� ��������� ������� ��� ����� �������, ���� �������: ����� ��� ������. � �����-�� ������� ����� ����� ������� ������, � �����-�� ���. �������, ���� �� ������ ��������� ������� �� ��������� ����� � ������� �� ��������.");
		sb->AppendLine("� ������� � ������. ������� � 6 ������� ����� ����������� � ������ ���������� ����������. �� ����� �����������, �����, ��� ���������� ����� ��������, ������ ����� � ���������. ������ ������������ ����� � ����������� ���� ������.");
		sb->AppendLine("� ���� ��������. ���������� 6 ������� ����� ����������, ����� ����� ��������� � ��������. ��� ���� ����� ���� �������� ����������, ������� ������� �� � ��� �� ��������. ����� ������ ������ � ���������� ����������� ��������.");
		sb->AppendLine("� �������� �����������. ��� � ������ ������������� �����, � 6 ������, ������ ������� ��������� �����������. �� ������ ��������, �� ������ ���������, ����� �������� ���������. �������� ����������, ����� ��������������� � ������ �����.");
		sb->AppendLine("� �������� ������. ����� ������� ����� ����� ��������� ���������, ������� � ������������� ��������� ������ � ����, ����� ������ � ����� � ������. � ������������� ���������� ����������� �����������, � ������ ���� ������ ��� ����� ����������.");

		this->description->Text = sb->ToString();
		this->nameOfArcana->Text = "6 ����� - ���������";
	}
	else if (this->A->Text == "7") {
		System::Text::StringBuilder^ sb = gcnew System::Text::StringBuilder();

		sb->AppendLine("����� ������� ��������� ��������� � ��������, ��������� �������������� ������������, ������ ��������� �� ����� ��������� �������������. 7 ����� �������� ������ ��������� ������ ����, �������� ��������, ����� � ���������. �������� ���������� � ������ ���������� ������ ������ �� ���� ��������� ������������.");
		sb->AppendLine();
		sb->AppendLine("��������� �������� �� �����:");
		sb->AppendLine();
		sb->AppendLine("� ��������. ������� ��������� ���� ������� �������� �������� �����, ����� ����������� ��� �������� �� ����. �� ����� �������� � ���������� �������� �������, ����� �����������, � ��� ����� ��������� ��� ���� �����������.");
		sb->AppendLine("� ����������������� � ����������. ������� ����� ������ ����������������� �� ����, ������� ���������, � ��� ������ ������. �� ����� ������������ �� ������ � ������� �� ��������. �������, ���������� ����������������� �� ������ ��� �������������, ��� ������������� �� ����� ������ ��������� ��� ������������. ����� �������� ���� ��������, ������ ��������������� � ������� ���� �� �� ����������. ������� �� ����� �������������� � ���������������� ��������� � ��������.");
		sb->AppendLine("� ������ ��, ������� � ����. ���������� ����� ������ ����������� �� ��������� ����������. ��� ���� �� �������� ������� ������, � ��������, ������ ���������� �������. ��� ������ ������� �������� ��� ������� ������� ���������. ������ ���� ������� �� ������� ������ ����� � ���������. �� ������ ��� ���� ����������, �������� ���� ��� � ���� ���� � ����������� �������.");
		sb->AppendLine("� ���� � ������. �������� �� ����������� ��������� ���� ������� ���������� ������������ � ����� ���������. ��� ������ �� ����� ������� ��: ��������, �����������, ������� �����������, �������� � ���������. ���������� ������ ���� � ����� ���� ������� � ����� ��������� ������ ����������.");
		sb->AppendLine("� ������ � ��������. ������������� � �������� ���������� �������������� ������� ������ ����� �������� ������ �������������. ���� �� � �� ����� ������� �������������, ����������� ������ ������������ ��� ������ ��� �����. ���� � ������ �������� ��� �������, �� ���������� �������� ��������� ������� � ��������� ����������� � ����� ���������.");
		this->description->Text = sb->ToString();
		this->nameOfArcana->Text = "7 ����� - ���������";
	}
	else if (this->A->Text == "8") {
		System::Text::StringBuilder^ sb = gcnew System::Text::StringBuilder();

		sb->AppendLine("����� ������� �� ��������� �������, ����� �������� ���� ������� � �������� ��������� � ������� ����� �������. ��� �������� ������� ��������������� ������� � �������, ��������� ���� ����������� ���������� � ������, ��� � ����� �����, ��� � � �����������. ������ ��������� �����, �� ����� ���-�� ��������.");
		sb->AppendLine();
		sb->AppendLine("��������� �������� �� �����:");
		sb->AppendLine();
		sb->AppendLine("� ����������������. ����� ������� ����� ������������, ������ �������� �������� ������� �������������, ������ ��������� ������ � ��������� �������. ����� ����������� � ���������� ������������, ������ � �� ����� ������������� �� ��������, � ��� ������ ��� ������.");
		sb->AppendLine("� ������. ��������� ��������� ������ �� ���. �������� � ���������� �������, �������� ������, �� ��������, ������� ������� � �� �������� � ����� � �. �. ������ ��� �������, �� 8 ����� �� �������� ��� � ��������� ������ ������� ������� � ������������.");
		sb->AppendLine("� ����� � �������. ��� ������, �������� �������, ���������������. ������ ������ �����, ��������� ����������� � ��������� ������, ����� ����������, ���� ���������� ���� ������ �������. ����� ��������, ����� �� ����� ������ ������� ��������� ��������.");
		sb->AppendLine("� ������� �����. ���� ������� ����� ����������� � ��������, ������ �������� �� �� ������������, �������������� �������. ����� ����������, ����� ��������������� �� ����, ��������� �� ������ ����������.");
		sb->AppendLine("� ����� ����������� ����. ������ ��������� ����� ���������� �������, ������ ����������� ����� ��������� � ����������� ����������. �� ��� ���������� ������� ��� ������� ����������.");
		this->description->Text = sb->ToString();
		this->nameOfArcana->Text = "8 ����� - ��������������";
	}
	else if (this->A->Text == "9") {
		System::Text::StringBuilder^ sb = gcnew System::Text::StringBuilder();

		sb->AppendLine("��� �������� � 9 �������� ����� ����� �� ������� ���������� � ���������. ������, ��������� ������� �� ������ �������, �� �� �������� �� �����������, ������ ��� ���������� ��� ������������. ����� � �������������, ������ � ������������ � ��� ��������, ������ ����������� ���������� ����������. ������ ��� ������������ ������� � ��������� ��������� ������, ������� ������ ���� �� ���� ��������������� � ����� ��������� ��������� �������.");
		sb->AppendLine();
		sb->AppendLine("��������� �������� �� �����:");
		sb->AppendLine();
		sb->AppendLine("� ��������. ��������� ����� ��� � ����������, ����� �������� ����� ������ � ����������� ������������ ������. � ���������� �� ��������, ��� ����� ����������� �������� ������� � ���������. �� ����� ������� � ������� �����, � � ������ �������� � ���� ����� ���������� ����������, ����� �������� ����� ��� ����������� ������ ����� ��������.");
		sb->AppendLine("� ������ � ����. ����� ������� ����� ������� � ��������� ���������� ������ �� ��������. ��� ���� ��, ������ �������� �����-�� ���� ����������� � ���������������� � �� ������ ����. � �������� �� ������� �� ������������ ���������� ������������, ��� ���� ����� ����� �� ����� ����. �������� � ���������� ��������� ��������� ����, � � �������� ����� �� �������� ����� ������� � �������������� �����. ���� �� ������� ����� 9 ������ � �������� ����������� ������ � ���� ��������� ����������.");
		sb->AppendLine("� ���������. ���� ��������� ������������� ������ ������ �������� ����� ����� �� ������� �������������� �� ���� ���������� ����. ������ � ���� ����� �� ������� ���� ��� ���������� ���������. �������, ��� �� ������, ��� ��������� ������������ �� ��������� ����� � ����� ����� ���������� � �����������.");
		sb->AppendLine("� ���������������� � ��������������. ���������� 9 ������ ������ ����� ������� ����� ������������ � ��������������. �� ����� �������� ������, ��������� �� �������� �� �������, �� ����� ������� ��� �������������� � ������� ������������� �������. ���� �������, ��� � ����� �� ����� ���������� � �����������.");
		sb->AppendLine("� ���������� ������. ���� ������� ����� ��� ����������� ���������� ��������. �� ���������� ������, ������� ������� ���������� �����, ����� ������������ ����� � ������ ��������. ����� �������� ������������� ������ � ����� ������������ ������.");
		sb->AppendLine("� �������� � �������� ����. ��� ���������� ������������ ���������� �� ������ ������ ����, ������ ��� ������������ �������� ���� ������ ������������ ���������. ����� ������� ���� ������� � ���� ���������, �� ������������� �� ���� � ������������ ������. � ���� ���� ����������� ��������� � ����� ������ ����, �� �������� �� ������� � ������� ���� �����.");
		this->description->Text = sb->ToString();
		this->nameOfArcana->Text = "9 ����� - ���������";
	}
	else if (this->A->Text == "10") {
		System::Text::StringBuilder^ sb = gcnew System::Text::StringBuilder();

		sb->AppendLine("������� � 10 �������� ������ �������, ����� �����������, ������ �����, �� ������� � �� ��� �������� �� ������. ���������� ���������, ��� �������� � ������ �����������, ������� �� ���������� ������, �� ��������� �������� �� ������������� ����� ����. ���� �������, ��� ������ �� ������ ��� � ����������, � ���������� ������� ��� ��������� �������� ������.");
		sb->AppendLine();
		sb->AppendLine("��������� �������� �� �����:");
		sb->AppendLine();
		sb->AppendLine("� �����. ��� ������������ � 10 ������� ������� ������������ ������ ������, ������ ��� ������� ������� � ��� �������. � ���� ���� � ����� �������� ����������� ���-�� ���������, ����� �����-�� ����� �������� ����������� ������������. ���� ��� ������ �� ������������ ��� ���� ����� � �������� ��, ��� �������.");
		sb->AppendLine("� ������� � ����������. ������� � 10 ������� ����� ���������, ������ �������� �������� ��������� �������. ��������� ��������� ������������ �����, ������� �� ������� � �� �������� ����. ����� ���� ����� ��������������, ����� ������ ����� ������ � �����.");
		sb->AppendLine("� �����������. ������ ������� ���������� ��������� � ����������� �������������� � ��� ������� ���������, ������� ��������� � ���� �������. � �����, ������ ���������� � �� � ��������, ���� � ���������� �������� �������� �� �������.");
		sb->AppendLine("� ������� ������. ���������� ������ ������� ����� ����� � ������ ����� ��������, � �� ��� ������ ���������, ���������� ���������. � ������������ �������� ��� ���������, � ������, � ���� �������, �� ������� � ����� � �� ���������� ����� ���������� �������� ��� ������.");
		sb->AppendLine("� ���������� ����. ������� � ����� �������� ������ ��������, ����� ���� ����� ���������� � ���������� ��������� ������ �����������. �� ���� ��� ����� ������ ������ � �������, � ������, ���������� ������ �������������� ������ � ������. ��������� 10 ����� ������, ��� ��������� ����� ������ ���, � ����� ����� �� ��������, �� �� ����� ���� ������ ������ ���� ��� �� ���� � �������� �� ���.");
		sb->AppendLine("� �������������. ����� ������� ����� ��������� ������� ������ � ������ ���������� ��������� �� ��, ��� � ���� ����. ������� �� ������ �� ����� � ��� ���������, ���� ���� ���� ������������ �� ������ �������. ��������, ��� ����� �����, � �����, � �������� ���� ����������� ������, ������� �� ������ ��������� � ������� �����.");
		sb->AppendLine("� ���� � �����. ���������� 10 ������ ������� �� ���������� � ���� � ����� �������� ����� ������ � �����������. �� ������ ��������� ���������� � ����������, ����� ������ �������� � ������ �������������������.");
		this->description->Text = sb->ToString();
		this->nameOfArcana->Text = "10 ����� - ������ �������";
	}
	else if (this->A->Text == "11") {
		System::Text::StringBuilder^ sb = gcnew System::Text::StringBuilder();

		sb->AppendLine("11 ������� �������� ������ ��������� ����� � ������ � ���, �������� ������� ���������������. � ������ �������� ������� �����������, �� ���� ������� �������� �������� � ��������� � ������� ����������. ��������� � ����, ��������� ��������������� �� ����������, ������ ����� ������ �� �� ������. �������, ������� �� ������������ �� ������ ������������, ��������� ������� � ��� �������������� �������� �����������. ������� ������ ������ �������� � �������� ����� � ����, �������� ��� �����.");
		sb->AppendLine();
		sb->AppendLine("��������� �������� �� �����:");
		sb->AppendLine();
		sb->AppendLine("� �������. ���� ������� ����� �������, ��� �������, ��� � ���������. �� ��������� ���������� ��������, ��� ����� ������������ ��������. ������ ������������ ��������, �� ������ �������� � ��� ����� ���������������, �� �������� �������� �� �������� � ���������. ����������, �������������, ������ ������������ ��� ���������������� ����.");
		sb->AppendLine("� ������. 11 ����� ��������� ������� ��������������� �� ���, ��� �����, � ����������� �� ������ �����. �� ��� ����� ��������� ����������� �������� ����� �� ���������� � �������� �������. ��������� ���� ��������� ������ � ���������� �������, ������������ ����������� ���������, ������� �� �������.");
		sb->AppendLine("� ���������. �� ������ �������� ��������� ������� ����������� � ����� �����. �� ��� ����� ����������, �������� ����� ������� � ������������� ����. ���� ������� ��������� ����������� � ��������� ���� � ������� ������.");
		sb->AppendLine("� ������. � �����, ��������� �����, ���� ��� ������ ����������������� � ������, �� �������, ��� ��� ������� ����. �� ������ ��������� ��������� ������ � ����� ������ ����� ���� ��������� ��� ���������� ��������. ����� ����� ����������� � �������� ������ ��������, ����� ���������, ���������, ��������� ������������� ���������.");
		sb->AppendLine("� ����������. ��������� ���� ���� ��� ������������ ����������, 11 ����� ����� ���������� �������� ������������. ������ ��������� �� ������ ����, ����� �������� � �������� ����, ������� � ������ ��������� ��������� ������������ � ���������� ���������� �������. � ���������� ���� ������������ ���������, ����� ��� ��������� ���� �����������.");
		sb->AppendLine("� ���������. ��������� ������ � ���������� �����, �� ������ ����� �������� �����������. ������� ����� ���������� � ��� �� ������ ��� � �������, �� � ��� ����. ������� ��������� � ��������� ������ ��� ��������, � ��������������� �� ��� �� ����� �������������� ��� ���� � ������, ��� ������� ���.");
		this->description->Text = sb->ToString();
		this->nameOfArcana->Text = "11 ����� - ����";
	}
	else if (this->A->Text == "12") {
		System::Text::StringBuilder^ sb = gcnew System::Text::StringBuilder();

		sb->AppendLine("12 ����� ����������");
		sb->AppendLine("����� �������, ��� �������, ����� ������ ��������� ������, ����������� ����������� � ��������. �� ��-������ ������� �� ���, � ���������� ������ �� ������ ����� ��� ������. 12 ����� ����� ������� ���������� ���� � ���������� �������������� � ������ �������.");
		sb->AppendLine();
		sb->AppendLine("��������� �������� �� �����:");
		sb->AppendLine();
		sb->AppendLine("� ���� ������ �� ��� - ���������� �������������, ������������ �� �������������");
		sb->AppendLine("� ����������� - �������� ��������� ������ ������ �����, ����������� � �������");
		sb->AppendLine("� �������� - ���������� ��������� ���� ������ ���� ��� ������");
		sb->AppendLine("� ���������� ������ - ������ ���������� ����� ���� ��������");
		sb->AppendLine("� ���������� ������ - �������� ���������� ����������� � ������������� ��������");

		this->description->Text = sb->ToString();
		this->nameOfArcana->Text = "12 ����� - ����������";
	}
	else if (this->A->Text == "13") {
		System::Text::StringBuilder^ sb = gcnew System::Text::StringBuilder();

		sb->AppendLine("13 ����� ������ � �����");
		sb->AppendLine("���������� 13 ������� ������ ����� � ���������, ������ ������������ � ����� ��������, �� � � ������� ����� �� ��� �������� ������ �������������. ���� ����� ������������ �� ���������� ��������, �� ������ ������ �� �����.");
		sb->AppendLine();
		sb->AppendLine("��������� �������� �� �����:");
		sb->AppendLine();
		sb->AppendLine("� �������� - �������� ���������� � ������������� ���������");
		sb->AppendLine("� ������������� - ����������� � ����������� ���������� ����");
		sb->AppendLine("� ��������� - ������ ����������������� � ����� ��������");
		sb->AppendLine("� ���� � ������� - ���� � ������ ��������� � ������ �����");
		sb->AppendLine("� �������� �������� - ���������� ������ ��� �����");
		this->nameOfArcana->Text = "13 ����� - ������";
	}
	else if (this->A->Text == "14") {
		System::Text::StringBuilder^ sb = gcnew System::Text::StringBuilder();

		sb->AppendLine("���������� 14 ������ ������ ������� � ��� �������� ������ ������� �� ����������. ��� ��������������� ��������, � ������� ������� ����������, ����� ���������� �� ��������������, ����������, ���������� � ����������� � ������������. � ������ ������������� ����� ������� ���������� � ����� ������������� ����� ��������. ���� � ���� ��� ����� ����������� �������, � ������ �������� ������������.");
		sb->AppendLine();
		sb->AppendLine("��������� �������� �� �����:");
		sb->AppendLine();
		sb->AppendLine("� �����������. ��� ����� ���������, ����������� �������, ��� ������ ������� �� ����������, � ����� ������� �������� ������� ������������� ������� � �� �������. �� ��������� �������� ������ ���� � �����, ���������� ������ ������� ���������� � ��� ��������. ����� �������� �������� � ����������� ������, ���� � ��� ����� �� ���� �� �����.");
		sb->AppendLine("� �������� � ������. ���������� 14 ������ ���������� � �������� �� ���� ������ �����. ��������� ���������� ����������� �� ���� ������������: ��������� ������ ��������� � �������������, ������ � �����, �� �� �������� � �������, ���� ��������, �� � �������� ��� ������� ������. ������ � ����� ��������� ��� �� ������� ��� �������.");
		sb->AppendLine("� ���������� � ������������. ������ �������� ������ ������� ���������, �� ������ ������, ���� ���� �������, �� � ����������� ������������. �� ����� ���������� �� ����������, �� ������, �� �����. ������� ������������ ���� ����, ��������� � ������, ��������� ����� �� ������ ���� �������� �����.");
		sb->AppendLine("� ����������������. �������� �� ������� ������������, ��� ����� �������������� ����. � ��� ������ �������� �����������, ��� ������� ���������� �� ������������ ������, ����������� �, ��������� ���� � ���������. ����� ������, ������� ����� � ������. ����� ������� ����� �������� ���������� ������� � ������ ����� ����������� ���� � ���� �����������.");
		sb->AppendLine("� �������� � ���������. ���������� 14 ������� �� ����� ����������, ����� �������� � ��� ��������� ������������ ������ ������ ����. ����� ��������� ����������, ������ ������ �������, ������� ���������� ����. ������������ �� ������� ���������, �� �������� ������ � � ���, � ���� �������� ����.");
		this->description->Text = sb->ToString();
		this->nameOfArcana->Text = "14 ����� - �����������";
	}
	else if (this->A->Text == "15") {
		System::Text::StringBuilder^ sb = gcnew System::Text::StringBuilder();

		sb->AppendLine("�������, ��������� � 15 �������, ��� ����� �������� � ������ � ������������ ���������� � ���������. �������� ��� �������������� �������� ��� ����, �������� �������� �������� � �������� �������. ������������ ������ ���� � ����������� �� ������, ����� ������� ����� ����� ����� ����� ������� � ��������, ������ ��� ������ ��������� ��������� � ���������� ������ ��� ������� ��������� � �������. ������� ��� ����� ����� ������ ����� ������ � ��������� �������� � ���������� ��������� ��������� � ������ ���� � ����� ���������. �� ������ � ��� ��������� �������� ��� �����, �������� ����������� ������������ ����� ������.");
		sb->AppendLine();
		sb->AppendLine("��������� �������� �� �����:");
		sb->AppendLine();
		sb->AppendLine("� ������� � �������. ����� ������� �� �������� ����� �������, ��������� ���� ����� ����� ����. �� ���������� ������������ ������, ����� �������� ��, ��� ��� �����������. �����, ��� ����� ����� ���� �������� � ���� ������ ��������������� ����� � �������. ������ ����� �������������� ���� ������� � ������� �� ��������� ����� ���������.");
		sb->AppendLine("� �������������. � ������������� ����� ��� ������� ������ �������� ������������� � ������� �� ����������� �����������, � ���������� ���� ��������. ��� ���� ���� ��� �� � ���������� ��������� ���� ���������, � �� ��������� ����, ������ ��������� ���������� � ���������� ���� ���������� � ������.");
		sb->AppendLine("� ���������. �������������� ����������� ������� ������� ������ ���������, �������� ����� ����������� � ��� �������� � ���������. ����� ����� ������� ����������� ���������, ��������� ���������� ���������� � �� ����������� � �������� �������� �������. �������� � ��������� ��������� ��������� ���������� � �������� �����.");
		sb->AppendLine("� ����������. ��������� ����� ��� ����� �������� 15 ����� � ������������ ���������� ����, � �� ���������� �������� ��������� �����. ��� ���� ����� ���������� ����������� ������� ������������, ��������� ����������� ��������� � �� ��� ��� ��������� ��� ��������, ���������, ���������.");
		sb->AppendLine("� ������ � ���������. ���������� ���� ����� ������ ������ �� ���� � ���� ������� �� ����� ��� �� ������ � �����, � ����� ������ ��� ������� � ���������������. ���� ��������� ����, �� ���� ������, ��������� � ���������� ������ � ������������ �������, ����������� ������������ � ��� ����������. �������� ����� �������� ���������������� �� ��� ����� �����.");
		sb->AppendLine("� ��������. ������ ������ � �������� ������������ �������� ���������, ��� ��� �� ������ ����� �����. ����� ���� ������� ��������� ���� ����� �����, ��������� ��� �������� ���������.");
		this->description->Text = sb->ToString();
		this->nameOfArcana->Text = "15 ����� - ������";
	}
	else if (this->A->Text == "16") {
		System::Text::StringBuilder^ sb = gcnew System::Text::StringBuilder();

		sb->AppendLine("���������� 16 ������ ��������� � ����, ����������, ������������� � ����� ������� �������. �� ����� ������ � ����� ����������, ������ ���������� � �������, ������ ����� ������ �� ������ ��������. ����� ��������������� ��� ������������ �������������� �������������, �� ����� � ��� ���� ���������� ������ �������� �������. � ��� ����� ������ ������, ������ ������� �� ��������� ��� � ����� � ����������� ������ ��������� � �������.");
		sb->AppendLine();
		sb->AppendLine("��������� �������� �� �����:");
		sb->AppendLine();
		sb->AppendLine("� ��������� � ��������. � ����� ����� �������� ���������� ��������� ������ �������, ������ ��������� ��������, ������� ������� ����. �� �� ������ ������� � ����� ������ � ���, �� ���� ��������� ����� �����������, � �� ���������. ����� ��� ���������� �������� ��� ����������� ��������� ��������� ���������.");
		sb->AppendLine("� �������������� � ����������������. �������� 16 ������ ������ ����������������� ����� ������ ��� � ����������, ��� � � ������������ �����. ��������� ����������� ���, ����� ������������� � ����������� ����� ��������, ����� ���-�� ������� ���, ��������, ���������.");
		sb->AppendLine("� �������� � ������������. ������ ��� ��������, ������� ����� � ����� ������� � �������� ��������� ��������. �� ������ �����, ������ � ����� ����������, ��������� ��������� ��������� ���������, ������ �������, ������ �������������� ���������.");
		sb->AppendLine("� ������������ ��� ��������. ��� ������� �������, ������� ������ ����� ����� � ���������� ����� ��� �� ������. ������ ����� ��� ������ ������� ����� ������� �������� �� ������ ���������� ������. ����� ����� �� ��� ��������� ���� ��� �� �������� ������.");
		sb->AppendLine("� ������� � ���������. ������ ����� ������� ����� ��������� ������������ � ���������, ������ � ���� �������� �������� �������� ��������� � ������������ ����� �������. �� �� ������ ������ �� �����, ������ ������� ���� ����, � ����������� �� ������������ ������ � ������� ���������.");
		this->description->Text = sb->ToString();
		this->nameOfArcana->Text = "16 ����� - �����";
	}
	else if (this->A->Text == "17") {
		System::Text::StringBuilder^ sb = gcnew System::Text::StringBuilder();

		sb->AppendLine("���������� 17 ������ ��� � ����� �����, ������ ���� ������, � ���� �� �� ����� � ����� ���� � ��������� ����� �� ��� ��� ��������. ���� ������� ������ �� ��������, ��� � ������������, ���������� ����������� ������� � ����. ���� ��� ������ �� ������ ��������� � ������������, ���� ����� ���������� ����������. ������ ������ �������������, ��� ���� ������� ����� �������� � ����� ���������. ��� ����� ���� ����������� ����, ���������� ������ � �. �.");
		sb->AppendLine();
		sb->AppendLine("��������� �������� �� �����:");
		sb->AppendLine();
		sb->AppendLine("� ����� �� ������. ���������� 17 ������ � ������� �����, ��� ����� ����� � ���� ����� ��������. �������, � �������� ������� ������� ����� ����� ����������������, ������� ����� �����. ����� ������ � � ������ �������� ������ ���� ���� � �� ������ ��������� � ���. � �� ��� ���� �� ���� �� ����� ������ � ��������� ����� ��� ������������.");
		sb->AppendLine("� ������ � �������. ���� ������� �������� ����, �� ��������� � ������������, ����� ��������� ������� � ���������� ������, ����� ��������� ���������� ���������. ��, ����������, ��������� � �����-�� �������, ���� � �� ������ ����� ��������� ���� ��� � �������� ������ ������ ��� ���������.");
		sb->AppendLine("� ��������� � ������������. ���� ��� ������ ����� ������� ��������� ������������� ��������� � ������������, ��������� ���������� �������. ������ ��� ������ ������ �� ����������, � ���������� �� ������� �� ���� ��������. ��������� �������� ����, � 17 ����� ��������� ��� ��� �������.");
		sb->AppendLine("� ���� � ����. ���� ������� �� ����������� � ����� �����, ����� � ���� ������ � ������. �� ���� � �����, ��� ������ �������, ������� ��� ���������. ����� ���������� ������ ����������� � �������������� ����������� � ����� �������, ������������ ������� ��������.");
		sb->AppendLine("� ������� � �������. ���������� 17 ������� ������ ���������� � �������� � ������� �������. ����� ������������, ����� ����� � �������� �������� �� ������ ������. �� �� ������ ������ � ���������� �����, ������, ��� ������� �� ���� �������� �� �����. ������ �������� ����� ��������, � ��� ����� ��� ��������.");
	
		this->description->Text = sb->ToString();
		this->nameOfArcana->Text = "17 ����� - ������";
	}
	else if (this->A->Text == "18") {
		System::Text::StringBuilder^ sb = gcnew System::Text::StringBuilder();

		sb->AppendLine("���������� 18 ������ ����� � ������������, � ��������� ��� �������������� ����� ���������� �������� � �����������, � �������� ��� ���������� � ������� ��������� �����������. �� ��������� ��������� ���������� ����������, ����� ������� �������� � ��� ������, ������ ��� ������� ������� ������ ����� ��������������� ����������� �����. ������ ���� ������� ����� ���������� ��������� ���������, ����� ��������� ��������������� �������. ������ �������� �� ���������� ����������� � ����, ������ ���� ����������� ����������, � �������� ����������.");
		sb->AppendLine();
		sb->AppendLine("��������� �������� �� �����:");
		sb->AppendLine();
		sb->AppendLine("� ����������� � ����������. ���� ������� ������ ������� ��������� � ����� ������, ����� ������������ ���������� ����� ���� ��� ����������� �������� ��� ���������. ��� �������� �������� ��������� � ����� ����������� ��������� � ��������, ����������, ������. 18 ����� �������� �������� �����������, �� ����� ����� ����������� ��� ���� ��� ���������� � ���������� ��������� ����������.");
		sb->AppendLine("� ������� � �������. ������� ���������������� ��������� ����� �������� ������ �������� ����������. �� ����� ������������ � ��������� ������ ���������� ������ � ������. ����� ������ ������������ � ������� ������� ������, ��������� �� ��������� ����� �����, �� ������ �� �����.");
		sb->AppendLine("� �������������� ������. ���������� 18 ������� ����� ������ � ����� � ������� �������. ������ ������ �������� ��� ������������ ��������������� �� ���������� � ����������. ���� ��� ����� � ���� ������, ���� ���������� ����� ���������������, ����� ��� �� ��� ����������.");
		sb->AppendLine("� ���������� ���. � ����� �������� ������� ���������� ���, �������� �� ����������, ��� �� ������ ������� ������� � ������� ����. ������ �����, ��� ���������, �� ������������� ������ � ������ ����������, ����� ������, ��������� ���������� �� ��������� �����.");
		sb->AppendLine("� �������� � ���������. ������ �������� ����������� � ���������������� ��������� ������ �������� ��������������� ������� �������. ������� ������������� �������� ���� � ��������� �������, ������������ �����, ������� ������� �������������� ��������� � ����������. �� ��� ���������� ������� ��� ����������� ����������� � ��������.");
		sb->AppendLine("� �������� ��������. �� ������ �������� �����, ����������� � ����������� ��������� � �������������, ���������� 18 ������ �������� ��������� ��������, ���������� ��� ��������� ����� ��������������. ������ �������� ������� � ������, �� �� ����� ������� ��� � �����������, ���� �����, ��� �� ��������� � ������ ������.");
		
		this->description->Text = sb->ToString();
		this->nameOfArcana->Text = "18 ����� - ����";
	}
	else if (this->A->Text == "19") {
		System::Text::StringBuilder^ sb = gcnew System::Text::StringBuilder();

		sb->AppendLine("���������� 19 ������, ����� �������, ������ ����������, �� ����� ������ �� ����� � ������ ���������� ������������� ��������� �� ���� ��������� ������. ���� ��� ���� �� ����, � �������� ��������� � ����������, �������� ����� ����� � ������� ���������. ��������������� � �������� �� ������������ ����� �����, ����� ����������� �������.");
		sb->AppendLine();
		sb->AppendLine("��������� �������� �� �����:");
		sb->AppendLine();
		sb->AppendLine("� �������. ��� ����� ����������� � ����������� �������, �� �� ������ ������������� �� ������, ������ ����� ����� ���������� ���� � ����� � �� ����������. ������ ������������ � ���� � ����������, ������ ��������� �� ��������� ��������. ����� ������� ������ � ������� ������� ��� ���� �� �������� ������.");
		sb->AppendLine("� �������. ���������� 19 ������ ����� ���������, �������� � ����������. � ������ ���� ��������� ������������, ������ ����������� ���������� � �������. �� ����� ������ �� �����, ������������ ������ ��������� ��� �����, ��� ���� ����� �������� � �� ���� �����������.");
		sb->AppendLine("� �������. �������� �� ��� ���� ���������� � ������� ���� ������� � ��������� �������� ��������� � ����������. ������������ ��� ���������, ������ ������� ������ � ������ ����� ������ ��� �� ����-��. ����� ������������� ����� �������� � ������, ����� ����� �����, ������� ���������, ����� ����� ������.");
		sb->AppendLine("� ��������. ����� ������� ������ ������������� � ����� ����. ������ ������, �������� ����� ����� ����������, ������ ���������� ����� � �����������. �� ����� ������ � �����, ���������� � ����� � �����. �� ����� ��������� �����: ������� �����, ������ ��������, ����� � ���������, ����������� ������ � �. �.");
		sb->AppendLine("� ������������ ����������. �������� 19 ������� � ����� ��������������� �� ������������ ����� �����, � �������� �������� ��� ���������� ����. ���� ������� ����� ������������ � ����� �������, ����� �������������, ���� �� �������� ��� � ���. ��� ������� ������� ����� ���������� ����� ������������ ����.");
		this->description->Text = sb->ToString();
		this->nameOfArcana->Text = "19 ����� - ������";
	}
	else if (this->A->Text == "20") {
		System::Text::StringBuilder^ sb = gcnew System::Text::StringBuilder();

		sb->AppendLine("����� ������� ������� ����� � ����� � ���� �������������, �� ������� ���� � ��������� �������� ������ �����. ����� ��������� ������� �������, �������� �� ������ ��������� �����, � �������, ����� �� ��� ���������������. ���������� 20 ������ ������ ��������� �����������, ����� ��������, ������������� � ��������� ����� ����. ���� �� ������������ ������� ����� ����� �� ��������� ���� �����������.");
		sb->AppendLine();
		sb->AppendLine("��������� �������� �� �����:");
		sb->AppendLine();
		sb->AppendLine("� ����� ����� � ����. ���� ������� ��������� ����� �� ����� ����� � �� ����� ������� ���� ������������� �� ��� ��������. ���� ����� ��������� �������� ����� � �������� � �������� ��������������, �������� ��������� ������ �����, ������������� ��������� �����������. �� ������ �������� ����� �� ���������� ������ ����� ��� ����� ����.");
		sb->AppendLine("� ������ � �������. ���� ������� �� �������� ���� � ������ �������� ���������� �������� ����� ��������. ����� ���������� �� ��������� ���� � ������������ �������, ����� ����������� ���������� �� ���������. ���������� ��������� � �����, �������� ��������� ����� ��������� � �������, ���������� �������. �� ������ �������, ��������� �� ��� �������������.");
		sb->AppendLine("� ��������� �����. ���������� 20 ������ �������� �� ������� ��������� � ��������, �������� � ��������. ���������, ������� ���������� ���� �������, ������ �������� � ������ � ������ �� ������ ������ �����. �� ������ ����� �����������, ����������� � ���������, ��� ��������� ��� ������� ������������ ����������� � �������� �� � �����.");
		sb->AppendLine("� �������������. �� ������������ ������� ���� ������� ����� ���������� � ��������� ����, ����� ��� ���� � ������� �������� �����������. � �����-�� �������� ������ �� ������������ � ���������� ������ ������� ��������. ������� ������ ������� ���� �����, �� �������� ���������� ������� ������� ���������� ���� ������� � ���������� ������.");
		sb->AppendLine("� ������ � ������������. �������� 20 ������� ����������� ��������� �������� �������� ����������. �������� ����� ������� ������ �������� �����������, ��������� ������������� �������� � �����, ���������� ����� �����, ��� ������� ������ �� ������ ���, �� � ����� ������������. ��������� ������������ � ����� ����� � ������������, ����� ����� ��������� ������������� � ���������.");

		this->description->Text = sb->ToString();
		this->nameOfArcana->Text = "20 ����� - �������� ���";
		}
	else if (this->A->Text == "21") {
			System::Text::StringBuilder^ sb = gcnew System::Text::StringBuilder();

			sb->AppendLine("����� ������� ������� ���� ��� ����� �����, �� ����� ����� �� ����� � �����, ��������� ��� �������, �������������� � �����. ������ ��������� ����� ����� ������, �� ����� �������, ������ ��������� � ��������. ����� � ����� ������, �������� �������, ��� � ��� ����� ������� ��� ������������� �����. � ����������� ��������� � ����� ����������� �����������, ����� ��������� ���, ����� ������������ � �������� � ����������� ������. ��������� � ���������� �������� �������� ��������, ����� ����������� ������ ���������������� � �������� ���� ������ ������.");
			sb->AppendLine();
			sb->AppendLine("��������� �������� �� �����:");
			sb->AppendLine();
			sb->AppendLine("� ���������� � ���������. ���� ������� ��������� ��� �� ���� ��� �����������, ������� ��������� � ����� ��������, ������� � �������������. �� ����� �������, ����������� �������� �����������, ����� ���������, �������� ������� � ����� �����������. ���� � ������� �� �������� ����������� � ��������� ������.");
			sb->AppendLine("� ���������� ����. ����� ������� ����� ����� ���������� ����, ������ ���������, � ��������� ������, ����������� ��� ����� �������. ������ �������� � ��������������, ����������������� ��� ������� �����������, ������������ ����� �� ��������� �����. ����� ������ ����� ������ ������ � ����� ��������� �������� �������.");
			sb->AppendLine("� ���� � ������. � ����� ��� ����� ����������� �������, �������� ������� � ���� ������. �� ������ ��������� ����������� ����, �������� ����� � ������� ������� � �� ����� �������� ������� ��� ��� �����. ��������� ������� ������ �������� ������� ����������. �� � ����������, ������ ����� ���� ����� ���-�� �������� �� ����� �������.");
			sb->AppendLine("� ����������� ����������. ���� ������� ����� ��������� ����� ����� ���������� � ������� ��������� ��������� ������, �� ����� ���� ��� ��������� � ����������� ��������. �� ���� ����� ���������� �������� IT-����������: �����������, ������� �������������, ������, ����������� ����������� � �. �.");
			sb->AppendLine("� �������� ����. ���������� 21 ������ ����� ��������� ���: ����� ������������, ������� ������ � �������� ������ �����, ���� ����������� �����. �� ����� ��������� ��������� ���� �������, ����� ������ �� �������, ����� ��������. ��� ��������� �������� ������������� ����� ��������� � ������ ������ ��� �����, ���������� ������ ����� ����������.");

			this->nameOfArcana->Text = "21 ����� - ���";
			this->description->Text = sb->ToString();
	}
	else if (this->A->Text == "22") {
			System::Text::StringBuilder^ sb = gcnew System::Text::StringBuilder();
			sb->AppendLine("22 ����� �������� ����������� ��������, ������� ����� �����, ������ ������� ��������� ������������ � ������������ ��������. ��� �� ����� �� ����� ��� �� �����, ������ �� �� �����������, ������ ������ ������. �������, ��� ������� ������ ���� �� ���: ������� ������, �����, �����, ������� ������� ��� ����� ���, ��� �������. �� ��������� ��� ����������, �����, ����� �� ����. ������ �� ���������� ������ ����-��, �� �� ��� �� �������. � �� ��������� ��������� ��� ������������: ���������� ������� ���� ��������, � ������ � ��� �������� � ��������� ����.");
			sb->AppendLine();
			sb->AppendLine("��������� �������� �� �����:");
			sb->AppendLine();
			sb->AppendLine("� �������� �������. ���������� ����� � ������, ����������� ������ �������� �� �����������, �� ���������� �� ������� �� ������������� ������, ������������ ������ � ��� ������������. �������� �����, ��� ����� ������, � ����� ��� �����.");
			sb->AppendLine("� ��������. � ����������� �������, ��� ���������� �������, � ������� ������ �������. �� ����� ������������� ���������, ���� ������ �����������, ���� ������ � �� �������� ���������������� �����������.");
			sb->AppendLine("� ������. 22 ������� �������� ������ ��������� �������� � �����-�� �����. ������ ����������� ������ ����� ������ �� ����� � ���� ���������� �� ������ � ���������� ��� �����������. ���� ������� ����������� � ���������� ������.");
			sb->AppendLine("� ��������. ����� ������� ���� � �� �������� ��������� ���������� � �����, �� ������ ��������, ����������� � � ������� � ���������.");
			sb->AppendLine("� �����. ����� � ���� ��������, ����� ������� ��������� �������. ��� ����� ��������� ������, � ���� �� ���������� ���������� � ���������, ���, ������� �����, ������, ��� � ������.");
			this->nameOfArcana->Text = "22 ����� - ���";
			this->description->Text = sb->ToString();
	}
}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->D->Text == "1") {
			System::Text::StringBuilder^ sb = gcnew System::Text::StringBuilder();
			sb->AppendLine("��� ������ ������� �����, �� ���������� ����������, ��� ���� ������ ������������. ��� ���������� ������� �� ����� ����������� ���� ����������� � ����� �������. �������� ������ ������ �������� � ������ ��������������� ����, ��� ������ ��� ���������.");
			sb->AppendLine();
			sb->AppendLine("����� ����������� � ������� ����������:");
			sb->AppendLine();
			sb->AppendLine("� ����������� � �������. � ��� ���� ��, ����� ������� ������������� ������ � �����. ��, ��� ��� ����� �������: �������� � ���� ���� � �������� ������������ ����������� � �������, ������� ����� � ����� ������������. ���������� �������� � �����, �� ����� ������� ������, �� � ������ ������ ����� �� ����� ��������.");
			sb->AppendLine("� �������� � ���������. ����� ������� ���� �����, �� ������� ������ ������. �������, ��� ����� ��������� ��� �� �����. ������ ����� ������ ������ ������������� ��������, ������� ������� ��� ������ ���������� ��� �� ������ �������.");
			sb->AppendLine("� ���������� � ����������. ����������� ������ ���������, ������� �� ������ �������������� � ���� ����������� �������� � ������������. ��������� �������, �������� ������ ����������� ���������� ��� �� ��������.");
			sb->AppendLine("� ����� �������. � ������� ������ ����� ������� ��������, ������� ������� �������� � �������. �� ������� ����� �������� ���������, �� ����� �������� ���� � ������ ������������.");
			sb->AppendLine("� ����������� � ��������. ���� ��� ������, ��� ������� ���������� ������. ������� ������� �� �����, ����� ���������� ������ ��������� � ������ ��������� � ����. ����� ����, ���� �������, ���������� �� �� ������ ������ � �������� ����������� ������.");

			this->description->Text = sb->ToString();
			this->nameOfArcana->Text = "1 ����� - ���";
}
		else if (this->D->Text == "2") {
			System::Text::StringBuilder^ sb = gcnew System::Text::StringBuilder();
			sb->AppendLine("2 ����� ��������� ��� ���� ���������, ���� ������, ��������� �������� ����������, �������� ����� ��������, ����������� � �������� ������� � ������� �������������. ���������� ��������������� ��������� ���� �������, ������������ � ����� �����. ���� ������ ���������� � ������� ����, ������ ��� ������ ����� ������������� �� �������, � ������ ���.");
			sb->AppendLine();
			sb->AppendLine("����� ����������� � ������� ����������:");
			sb->AppendLine();
			sb->AppendLine("� �������� � �������� ��������. � �������� ���������� �� ������ �������� �������� �������������, ����� ������, ��������� �������� ���������� �, �������, ������ ����. ��������� ���� ���������� ��� ������������� �������� ������, ������� ������� ������� ��������.");
			sb->AppendLine("� ����� ������ ������. � ���������������� �� ��� ��������� ����� ������������ ��������, �� ��� ������ ������ ���. ��������� �����, �������� ����, ������������� ���� �� �����, � ��������� ������ ������ ������ ����.");
			sb->AppendLine("� ���������� � �����. ���������� �������� ����� �������� � ������, ������� �������� ��� ���������. ���������� ������������� ����� �������� ��� ������� ������, ��� �������� ����� ���������, �, ������ �����, �����������, �������.");
			sb->AppendLine("� �������� �������� ������. �������� �� 2 �������� ����� ������� ��� ������� ������, ������� ��� ����� � ������� � ���� � �����. �������� ���������� ������ � ������� ������� ������ � �������, ������, ������, �������� � ���� �������� � ���������� �������.");
			sb->AppendLine("� �������� ��������������. �� �������� ������� 2 ������ ���������� ��������� �����, ������ ���� � ����������� ���������. ��� �������, ��� ���������� �� ������ �������� �����. � ����� ������� �� ������ ����� �������������� � ����� �������� �����������.");

			this->description->Text = sb->ToString();
			this->nameOfArcana->Text = "2 ����� - ��������� �����";
		}
		else if (this->D->Text == "3") {
			System::Text::StringBuilder^ sb = gcnew System::Text::StringBuilder();
			sb->AppendLine("3 ����� ������� ������ ����� � �������� �������� ������, ������������ ������, ��������, ������, ���������� � ������. ����� ������� ��� ����� ��������� � �������� � ����� ����� ��������� �� ���, ������ ����� ����� �� � ��� �� ���������. ������� ����������� ��� ������ ��������� ���� � ������ � ������������� ��� ����������� ��� ������� ���������� �������.");
			sb->AppendLine();
			sb->AppendLine("����� ����������� � ������� ����������:");
			sb->AppendLine();
			sb->AppendLine("� ��� � �����. ��� 3 ������ ����� ������� �������� ������� � �������� ��������������� � ������� �����. ������� �������� ��� ����������, ���������� ���� ��� ������ ���� � �������� �������. ���������� � ������� ��� ������� �������� � ��������, � �������� ������� �� �������� ����� �����.");
			sb->AppendLine("� ������� � �������. ���� �� ��� �������� ��� ������������ ���������, ������, ��� ������� ����� ������� ��������� ����� � ��������. � ���� ������� ������, �������, ��� �� �������� ������ ������ �������. �� �������������� �� ������ � ������� ����.");
			sb->AppendLine("� ������ � ��������������. ��� ��� ����� ��������� ������ �� ���������� � ��������� ��������������� ���������. ��������� ����������� ������, �������� ��������� � �������� � �����������, �������� �� � ������ �����������.");
			sb->AppendLine("� ��������� � ������. ��� ����� � 3 �������� ����� ���� ��� ������ ������ ���������� �������, ����� ������������ � ��������� ���������. �� ������ ������ ����� ��� ���� ��� ������ ����������� ���������, ������� �� �����.");
			sb->AppendLine("� ������� ����������, ������ � �������. ��� ����������� ����� ���� � ������� � ������ � ��������. ��� �������, ��-�� ������������ � ��������� ����� ���� �� ����� ���������� ������. ���������� �������� ����-�� ����� �������� � ������� ��� � ��� ����� ������ �����. � ��� ����� ������ ������ � �������������� � �������������� � �������� ������� ���� ����������.");
			sb->AppendLine("� ���������� � �����������. ��� �������� ����� ����� �������� ������ ������. �������� �� ������ �� �������, � ���������� ���� ���� ����������� ���������� ������ � ��� ����. ��������� ����������� ����� � ������������� ������, �� �������� �� ���� �������, � ��� �� ������ ��� ��������� �������. ����������� ��� ����.");

			this->description->Text = sb->ToString();
			this->nameOfArcana->Text = "3 ����� - �����������";
		}
		else if (this->D->Text == "4") {
			System::Text::StringBuilder^ sb = gcnew System::Text::StringBuilder();
			sb->AppendLine("���������, ����� 4 ����� ���������� ������ � ��������� ����, ��� ����������� ����������� ��������� �� ���������. ����� ������� ������� �������, ������� �� ���������� ����������, ����� ������� ���������. ��������� ��������������, ��������������� � ���������� ������� ���� � �� ��� ���� � ��������� ����� � 4 ��������. ��������� ������ ������, ����� � ����, ����� ������ �� ������ ���������, ��� �����, ��� � ���, ��� ��������� ��� ��� ����������������.");
			sb->AppendLine();
			sb->AppendLine("����� ����������� � ������� ����������:");
			sb->AppendLine();
			sb->AppendLine("� ����������� ����������. ���� � 4 �������� �������� �������� �����, ������������� �� ���� ������ ������. ������, ���� ���-�� �������� ����������� �� ���� � ��������� ���������� ������ �����������. � ��� ����� ���� ��� ����������, ��� � ��������� ��������.");
			sb->AppendLine("� ������������� � �������. ������ � ������������ �������� 4 ������, ����� ��������, ��� ��� ������ ������� �� ���. � ����� �������, ��� ��������� ����� �������� � ���������� ������ �����������. � ������ �������, ��� �����, �� ����� �������� ����������� ������, �� ������������ ������ ����� ������������ �����.");
			sb->AppendLine("� ׸��������. ����������� � ������, � �����, ����� ������� ������ ��������� ��������� ������, ������ � ��������� ������. �������� ����� ����������� ���� ������ ��������, ���� �� ������� �� ���� ���� �������, �� ���� �� ������ ���������.");
			sb->AppendLine("� ���������� ��������. �������� � 4 �������� ���������� �������������� ������������� ������, ��������� ����������� � ��������� ������. ����� �������� ���������� �����, ������� ����� ������������ � ���� � �����-�� ���� ������������. ��� ������� ���������� �� �������� ��������� � ��������� �������.");

			this->description->Text = sb->ToString();
			this->nameOfArcana->Text = "4 ����� - ���������";
		}
		else if (this->D->Text == "5") {
			System::Text::StringBuilder^ sb = gcnew System::Text::StringBuilder();

			sb->AppendLine("5 ����� ������ ����� ������� � ���������� �������� � ��������, ������� ������ �������������� � ������ � ������ ����� �����������. ����� ������� ����� ���� ��� ��������, ��� ���� ���������� ������������ �����, � ��� �������� ������� � ������������� ��� ������ ���� ��������. �� ������ �������� ����� ��� ������� ����� ������� �����������, � �������� �� ������ �������� ������.");
			sb->AppendLine();
			sb->AppendLine("����� ����������� � ������� ����������:");
			sb->AppendLine();
			sb->AppendLine("� ���� � ������. ���� ����� ������������� ���������� �������� � �������� ����� ����������. ������ �������� ���������� ������ ����, 5 ������� �������, ����� �� ������ � ��, ��� ��������, � ������������.");
			sb->AppendLine("� ������� � ���������. ����� ����� ������ ������ ������ �� ��������, �������� ������������ ����� � ����� ������. �������� ������������� �������, ��������� � ���������� ����, ������� ���� � �������. ���� ����� ������� �������� �������� ����� �� �������� ������ � ����� ��� �� ��������� ���������.");
			sb->AppendLine("� �������� ��������. ���� �� �����, ��������� ���������� 5 ������� � ��� ����������� ������� �������� ������ � ��������. ��������� ���������� ������������ � ����������, ��� ������ �� ������� ������� �������.");
			sb->AppendLine("� ���������� ����������. ������� �� ������� ���� ���� ������, ���� ���� ������ ������� ������. ������ ��������� �� ��������� � �����. �� ������� ������� � ������� �� ����������� ������ ����� ������.");
			sb->AppendLine("� ��������. �� ����������� � ��� �����, ������� �� �������. ������ �������������, ������� �������������, ��������� ��������� ����������. ����� �� ������� ��������������� ���� ������� �� ���������� ����� ���������.");
			sb->AppendLine("� ����������� �������������. �� ���� ���������� ����� ������� ����� �� ������ ������, �� � ��������. ���� ��� ������ � ���� 5 ������ ������������ ����� �������������, ������� �� ������ ������������� ����������. � ��� ����� ��� ������ ������ ��� �������, ������� ������ �� ���.");

			this->description->Text = sb->ToString();
			this->nameOfArcana->Text = "5 ����� - ��������";
		}
		else if (this->D->Text == "6") {
			System::Text::StringBuilder^ sb = gcnew System::Text::StringBuilder();
			sb->AppendLine("6 �����, ������ �����, ������� � ������ �������� � ����� ����� � ������� �����. ������� ������ ���������� ������� ������ �� ���� �����������: � ������ ����, �������, ������ � ���� ���������. ����� �������, ������ �����������, �� �������� �������, ���� ������, �� �� �����, ���� �����, �� �� ��� �����. ��� ����� ������������ � ����� ��������� ����������, ����� �������� ���������, � �� ������ �������� ����� ������ ����� ������� ���������� ������� � ����������.");
			sb->AppendLine();
			sb->AppendLine("����� ����������� � ������� ����������:");
			sb->AppendLine();
			sb->AppendLine("� ������ � ���� � ����. �� ������ ������������� � ���� � � ����������. ������ ����� ������������ �������� ��������� � ����� �����, �� ������� � �� ��������� ���� �� ��������� ������. ������� ��� ����������� �� � ����������� � ���. ���, �� ����������� ������� ����������� � ���, �������, ������ ��������� ������� � �����.");
			sb->AppendLine("� ������ � �����. ������������� ����� ������ ������ ��� ��������� ����������, �������� ������� � ��������� ������ �����. � ����������� ������ ������ �������� ������ ����������. ������ ������: �� ����� �� ������ � ������, �� �������� ������������ ������ � �����. �� �������� � ������� ��������� ������� � ���������.");
			sb->AppendLine("� ����������� ������. ����� ���� ����� ������, �� ������������� ������ ����������. �� ���������� ��������� � ���� �������, ������������ � �������������. ��� �� ��� �������, ������� ������� ��� ����������? ���������� ���� ����� ����������, �� ������ ������� ����� ������� � ���������. ���� ������, ��� ��������� ���� ������ � ����� �������������.");
			sb->AppendLine("� �������������. ���� ���������� � ������ ���������, �� ����� ���� ������. ����� ����������, �������� ������� ������������ ��������� � ��� ��������������. ����� ��������� ������������ ���, ��� ��� ������, � �� �������� � ���, ���� ������ �������.");
			sb->AppendLine("� ����������. �� ��������� ��������� ���������� �����������. ���������� ������������� ���� ���������� ����. ������������ ����� ������, �������� ���� � ������ ���������� � ������������. � ��� ���� ��� � ��������������, �� ������ ������� �������� �������. ��������, ������� ��� ������ ����� ���� ����� �����.");
			sb->AppendLine("� �������. �� ������� ������������� ��������� � ������� � ������������ ����� ����� � �����. �� ��� ���������� ������ ��������� ������ ������ ������� �������� ������ ��������. �� � ��� ���������� ����, ������� �� ��� ������, ��� ���� ����� �����. ��� ���������� �������� ����������� ���� ����� ��� �������� ���� ���������� ���� �������� ����� ������������� � ����� ��������������.");

			this->description->Text = sb->ToString();
			this->nameOfArcana->Text = "6 ����� - ���������";
		}
		else if (this->D->Text == "7") {
			System::Text::StringBuilder^ sb = gcnew System::Text::StringBuilder();
;
			sb->AppendLine("����������� 7 ������� ������������� ������������ ������������� �������, ��������������, �������� ���� ���������������� � ���������� ������������ �����. ����� ������� ������ ���� ��������� � ����, ������ � ���, ��� ����� ��������� ����������� ���� �����, ����������� �� ������ ������. ����� ����, ����� ������� �� ����� ���������, ���������� ������� � ������� ��������.");
			sb->AppendLine();
			sb->AppendLine("����� ����������� � ������� ����������:");
			sb->AppendLine();
			sb->AppendLine("� �������� � ������. ���� ����� ������ ���� ����� �������, ������������ �������� � ��������. ��������� �����������, �� �� ������ ����� ��������� �� �������������, ������� �� �������, ������ ���������� �������. ������ � ���� �� ������� � �� ���������� ������������ �������.");
			sb->AppendLine("� ������ � ���������. ��� ���������� ����� ��������� ���������� ������� � �������� ������. ���������� �������� ������� � ����������� � �������������. ������������ ������� �������� ���������� ���������, ����������� �� �� ��� ���������, � ��� ������ ��������� ����.");
			sb->AppendLine("� �������������. ���� �� ������� �����, ������� �� ������ �������� � ������ ��� �����. � �������� ������ ��������� ������������� ����������� ������ ����� ����, �������� ��������, �������������, �������� �� ������ ��������� � ������.");
			sb->AppendLine("� ��������. ������ ������ ����������, �������� ��� �������� � ����������� ������� ��� ���������� � �������� 7 ������. ������ ������� ��������� � ������� � �� ������� ���� �������, ��� ����� ������� �������� ������ �� �������.");
			sb->AppendLine("� ����������. �� ��������� ����������� �����������, ����� ��������� ���� �������������� � ������� �����������. � ���� �������������� ������� ��� ������, �� ������ ������� �����������. ������� �� ��������� ������ ������������ ����� ����, ���������� �������� ������.");

			this->description->Text = sb->ToString();
			this->nameOfArcana->Text = "7 ����� - ���������";
		}
		else if (this->D->Text == "8") {
			System::Text::StringBuilder^ sb = gcnew System::Text::StringBuilder();
			sb->AppendLine("������� �����, ��� �������� �����������, ������ �������� ��� ������, ������� ������ �� ��� ���������, � ����� ����� ������ � �������� ����������. ������ ���, ������ ������� ����� ��� �������� � ����� ��� � ���������� � �������� ����. ���������� ���, ��� ������������ ��� �������, �� ����� �� ������ � �������, � ������� � ������� ���� ����. ������ ��� ��� ������ ���� �������, � ��� �� ������ ������, ��������, ������� ����������.");
			sb->AppendLine();
			sb->AppendLine("����� ����������� � ������� ����������:");
			sb->AppendLine();
			sb->AppendLine("� ����� � ������. ���������� ��� ������� � �����, � �������� �� �������, ������, ��� ����� ��������� ����� ����� �����������. ������� ������������ � ���� ������� ����� ������� � ������� ��, ��� ��� ������������.");
			sb->AppendLine("� ����������� � ���� ����. ������� ����� �����, ������������� ���� �����, ���������� ���������� � ����������� ����������� ������� ����������. ��� ������ ������ ������, ��� ��� ������������, ��� ������ ������ � ���� ���������� �� ���� �������. ������� ��� � ��� ����� � ��, ��������� ������ ����� � ������ ��������������.");
			sb->AppendLine("� ����� �������. ���������� �� ����� �������, ��� ���� �������� �����, ���� ���������������. ���� �� ��������������� ������ ����� �������, �� ��������� ����� ������ ����������� ��� � ���������������. � ���� ���� ����� �����������, ���� �� ��� ��������� �� �������. �������, ��, ��� �� ���� ����, �� � �����, ���� ���.");
			sb->AppendLine("� ��������������. �� ����� ���� � ��������� ������� �������, ������ ����� ����� ��������� ������ �� ���� ����� ��������������. ����� ������ �������� �������, �� ������� �� �����, �� ������ ��������, �� ���� ��������.");
			sb->AppendLine("� ����������������. ���������� �������� ���� ���������� ���� ����. ����������� ���������� �� ������, ������������ �� ����� � ��������. ������ ���������������� �������� ��� ����� ����������� ���������� ���� ��� ������� � ��������.");
			sb->AppendLine("� �������������. �� �� ������ ����� ����������� �������, ����������� ��������, ����������� ��������� � ��������. ��� ��������� � ��� � ������������ �� ������ �������� ���������, �� ������� ����� ������� ����� ��������������. ������ �������, �� ���������� ��������, �� ���������� �������� ����-�� �� ��������� ������ � ��� �� ���� ������ �����.");

			this->description->Text = sb->ToString();
			this->nameOfArcana->Text = "8 ����� - ��������������";
		}
		else if (this->D->Text == "9") {
			System::Text::StringBuilder^ sb = gcnew System::Text::StringBuilder();
			sb->AppendLine("9 ������� ���������� ������� � ���������� �������� ��������, �������� �������� � ���������� ���������� �����. ������� ����� �� ���������� ���� ����� ������ ��������� ��������� � �������� ���� ������� � �����������. ��� �� ���������� ����� ������������� ���� �� ���������� ������� ��� ����� ������ ������, ������ ���� � �������� ���������.");
			sb->AppendLine();
			sb->AppendLine("����� ����������� � ������� ����������:");
			sb->AppendLine();
			sb->AppendLine("� �������� ����. ��� �� �� �� ����������, ����� �� ������� � ���������� �� ��� ���������� �� ����� ����. �������, ��������� �� ��� ������� � ����������� ���� � ������ �������, ����� ��� ���� �������� ����� ��������� ������������ ������ � �������� ���������� ��������������.");
			sb->AppendLine("� ���� ������. ������� �������� ��� ��� ��� � �� ����. ���� ������� ������� � �����, ������������ ���������� ��������� ����, ���������������� ���������� ������. ������ �� ����� ���������� � �����������, ������� ��������� � ����� ������ � ������ ������.");
			sb->AppendLine("� ���� �����������. ���������� ����� ����� ������ ���� ��������� �����������. ����� ����� ������� ��� � ������ ��������, ��������, ��� ���� ����� ������ � ����� �������. ������ ������ ��� �� ������� ����� ����� �����, ������ ��������� � ������� ��������.");
			sb->AppendLine("� ������ ����������. ������� ���������� ����� � ������, � �����-�� ������ �� ������ ������ �������� ���, ��� ������. ������� �����, ������� ����� ����������� ���������, ����� �� �����, ��� ������ � �� �������� ������ ������� �����.");
			sb->AppendLine("� ������� ���� � �����. ������� �������� ����� ���� � �����, ������� ���������� �� ����� ��������� ����. ��������, ����� ����� ��� ���� ��� �� �������� ������������, �� �������� ���� � ������� ���� ������ ������������ ����� �������� ������.");
			sb->AppendLine("� ������������ ���. � ������� ����� �� ������� ������� ������� ������� � ������� ����� ��� ������� ������ � ���� �����������. ������ ��� ������ �������� � � ������������ ����. �� ����������� �������, ���������� ����� ������������ �����. �������, ��� �� �� ���� � ���� ����, � � ����� ����� ����� ������������ ������������.");

			this->description->Text = sb->ToString();
		}
		else if (this->D->Text == "10") {
			System::Text::StringBuilder^ sb = gcnew System::Text::StringBuilder();

			sb->AppendLine("10 ����� ������ �������");
			sb->AppendLine("10 �����, ������ �����, �������, ��� ��� ���������� �����. ������ ���� �� ������ ����, � �� ������ ������ �� ���� �������� �� �� ����� ��������������. ������ ������� ��������� � ���� ����� ����������� �����������, � ��� ��� �� ����������. ������������ ����� ����� ���������� ��� �� ���������, � ����� �������� ���������� ���������. ��� �� ������, ����� �������� ������ ����������, ��������, ������� �� ����������� � �������, ��� ����� ����� ����������.");
			sb->AppendLine();
			sb->AppendLine("����� ����������� � ������� ����������:");
			sb->AppendLine();
			sb->AppendLine("� ������� ���������. ��������� ���� ����, ������� ��������� ��� �����. �������, ����� �� ����� �������, ��� �� �� ����������� ������, ������ � ������, ������� �� ��������� �� ������, � �������������� ���������� ��, ��� � ��� ��� ����.");
			sb->AppendLine("� ������������� ������ �������. �� ������ �� ���� �� ������ � ������ � ������������� � �� ����� ������ �� ����. ��� ����� �������� ��� ���� � ���� �����, �� ����� ����� �� ��� ��������? ������ ������� ������ ��������� ��������� � ���� ����� ������ ������� ������.");
			sb->AppendLine("� �������� �������. ��, ��� ��� ���������� ���������, �� ������, ����� ����� ������ ��������� ������� � �����, ����� ������� �������� � ��� � ����. ����� ������ ���������� ������� ����� � �������� ������� ��������� ���.");
			sb->AppendLine("� ���������� � ���������. ������� 10 ������ ����� ����� ������ ���������� � ���� �����, �� ��������� ��� ���, ����� ����� ����� ������������. ������ ������� ������ ��������, � ����� �������� ��� ����������� �� ���������, �� �������.");
			sb->AppendLine("� ��������������. �������� ����� ������ ����� �������� ��� ��������������� ����� � �������� ���������. ��� ����� ��������� �������� ����� �������� � ������� ������������ ��. � ������� � ���������� �����������, ����� ������������� ����.");

			this->description->Text = sb->ToString();
			this->nameOfArcana->Text = "10 ����� - ������ �������";
		}
		else if (this->D->Text == "11") {
			System::Text::StringBuilder^ sb = gcnew System::Text::StringBuilder();

			sb->AppendLine("11 ����� ����");
			sb->AppendLine("���������� 11 �������, ����������� �������, ������� ����� ���� ���������� � ����� �����. ��� ����� �������� ��������� �������� ��� ���� ������ ������������� � ������������, ���� ������� � ��� �����������������, �����������������. ������ ���������� ����, ������� ������ ��������� ���������� ���� ������ ������, �������� �� ������� ���������� � �������� ���������. ��� ������ ������� ���������� ������ ��� �����, ������ � �������� ���������� ���� � ��������� ���������� ������ � �������.");
			sb->AppendLine();
			sb->AppendLine("����� ����������� � ������� ����������:");
			sb->AppendLine();
			sb->AppendLine("� �������� ���� � �������� ����. ���������, ��� ������ �������� ����� ��� �������, ��� � ����� �������, �� ������� ������ ���� �� ������ ��� ���������� ���������. ������ ���� ������ �� ����� ������������, ����� ������� ����� ���� ��� ������ � ���������� �����, ����������� � ��� � ��������� �������� � �� �����. ��� ������ ������������� ���, �������� �������� ���������� ��������, ������������� ������ ����.");
			sb->AppendLine("� ����������. ����, ���������� ����������� ����, ������ ��������� ����������������� � ������������. ��� �������� ������ ����� ������� ��������� � ���� � ���������� ������� ��� � ������������ �����, ��� � � �������� �����������. �� ������� ���� �� ������ � ������� ������ �� ������, ����������� ����� � �������� � ����� � ����� ��������� ����������� � ���� ������ ��������.");
			sb->AppendLine("� ������ � ��������. ����������� ���� � ������� ���������, ������� ��������� �������� � ���� ������ ���. ������ ������ � �������� �������� � ��������� ��������� ��� � ���������� ��������������� �����, ���������� � ��������� ����������. ������ ����� �������� ����� � ����� �������� �������� ������ ��������, ������� ����� ������������ � ���������������.");
			sb->AppendLine("� ������������� � �������. � ������ ����� �������, ���������� ������� �����, ����� ��������� ������ � ������� ���� ����������, ���� ���� �������������� �������. ������� ������ ����� ��������� ������ ��������, ����� ������� ���� � �����. ������� �������, ��� ������� ����, ����� ��-��� ��������, ����� ��������� ����� ��������� ����� � ������� ������� ���� ����������.");
			sb->AppendLine("� ���������. �������, ����������� � ������ � ����, ������ �������� �����. ������� � ������, ���������� ������� � ��������� � ������ ���� ��� ���������� ����� ����������. ��������� ������� ��������� ����� �������� ������������ ������� ��������� � ��������.");

			this->description->Text = sb->ToString();
			this->nameOfArcana->Text = "11 ����� - ����";
		}
		else if (this->D->Text == "12") {
			System::Text::StringBuilder^ sb = gcnew System::Text::StringBuilder();

			sb->AppendLine("12 ����� ������ ����� ������� � ������������� ����� ����������� ��������������, ���� ����� ��� �������� ��������. �� ������ ��������� ��������, ������������� �������� � ���� � �������� �� �� ������� ������. ������ ������ ������������ �����, ����� �������� ����� ������.");
			sb->AppendLine();
			sb->AppendLine("����� ����������� � ������� ����������:");
			sb->AppendLine();
			sb->AppendLine("� ����������� �������������. � ��� ���������� ������ �� ���, ������� ������� ���������� �� ��������� � ��������. �� ����������� ��� � �� ��������� ���������� ������ ����. ������ ������� � ����, ����� ����� � ���������� �������� � ����� �������.");
			sb->AppendLine("� ����� ��������������. ����� ���� ��� �� ����������� ����������� ������� ����, ������������ ����� �� ����, ���� �������� �� ������ � ���. ��� ������ ���� ���-�� ������������� ��������. ����� ������� � �� ��������� � ����� �� �����������, �������� �� ������ ������� ��� �����.");
			sb->AppendLine("� ������������ � ������������ ������. ������, ��� ������ � ���� ����� �� ���������� ��� ������ ���. ����� �������� ���������� ��������� �� ��� ����� ������. ���������� � �����, ��� � ������, ������� �����, �� ��������� ����� ������. ������� �� ���, ����� ��� ���� ������ ���� �����������, � �� ����� �������� ������� ������ ������.");
			sb->AppendLine("� �������� � ����������. �� ������� ������ ������� � �������, ��������� ��������� �������� ����������, � ������� � ������ ��������� �� ���������. �������������� ����������� � ����������, ��������� ���, ��� � ���� ��������� ��� ������� ���������� ��������. �������� ����, ��� ��� ������, ������� �� ������, �� ����������� ����������� ��������������������.");
			sb->AppendLine("� ���������� ����������. �������, ��� �� �������� ����� �� ����� ��� ��������� ����. �� ��������� ����� ���� � ������ �� ������������ ����������. ����� ���������� �������� ���� ���������, �� ����������, ����� ��� �������� �� ���. ��������� �����, �� ��������� �������� � ��������������.");

			this->description->Text = sb->ToString();
			this->nameOfArcana->Text = "12 ����� - ���";
		}
		else if (this->D->Text == "13") {
			System::Text::StringBuilder^ sb = gcnew System::Text::StringBuilder();
			sb->AppendLine("13 ����� ������ ����� ������������� ����� ��������� ��������, �������� ������������� � ��������� � ����� ��������. ���������� ����� ������ ��������� �������� ��� �����, ��������� ����������������� ������ � �������� � ���� ������. � ����� �� �������� ������������, ���� � ������� �������� � ���������������� ������ � �������� � ����. �������, �� ������ ��������, �� ��� �� ��������� ������ �� ���.");
			sb->AppendLine();
			sb->AppendLine("����� ����������� � ������� ����������:");
			sb->AppendLine();
			sb->AppendLine("� ������������� ���������. �������� ����� �������, ������� ���� ��������� ��������, ������� � ��������� ����, ��� ������ ����� ������ �������� �� ������ ���� � ���������. ��������� ������, �� �� ���� ���� ����������� ������������� � ��������� � ��������� �� �� ���������.");
			sb->AppendLine("� ����� ��������. �������� ��������� ����� �����, ��������� ��������� ���������, ���� � ��������� ������ ������ ������ ��-�� ������ ��������. ������, ������ ����, ��� �������� ������ ��� ����. � ��� �� ��������� ������ ����������, ����� �������� �� �����. ����� ����������� ����� � ���������� �����������.");
			sb->AppendLine("� ����� ��������. �� ������ �������, ������ ��� ��� ����� ����, ���� ������ ����� � ������. ������ ������ ������, ��������� ����� � ���, ��� ����� �� ���� � � ���, ���� �� �������� �������. �������� ���� �� ����� �� ���������, ������� � ������. ���������� �� �����, ��� ��� �� ��������. ����������, ��� ��� ��� �����, � ��� �������������.");
			sb->AppendLine("� �������������. ������ ���������� �������, ��������� ����� � ������� �����. �� ��������, �� ���������, �� ������� ���������, �������� ����������, � ������� ������ �����.");
			sb->AppendLine("� �������� ��������. ������� �������� ����� � ������������ ����� ������� ��������� � ���� �������� � ������. � ��������� ����� �������, � �������� �� ��� ���� ����������. ��������, ��������� ����������, �� ���������� ��������, � �� ��� ������ ����� � ��������� ���������.");
			sb->AppendLine("� ����� � ������. ��� ������� ����� �������, �����������, �������, ������. 13 ����� ���� ����, ��� ������ � ��� ���� ������. ������ ����� ��������� � ���������, ������� ������ ��� �������� ���, ��������� � ���������� � ����� �����. ����������� ������ ����� ����������, ��� �������� ���������� ������ ������.");

			this->description->Text = sb->ToString();
			this->nameOfArcana->Text = "13 ����� - ������";
		}
		else if (this->D->Text == "14") {
			System::Text::StringBuilder^ sb = gcnew System::Text::StringBuilder();

			sb->AppendLine("14 ����� ������ ����� ������� � �����������, ���������� � ������������. ������ �������� ����� ���� ���������� � �����������, ����������� ���������� � �����������������. ��������������, ��������� ����������� ��������, ���������������� � ���� �� ������� �������. � ���������� �� ������ ������� ������ �� ���� ������ ����� � ������ � ��������.");
			sb->AppendLine();
			sb->AppendLine("����� ����������� � ������� ����������:");
			sb->AppendLine();
			sb->AppendLine("� ���������� ������� � �������� ������ �����. ��� ������� ���������� ������ ��������� ����������. ��������������� ���� ����� � ���������, � ����� ������ �� �������, � � �����, ��������, ������������� ������� ����� ������. ������� � �����, �������, ���������, �����������, �������� � ������.");
			sb->AppendLine("� ������������ � ��������. ���������� 14 ������ ������ ������������ ����������� ��� � ������������, ��� � � �������� �����. �� ������� ������������ ������ �� ���, ��������� ����� ����� ����� � �����.");
			sb->AppendLine("� ������������ � ����������. � ������ �������� ������� �� ������������ ��������, ������ ������������ ��������. ������� �� ���, ���� � ��� ��������, ��� ����� ��������������� ������ �������. ������ ������� �� ���, �� �������� ���������� ��� ������� ������������.");
			sb->AppendLine("� ��������� ������. ������������ �� �������� ��, ��� �� ������ ��������� �������� � ���� �������. ��� ������� � ����� �� ������ ���� ��������� �������. �� ����������� � ���� � ����� ������������ � �������� ���������� � ��������, ��� ���������� ������ �����.");
			sb->AppendLine("� ����������� � ��������. ����������� ������� ��� �����, ������ �� ��������� ��������� ���������� ������ �� ��������. �� ����������� ������� ���������, �� � �� ����������� ����������� � ������ ������� � ������ ��� ��������.");
			sb->AppendLine("� ��������� � �����. ��������� ��������� ��� ��� ����� ����� ���������� �����. � �������� ��� ����� ���� ��� ������, ������ ����� �����, ���� �� ������ ���� ����� ���������� ���������. ������ �������, ������ � �����, �������� ������� ������.");

			this->description->Text = sb->ToString();
			this->nameOfArcana->Text = "14 ����� - �����������";
		}
		else if (this->D->Text == "15") {
			System::Text::StringBuilder^ sb = gcnew System::Text::StringBuilder();

			sb->AppendLine("15 �����");
			sb->AppendLine("�������� ������ ��������, � 15 ��������, ����������� � ������ ����������� ������ �����, � ������� ��� �������� ������ ������� ��� �����, �� �� ���������, � ������ ������������. ���� ���� ����� ����� �� ������ ��� ������ ��������, �� � ��� ���, ��� ������������ � �������� ����������� � �� ����� ������� ����, �������� ����� ������� ��� ������� �� ������������� � ����������. ���� �� �� �������� ��� �����, �� ������ �������, ������ � ���������� � ������ ������������� � ���������� ������� ���� � ������ ���������� ������, ����� � �� ����� �������������� � �������.");
			sb->AppendLine();
			sb->AppendLine("����� ����������� � ������� ����������:");
			sb->AppendLine();
			sb->AppendLine("� ���������� ��� �������� � �������. �������� ��� �������� ����� �������, ������� ������� ����������� ��� �������, ������ ��� ������� �������� ���� ����������. �� ����� �� ���� ��� ��������, ����� �� ��������� ��������� � ���� �� ������ � ���������, ��� ���������� ����������. ������� ���������� � ��� ��������� � ��������� �� ����� ���� ���.");
			sb->AppendLine("� ���������������. ������ � ����������� ����������, ������� ����� ���� ��� ����� ����� ����������, �� �������� ��������� ������ ��� �������. ������� � ��������� ����� �������� � ����, ��� ���� ����������� ���� ������� ��� ��� ����������������� � ��������.");
			sb->AppendLine("� ������� ���������� ������. ����� ����� ������� ����������������� �� ����� ������, ������ ������������� � �������� ��������, ��� �������� ��������� ��� ������. ���� ������ � �������� ��� ����� ������ �������� �� ������� � ���������� � ��������, ������, �������������.");
			sb->AppendLine("� ����� �������� ����. �������� ���� ����������� �������������, ������� ������������ �� ��������, ���������� � ���������������������. ��� ������� �� �����������, � ����� ����������� �������� �����������. ������� ���� � �����, ������������ ������� � ������ ����� ���������.");
			sb->AppendLine("� ������� �������������. ������ ��������� ������� �������� ����, �� �������� ���������, ����� ��������� ������� ������������ � ������ � ������, ��� ����������� ������� �� ��������. ��� �������� ��������� � ������, � ��� ������� �������� ������ ���, ����� ��� ���������.");
			sb->AppendLine("� ����� � ������� ������. ������� ������ ���������� ����� ����� ��������, ����� �������� ��������� ��������, �������������� ��� ���������. � ���� �� ���������� ���������� ���������� ����, �������� ����������� �����������, ��������� �� ������ ��������� � ��������.");

			this->description->Text = sb->ToString();
			this->nameOfArcana->Text = "15 ����� - ������";
		}
		else if (this->D->Text == "16") {
			System::Text::StringBuilder^ sb = gcnew System::Text::StringBuilder();

			sb->AppendLine("16 �����");
			sb->AppendLine("16 �����, ������ �����, ������� � �������������� �������� ���������, ����������� ��� �������. � � ����� �� �������� �� �� ����������, �������� �� ����� ����������. ������� ��� ����� ���� � ����� �������: ����� ������ �� �����, ������ ���������� ����� ������������, �� ������ ���� ����, ����������� ���������� � ���������. �� ��������� � ������ ����������, �� ������ ����� ������ ����� � ������ ��������� ��� ���������.");
			sb->AppendLine();
			sb->AppendLine("����� ����������� � ������� ����������:");
			sb->AppendLine();
			sb->AppendLine("� ����� �������. �� ����� ������� �������� ������� � ���������, � ��� ����� ������ ������. � ���� ���� �� ���������� �� ������ ���, � ��������� ������� �� �������� ���������, ������� �� �� � ����� ������. �������� � ��� ���� ��� ����������� ������ ��� ��������� ������ �� ����� ��������.");
			sb->AppendLine("� ����� ������. ����� ������, ���� ��� ����������� � ��� �����������, �� ����������� ����, ������� ���������� ������, ����� ����������� � ����� ����. ��� ����������� ��������� � ���� �� ������ � ������. ���� ������� ��, �� ������ �������������� � ������ ����� ��������� ����.");
			sb->AppendLine("� ����� �� ��� ������. �� ����� �������� �������� ���� �� �������. ����� �����, � ����� �������, �������� �� ������, �� � ������ � ������ ������� ��� �� ���� ��� �������. ���� ��� ������ ����� �����, � �� ������ ����������� ���� ����� � �������������.");
			sb->AppendLine("� ����������� � ���������� ����. ����������� � ����������� �����������, �� ��������� ������������. ���������� ����� ��� � ������������ � ���� � ���������� �������. � �� ������ ����������� ��������� ��� ��������������� ���������.");
			sb->AppendLine("� ������������� �����. ������� � ������������� �����. �� ������� ��� ����������, ����������� ��������� ���� �����, �, �������, �� ������� ��, ��� ��������� �������. �������� ���� � ����� ������������� �����.");
			sb->AppendLine("� ��������� ���������. ��� �� ������ �� ����, ���������� ������� ������ ��� ��������� �������� � ��������� ������ �����. �� ������ ����� ��� ��� ������, � �� �������. �� ����������� ���� ����� ������ ������� � ��� ����� �����.");
			this->description->Text = sb->ToString();
			this->nameOfArcana->Text = "16 ����� - �����";
		}
		else if (this->D->Text == "17") {
			System::Text::StringBuilder^ sb = gcnew System::Text::StringBuilder();

			sb->AppendLine("17 �����");
			sb->AppendLine("17 ����� ������� � �����, �������, ����� �������, ����������� � ���������. �� ������� ����� �� �� �����, ��� ������ ���� ���� ����� ��������. ������� ���������� ������ ��� ���� ������ ��������� �� �����, ������� ������� ����������� � �������� �����������.");
			sb->AppendLine();
			sb->AppendLine("����� ����������� � ������� ����������:");
			sb->AppendLine();
			sb->AppendLine("� ����� ������ � ������. ������� ���� ����� � ���������� � ���, ������ ������, ��� ���� ����� ����� � ������. ����������� ���������, ���� ���� �����������, ������������, ��������� �������. ������ ���� ��� ����������� ���������, ������� �������� � ������� ���������� ����� ������.");
			sb->AppendLine("� ������� ������. ������������ �������� ��� �������� ��������� � ��������� ������. �������� ���� � ������ ������������, ��������������� � �������� � �������� � ����������. �� ������������� ����������, ���� ������ �������������, ��� ��� ��� ����� ������ � ����� ����������.");
			sb->AppendLine("� ��������� � �����������. ���������� ������� �� ������������� � ���������� ��� �� �������. ������� ��, � ���� ����� ����, ����� � ����� � ���������� ������� ������ � ���� ����. � ����� ������� �������� � ���� ����������� � ����� � �����������.");
			sb->AppendLine("� ������� �������. � ���, ����������, ���� �����������, �� ��� �� ������ ��� ���� ������. ����, ��������� ������������ �������, �� ��������� ������������ � ������� � �������� ��������. ����� ��������� ������ ����� ��� �� �����, ����� ���� ����������.");
			sb->AppendLine("� ���������� �������. �� ������ �������, ���������� ���������� ������� ���. ������ ������������ ������, ������ ��������� � �������, ������������� � ���������������� ������. ������� �� ��������� �� �������, �� ��������� ���� � �� �������� � ������.");
			sb->AppendLine("� �������� ��������. ������� ����� ����� ������ �������� ��������� ������ � �������� �����, � �� � ������������. � ������, � ����������� �� ������ ��������������� �������, �� �������������� �� ������������ ���������.");

			this->description->Text = sb->ToString();
			this->nameOfArcana->Text = "17 ����� - ������";
		}
		else if (this->D->Text == "18") {
			System::Text::StringBuilder^ sb = gcnew System::Text::StringBuilder();

			sb->AppendLine("18 �����");
			sb->AppendLine("18 ����� ������� � ������� �����������, ���������� ���� � �������������� ������. �������, ��� �� ������ ������� � ���� ���������� � ����������� ���� ���������� �����������, �������� �����, ���������� ������ � ���������� ���� ������������� �������. � ����� ������ �� ������� ��������� �������������� ���� ����� � �������������� ��, ��� ��������.");
			sb->AppendLine();
			sb->AppendLine("����� ����������� � ������� ����������:");
			sb->AppendLine();
			sb->AppendLine("� ������ � ��������. ����� ������, ����������� ���� ��������, ��������� ��������� ���, ��������� �� ����������� �����. ����� ��������� ������, ��������� ����������� �� ���������� � ������ ���� ������, ����� ������� �������� ����������� ������� ��������� ��������. ����������� �������, �� �������� �������� ����, ������� ����� ����� ��� ������.");
			sb->AppendLine("� ������������ �� ��������. ���� ��������� ��� ��������������� ����� �����, � ����� ���������, �� ����������� ���� ����� � ������ �����. ���������� �� ����� �������������� � ���������������, ������� ���������� �������������, �������� ����������� ���� �����, ������������ ����� �����.");
			sb->AppendLine("� ������� � ���������. ���������� 18 ������ ����� ������� ����� ������, ������� ��������� �����������. ������ �� ���� ���������� �� ����� ������, ���� �� �� ��������� ��������� �� �������������. ����� ��������� �������� ������ � ����������, ������ �� ���� ������� �������, �������� �������������� �����.");
			sb->AppendLine("� ������� �� ���������������. ������ ���������� 18 ������ ������ �� ��������������� � �� ����� ��������� ������ �������. ����� ������� ������ ��� ������� � ������� � ���� ���������� ��� � ���������� � ����, ������������� �� ����� ����. ����� ������� � �������, ��� ���� ��� ������ ������� �����, � ���������� ��������, ������� ����� ����� ��� ����.");
			sb->AppendLine("� ������� ��������. �������� ������� ���� ����� � ����� ���������, ������� �������������� � ������ ����������� ������, � �� ����������������� ���� ��������, ����������� �����. ����������������, �������� � ������� ����� ��������� � �������� ��������, ��������� �������� ��� ���������.");
			this->description->Text = sb->ToString();
			this->nameOfArcana->Text = "18 ����� - ����";
		}
		else if (this->D->Text == "19") {
			System::Text::StringBuilder^ sb = gcnew System::Text::StringBuilder();

			sb->AppendLine("19 �����");
			sb->AppendLine("� �������� ���������� �������� � 19 ������� ����� ������� ���� ������ ���� �� ���������� ������ ������������. ���� �� ������ ����������������� �� ���-�� �����, ������� ������� � ���������� �����, ��������� ������ ��� �������.");
			sb->AppendLine();
			sb->AppendLine("����� ����������� � ������� ����������:");
			sb->AppendLine();
			sb->AppendLine("� ���������� �����. �� ������ ����������, ����������� � ����������� �������, ������ ��� ��������� �������� ����� ������� � ������. ���� �� ���� ������ ���� ������� � ��� �������� ����������, �������� ��������, ����� � �������.");
			sb->AppendLine("� ����������� �����. ������ ���������� 19 ������� �������� �����-�� ���� ����������� � ����� ����� � ��������� ��������������� �� ��. �, ������ �����, �� ������������� �������� �������� ������ � ���� ����, �� ������ ����� �����.");
			sb->AppendLine("� �������. ���� ��������� ����������� �������������� ���� ������������ ������, ���������� ������������� �������� ����������� �������. ��������, ��� ����� ���������� ���������� �����������, ��� ������, �� ��� �� ��� ����� ��������� ����������� ����������.");
			sb->AppendLine("� Ƹ�������. ��� ����� ������� ���� ���� � ���� ����� � �����������. ���������� ��������� ����� ��������� ������ �����, �������� ��������� � ��������� �����. ������ ��������� � ���������� ������, ���� ��������� ������.");
			sb->AppendLine("� ��������. ����� ������� ������ �������� �������� ������������� �� ������������ ������� �����, ��������� ��������� ��������. � ������ ��� �������� ������ ��� �������� ������. ������� �������� ��������� �� ���, ������������ ������� �����, ������ ������ ���� �� ����������� ����.");
			sb->AppendLine("� �����. ������� ��������� ��������� ���������, �� ������������� ������ �������������, ������� ���� ��� ������ ������� ��� � ��������. ��������� �������, �� ��������� �� ��, ��� ������ ��� ����� ���������� � ���������� ���������.");

			this->description->Text = sb->ToString();
			this->nameOfArcana->Text = "19 ����� - ������";
		}
		else if (this->D->Text == "20") {
			System::Text::StringBuilder^ sb = gcnew System::Text::StringBuilder();

			sb->AppendLine("20 �����");
			sb->AppendLine("����������� ������� 20 ������ � ��� ����������� � ������������ � ������ ����� �����. ���� ����� ����� ������, ����� ������� �������� ���������� � ���������� ��������. �������� ������� ������, ����� ������� ������������� �� �������� � ��������� ������� � ��������, ��������� �������� �������� ��������.");
			sb->AppendLine();
			sb->AppendLine("����� ����������� � ������� ����������:");
			sb->AppendLine();
			sb->AppendLine("� �������� ����. � ���� ���������� ������� ������ ������ �������� ������ ���� ��� �����. ���� ����� ���� � ���������� ������ ������ ����, ������ ���������� ����� �����, �������� ������ ����, ��������� ������ ����� ���������� � �. �. ��� �������� ������� ����, ������� ����� ��� �����, � �������� ���, ��������, ������� ����� ������ ����� � ������� ������ ������� �������.");
			sb->AppendLine("� ������������ ��� �����������. �������� ����� ������� � ���� ���� ������, �������� ����� ����� �� ��������� ���� ����������� � ���� ��� �� �� ����� ������. ������� ���� ������� �� ������ ���� ����� �� ���� �� � ����� ���������. ������ ����� ���������� ��� ����������� � ������ � ����� ���� �������.");
			sb->AppendLine("� ��������� � ��������. ����� ������� ����� �������� ���������� �� �������� ����������� � �� ���������� ����������� ��� � �����. ������ ���������� �� �������� ����� ����������. ������������ ���� ����������, ����������� ������ ������, ���������� � ��������� ���� ������.");
			sb->AppendLine("� ��������� ���� � ��������. � ����� ������ �������� ������ ����� �������� ���� � ��� ������ ������������ ��� �� ���������� ���� �����. ������ ������, ������������ �� ���������� �����, �������� � ���� ����� ��������. ������ �������� ��������� ������� �������� �������� � ������� �������� ������ �� ��� ��������� �������.");
			sb->AppendLine("� ������ � ���������. ��������� � ������, ��������� ��� � �������� ������������, ��� � � �������� ������, ����� ��������� �������� ���. �������� � ��������� ����� ����� ��������� ��������� �� ���� � �������� ��������, ���������� ������������ � ��������� �������. �������� ���� ������ ����� � �������������� ��.");
			sb->AppendLine("� ������� ������. ���������� 20 ������ ���� ��� ������ ������� ������ �� ������ ��������� �����. ������ ��� ����� ��� ����� ������� ��������, ����, ����������� ������ � �. �. ����� ���� ������ ����� � �� �������, �� ������ ��������� ������������ ������� � ����� �� ��� ���������������.");

			this->description->Text = sb->ToString();
			this->nameOfArcana->Text = "20 ����� - �������� ���";
		}
		else if (this->D->Text == "21") {
			System::Text::StringBuilder^ sb = gcnew System::Text::StringBuilder();

			sb->AppendLine("21 �����");
			sb->AppendLine("��� ������ �������� ����� ������ ���� ������� � ��������, �������������� ���������� ������������� � ���������� ���� ������. ����� ������� ���� ����� ����� � ������������, ������� ������� ���������� ������ ������, �������� ����������� � ��������. �������� ����� ���������� � ����������� ������, ������ ������������� � ���������� ����� ����� �����.");
			sb->AppendLine();
			sb->AppendLine("����� ����������� � ������� ����������:");
			sb->AppendLine();
			sb->AppendLine("� ������ �������������. ���������� ����������� ���������, ������ � ���� ������, �� �� ����������� �� �� ������������. ��������������� ����� ��������� � �� ����� �� ������ � ��������. ������� ������ ��� ������ � ��������� ������������ ����� ��������� � �������� �� ��� ����.");
			sb->AppendLine("� ���������� � ��������. �������, ��� ��� � ��� ��� ���, � ��� ���� ���� � ������ � ������. ���������� � ��������� � ����� ������� � ������, ��������� �� ������, �� ������� �� ����������� ���� ��� ������� ������� ��������. ������� ��� ����������� ����������� ������� � �����������.");
			sb->AppendLine("� ������� ���� �����. �� ��������������� ��������� ������, � ������� ����� ����� ����������� ������ �� ������� ������. ������� ������� ���� ����� �����, ��������� � ������� ���������, ���������� ��� ������ ����������� ������. ���������� � ����������� ��������, ��������� ��������������������. ��� �������� �������� ���������, � �� ������ ����� ���������� ����-�� ������������� ��������������.");
			sb->AppendLine("� �������� � �����. ������ ������������� � ������� ����� ����. ������ ������������� � �������� �������� ������ �����, ���������� ���� ������� � ���������� ���-�� �����. ������� �� �������, �������� �������� ��������. ������ ��������� � ������ ������ ��� ������ � ��� ������� ����� ���� ����� ������������.");
			sb->AppendLine("� � ���� �� ��������. ����������� ��� ����, ��� ��� ��������� �������� � �����������, � �� ����������� � �������. ��������� ������ ��������, ���������� �������� ����� ����������, ���������� ���������� � �������� ����������� ���-�� �����. ������� �������� IT-�����, ���������� ����� � ��������-��������.");

			this->description->Text = sb->ToString();
			this->nameOfArcana->Text = "21 ����� - ���";
		}
		else if (this->D->Text == "22") {
			System::Text::StringBuilder^ sb = gcnew System::Text::StringBuilder();

			sb->AppendLine("22 �����");
			sb->AppendLine("���������, ��� ���� � 22 �������� �� ������ ��������������� ����� ����������� �������. �� ��������� ����� ������������ ���������, ���������� �� ����������� � ������������. ���� � ����� ���� �����-�� ������� ������������ ������. �� ������� ��� �������, ��� ������� �������� �� ����, ������, ��� 22 ������ ��� � ���� �����, �������� �� ��, ��� ��� ������ �� ������������� ����.");
			sb->AppendLine();
			sb->AppendLine("����� ����������� � ������� ����������:");
			sb->AppendLine();
			sb->AppendLine("� ���������� ����������. ������ ����� � ����������, ������ ������ ��� ��������, �� �������������� �� ��������� ���������, ����� ��������������. �������� �� ����� � ������������, ������������ ����� �� ������ ��������.");
			sb->AppendLine("� ���� ������. ���� � ���� �������� ������ ��������� �������� �� ����� ������� ��������, � ���������� �������. ������������ ������ ������ ��� � ������� ��� ������ ����� �� ���. �������, ��� �� ���� ������ ����� ����� �������� ���� ������� �����.");
			sb->AppendLine("� ��������� ����. ��� ���������� ������ ����� ��� ��� �������� ����������� � ��������� �����. ���������� ����� � ������ ������ ���������� ��� �� �����������. ������������ ���������������� �� ������������� ������ � ������������ ������ � ��� ������������. ������, ��� ����� ������, � ����� ��� �����.");
			sb->AppendLine("� ���������� �������. ����, ���������� ���� ��������, �������� ������� ��������. ���� ������� ����� ����������� ���� ������, � ���� ��������� � ���� �����������, ��� ����� �������� ����������� ��-�� ����� ����������������. ������� ������ ���������������� ����, ����� �� ������������ ��������� ����������.");

			this->description->Text = sb->ToString();
			this->nameOfArcana->Text = "22 ����� - ���";
		}
	}
	private: System::Void other_Click(System::Object^ sender, System::EventArgs^ e) {
		LinkMessageBox^ msg = gcnew LinkMessageBox();
		msg->SetMessage("������ ���������� �������� �� �����:", "https://gadalkindom.ru/matritsa-sudby");
		msg->ShowDialog();
	}
};
}