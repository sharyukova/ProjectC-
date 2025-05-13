#pragma once

namespace попытканепытка {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ MatrixOfPerson
	/// </summary>
	public ref class MatrixOfPerson : public System::Windows::Forms::Form
	{
	public:
		MatrixOfPerson(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~MatrixOfPerson()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ exit;
	protected:

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MatrixOfPerson::typeid));
			this->exit = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
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
			this->exit->Location = System::Drawing::Point(1332, 11);
			this->exit->Margin = System::Windows::Forms::Padding(2);
			this->exit->Name = L"exit";
			this->exit->Size = System::Drawing::Size(85, 80);
			this->exit->TabIndex = 4;
			this->exit->Text = L"’";
			this->exit->UseVisualStyleBackColor = false;
			this->exit->Click += gcnew System::EventHandler(this, &MatrixOfPerson::exit_Click);
			// 
			// MatrixOfPerson
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1428, 942);
			this->Controls->Add(this->exit);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"MatrixOfPerson";
			this->Text = L"MatrixOfPerson";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void exit_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}
	};
}
