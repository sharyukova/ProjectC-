#pragma once
#include <string>
using namespace System::Collections::Generic;
using namespace System::Net;
using namespace System::Text;

namespace �������������� {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ������ ��� NatalChart
	/// </summary>
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
	private: System::Windows::Forms::Panel^ panel1;
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
	private: System::Windows::Forms::TextBox^ txtResults;





	private:
		/// <summary>
		/// ������������ ���������� ������������.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/*String^ GetNatChartFromWeb(String^ fullname, String^, String^, String^)
		{
			try
			{
				WebClient^ client = gcnew WebClient();
				client->Encoding = System::Text::Encoding::UTF8;
				String^ url = "https://horo.mail.ru/prediction/" + zodiacSign->ToLower() + "/today/";

				String^ html = client->DownloadString(url);

				int startPos_s = html->IndexOf("class=\"c30ebf5669 b56f552a61 c62c92d686\">") + 61;
				if (startPos_s > 0)
				{
					int endPos_s = html->IndexOf("</h1></div></div><div class=\"be019c475d\"><div class=\"ab9727ec4f\"><div data-qa=\"MoreListTooltip\"", startPos_s);
					if (endPos_s > startPos_s)
					{
						String^ sign = html->Substring(startPos_s, endPos_s - startPos_s);

						///������� HTML-����
						sign = System::Text::RegularExpressions::Regex::Replace(
							sign,
							"<[^>]*>",
							"");
						sign = System::Text::RegularExpressions::Regex::Replace(
							sign,
							"\\s+",
							" ");

						sign = sign->Trim();
						return sign;
					}
				}
				return "�� ������� �������� ��������. ���������� �����.\r\n��������: " + url;
			}
			catch (Exception^ ex)
			{
				return "������ ��� ��������� ���������: " + ex->Message;
			}
		}*/


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
			this->panel1 = (gcnew System::Windows::Forms::Panel());
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
			this->closeBtn = (gcnew System::Windows::Forms::Button());
			this->txtResults = (gcnew System::Windows::Forms::TextBox());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// getChartBtn
			// 
			this->getChartBtn->Location = System::Drawing::Point(679, 861);
			this->getChartBtn->Name = L"getChartBtn";
			this->getChartBtn->Size = System::Drawing::Size(200, 40);
			this->getChartBtn->TabIndex = 0;
			this->getChartBtn->Text = L"����� ����";
			this->getChartBtn->Click += gcnew System::EventHandler(this, &NatalChart::getChartBtn_Click);
			// 
			// label1
			// 
			this->label1->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 50));
			this->label1->ForeColor = System::Drawing::Color::LavenderBlush;
			this->label1->Location = System::Drawing::Point(492, 185);
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
			this->label2->Location = System::Drawing::Point(91, 22);
			this->label2->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(141, 33);
			this->label2->TabIndex = 37;
			this->label2->Text = L"���� ���";
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Transparent;
			this->panel1->Controls->Add(this->coordintsCmbx);
			this->panel1->Controls->Add(this->label7);
			this->panel1->Controls->Add(this->plcOfBirthCmbx);
			this->panel1->Controls->Add(this->minute�mbx);
			this->panel1->Controls->Add(this->hour�mbx);
			this->panel1->Controls->Add(this->fullnameTxtbx);
			this->panel1->Controls->Add(this->dtOfBirthPker);
			this->panel1->Controls->Add(this->label6);
			this->panel1->Controls->Add(this->timeChckBx);
			this->panel1->Controls->Add(this->label5);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Location = System::Drawing::Point(529, 348);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(836, 483);
			this->panel1->TabIndex = 38;
			// 
			// coordintsCmbx
			// 
			this->coordintsCmbx->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->coordintsCmbx->FormattingEnabled = true;
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
			this->label7->Location = System::Drawing::Point(91, 425);
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
			this->plcOfBirthCmbx->Items->AddRange(gcnew cli::array< System::Object^  >(3) {
				L"������, ���������, ������", L"������, ������",
					L"�����-���������, ������"
			});
			this->plcOfBirthCmbx->Location = System::Drawing::Point(379, 272);
			this->plcOfBirthCmbx->Name = L"plcOfBirthCmbx";
			this->plcOfBirthCmbx->Size = System::Drawing::Size(265, 28);
			this->plcOfBirthCmbx->TabIndex = 47;
			// 
			// minute�mbx
			// 
			this->minute�mbx->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->minute�mbx->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->minute�mbx->FormattingEnabled = true;
			this->minute�mbx->Items->AddRange(gcnew cli::array< System::Object^  >(62) {
				L"������", L"00", L"01", L"02", L"03", L"04",
					L"05", L"06", L"07", L"08", L"09", L"10", L"11", L"12", L"13", L"14", L"15", L"16", L"17", L"18", L"19", L"20", L"21", L"22",
					L"23", L"24", L"25", L"26", L"27", L"28", L"29", L"30", L"31", L"32", L"33", L"34", L"35", L"36", L"37", L"38", L"39", L"40",
					L"41", L"42", L"43", L"44", L"45", L"46", L"47", L"48", L"49", L"50", L"51", L"52", L"53", L"54", L"55", L"56", L"57", L"58",
					L"59", L"60"
			});
			this->minute�mbx->Location = System::Drawing::Point(549, 143);
			this->minute�mbx->Name = L"minute�mbx";
			this->minute�mbx->Size = System::Drawing::Size(95, 28);
			this->minute�mbx->TabIndex = 46;
			// 
			// hour�mbx
			// 
			this->hour�mbx->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->hour�mbx->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->hour�mbx->FormattingEnabled = true;
			this->hour�mbx->Items->AddRange(gcnew cli::array< System::Object^  >(25) {
				L"����", L"00", L"01", L"02", L"03", L"04", L"05",
					L"06", L"07", L"08", L"09", L"10", L"11", L"12", L"13", L"14", L"15", L"16", L"17", L"18", L"19", L"20", L"21", L"22", L"23"
			});
			this->hour�mbx->Location = System::Drawing::Point(423, 145);
			this->hour�mbx->Name = L"hour�mbx";
			this->hour�mbx->Size = System::Drawing::Size(95, 28);
			this->hour�mbx->TabIndex = 45;
			// 
			// fullnameTxtbx
			// 
			this->fullnameTxtbx->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.8F));
			this->fullnameTxtbx->Location = System::Drawing::Point(276, 30);
			this->fullnameTxtbx->Name = L"fullnameTxtbx";
			this->fullnameTxtbx->Size = System::Drawing::Size(368, 24);
			this->fullnameTxtbx->TabIndex = 44;
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
			this->label6->Location = System::Drawing::Point(92, 323);
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
			this->label5->Location = System::Drawing::Point(91, 272);
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
			this->label4->Location = System::Drawing::Point(91, 138);
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
			this->label3->Location = System::Drawing::Point(91, 77);
			this->label3->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(194, 33);
			this->label3->TabIndex = 38;
			this->label3->Text = L"���� ��������";
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
			// txtResults
			// 
			this->txtResults->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.8F));
			this->txtResults->Location = System::Drawing::Point(143, 305);
			this->txtResults->Multiline = true;
			this->txtResults->Name = L"txtResults";
			this->txtResults->Size = System::Drawing::Size(358, 256);
			this->txtResults->TabIndex = 53;
			// 
			// NatalChart
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1426, 934);
			this->Controls->Add(this->txtResults);
			this->Controls->Add(this->closeBtn);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->getChartBtn);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"NatalChart";
			this->Text = L"NatalChart";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		// ����� ��� ��������� URL ��������� �����
		String^ GenerateNatalChartUrl()
		{
			// ����������� ����� ��� URL
			String^ encodedName = Uri::EscapeDataString(fullnameTxtbx->Text);

			// ��������� ���� ��������
			DateTime birthDate = dtOfBirthPker->Value;
			String^ day = birthDate.Day.ToString();
			String^ month = birthDate.Month.ToString();
			String^ year = birthDate.Year.ToString();

			// ��������� ������� ��������
			String^ hour = timeChckBx->Checked ? String::Empty : hour�mbx->SelectedItem->ToString();
			String^ minute = timeChckBx->Checked ? String::Empty : minute�mbx->SelectedItem->ToString();

			// ����������� ����� ��������
			String^ place = Uri::EscapeDataString(plcOfBirthCmbx->Text);

			// ��������� ���������
			array<String^>^ coords = coordintsCmbx->Text->Split(',');
			if (coords->Length != 2)
			{
				throw gcnew Exception("���������� ������ ���� � ������� '������,�������'");
			}

			String^ lat = coords[0]->Trim();
			String^ lon = coords[1]->Trim();

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
			urlBuilder->Append("&zp_offset_geo=3");
			urlBuilder->Append("&action=zp_birthreport");

			return urlBuilder->ToString();
		}
	
	private: System::Void closeBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}
private: System::Void timeChckBx_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	hour�mbx->Enabled = !timeChckBx->Checked;
	minute�mbx->Enabled = !timeChckBx->Checked;
}
private: System::Void getChartBtn_Click(System::Object^ sender, System::EventArgs^ e) {
	try
	{
		// ��������� URL � ������� ���������� ������
		String^ url = GenerateNatalChartUrl();

		// ������������ ���������� ��� ������
		StringBuilder^ infoBuilder = gcnew StringBuilder();
		infoBuilder->AppendLine("=== ��������������� URL ===");
		infoBuilder->AppendLine(url);
		infoBuilder->AppendLine();
		infoBuilder->AppendLine("=== ��������� ������� ===");
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

		// ����� ���������� � TextBox
		txtResults->Text = infoBuilder->ToString();
	}
	catch (Exception^ ex)
	{
		txtResults->Text = "������: " + ex->Message;
		MessageBox::Show("������ ��� ������������ URL: " + ex->Message,
			"������", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
};
}
