#pragma once

namespace попытканепытка {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MatrixOfFate::typeid));
			this->menu1 = (gcnew System::Windows::Forms::Label());
			this->exit = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// menu1
			// 
			this->menu1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->menu1->BackColor = System::Drawing::Color::Transparent;
			this->menu1->Font = (gcnew System::Drawing::Font(L"Soledago", 59.99999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->menu1->ForeColor = System::Drawing::Color::LavenderBlush;
			this->menu1->Location = System::Drawing::Point(246, 65);
			this->menu1->Name = L"menu1";
			this->menu1->Size = System::Drawing::Size(990, 228);
			this->menu1->TabIndex = 5;
			this->menu1->Text = L"Выберите тип матрицы совместимости";
			this->menu1->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->menu1->Click += gcnew System::EventHandler(this, &MatrixOfFate::menu1_Click);
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
			this->exit->Location = System::Drawing::Point(1361, 11);
			this->exit->Margin = System::Windows::Forms::Padding(2);
			this->exit->Name = L"exit";
			this->exit->Size = System::Drawing::Size(56, 56);
			this->exit->TabIndex = 6;
			this->exit->Text = L"Х";
			this->exit->UseVisualStyleBackColor = false;
			this->exit->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->exit->BackColor = System::Drawing::Color::Transparent;
			this->exit->FlatAppearance->BorderSize = 0;
			// 
			// MatrixOfFate
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1428, 942);
			this->Controls->Add(this->exit);
			this->Controls->Add(this->menu1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"MatrixOfFate";
			this->Text = L"MatrixOfFate";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void menu1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
