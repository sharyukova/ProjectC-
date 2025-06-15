#pragma once

#include <Windows.h>
#include <msclr/marshal.h>
#include <string>

#include <windows.h>
#include <msclr/marshal_cppstd.h>




using namespace System::Collections::Generic;



namespace �������������� {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Net;
	using namespace System::IO;
	using namespace System::Text;
	using namespace System::Text::RegularExpressions;

	
	public ref class NatalChart : public System::Windows::Forms::Form
	{
	public:
		NatalChart(void)
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
		~NatalChart()
		{
			if (components)
			{
				delete components;
			}
		}
	
	private: System::Windows::Forms::Button^ getChartBtn;
	protected:


	private:

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Panel^ inputPanel;

	private: System::Windows::Forms::CheckBox^ timeChckBx;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::DateTimePicker^ dtOfBirthPker;

	private: System::Windows::Forms::ComboBox^ minute�mbx;
	private: System::Windows::Forms::ComboBox^ hour�mbx;

	private: System::Windows::Forms::TextBox^ fullnameTxtbx;
	private: System::Windows::Forms::Button^ closeBtn;
	private: System::Windows::Forms::ComboBox^ plcOfBirthCmbx;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::ComboBox^ coordintsCmbx;

	private: System::Windows::Forms::ComboBox^ timezoneCmbx;
	private: System::Windows::Forms::Label^ label8;
	
	private: System::Windows::Forms::TextBox^ txtResults;
	private: System::Windows::Forms::Panel^ outputPanel;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ linkLabel;
	private: System::Windows::Forms::Button^ newBtn;
	private: System::Windows::Forms::Button^ previousBtn;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label10;









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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(NatalChart::typeid));
			this->getChartBtn = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->inputPanel = (gcnew System::Windows::Forms::Panel());
			this->timezoneCmbx = (gcnew System::Windows::Forms::ComboBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->coordintsCmbx = (gcnew System::Windows::Forms::ComboBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->plcOfBirthCmbx = (gcnew System::Windows::Forms::ComboBox());
			this->minute�mbx = (gcnew System::Windows::Forms::ComboBox());
			this->hour�mbx = (gcnew System::Windows::Forms::ComboBox());
			this->fullnameTxtbx = (gcnew System::Windows::Forms::TextBox());
			this->dtOfBirthPker = (gcnew System::Windows::Forms::DateTimePicker());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->timeChckBx = (gcnew System::Windows::Forms::CheckBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->outputPanel = (gcnew System::Windows::Forms::Panel());
			this->linkLabel = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->txtResults = (gcnew System::Windows::Forms::TextBox());
			this->closeBtn = (gcnew System::Windows::Forms::Button());
			this->newBtn = (gcnew System::Windows::Forms::Button());
			this->previousBtn = (gcnew System::Windows::Forms::Button());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->inputPanel->SuspendLayout();
			this->outputPanel->SuspendLayout();
			this->SuspendLayout();
			// 
			// getChartBtn
			// 
			this->getChartBtn->Location = System::Drawing::Point(950, 908);
			this->getChartBtn->Name = L"getChartBtn";
			this->getChartBtn->Size = System::Drawing::Size(200, 40);
			this->getChartBtn->TabIndex = 0;
			this->getChartBtn->Text = L"��������";
			this->getChartBtn->Click += gcnew System::EventHandler(this, &NatalChart::getChartBtn_Click);
			// 
			// label1
			// 
			this->label1->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 50));
			this->label1->ForeColor = System::Drawing::Color::LavenderBlush;
			this->label1->Location = System::Drawing::Point(454, 175);
			this->label1->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(708, 95);
			this->label1->TabIndex = 36;
			this->label1->Text = L"��������� �����";
			// 
			// label2
			// 
			this->label2->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->ForeColor = System::Drawing::Color::LavenderBlush;
			this->label2->Location = System::Drawing::Point(40, 22);
			this->label2->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(141, 33);
			this->label2->TabIndex = 37;
			this->label2->Text = L"���� ���";
			// 
			// inputPanel
			// 
			this->inputPanel->BackColor = System::Drawing::Color::Transparent;
			this->inputPanel->Controls->Add(this->label11);
			this->inputPanel->Controls->Add(this->label10);
			this->inputPanel->Controls->Add(this->timezoneCmbx);
			this->inputPanel->Controls->Add(this->label8);
			this->inputPanel->Controls->Add(this->coordintsCmbx);
			this->inputPanel->Controls->Add(this->label7);
			this->inputPanel->Controls->Add(this->plcOfBirthCmbx);
			this->inputPanel->Controls->Add(this->minute�mbx);
			this->inputPanel->Controls->Add(this->hour�mbx);
			this->inputPanel->Controls->Add(this->fullnameTxtbx);
			this->inputPanel->Controls->Add(this->dtOfBirthPker);
			this->inputPanel->Controls->Add(this->label6);
			this->inputPanel->Controls->Add(this->timeChckBx);
			this->inputPanel->Controls->Add(this->label5);
			this->inputPanel->Controls->Add(this->label4);
			this->inputPanel->Controls->Add(this->label3);
			this->inputPanel->Controls->Add(this->label2);
			this->inputPanel->Location = System::Drawing::Point(255, 300);
			this->inputPanel->Name = L"inputPanel";
			this->inputPanel->Size = System::Drawing::Size(734, 540);
			this->inputPanel->TabIndex = 38;
			// 
			// timezoneCmbx
			// 
			this->timezoneCmbx->DropDownStyle = System::Windows::Forms::ComboBoxStyle::Simple;
			this->timezoneCmbx->Enabled = false;
			this->timezoneCmbx->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->timezoneCmbx->FormattingEnabled = true;
			this->timezoneCmbx->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"4", L"4", L"4", L"6" });
			this->timezoneCmbx->Location = System::Drawing::Point(357, 487);
			this->timezoneCmbx->Name = L"timezoneCmbx";
			this->timezoneCmbx->Size = System::Drawing::Size(161, 28);
			this->timezoneCmbx->TabIndex = 51;
			this->timezoneCmbx->Text = L"4";
			// 
			// label8
			// 
			this->label8->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->ForeColor = System::Drawing::Color::LavenderBlush;
			this->label8->Location = System::Drawing::Point(40, 480);
			this->label8->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(175, 33);
			this->label8->TabIndex = 50;
			this->label8->Text = L"������� ����";
			// 
			// coordintsCmbx
			// 
			this->coordintsCmbx->Enabled = false;
			this->coordintsCmbx->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->coordintsCmbx->FormattingEnabled = true;
			this->coordintsCmbx->Items->AddRange(gcnew cli::array< System::Object^  >(4) {
				L"55.78874,49.12214", L"55.75222,37.61556",
					L"59.93863,30.31413", L"56.8519,60.6122"
			});
			this->coordintsCmbx->Location = System::Drawing::Point(483, 432);
			this->coordintsCmbx->Name = L"coordintsCmbx";
			this->coordintsCmbx->Size = System::Drawing::Size(161, 28);
			this->coordintsCmbx->TabIndex = 49;
			this->coordintsCmbx->Text = L"55.78874,49.12214";
			// 
			// label7
			// 
			this->label7->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->ForeColor = System::Drawing::Color::LavenderBlush;
			this->label7->Location = System::Drawing::Point(40, 425);
			this->label7->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(285, 33);
			this->label7->TabIndex = 48;
			this->label7->Text = L"���������� ��������";
			// 
			// plcOfBirthCmbx
			// 
			this->plcOfBirthCmbx->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->plcOfBirthCmbx->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->plcOfBirthCmbx->FormattingEnabled = true;
			this->plcOfBirthCmbx->Items->AddRange(gcnew cli::array< System::Object^  >(4) {
				L"������, ���������, ������", L"������, ������",
					L"�����-���������, ������", L"������������, ������������ �������, ������"
			});
			this->plcOfBirthCmbx->Location = System::Drawing::Point(379, 272);
			this->plcOfBirthCmbx->Name = L"plcOfBirthCmbx";
			this->plcOfBirthCmbx->Size = System::Drawing::Size(265, 28);
			this->plcOfBirthCmbx->TabIndex = 47;
			this->plcOfBirthCmbx->SelectedIndexChanged += gcnew System::EventHandler(this, &NatalChart::plcOfBirthCmbx_SelectedIndexChanged);
			// 
			// minute�mbx
			// 
			this->minute�mbx->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->minute�mbx->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->minute�mbx->FormattingEnabled = true;
			this->minute�mbx->Items->Add(L"00");
			for (int i = 1; i < 60; i++)
			{

				String^ minute = i.ToString("D2"); // "D2" ����������� ����� � ������� �����
				this->minute�mbx->Items->Add(minute);
			}

			/*this->minute�mbx->Items->AddRange(gcnew cli::array< System::Object^  >(62) {
				L"������", L"00", L"01", L"02", L"03", L"04",
					L"05", L"06", L"07", L"08", L"09", L"10", L"11", L"12", L"13", L"14", L"15", L"16", L"17", L"18", L"19", L"20", L"21", L"22",
					L"23", L"24", L"25", L"26", L"27", L"28", L"29", L"30", L"31", L"32", L"33", L"34", L"35", L"36", L"37", L"38", L"39", L"40",
					L"41", L"42", L"43", L"44", L"45", L"46", L"47", L"48", L"49", L"50", L"51", L"52", L"53", L"54", L"55", L"56", L"57", L"58",
					L"59", L"60"
			});*/

			this->minute�mbx->Location = System::Drawing::Point(636, 145);
			this->minute�mbx->Name = L"minute�mbx";
			this->minute�mbx->Size = System::Drawing::Size(90, 28);
			this->minute�mbx->TabIndex = 46;
			this->minute�mbx->SelectedValueChanged += gcnew System::EventHandler(this, &NatalChart::minute�mbx_SelectedIndexChanged);
			// 
			// hour�mbx
			// 
			this->hour�mbx->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->hour�mbx->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->hour�mbx->FormattingEnabled = true;
			this->hour�mbx->Items->Add(L"00");
			for (int i = 1; i < 24; i++)
			{

				String^ hour = i.ToString("D2"); // "D2" ����������� ����� � ������� �����
				this->hour�mbx->Items->Add(hour);
			}

			/*this->hour�mbx->Items->AddRange(gcnew cli::array< System::Object^  >(25) {
				L"����", L"00", L"01", L"02", L"03", L"04", L"05",
					L"06", L"07", L"08", L"09", L"10", L"11", L"12", L"13", L"14", L"15", L"16", L"17", L"18", L"19", L"20", L"21", L"22", L"23"
			});*/

			this->hour�mbx->Location = System::Drawing::Point(423, 145);
			this->hour�mbx->Name = L"hour�mbx";
			this->hour�mbx->Size = System::Drawing::Size(90, 28);
			this->hour�mbx->TabIndex = 45;
			this->hour�mbx->SelectedIndexChanged += gcnew System::EventHandler(this, &NatalChart::hour�mbx_SelectedIndexChanged);
			// 
			// fullnameTxtbx
			// 
			this->fullnameTxtbx->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.8F));
			this->fullnameTxtbx->Location = System::Drawing::Point(276, 30);
			this->fullnameTxtbx->Name = L"fullnameTxtbx";
			this->fullnameTxtbx->Size = System::Drawing::Size(368, 24);
			this->fullnameTxtbx->TabIndex = 44;
			this->fullnameTxtbx->TextChanged += gcnew System::EventHandler(this, &NatalChart::fullnameTxtbx_TextChanged);
			// 
			// dtOfBirthPker
			// 
			this->dtOfBirthPker->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 9.2F));
			this->dtOfBirthPker->Location = System::Drawing::Point(444, 82);
			this->dtOfBirthPker->Name = L"dtOfBirthPker";
			this->dtOfBirthPker->Size = System::Drawing::Size(200, 28);
			this->dtOfBirthPker->TabIndex = 43;
			// 
			// label6
			// 
			this->label6->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 11.5F));
			this->label6->ForeColor = System::Drawing::Color::LavenderBlush;
			this->label6->Location = System::Drawing::Point(41, 323);
			this->label6->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(587, 81);
			this->label6->TabIndex = 42;
			this->label6->Text = L"*����������: ���� ������ ����� �������� ����������, \r\n�������� ��������� ����� ��"
				L" ����� �������� ��������� \r\n��� ������� ����, ����������, � ��������� ����� ����"
				L"��.";
			// 
			// timeChckBx
			// 
			this->timeChckBx->AutoSize = true;
			this->timeChckBx->BackColor = System::Drawing::Color::Transparent;
			this->timeChckBx->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 10.8F));
			this->timeChckBx->ForeColor = System::Drawing::Color::LavenderBlush;
			this->timeChckBx->Location = System::Drawing::Point(71, 201);
			this->timeChckBx->Name = L"timeChckBx";
			this->timeChckBx->Size = System::Drawing::Size(508, 28);
			this->timeChckBx->TabIndex = 41;
			this->timeChckBx->Text = L"���� ����� �������� ���������� - �������� ���� �����.*";
			this->timeChckBx->UseVisualStyleBackColor = true;
			this->timeChckBx->CheckedChanged += gcnew System::EventHandler(this, &NatalChart::timeChckBx_CheckedChanged);
			// 
			// label5
			// 
			this->label5->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->ForeColor = System::Drawing::Color::LavenderBlush;
			this->label5->Location = System::Drawing::Point(40, 272);
			this->label5->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(213, 33);
			this->label5->TabIndex = 40;
			this->label5->Text = L"����� ��������";
			// 
			// label4
			// 
			this->label4->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->ForeColor = System::Drawing::Color::LavenderBlush;
			this->label4->Location = System::Drawing::Point(40, 138);
			this->label4->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(299, 33);
			this->label4->TabIndex = 39;
			this->label4->Text = L"������ ����� ��������";
			// 
			// label3
			// 
			this->label3->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->ForeColor = System::Drawing::Color::LavenderBlush;
			this->label3->Location = System::Drawing::Point(40, 77);
			this->label3->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(194, 33);
			this->label3->TabIndex = 38;
			this->label3->Text = L"���� ��������";
			// 
			// outputPanel
			// 
			this->outputPanel->BackColor = System::Drawing::Color::Transparent;
			this->outputPanel->Controls->Add(this->linkLabel);
			this->outputPanel->Controls->Add(this->label9);
			this->outputPanel->Controls->Add(this->txtResults);
			this->outputPanel->Location = System::Drawing::Point(1014, 300);
			this->outputPanel->Name = L"outputPanel";
			this->outputPanel->Size = System::Drawing::Size(795, 540);
			this->outputPanel->TabIndex = 57;
			// 
			// linkLabel
			// 
			this->linkLabel->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->linkLabel->AutoSize = true;
			this->linkLabel->BackColor = System::Drawing::Color::Transparent;
			this->linkLabel->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 20));
			this->linkLabel->ForeColor = System::Drawing::Color::LavenderBlush;
			this->linkLabel->Location = System::Drawing::Point(174, 438);
			this->linkLabel->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->linkLabel->Name = L"linkLabel";
			this->linkLabel->Size = System::Drawing::Size(456, 46);
			this->linkLabel->TabIndex = 58;
			this->linkLabel->Text = L"������� � ��������� �����";
			this->linkLabel->Click += gcnew System::EventHandler(this, &NatalChart::LinkLabel_Click);
			this->linkLabel->MouseEnter += gcnew System::EventHandler(this, &NatalChart::LinkLabel_MouseEnter);
			this->linkLabel->MouseLeave += gcnew System::EventHandler(this, &NatalChart::LinkLabel_MouseLeave);
			// 
			// label9
			// 
			this->label9->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::Transparent;
			this->label9->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 20));
			this->label9->ForeColor = System::Drawing::Color::LavenderBlush;
			this->label9->Location = System::Drawing::Point(313, 69);
			this->label9->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(172, 46);
			this->label9->TabIndex = 57;
			this->label9->Text = L"���������";
			// 
			// txtResults
			// 
			this->txtResults->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->txtResults->Location = System::Drawing::Point(130, 148);
			this->txtResults->Multiline = true;
			this->txtResults->Name = L"txtResults";
			this->txtResults->ReadOnly = true;
			this->txtResults->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->txtResults->Size = System::Drawing::Size(564, 256);
			this->txtResults->TabIndex = 53;
			// 
			// closeBtn
			// 
			this->closeBtn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->closeBtn->BackColor = System::Drawing::Color::Transparent;
			this->closeBtn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->closeBtn->FlatAppearance->BorderSize = 0;
			this->closeBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->closeBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->closeBtn->ForeColor = System::Drawing::Color::White;
			this->closeBtn->Location = System::Drawing::Point(1339, 6);
			this->closeBtn->Margin = System::Windows::Forms::Padding(2);
			this->closeBtn->Name = L"closeBtn";
			this->closeBtn->Size = System::Drawing::Size(85, 80);
			this->closeBtn->TabIndex = 52;
			this->closeBtn->Text = L"�";
			this->closeBtn->UseVisualStyleBackColor = false;
			this->closeBtn->Click += gcnew System::EventHandler(this, &NatalChart::closeBtn_Click);
			// 
			// newBtn
			// 
			this->newBtn->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->newBtn->Location = System::Drawing::Point(32, 467);
			this->newBtn->Name = L"newBtn";
			this->newBtn->Size = System::Drawing::Size(173, 188);
			this->newBtn->TabIndex = 53;
			this->newBtn->Text = L"����� ��������� �����";
			this->newBtn->UseVisualStyleBackColor = true;
			this->newBtn->Click += gcnew System::EventHandler(this, &NatalChart::newBtn_Click);
			// 
			// previousBtn
			// 
			this->previousBtn->BackColor = System::Drawing::Color::Transparent;
			this->previousBtn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->previousBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->previousBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 48, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->previousBtn->ForeColor = System::Drawing::Color::LavenderBlush;
			this->previousBtn->Location = System::Drawing::Point(32, 25);
			this->previousBtn->Margin = System::Windows::Forms::Padding(7);
			this->previousBtn->Name = L"previousBtn";
			this->previousBtn->Size = System::Drawing::Size(119, 85);
			this->previousBtn->TabIndex = 58;
			this->previousBtn->Text = L"<";
			this->previousBtn->UseVisualStyleBackColor = false;
			this->previousBtn->Click += gcnew System::EventHandler(this, &NatalChart::previous3_Click);
			// 
			// label10
			// 
			this->label10->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::Color::Transparent;
			this->label10->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label10->ForeColor = System::Drawing::Color::LavenderBlush;
			this->label10->Location = System::Drawing::Point(353, 145);
			this->label10->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(53, 24);
			this->label10->TabIndex = 52;
			this->label10->Text = L"����";
			// 
			// label11
			// 
			this->label11->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label11->AutoSize = true;
			this->label11->BackColor = System::Drawing::Color::Transparent;
			this->label11->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label11->ForeColor = System::Drawing::Color::LavenderBlush;
			this->label11->Location = System::Drawing::Point(547, 145);
			this->label11->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(81, 24);
			this->label11->TabIndex = 53;
			this->label11->Text = L"������";
			// 
			// NatalChart
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1426, 934);
			this->Controls->Add(this->previousBtn);
			this->Controls->Add(this->outputPanel);
			this->Controls->Add(this->newBtn);
			this->Controls->Add(this->closeBtn);
			this->Controls->Add(this->inputPanel);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->getChartBtn);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"NatalChart";
			this->Text = L"NatalChart";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->inputPanel->ResumeLayout(false);
			this->inputPanel->PerformLayout();
			this->outputPanel->ResumeLayout(false);
			this->outputPanel->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		
		String^ GenerateNatalChartUrl()
		{
			// ����������� ����� ��� URL
			String^ encodedName = Uri::EscapeDataString(fullnameTxtbx->Text);
			DateTime birthDate = dtOfBirthPker->Value;
			String^ day = birthDate.Day.ToString();
			String^ month = birthDate.Month.ToString();
			String^ year = birthDate.Year.ToString();
			String^ hour = timeChckBx->Checked ? String::Empty : hour�mbx->SelectedItem->ToString();
			String^ minute = timeChckBx->Checked ? String::Empty : minute�mbx->SelectedItem->ToString();
			String^ place = Uri::EscapeDataString(plcOfBirthCmbx->Text);

			// ��������� ���������
			array<String^>^ coords = coordintsCmbx->Text->Split(',');
			if (coords->Length != 2)
			{
				throw gcnew Exception("���������� ������ ���� � ������� '������,�������'");
			}

			String^ lat = coords[0]->Trim();
			String^ lon = coords[1]->Trim();
			String^ timezn = timezoneCmbx->Text;

			// ������������ URL
			StringBuilder^ urlBuilder = gcnew StringBuilder();
			urlBuilder->Append("https://gadalkindom.ru/natalnaya-karta?_name=");
			urlBuilder->Append(encodedName);
			urlBuilder->Append("&_day=");
			urlBuilder->Append(day);
			urlBuilder->Append("&_month=");
			urlBuilder->Append(month);
			urlBuilder->Append("&_year=");
			urlBuilder->Append(year);

			if (timeChckBx->Checked)
			{
				urlBuilder->Append("&_hour=&_minute=&unknown_time=on");
			}
			else
			{
				urlBuilder->Append("&_hour=");
				urlBuilder->Append(hour);
				urlBuilder->Append("&_minute=");
				urlBuilder->Append(minute);
			}

			urlBuilder->Append("&zp-report-variation=birthreport");
			urlBuilder->Append("&place=");
			urlBuilder->Append(place);
			urlBuilder->Append("&geo_timezone_id=Europe/Moscow");
			urlBuilder->Append("&zp_lat_decimal=");
			urlBuilder->Append(lat);
			urlBuilder->Append("&zp_long_decimal=");
			urlBuilder->Append(lon);
			urlBuilder->Append("&zp_offset_geo=");
			urlBuilder->Append(timezn);
			urlBuilder->Append("&action=zp_birthreport");

			return urlBuilder->ToString();
		}


		String^ GetInfoFromWeb(String^ url)
		{
			try
			{
				WebClient^ client = gcnew WebClient();
				client->Encoding = System::Text::Encoding::UTF8;
				String^ html = client->DownloadString(url);
				int startPos = html->IndexOf("<caption class=\"zp-report-caption\">");

				if (startPos > 0)
				{
					int endPos = html->IndexOf("</td></tr></table><img loading=\"lazy\" src=\"", startPos);
					if (endPos > startPos)
					{
						String^ description = html->Substring(startPos, endPos - startPos);

						description = System::Text::RegularExpressions::Regex::Replace(
							description,
							"<[^>]*>",
							"");

						description = description->Replace("&#176;", "�")
							->Replace("&#039;", "'");

						description = System::Text::RegularExpressions::Regex::Replace(
							description,
							"\\s+",
							" ");

						description = description->Trim();
						description += "\r\n\r\n��������: " + url;
						return description;
					}
				}
				return "�� ������� �������� ��������. ���������� �����.\r\n��������: " + url;
			}
			catch (Exception^ ex)
			{
				return "������ ��� ��������� ������: " + ex->Message;
			}
		}

		void ValidateCheckBox()
		{
			if ((!timeChckBx->Checked) && ((hour�mbx->SelectedIndex < 0) || (minute�mbx->SelectedIndex < 0)))
			{
				timeChckBx->BackColor = Color::LightPink;
				hour�mbx->BackColor = Color::LightPink;
				minute�mbx->BackColor = Color::LightPink;
				throw gcnew Exception("���� �� ������ ������ �����, �������� �������� '�� ���� �����'");
			}
			timeChckBx->BackColor = SystemColors::Window;
			hour�mbx->BackColor = SystemColors::Window;
			minute�mbx->BackColor = SystemColors::Window;
		}

		void ValidateTextBox()
		{
			if (String::IsNullOrWhiteSpace(fullnameTxtbx->Text))
			{
				fullnameTxtbx->BackColor = Color::LightPink;
				throw gcnew Exception("���� ��� �� ����� ���� ������!");
			}

			if (!Regex::IsMatch(fullnameTxtbx->Text, "^[\\p{L} ]+$"))
			{
				fullnameTxtbx->BackColor = Color::LightPink;
				throw gcnew Exception("��� ������ ��������� ������ ����� � �������!");
			}

			if (fullnameTxtbx->Text->Length < 3)
			{
				fullnameTxtbx->BackColor = Color::LightPink;
				throw gcnew Exception("��� ������ ��������� ������� 3 �������!");
			}

			fullnameTxtbx->BackColor = SystemColors::Window;
		}

	
	private: System::Void closeBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		
		if (Application::OpenForms->Count > 0)
		{
			for each (Form ^ form in Application::OpenForms)
			{
				form->Close();
			}
		}
		Application::Exit();

	}
	
	private: System::Void timeChckBx_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		timeChckBx->BackColor = System::Drawing::Color::Transparent;

		hour�mbx->Enabled = !timeChckBx->Checked;
		minute�mbx->Enabled = !timeChckBx->Checked;
	}
	
	private: System::Void getChartBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			timeChckBx->BackColor = System::Drawing::Color::Transparent;
			timeChckBx->BackColor = Color::LavenderBlush;
			hour�mbx->BackColor = Color::LavenderBlush;
			minute�mbx->BackColor = Color::LavenderBlush;
			fullnameTxtbx->BackColor = Color::LavenderBlush;
			txtResults->Text = "";
	;
			ValidateCheckBox();
			ValidateTextBox();

			DateTime selectedDate = dtOfBirthPker->Value;
			DateTime today = DateTime::Today;

			//dtOfBirthPker->Value = today; - �������� ������

			if (selectedDate > today)
			{
				//outputPanel->Visible = true;
				txtResults->Text = "���� �������� �����������. �� ��� �� ��������. ���������� �����";
				return;
			}


			// ��������� URL � ������� ���������� ������
			String^ url = GenerateNatalChartUrl();
			
			txtResults->Text += GetInfoFromWeb(url);
			linkLabel->Text = "������� � ��������� �����";
			linkLabel->Tag = url;
			

			// ������������ ���������� ��� ������
			StringBuilder^ infoBuilder = gcnew StringBuilder();
			infoBuilder->AppendLine("\n=== ��������������� URL ===");
			infoBuilder->AppendLine(url);
			infoBuilder->AppendLine();
			infoBuilder->AppendLine("\n=== ��������� ������� ===\n");
			infoBuilder->AppendLine("���: " + fullnameTxtbx->Text);
			infoBuilder->AppendLine("���� ��������: " + dtOfBirthPker->Value.ToShortDateString());

			if (timeChckBx->Checked)
			{
				infoBuilder->AppendLine("����� ��������: ����������");
			}
			else
			{
				infoBuilder->AppendLine(String::Format("����� ��������: {0}:{1}",
					hour�mbx->SelectedItem, minute�mbx->SelectedItem));
			}

			infoBuilder->AppendLine("����� ��������: " + plcOfBirthCmbx->Text);
			infoBuilder->AppendLine("����������: " + coordintsCmbx->Text);

			txtResults->Text += "\n" + infoBuilder->ToString();
		}

		catch (Exception^ ex)
		{
			txtResults->Text = "������: " + ex->Message;
			MessageBox::Show("������ ��� ������������ URL: " + ex->Message,
				"������", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
		   private:
			   System::Void LinkLabel_Click(System::Object^ sender, System::EventArgs^ e)
			   {
				   try
				   {
					   String^ url = linkLabel->Tag->ToString();;

					   // ��������� ������ � �������� �� ���������
					   System::Diagnostics::Process::Start(url);
				   }
				   catch (Exception^ ex)
				   {
					   MessageBox::Show("�� ������� ������� ������: " + ex->Message,
						   "������",
						   MessageBoxButtons::OK,
						   MessageBoxIcon::Error);
				   }
			   }

			   System::Void LinkLabel_MouseEnter(System::Object^ sender, System::EventArgs^ e)
			   {
				   this->linkLabel->ForeColor = System::Drawing::Color::Red;
			   }

			   System::Void LinkLabel_MouseLeave(System::Object^ sender, System::EventArgs^ e)
			   {
				   this->linkLabel->ForeColor = System::Drawing::Color::Blue;
			   }
	private: System::Void newBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		fullnameTxtbx->Text = "";

		inputPanel->Visible = true;
		outputPanel->Visible = true;

		this->timeChckBx->BackColor = System::Drawing::Color::Transparent;
	}
	
	private: System::Void plcOfBirthCmbx_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		coordintsCmbx->SelectedIndex = plcOfBirthCmbx->SelectedIndex;
		timezoneCmbx->SelectedIndex = plcOfBirthCmbx->SelectedIndex;
	}
	
	private: System::Void previous3_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void fullnameTxtbx_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		timeChckBx->BackColor = Color::LavenderBlush;
		hour�mbx->BackColor = Color::LavenderBlush;
		minute�mbx->BackColor = Color::LavenderBlush;
		fullnameTxtbx->BackColor = Color::LavenderBlush;
		this->timeChckBx->BackColor = System::Drawing::Color::Transparent;

	}
	private: System::Void hour�mbx_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		timeChckBx->BackColor = Color::LavenderBlush;
		hour�mbx->BackColor = Color::LavenderBlush;
		minute�mbx->BackColor = Color::LavenderBlush;
		fullnameTxtbx->BackColor = Color::LavenderBlush;
		this->timeChckBx->BackColor = System::Drawing::Color::Transparent;	
	}
	private: System::Void minute�mbx_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		timeChckBx->BackColor = Color::LavenderBlush;
		hour�mbx->BackColor = Color::LavenderBlush;
		minute�mbx->BackColor = Color::LavenderBlush;
		fullnameTxtbx->BackColor = Color::LavenderBlush;
		this->timeChckBx->BackColor = System::Drawing::Color::Transparent;
	}

};
}
