#pragma once
#include "FirstMenu.h"
namespace попытканепытка {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
		}

	protected:
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ start;
	private: System::Windows::Forms::Button^ exit;
	protected:

	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->start = (gcnew System::Windows::Forms::Button());
			this->exit = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// start
			// 
			this->start->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->start->BackColor = System::Drawing::Color::Black;
			this->start->Font = (gcnew System::Drawing::Font(L"Soledago", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->start->Location = System::Drawing::Point(586, 569);
			this->start->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->start->Name = L"start";
			this->start->Size = System::Drawing::Size(273, 87);
			this->start->TabIndex = 0;
			this->start->Text = L"МЕНЮ";
			this->start->TextImageRelation = System::Windows::Forms::TextImageRelation::TextAboveImage;
			this->start->UseVisualStyleBackColor = false;
			this->start->Click += gcnew System::EventHandler(this, &MyForm::start_Click);
			// 
			// exit
			// 
			this->exit->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->exit->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->exit->Font = (gcnew System::Drawing::Font(L"Soledago", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->exit->ForeColor = System::Drawing::Color::IndianRed;
			this->exit->Location = System::Drawing::Point(1370, 0);
			this->exit->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->exit->Name = L"exit";
			this->exit->Size = System::Drawing::Size(56, 56);
			this->exit->TabIndex = 1;
			this->exit->Text = L"Х";
			this->exit->UseVisualStyleBackColor = false;
			this->exit->Click += gcnew System::EventHandler(this, &MyForm::exit_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1429, 847);
			this->Controls->Add(this->exit);
			this->Controls->Add(this->start);
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		start->BackColor = System::Drawing::Color::FromArgb(128, 0, 0, 0);
		start->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
		start->FlatAppearance->BorderSize = 0;

		start->ForeColor = System::Drawing::Color::White;
		}
	private: System::Void exit_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}
	private: System::Void start_Click(System::Object^ sender, System::EventArgs^ e) {
		FirstMenu^ firstMenu = gcnew FirstMenu();
		firstMenu->Show();
		this->Hide();
	}
	};
}
