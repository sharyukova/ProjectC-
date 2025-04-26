#pragma once

namespace попытканепытка {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ CardOfDay
	/// </summary>
	public ref class CardOfDay : public System::Windows::Forms::Form
	{
	public:
		CardOfDay(void)
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
		~CardOfDay()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	protected:
	private: System::Windows::Forms::RichTextBox^ yourname;
	private: System::Windows::Forms::RichTextBox^ znakzodiaka;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(CardOfDay::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->yourname = (gcnew System::Windows::Forms::RichTextBox());
			this->znakzodiaka = (gcnew System::Windows::Forms::RichTextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->pictureBox1->Location = System::Drawing::Point(460, 315);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(332, 415);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// yourname
			// 
			this->yourname->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->yourname->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->yourname->Location = System::Drawing::Point(201, 75);
			this->yourname->Margin = System::Windows::Forms::Padding(0);
			this->yourname->Name = L"yourname";
			this->yourname->Size = System::Drawing::Size(904, 51);
			this->yourname->TabIndex = 1;
			this->yourname->Text = L"¬ведите им€";
			// 
			// znakzodiaka
			// 
			this->znakzodiaka->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->znakzodiaka->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->znakzodiaka->Location = System::Drawing::Point(201, 191);
			this->znakzodiaka->Margin = System::Windows::Forms::Padding(0);
			this->znakzodiaka->Name = L"znakzodiaka";
			this->znakzodiaka->Size = System::Drawing::Size(910, 56);
			this->znakzodiaka->TabIndex = 2;
			this->znakzodiaka->Text = L"¬ведите знак зодиака";
			// 
			// CardOfDay
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->AutoScroll = true;
			this->AutoScrollMargin = System::Drawing::Size(10, 10);
			this->AutoScrollMinSize = System::Drawing::Size(0, 3000);
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1461, 1100);
			this->Controls->Add(this->znakzodiaka);
			this->Controls->Add(this->yourname);
			this->Controls->Add(this->pictureBox1);
			this->DoubleBuffered = true;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"CardOfDay";
			this->StartPosition = System::Windows::Forms::FormStartPosition::Manual;
			this->Text = L"CardOfDay";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->SetStyle(
				ControlStyles::AllPaintingInWmPaint |
				ControlStyles::UserPaint |
				ControlStyles::OptimizedDoubleBuffer,
				true
			);
		}
#pragma endregion
	};
}
