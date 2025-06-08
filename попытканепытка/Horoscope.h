#pragma once
#include <string>
using namespace System::Collections::Generic;
using namespace System::Net;

namespace попытканепытка {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Horoscope
	/// </summary>
	public ref class Horoscope : public System::Windows::Forms::Form
	{
	public:
		Horoscope(void)
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
		~Horoscope()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ exit;
	private: System::Windows::Forms::Button^ previous3;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::DateTimePicker^ datePckr_horoscope;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ btnGetHoroscope;
	private: System::Windows::Forms::TextBox^ txtHoroscope;
	private: System::Windows::Forms::Button^ button1;

	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code;

		
		std::string GetZodiacSign(DateTime date)
		{
			int day = date.Day;
			int month = date.Month;

			if ((month == 3 && day >= 21) || (month == 4 && day <= 19)) return "aries";
			if ((month == 4 && day >= 20) || (month == 5 && day <= 20)) return "taurus";
			if ((month == 5 && day >= 21) || (month == 6 && day <= 20)) return "gemini";
			if ((month == 6 && day >= 21) || (month == 7 && day <= 22)) return "cancer";
			if ((month == 7 && day >= 23) || (month == 8 && day <= 22)) return "leo";
			if ((month == 8 && day >= 23) || (month == 9 && day <= 22)) return "virgo";
			if ((month == 9 && day >= 23) || (month == 10 && day <= 22)) return "libra";
			if ((month == 10 && day >= 23) || (month == 11 && day <= 21)) return "scorpio";
			if ((month == 11 && day >= 22) || (month == 12 && day <= 21)) return "sagittarius";
			if ((month == 12 && day >= 22) || (month == 1 && day <= 19)) return "capricorn";
			if ((month == 1 && day >= 20) || (month == 2 && day <= 18)) return "aquarius";
			if ((month == 2 && day >= 19) || (month == 3 && day <= 20)) return "pisces";

			return "Неизвестно";
		}

		

		String^ GetSignFromWeb(String^ zodiacSign)
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

						///Удаляем HTML-теги
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
				return "Не удалось получить описание. Попробуйте позже.\r\nИсточник: " + url;
			}
			catch (Exception^ ex)
			{
				return "Ошибка при получении гороскопа: " + ex->Message;
			}
		}

		String^ GetHoroscopeFromWeb(String^ zodiacSign)
		{
			try
			{
				WebClient^ client = gcnew WebClient();
				client->Encoding = System::Text::Encoding::UTF8;
				String^ url = "https://horo.mail.ru/prediction/" + zodiacSign->ToLower() + "/today/";
				String^ html = client->DownloadString(url);
				
				
				
				int startPos = html->IndexOf("class=\"b6a5d4949c e45a4c1552\"><div><p>") + 38;
				if (startPos > 0)
				{
					int endPos = html->IndexOf("</p></div></div></main><div class=\"b1b7b75f6a\">", startPos);
					if (endPos > startPos)
					{
						String^ description = html->Substring(startPos, endPos - startPos);

						description = System::Text::RegularExpressions::Regex::Replace(
							description,
							"<[^>]*>",
							"");

						description = System::Text::RegularExpressions::Regex::Replace(
							description,
							"&[^;]+;",
							" ");

						description = System::Text::RegularExpressions::Regex::Replace(
							description,
							"\\s+",
							" ");

						description = description->Trim();
						description += "\r\n\r\nИсточник: " + url;
						return description;
					}
				}
				return "Не удалось получить описание. Попробуйте позже.\r\nИсточник: " + url;
			}
			catch (Exception^ ex)
			{
				return "Ошибка при получении гороскопа: " + ex->Message;
			}
		}

		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Horoscope::typeid));
			this->exit = (gcnew System::Windows::Forms::Button());
			this->previous3 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->datePckr_horoscope = (gcnew System::Windows::Forms::DateTimePicker());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->btnGetHoroscope = (gcnew System::Windows::Forms::Button());
			this->txtHoroscope = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// exit
			// 
			this->exit->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->exit->BackColor = System::Drawing::Color::Transparent;
			this->exit->Cursor = System::Windows::Forms::Cursors::Hand;
			this->exit->FlatAppearance->BorderSize = 0;
			this->exit->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->exit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->exit->ForeColor = System::Drawing::Color::White;
			this->exit->Location = System::Drawing::Point(2629, 25);
			this->exit->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->exit->Name = L"exit";
			this->exit->Size = System::Drawing::Size(198, 178);
			this->exit->TabIndex = 4;
			this->exit->Text = L"Х";
			this->exit->UseVisualStyleBackColor = false;
			this->exit->Click += gcnew System::EventHandler(this, &Horoscope::exit_Click);
			// 
			// previous3
			// 
			this->previous3->BackColor = System::Drawing::Color::Transparent;
			this->previous3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->previous3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->previous3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 48, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->previous3->ForeColor = System::Drawing::Color::LavenderBlush;
			this->previous3->Location = System::Drawing::Point(0, 1);
			this->previous3->Margin = System::Windows::Forms::Padding(7);
			this->previous3->Name = L"previous3";
			this->previous3->Size = System::Drawing::Size(119, 85);
			this->previous3->TabIndex = 34;
			this->previous3->Text = L"<";
			this->previous3->UseVisualStyleBackColor = false;
			this->previous3->Click += gcnew System::EventHandler(this, &Horoscope::previous3_Click);
			// 
			// label1
			// 
			this->label1->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Soledago", 60));
			this->label1->ForeColor = System::Drawing::Color::LavenderBlush;
			this->label1->Location = System::Drawing::Point(527, 35);
			this->label1->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(413, 103);
			this->label1->TabIndex = 35;
			this->label1->Text = L"Гороскоп";
			// 
			// datePckr_horoscope
			// 
			this->datePckr_horoscope->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->datePckr_horoscope->CalendarFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F));
			this->datePckr_horoscope->CalendarMonthBackground = System::Drawing::Color::LavenderBlush;
			this->datePckr_horoscope->CalendarTitleBackColor = System::Drawing::Color::RosyBrown;
			this->datePckr_horoscope->CalendarTitleForeColor = System::Drawing::Color::IndianRed;
			this->datePckr_horoscope->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.8F));
			this->datePckr_horoscope->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->datePckr_horoscope->Location = System::Drawing::Point(561, 317);
			this->datePckr_horoscope->Margin = System::Windows::Forms::Padding(5);
			this->datePckr_horoscope->Name = L"datePckr_horoscope";
			this->datePckr_horoscope->Size = System::Drawing::Size(334, 31);
			this->datePckr_horoscope->TabIndex = 36;
			// 
			// label2
			// 
			this->label2->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->ForeColor = System::Drawing::Color::LavenderBlush;
			this->label2->Location = System::Drawing::Point(498, 253);
			this->label2->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(481, 32);
			this->label2->TabIndex = 37;
			this->label2->Text = L"Выберите дату вашего рождения:";
			// 
			// btnGetHoroscope
			// 
			this->btnGetHoroscope->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->btnGetHoroscope->BackColor = System::Drawing::Color::LavenderBlush;
			this->btnGetHoroscope->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnGetHoroscope->Location = System::Drawing::Point(630, 376);
			this->btnGetHoroscope->Margin = System::Windows::Forms::Padding(5);
			this->btnGetHoroscope->Name = L"btnGetHoroscope";
			this->btnGetHoroscope->Size = System::Drawing::Size(189, 65);
			this->btnGetHoroscope->TabIndex = 38;
			this->btnGetHoroscope->Text = L"Получить гороскоп";
			this->btnGetHoroscope->UseVisualStyleBackColor = false;
			this->btnGetHoroscope->Click += gcnew System::EventHandler(this, &Horoscope::btnGetHoroscope_Click);
			// 
			// txtHoroscope
			// 
			this->txtHoroscope->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->txtHoroscope->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->txtHoroscope->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtHoroscope->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->txtHoroscope->ForeColor = System::Drawing::Color::LavenderBlush;
			this->txtHoroscope->Location = System::Drawing::Point(438, 510);
			this->txtHoroscope->Multiline = true;
			this->txtHoroscope->Name = L"txtHoroscope";
			this->txtHoroscope->ReadOnly = true;
			this->txtHoroscope->Size = System::Drawing::Size(567, 551);
			this->txtHoroscope->TabIndex = 39;
			// 
			// button1
			// 
			this->button1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button1->BackColor = System::Drawing::Color::Transparent;
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Soledago", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(1359, 6);
			this->button1->Margin = System::Windows::Forms::Padding(2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(85, 80);
			this->button1->TabIndex = 51;
			this->button1->Text = L"Х";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Horoscope::button1_Click);
			// 
			// Horoscope
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(10, 22);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1444, 981);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->txtHoroscope);
			this->Controls->Add(this->btnGetHoroscope);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->datePckr_horoscope);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->previous3);
			this->Controls->Add(this->exit);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(7);
			this->Name = L"Horoscope";
			this->Text = L"Horoscope";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void exit_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}
	private: System::Void previous3_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void btnGetHoroscope_Click(System::Object^ sender, System::EventArgs^ e) {
		DateTime selectedDate = datePckr_horoscope->Value;
		DateTime today = DateTime::Today;

		std::string zodiacSign = GetZodiacSign(selectedDate);
		String^ zodiacSignStr = gcnew String(zodiacSign.c_str());

		if (selectedDate > today)
		{
			txtHoroscope->Text = "Дата рождения некорректна. Вы ещё не родились. Попробуйте снова";
			return;
		}
		txtHoroscope->Text = "Ваш знак зодиака: " + GetSignFromWeb(zodiacSignStr) + "\r\n\r\n";
		txtHoroscope->Text += "Гороскоп на сегодня:\r\n";
		txtHoroscope->Text += GetHoroscopeFromWeb(zodiacSignStr);
		
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}
};
}
