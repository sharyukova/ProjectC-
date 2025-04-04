#pragma once

namespace попытканепытка {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для FirstMenu
	/// </summary>
	public ref class FirstMenu : public System::Windows::Forms::Form
	{
	public:
		FirstMenu(void)
		{
			InitializeComponent();
			LoadBackground();

			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->SetStyle(
				ControlStyles::ResizeRedraw |
				ControlStyles::AllPaintingInWmPaint |
				ControlStyles::UserPaint |
				ControlStyles::OptimizedDoubleBuffer,
				true
			);

			Application::EnableVisualStyles();
			this->Paint += gcnew PaintEventHandler(this, &FirstMenu::FirstMenu_Paint);
			this->Load += gcnew EventHandler(this, &FirstMenu::FirstMenu_Load);
		}
	private: System::Void FirstMenu_Paint(System::Object^ sender, PaintEventArgs^ e) {
		e->Graphics->SmoothingMode = System::Drawing::Drawing2D::SmoothingMode::AntiAlias;
	}
	private:
		System::Drawing::Image^ bgImage2;

		void LoadBackground() {

		}
	
	protected:
		~FirstMenu()
		{
			if (components)
			{
				delete components;
			}
			if (bgImage2)
			{
				delete bgImage2;
			}
		}
	private: System::Windows::Forms::Button^ exit;
	protected:

	private:
		
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code

		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(FirstMenu::typeid));
			this->exit = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// exit
			// 
			this->exit->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->exit->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->exit->Font = (gcnew System::Drawing::Font(L"Soledago", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->exit->ForeColor = System::Drawing::Color::IndianRed;
			this->exit->Location = System::Drawing::Point(1372, 1);
			this->exit->Margin = System::Windows::Forms::Padding(2);
			this->exit->Name = L"exit";
			this->exit->Size = System::Drawing::Size(56, 56);
			this->exit->TabIndex = 2;
			this->exit->Text = L"Х";
			this->exit->UseVisualStyleBackColor = false;
			this->exit->Click += gcnew System::EventHandler(this, &FirstMenu::exit_Click);
			// 
			// FirstMenu
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1429, 847);
			this->Controls->Add(this->exit);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"FirstMenu";
			this->Text = L"FirstMenu";
			this->Load += gcnew System::EventHandler(this, &FirstMenu::FirstMenu_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void FirstMenu_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void exit_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}
	};
}
