#pragma once
#include "Person.h"
#include "Relationship.h"
namespace попытканепытка {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Threading;

	/// <summary>
	/// Сводка для MatrixOfFate
	/// </summary>
	public ref class MatrixOfFate : public System::Windows::Forms::Form
	{
	public:
		MatrixOfFate(void)
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
		~MatrixOfFate()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ menu1;
	private: System::Windows::Forms::Button^ exit;
	private: System::Windows::Forms::Button^ relation;
	private: System::Windows::Forms::Button^ person;
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: 
		Person^ person1 = nullptr;
		Relationship^ relationship = nullptr;
	private: System::Windows::Forms::Button^ previous5;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MatrixOfFate::typeid));
			this->menu1 = (gcnew System::Windows::Forms::Label());
			this->exit = (gcnew System::Windows::Forms::Button());
			this->relation = (gcnew System::Windows::Forms::Button());
			this->person = (gcnew System::Windows::Forms::Button());
			this->previous5 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// menu1
			// 
			this->menu1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->menu1->BackColor = System::Drawing::Color::Transparent;
			this->menu1->Font = (gcnew System::Drawing::Font(L"Soledago", 59.99999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->menu1->ForeColor = System::Drawing::Color::LavenderBlush;
			this->menu1->Location = System::Drawing::Point(254, 65);
			this->menu1->Name = L"menu1";
			this->menu1->Size = System::Drawing::Size(990, 267);
			this->menu1->TabIndex = 5;
			this->menu1->Text = L"Выберите тип матрицы судьбы";
			this->menu1->TextAlign = System::Drawing::ContentAlignment::TopCenter;
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
			this->exit->Location = System::Drawing::Point(1377, 11);
			this->exit->Margin = System::Windows::Forms::Padding(2);
			this->exit->Name = L"exit";
			this->exit->Size = System::Drawing::Size(56, 56);
			this->exit->TabIndex = 6;
			this->exit->Text = L"Х";
			this->exit->UseVisualStyleBackColor = false;
			this->exit->Click += gcnew System::EventHandler(this, &MatrixOfFate::exit_Click);
			// 
			// relation
			// 
			this->relation->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->relation->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"relation.BackgroundImage")));
			this->relation->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->relation->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 47.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->relation->ForeColor = System::Drawing::Color::LavenderBlush;
			this->relation->Location = System::Drawing::Point(186, 348);
			this->relation->Name = L"relation";
			this->relation->Size = System::Drawing::Size(500, 500);
			this->relation->TabIndex = 7;
			this->relation->Text = L"Матрица совместимости";
			this->relation->UseVisualStyleBackColor = true;
			this->relation->Click += gcnew System::EventHandler(this, &MatrixOfFate::relation_Click);
			// 
			// person
			// 
			this->person->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->person->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"person.BackgroundImage")));
			this->person->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->person->Cursor = System::Windows::Forms::Cursors::Hand;
			this->person->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->person->ForeColor = System::Drawing::Color::LavenderBlush;
			this->person->Location = System::Drawing::Point(830, 348);
			this->person->Name = L"person";
			this->person->Size = System::Drawing::Size(500, 500);
			this->person->TabIndex = 8;
			this->person->Text = L"Матрица человека";
			this->person->UseVisualStyleBackColor = true;
			this->person->Click += gcnew System::EventHandler(this, &MatrixOfFate::person_Click);
			// 
			// previous5
			// 
			this->previous5->BackColor = System::Drawing::Color::Transparent;
			this->previous5->Cursor = System::Windows::Forms::Cursors::Hand;
			this->previous5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->previous5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 48, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->previous5->ForeColor = System::Drawing::Color::LavenderBlush;
			this->previous5->Location = System::Drawing::Point(-1, 0);
			this->previous5->Name = L"previous5";
			this->previous5->Size = System::Drawing::Size(124, 76);
			this->previous5->TabIndex = 34;
			this->previous5->Text = L"<";
			this->previous5->UseVisualStyleBackColor = false;
			this->previous5->Click += gcnew System::EventHandler(this, &MatrixOfFate::previous5_Click);
			// 
			// MatrixOfFate
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1444, 981);
			this->Controls->Add(this->previous5);
			this->Controls->Add(this->person);
			this->Controls->Add(this->relation);
			this->Controls->Add(this->exit);
			this->Controls->Add(this->menu1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"MatrixOfFate";
			this->Text = L"MatrixOfFate";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->ResumeLayout(false);

		}
#pragma endregion
private: System::Void person_Click(System::Object^ sender, System::EventArgs^ e) {
	person1 = gcnew Person();
	person1->Opacity = 0;
	person1->Show();
	for (double opacity = 0; opacity <= 1; opacity += 0.1)
	{
		person1->Opacity = opacity;
		Application::DoEvents();
		Threading::Thread::Sleep(15);
	}
	this->Hide();
}
private: System::Void previous5_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void exit_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
}
private: System::Void relation_Click(System::Object^ sender, System::EventArgs^ e) {
	relationship = gcnew Relationship();
	relationship->Opacity = 0;
	relationship->Show();
	for (double opacity = 0; opacity <= 1; opacity += 0.1)
	{
		relationship->Opacity = opacity;
		Application::DoEvents();
		Threading::Thread::Sleep(15);
	}
	this->Hide();
}
};
}
