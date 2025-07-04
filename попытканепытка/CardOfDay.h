#pragma once
#include <thread>
#include <msclr/marshal.h>
#include <msclr/marshal_cppstd.h>
#include "sqlite3.h"
#include <stdlib.h>
#include <windows.h>
#include <shlwapi.h>
#include <iostream>
#include <fstream>
#pragma comment(lib, "shlwapi.lib")
#include <locale>
#include <codecvt>

#pragma comment(lib, "sqlite3.lib")
#include <msclr/marshal_cppstd.h>  
namespace �������������� {

    using namespace System;
    using namespace System::IO;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;
    using namespace System::Threading;
    using namespace System::Runtime::InteropServices;

    public ref class CardOfDay : public System::Windows::Forms::Form
    {
    private:
        array<PictureBox^>^ pictureBoxes; 
    private: System::Windows::Forms::Button^ previous1;
    private: System::Windows::Forms::PictureBox^ card2;
    private: System::Windows::Forms::PictureBox^ card3;
    private: System::Windows::Forms::PictureBox^ card4;
    private: System::Windows::Forms::PictureBox^ card5;
    private: System::Windows::Forms::PictureBox^ card6;
    private: System::Windows::Forms::PictureBox^ pictureBox1;




    private: System::Windows::Forms::PictureBox^ card;
    private: System::Windows::Forms::Label^ name;
    private: System::Windows::Forms::Label^ cardOfEnd;

    private: System::Windows::Forms::ComboBox^ enterZZ;
    private: System::Windows::Forms::Button^ enter;
    private: System::Windows::Forms::RichTextBox^ question;
    private: System::Windows::Forms::RichTextBox^ description;
    private: System::Windows::Forms::Button^ button1;
    private: System::Windows::Forms::Label^ label1;




           bool isCardSelected;
    public:
        CardOfDay(void)
        {
            this->SetStyle(
                ControlStyles::AllPaintingInWmPaint |
                ControlStyles::UserPaint |
                ControlStyles::OptimizedDoubleBuffer |
                ControlStyles::ResizeRedraw,
                true);

            this->DoubleBuffered = true;
            this->SuspendLayout();
            InitializeComponent();
            this->ResumeLayout(false);
            isCardSelected = false;

            pictureBoxes = gcnew array<PictureBox^> {
                pictureBox2, pictureBox3, pictureBox4, pictureBox5, pictureBox6,
                    pictureBox7, pictureBox8, pictureBox9, pictureBox10, pictureBox11,
                    pictureBox12, pictureBox13, pictureBox14, pictureBox15, pictureBox16,
                    pictureBox17, pictureBox18, pictureBox19, pictureBox20, pictureBox21,
                    pictureBox22, pictureBox23, pictureBox24, pictureBox25, pictureBox26,
                    pictureBox27, pictureBox28, pictureBox29, pictureBox30, pictureBox31
            };

            this->ResumeLayout(false);
        }

    protected:
        ~CardOfDay()
        {
            if (components)
            {
                delete components;
            }
        }
    private: System::Windows::Forms::PictureBox^ card1;
    protected:

    private:

        System::Windows::Forms::RichTextBox^ yourname;

    private: System::Windows::Forms::PictureBox^ pictureBox2;
    private: System::Windows::Forms::PictureBox^ pictureBox3;
    private: System::Windows::Forms::PictureBox^ pictureBox4;
    private: System::Windows::Forms::PictureBox^ pictureBox5;
    private: System::Windows::Forms::PictureBox^ pictureBox6;
    private: System::Windows::Forms::PictureBox^ pictureBox7;
    private: System::Windows::Forms::PictureBox^ pictureBox8;
    private: System::Windows::Forms::PictureBox^ pictureBox9;
    private: System::Windows::Forms::PictureBox^ pictureBox10;
    private: System::Windows::Forms::PictureBox^ pictureBox11;
    private: System::Windows::Forms::PictureBox^ pictureBox12;
    private: System::Windows::Forms::PictureBox^ pictureBox13;
    private: System::Windows::Forms::PictureBox^ pictureBox14;
    private: System::Windows::Forms::PictureBox^ pictureBox15;
    private: System::Windows::Forms::PictureBox^ pictureBox16;
    private: System::Windows::Forms::PictureBox^ pictureBox17;
    private: System::Windows::Forms::PictureBox^ pictureBox18;
    private: System::Windows::Forms::PictureBox^ pictureBox19;
    private: System::Windows::Forms::PictureBox^ pictureBox20;
    private: System::Windows::Forms::PictureBox^ pictureBox21;
    private: System::Windows::Forms::PictureBox^ pictureBox22;
    private: System::Windows::Forms::PictureBox^ pictureBox23;
    private: System::Windows::Forms::PictureBox^ pictureBox24;
    private: System::Windows::Forms::PictureBox^ pictureBox25;
    private: System::Windows::Forms::PictureBox^ pictureBox26;
    private: System::Windows::Forms::PictureBox^ pictureBox27;
    private: System::Windows::Forms::PictureBox^ pictureBox28;
    private: System::Windows::Forms::PictureBox^ pictureBox29;
    private: System::Windows::Forms::PictureBox^ pictureBox30;
    private: System::Windows::Forms::PictureBox^ pictureBox31;
    private: System::Windows::Forms::Button^ exit;
           System::ComponentModel::Container^ components;
    private:
    private:
        int cardsSelectedCount = 0;

        void PictureBox_Click(Object^ sender, EventArgs^ e)
        {
            if(this->enter->Tag == "entered")
            {
                if (cardsSelectedCount >= 7)
                    return;

                PictureBox^ clickedBox = (PictureBox^)sender;
                clickedBox->Location = System::Drawing::Point(
                    clickedBox->Location.X,
                    clickedBox->Location.Y - 34);

                cardsSelectedCount++;

                if (cardsSelectedCount >= 7)
                {
                    for each (PictureBox ^ box in pictureBoxes)
                    {
                        if (box != clickedBox &&
                            box->Location.Y == box->Location.Y)
                        {
                            box->Enabled = false;
                            box->Cursor = Cursors::No;
                        }
                    }
                }
                if (cardsSelectedCount == 1) {
                    this->card6->Tag = "1";
                }
                if (cardsSelectedCount == 2) {
                    this->card4->Tag = "1";
                }
                if (cardsSelectedCount == 3) {
                    this->card5->Tag = "1";
                }
                if (cardsSelectedCount == 4) {
                    this->card1->Tag = "1";
                }
                if (cardsSelectedCount == 5) {
                    this->card2->Tag = "1";
                }
                if (cardsSelectedCount == 6) {
                    this->card3->Tag = "1";
                }
                if (cardsSelectedCount == 7) {
                    this->pictureBox1->Tag = "1";
                }
            }
            else {
                MessageBox::Show("�� �� ����� ����������");
            }
        }
#pragma region Windows Form Designer generated code
           void InitializeComponent(void)
           {
               System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(CardOfDay::typeid));
               this->card1 = (gcnew System::Windows::Forms::PictureBox());
               this->yourname = (gcnew System::Windows::Forms::RichTextBox());
               this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
               this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
               this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
               this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
               this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
               this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
               this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
               this->pictureBox9 = (gcnew System::Windows::Forms::PictureBox());
               this->pictureBox10 = (gcnew System::Windows::Forms::PictureBox());
               this->pictureBox11 = (gcnew System::Windows::Forms::PictureBox());
               this->pictureBox12 = (gcnew System::Windows::Forms::PictureBox());
               this->pictureBox13 = (gcnew System::Windows::Forms::PictureBox());
               this->pictureBox14 = (gcnew System::Windows::Forms::PictureBox());
               this->pictureBox15 = (gcnew System::Windows::Forms::PictureBox());
               this->pictureBox16 = (gcnew System::Windows::Forms::PictureBox());
               this->pictureBox17 = (gcnew System::Windows::Forms::PictureBox());
               this->pictureBox18 = (gcnew System::Windows::Forms::PictureBox());
               this->pictureBox19 = (gcnew System::Windows::Forms::PictureBox());
               this->pictureBox20 = (gcnew System::Windows::Forms::PictureBox());
               this->pictureBox21 = (gcnew System::Windows::Forms::PictureBox());
               this->pictureBox22 = (gcnew System::Windows::Forms::PictureBox());
               this->pictureBox23 = (gcnew System::Windows::Forms::PictureBox());
               this->pictureBox24 = (gcnew System::Windows::Forms::PictureBox());
               this->pictureBox25 = (gcnew System::Windows::Forms::PictureBox());
               this->pictureBox26 = (gcnew System::Windows::Forms::PictureBox());
               this->pictureBox27 = (gcnew System::Windows::Forms::PictureBox());
               this->pictureBox28 = (gcnew System::Windows::Forms::PictureBox());
               this->pictureBox29 = (gcnew System::Windows::Forms::PictureBox());
               this->pictureBox30 = (gcnew System::Windows::Forms::PictureBox());
               this->pictureBox31 = (gcnew System::Windows::Forms::PictureBox());
               this->exit = (gcnew System::Windows::Forms::Button());
               this->previous1 = (gcnew System::Windows::Forms::Button());
               this->card2 = (gcnew System::Windows::Forms::PictureBox());
               this->card3 = (gcnew System::Windows::Forms::PictureBox());
               this->card4 = (gcnew System::Windows::Forms::PictureBox());
               this->card5 = (gcnew System::Windows::Forms::PictureBox());
               this->card6 = (gcnew System::Windows::Forms::PictureBox());
               this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
               this->card = (gcnew System::Windows::Forms::PictureBox());
               this->name = (gcnew System::Windows::Forms::Label());
               this->cardOfEnd = (gcnew System::Windows::Forms::Label());
               this->enterZZ = (gcnew System::Windows::Forms::ComboBox());
               this->enter = (gcnew System::Windows::Forms::Button());
               this->question = (gcnew System::Windows::Forms::RichTextBox());
               this->description = (gcnew System::Windows::Forms::RichTextBox());
               this->button1 = (gcnew System::Windows::Forms::Button());
               this->label1 = (gcnew System::Windows::Forms::Label());
               (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->card1))->BeginInit();
               (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
               (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
               (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
               (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
               (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
               (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
               (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->BeginInit();
               (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->BeginInit();
               (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->BeginInit();
               (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->BeginInit();
               (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->BeginInit();
               (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox13))->BeginInit();
               (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox14))->BeginInit();
               (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox15))->BeginInit();
               (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox16))->BeginInit();
               (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox17))->BeginInit();
               (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox18))->BeginInit();
               (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox19))->BeginInit();
               (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox20))->BeginInit();
               (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox21))->BeginInit();
               (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox22))->BeginInit();
               (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox23))->BeginInit();
               (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox24))->BeginInit();
               (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox25))->BeginInit();
               (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox26))->BeginInit();
               (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox27))->BeginInit();
               (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox28))->BeginInit();
               (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox29))->BeginInit();
               (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox30))->BeginInit();
               (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox31))->BeginInit();
               (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->card2))->BeginInit();
               (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->card3))->BeginInit();
               (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->card4))->BeginInit();
               (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->card5))->BeginInit();
               (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->card6))->BeginInit();
               (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
               (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->card))->BeginInit();
               this->SuspendLayout();
               // 
               // card1
               // 
               this->card1->Anchor = System::Windows::Forms::AnchorStyles::Top;
               this->card1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"card1.BackgroundImage")));
               this->card1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
               this->card1->Location = System::Drawing::Point(409, 1128);
               this->card1->Margin = System::Windows::Forms::Padding(0);
               this->card1->Name = L"card1";
               this->card1->Size = System::Drawing::Size(110, 190);
               this->card1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
               this->card1->TabIndex = 0;
               this->card1->TabStop = false;
               this->card1->Click += gcnew System::EventHandler(this, &CardOfDay::card1_Click);
               // 
               // yourname
               // 
               this->yourname->Anchor = System::Windows::Forms::AnchorStyles::Top;
               this->yourname->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(236)),
                   static_cast<System::Int32>(static_cast<System::Byte>(236)));
               this->yourname->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                   static_cast<System::Byte>(204)));
               this->yourname->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                   static_cast<System::Int32>(static_cast<System::Byte>(64)));
               this->yourname->ImeMode = System::Windows::Forms::ImeMode::KatakanaHalf;
               this->yourname->Location = System::Drawing::Point(316, 218);
               this->yourname->Margin = System::Windows::Forms::Padding(0);
               this->yourname->Name = L"yourname";
               this->yourname->Size = System::Drawing::Size(696, 36);
               this->yourname->TabIndex = 1;
               this->yourname->Text = L"������� ���";
               this->yourname->TextChanged += gcnew System::EventHandler(this, &CardOfDay::yourname_TextChanged);
               this->yourname->Enter += gcnew System::EventHandler(this, &CardOfDay::yourname_Enter);
               this->yourname->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &CardOfDay::yourname_KeyDown);
               this->yourname->Leave += gcnew System::EventHandler(this, &CardOfDay::yourname_Leave);
               // 
               // pictureBox2
               // 
               this->pictureBox2->Anchor = System::Windows::Forms::AnchorStyles::Top;
               this->pictureBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.BackgroundImage")));
               this->pictureBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
               this->pictureBox2->Cursor = System::Windows::Forms::Cursors::Hand;
               this->pictureBox2->Location = System::Drawing::Point(231, 445);
               this->pictureBox2->Margin = System::Windows::Forms::Padding(0);
               this->pictureBox2->Name = L"pictureBox2";
               this->pictureBox2->Size = System::Drawing::Size(100, 190);
               this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
               this->pictureBox2->TabIndex = 3;
               this->pictureBox2->TabStop = false;
               this->pictureBox2->Click += gcnew System::EventHandler(this, &CardOfDay::PictureBox_Click);
               // 
               // pictureBox3
               // 
               this->pictureBox3->Anchor = System::Windows::Forms::AnchorStyles::Top;
               this->pictureBox3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.BackgroundImage")));
               this->pictureBox3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
               this->pictureBox3->Cursor = System::Windows::Forms::Cursors::Hand;
               this->pictureBox3->Location = System::Drawing::Point(254, 445);
               this->pictureBox3->Margin = System::Windows::Forms::Padding(0);
               this->pictureBox3->Name = L"pictureBox3";
               this->pictureBox3->Size = System::Drawing::Size(100, 190);
               this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
               this->pictureBox3->TabIndex = 4;
               this->pictureBox3->TabStop = false;
               this->pictureBox3->Click += gcnew System::EventHandler(this, &CardOfDay::PictureBox_Click);
               // 
               // pictureBox4
               // 
               this->pictureBox4->Anchor = System::Windows::Forms::AnchorStyles::Top;
               this->pictureBox4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.BackgroundImage")));
               this->pictureBox4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
               this->pictureBox4->Cursor = System::Windows::Forms::Cursors::Hand;
               this->pictureBox4->Location = System::Drawing::Point(306, 445);
               this->pictureBox4->Margin = System::Windows::Forms::Padding(0);
               this->pictureBox4->Name = L"pictureBox4";
               this->pictureBox4->Size = System::Drawing::Size(100, 190);
               this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
               this->pictureBox4->TabIndex = 5;
               this->pictureBox4->TabStop = false;
               this->pictureBox4->Click += gcnew System::EventHandler(this, &CardOfDay::PictureBox_Click);
               // 
               // pictureBox5
               // 
               this->pictureBox5->Anchor = System::Windows::Forms::AnchorStyles::Top;
               this->pictureBox5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.BackgroundImage")));
               this->pictureBox5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
               this->pictureBox5->Cursor = System::Windows::Forms::Cursors::Hand;
               this->pictureBox5->Location = System::Drawing::Point(279, 445);
               this->pictureBox5->Margin = System::Windows::Forms::Padding(0);
               this->pictureBox5->Name = L"pictureBox5";
               this->pictureBox5->Size = System::Drawing::Size(100, 190);
               this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
               this->pictureBox5->TabIndex = 5;
               this->pictureBox5->TabStop = false;
               this->pictureBox5->Click += gcnew System::EventHandler(this, &CardOfDay::PictureBox_Click);
               // 
               // pictureBox6
               // 
               this->pictureBox6->Anchor = System::Windows::Forms::AnchorStyles::Top;
               this->pictureBox6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.BackgroundImage")));
               this->pictureBox6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
               this->pictureBox6->Cursor = System::Windows::Forms::Cursors::Hand;
               this->pictureBox6->Location = System::Drawing::Point(473, 445);
               this->pictureBox6->Margin = System::Windows::Forms::Padding(0);
               this->pictureBox6->Name = L"pictureBox6";
               this->pictureBox6->Size = System::Drawing::Size(100, 190);
               this->pictureBox6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
               this->pictureBox6->TabIndex = 11;
               this->pictureBox6->TabStop = false;
               this->pictureBox6->Click += gcnew System::EventHandler(this, &CardOfDay::PictureBox_Click);
               // 
               // pictureBox7
               // 
               this->pictureBox7->Anchor = System::Windows::Forms::AnchorStyles::Top;
               this->pictureBox7->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.BackgroundImage")));
               this->pictureBox7->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
               this->pictureBox7->Cursor = System::Windows::Forms::Cursors::Hand;
               this->pictureBox7->Location = System::Drawing::Point(442, 445);
               this->pictureBox7->Margin = System::Windows::Forms::Padding(0);
               this->pictureBox7->Name = L"pictureBox7";
               this->pictureBox7->Size = System::Drawing::Size(100, 190);
               this->pictureBox7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
               this->pictureBox7->TabIndex = 9;
               this->pictureBox7->TabStop = false;
               this->pictureBox7->Click += gcnew System::EventHandler(this, &CardOfDay::PictureBox_Click);
               // 
               // pictureBox8
               // 
               this->pictureBox8->Anchor = System::Windows::Forms::AnchorStyles::Top;
               this->pictureBox8->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox8.BackgroundImage")));
               this->pictureBox8->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
               this->pictureBox8->Cursor = System::Windows::Forms::Cursors::Hand;
               this->pictureBox8->Location = System::Drawing::Point(415, 445);
               this->pictureBox8->Margin = System::Windows::Forms::Padding(0);
               this->pictureBox8->Name = L"pictureBox8";
               this->pictureBox8->Size = System::Drawing::Size(100, 190);
               this->pictureBox8->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
               this->pictureBox8->TabIndex = 10;
               this->pictureBox8->TabStop = false;
               this->pictureBox8->Click += gcnew System::EventHandler(this, &CardOfDay::PictureBox_Click);
               // 
               // pictureBox9
               // 
               this->pictureBox9->Anchor = System::Windows::Forms::AnchorStyles::Top;
               this->pictureBox9->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox9.BackgroundImage")));
               this->pictureBox9->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
               this->pictureBox9->Cursor = System::Windows::Forms::Cursors::Hand;
               this->pictureBox9->Location = System::Drawing::Point(337, 445);
               this->pictureBox9->Margin = System::Windows::Forms::Padding(0);
               this->pictureBox9->Name = L"pictureBox9";
               this->pictureBox9->Size = System::Drawing::Size(100, 190);
               this->pictureBox9->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
               this->pictureBox9->TabIndex = 6;
               this->pictureBox9->TabStop = false;
               this->pictureBox9->Click += gcnew System::EventHandler(this, &CardOfDay::PictureBox_Click);
               // 
               // pictureBox10
               // 
               this->pictureBox10->Anchor = System::Windows::Forms::AnchorStyles::Top;
               this->pictureBox10->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox10.BackgroundImage")));
               this->pictureBox10->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
               this->pictureBox10->Cursor = System::Windows::Forms::Cursors::Hand;
               this->pictureBox10->Location = System::Drawing::Point(390, 445);
               this->pictureBox10->Margin = System::Windows::Forms::Padding(0);
               this->pictureBox10->Name = L"pictureBox10";
               this->pictureBox10->Size = System::Drawing::Size(100, 190);
               this->pictureBox10->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
               this->pictureBox10->TabIndex = 8;
               this->pictureBox10->TabStop = false;
               this->pictureBox10->Click += gcnew System::EventHandler(this, &CardOfDay::PictureBox_Click);
               // 
               // pictureBox11
               // 
               this->pictureBox11->Anchor = System::Windows::Forms::AnchorStyles::Top;
               this->pictureBox11->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox11.BackgroundImage")));
               this->pictureBox11->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
               this->pictureBox11->Cursor = System::Windows::Forms::Cursors::Hand;
               this->pictureBox11->Location = System::Drawing::Point(366, 445);
               this->pictureBox11->Margin = System::Windows::Forms::Padding(0);
               this->pictureBox11->Name = L"pictureBox11";
               this->pictureBox11->Size = System::Drawing::Size(100, 190);
               this->pictureBox11->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
               this->pictureBox11->TabIndex = 7;
               this->pictureBox11->TabStop = false;
               this->pictureBox11->Click += gcnew System::EventHandler(this, &CardOfDay::PictureBox_Click);
               // 
               // pictureBox12
               // 
               this->pictureBox12->Anchor = System::Windows::Forms::AnchorStyles::Top;
               this->pictureBox12->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox12.BackgroundImage")));
               this->pictureBox12->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
               this->pictureBox12->Cursor = System::Windows::Forms::Cursors::Hand;
               this->pictureBox12->Location = System::Drawing::Point(739, 445);
               this->pictureBox12->Margin = System::Windows::Forms::Padding(0);
               this->pictureBox12->Name = L"pictureBox12";
               this->pictureBox12->Size = System::Drawing::Size(100, 190);
               this->pictureBox12->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
               this->pictureBox12->TabIndex = 21;
               this->pictureBox12->TabStop = false;
               this->pictureBox12->Click += gcnew System::EventHandler(this, &CardOfDay::PictureBox_Click);
               // 
               // pictureBox13
               // 
               this->pictureBox13->Anchor = System::Windows::Forms::AnchorStyles::Top;
               this->pictureBox13->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox13.BackgroundImage")));
               this->pictureBox13->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
               this->pictureBox13->Cursor = System::Windows::Forms::Cursors::Hand;
               this->pictureBox13->Location = System::Drawing::Point(708, 445);
               this->pictureBox13->Margin = System::Windows::Forms::Padding(0);
               this->pictureBox13->Name = L"pictureBox13";
               this->pictureBox13->Size = System::Drawing::Size(100, 190);
               this->pictureBox13->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
               this->pictureBox13->TabIndex = 19;
               this->pictureBox13->TabStop = false;
               this->pictureBox13->Click += gcnew System::EventHandler(this, &CardOfDay::PictureBox_Click);
               // 
               // pictureBox14
               // 
               this->pictureBox14->Anchor = System::Windows::Forms::AnchorStyles::Top;
               this->pictureBox14->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox14.BackgroundImage")));
               this->pictureBox14->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
               this->pictureBox14->Cursor = System::Windows::Forms::Cursors::Hand;
               this->pictureBox14->Location = System::Drawing::Point(681, 445);
               this->pictureBox14->Margin = System::Windows::Forms::Padding(0);
               this->pictureBox14->Name = L"pictureBox14";
               this->pictureBox14->Size = System::Drawing::Size(100, 190);
               this->pictureBox14->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
               this->pictureBox14->TabIndex = 20;
               this->pictureBox14->TabStop = false;
               this->pictureBox14->Click += gcnew System::EventHandler(this, &CardOfDay::PictureBox_Click);
               // 
               // pictureBox15
               // 
               this->pictureBox15->Anchor = System::Windows::Forms::AnchorStyles::Top;
               this->pictureBox15->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox15.BackgroundImage")));
               this->pictureBox15->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
               this->pictureBox15->Cursor = System::Windows::Forms::Cursors::Hand;
               this->pictureBox15->Location = System::Drawing::Point(656, 445);
               this->pictureBox15->Margin = System::Windows::Forms::Padding(0);
               this->pictureBox15->Name = L"pictureBox15";
               this->pictureBox15->Size = System::Drawing::Size(100, 190);
               this->pictureBox15->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
               this->pictureBox15->TabIndex = 18;
               this->pictureBox15->TabStop = false;
               this->pictureBox15->Click += gcnew System::EventHandler(this, &CardOfDay::PictureBox_Click);
               // 
               // pictureBox16
               // 
               this->pictureBox16->Anchor = System::Windows::Forms::AnchorStyles::Top;
               this->pictureBox16->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox16.BackgroundImage")));
               this->pictureBox16->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
               this->pictureBox16->Cursor = System::Windows::Forms::Cursors::Hand;
               this->pictureBox16->Location = System::Drawing::Point(632, 445);
               this->pictureBox16->Margin = System::Windows::Forms::Padding(0);
               this->pictureBox16->Name = L"pictureBox16";
               this->pictureBox16->Size = System::Drawing::Size(100, 190);
               this->pictureBox16->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
               this->pictureBox16->TabIndex = 17;
               this->pictureBox16->TabStop = false;
               this->pictureBox16->Click += gcnew System::EventHandler(this, &CardOfDay::PictureBox_Click);
               // 
               // pictureBox17
               // 
               this->pictureBox17->Anchor = System::Windows::Forms::AnchorStyles::Top;
               this->pictureBox17->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox17.BackgroundImage")));
               this->pictureBox17->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
               this->pictureBox17->Cursor = System::Windows::Forms::Cursors::Hand;
               this->pictureBox17->Location = System::Drawing::Point(603, 445);
               this->pictureBox17->Margin = System::Windows::Forms::Padding(0);
               this->pictureBox17->Name = L"pictureBox17";
               this->pictureBox17->Size = System::Drawing::Size(100, 190);
               this->pictureBox17->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
               this->pictureBox17->TabIndex = 16;
               this->pictureBox17->TabStop = false;
               this->pictureBox17->Click += gcnew System::EventHandler(this, &CardOfDay::PictureBox_Click);
               // 
               // pictureBox18
               // 
               this->pictureBox18->Anchor = System::Windows::Forms::AnchorStyles::Top;
               this->pictureBox18->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox18.BackgroundImage")));
               this->pictureBox18->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
               this->pictureBox18->Cursor = System::Windows::Forms::Cursors::Hand;
               this->pictureBox18->Location = System::Drawing::Point(572, 445);
               this->pictureBox18->Margin = System::Windows::Forms::Padding(0);
               this->pictureBox18->Name = L"pictureBox18";
               this->pictureBox18->Size = System::Drawing::Size(100, 190);
               this->pictureBox18->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
               this->pictureBox18->TabIndex = 14;
               this->pictureBox18->TabStop = false;
               this->pictureBox18->Click += gcnew System::EventHandler(this, &CardOfDay::PictureBox_Click);
               // 
               // pictureBox19
               // 
               this->pictureBox19->Anchor = System::Windows::Forms::AnchorStyles::Top;
               this->pictureBox19->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox19.BackgroundImage")));
               this->pictureBox19->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
               this->pictureBox19->Cursor = System::Windows::Forms::Cursors::Hand;
               this->pictureBox19->Location = System::Drawing::Point(545, 445);
               this->pictureBox19->Margin = System::Windows::Forms::Padding(0);
               this->pictureBox19->Name = L"pictureBox19";
               this->pictureBox19->Size = System::Drawing::Size(100, 190);
               this->pictureBox19->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
               this->pictureBox19->TabIndex = 15;
               this->pictureBox19->TabStop = false;
               this->pictureBox19->Click += gcnew System::EventHandler(this, &CardOfDay::PictureBox_Click);
               // 
               // pictureBox20
               // 
               this->pictureBox20->Anchor = System::Windows::Forms::AnchorStyles::Top;
               this->pictureBox20->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox20.BackgroundImage")));
               this->pictureBox20->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
               this->pictureBox20->Cursor = System::Windows::Forms::Cursors::Hand;
               this->pictureBox20->Location = System::Drawing::Point(520, 445);
               this->pictureBox20->Margin = System::Windows::Forms::Padding(0);
               this->pictureBox20->Name = L"pictureBox20";
               this->pictureBox20->Size = System::Drawing::Size(100, 190);
               this->pictureBox20->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
               this->pictureBox20->TabIndex = 13;
               this->pictureBox20->TabStop = false;
               this->pictureBox20->Click += gcnew System::EventHandler(this, &CardOfDay::PictureBox_Click);
               // 
               // pictureBox21
               // 
               this->pictureBox21->Anchor = System::Windows::Forms::AnchorStyles::Top;
               this->pictureBox21->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox21.BackgroundImage")));
               this->pictureBox21->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
               this->pictureBox21->Cursor = System::Windows::Forms::Cursors::Hand;
               this->pictureBox21->Location = System::Drawing::Point(496, 445);
               this->pictureBox21->Margin = System::Windows::Forms::Padding(0);
               this->pictureBox21->Name = L"pictureBox21";
               this->pictureBox21->Size = System::Drawing::Size(100, 190);
               this->pictureBox21->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
               this->pictureBox21->TabIndex = 12;
               this->pictureBox21->TabStop = false;
               this->pictureBox21->Click += gcnew System::EventHandler(this, &CardOfDay::PictureBox_Click);
               // 
               // pictureBox22
               // 
               this->pictureBox22->Anchor = System::Windows::Forms::AnchorStyles::Top;
               this->pictureBox22->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox22.BackgroundImage")));
               this->pictureBox22->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
               this->pictureBox22->Cursor = System::Windows::Forms::Cursors::Hand;
               this->pictureBox22->Location = System::Drawing::Point(1009, 445);
               this->pictureBox22->Margin = System::Windows::Forms::Padding(0);
               this->pictureBox22->Name = L"pictureBox22";
               this->pictureBox22->Size = System::Drawing::Size(100, 190);
               this->pictureBox22->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
               this->pictureBox22->TabIndex = 31;
               this->pictureBox22->TabStop = false;
               this->pictureBox22->Click += gcnew System::EventHandler(this, &CardOfDay::PictureBox_Click);
               // 
               // pictureBox23
               // 
               this->pictureBox23->Anchor = System::Windows::Forms::AnchorStyles::Top;
               this->pictureBox23->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox23.BackgroundImage")));
               this->pictureBox23->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
               this->pictureBox23->Cursor = System::Windows::Forms::Cursors::Hand;
               this->pictureBox23->Location = System::Drawing::Point(978, 445);
               this->pictureBox23->Margin = System::Windows::Forms::Padding(0);
               this->pictureBox23->Name = L"pictureBox23";
               this->pictureBox23->Size = System::Drawing::Size(100, 190);
               this->pictureBox23->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
               this->pictureBox23->TabIndex = 29;
               this->pictureBox23->TabStop = false;
               this->pictureBox23->Click += gcnew System::EventHandler(this, &CardOfDay::PictureBox_Click);
               // 
               // pictureBox24
               // 
               this->pictureBox24->Anchor = System::Windows::Forms::AnchorStyles::Top;
               this->pictureBox24->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox24.BackgroundImage")));
               this->pictureBox24->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
               this->pictureBox24->Cursor = System::Windows::Forms::Cursors::Hand;
               this->pictureBox24->Location = System::Drawing::Point(951, 445);
               this->pictureBox24->Margin = System::Windows::Forms::Padding(0);
               this->pictureBox24->Name = L"pictureBox24";
               this->pictureBox24->Size = System::Drawing::Size(100, 190);
               this->pictureBox24->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
               this->pictureBox24->TabIndex = 30;
               this->pictureBox24->TabStop = false;
               this->pictureBox24->Click += gcnew System::EventHandler(this, &CardOfDay::PictureBox_Click);
               // 
               // pictureBox25
               // 
               this->pictureBox25->Anchor = System::Windows::Forms::AnchorStyles::Top;
               this->pictureBox25->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox25.BackgroundImage")));
               this->pictureBox25->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
               this->pictureBox25->Cursor = System::Windows::Forms::Cursors::Hand;
               this->pictureBox25->Location = System::Drawing::Point(926, 445);
               this->pictureBox25->Margin = System::Windows::Forms::Padding(0);
               this->pictureBox25->Name = L"pictureBox25";
               this->pictureBox25->Size = System::Drawing::Size(100, 190);
               this->pictureBox25->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
               this->pictureBox25->TabIndex = 28;
               this->pictureBox25->TabStop = false;
               this->pictureBox25->Click += gcnew System::EventHandler(this, &CardOfDay::PictureBox_Click);
               // 
               // pictureBox26
               // 
               this->pictureBox26->Anchor = System::Windows::Forms::AnchorStyles::Top;
               this->pictureBox26->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox26.BackgroundImage")));
               this->pictureBox26->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
               this->pictureBox26->Cursor = System::Windows::Forms::Cursors::Hand;
               this->pictureBox26->Location = System::Drawing::Point(902, 445);
               this->pictureBox26->Margin = System::Windows::Forms::Padding(0);
               this->pictureBox26->Name = L"pictureBox26";
               this->pictureBox26->Size = System::Drawing::Size(100, 190);
               this->pictureBox26->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
               this->pictureBox26->TabIndex = 27;
               this->pictureBox26->TabStop = false;
               this->pictureBox26->Click += gcnew System::EventHandler(this, &CardOfDay::PictureBox_Click);
               // 
               // pictureBox27
               // 
               this->pictureBox27->Anchor = System::Windows::Forms::AnchorStyles::Top;
               this->pictureBox27->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox27.BackgroundImage")));
               this->pictureBox27->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
               this->pictureBox27->Cursor = System::Windows::Forms::Cursors::Hand;
               this->pictureBox27->Location = System::Drawing::Point(873, 445);
               this->pictureBox27->Margin = System::Windows::Forms::Padding(0);
               this->pictureBox27->Name = L"pictureBox27";
               this->pictureBox27->Size = System::Drawing::Size(100, 190);
               this->pictureBox27->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
               this->pictureBox27->TabIndex = 26;
               this->pictureBox27->TabStop = false;
               this->pictureBox27->Click += gcnew System::EventHandler(this, &CardOfDay::PictureBox_Click);
               // 
               // pictureBox28
               // 
               this->pictureBox28->Anchor = System::Windows::Forms::AnchorStyles::Top;
               this->pictureBox28->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox28.BackgroundImage")));
               this->pictureBox28->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
               this->pictureBox28->Cursor = System::Windows::Forms::Cursors::Hand;
               this->pictureBox28->Location = System::Drawing::Point(842, 445);
               this->pictureBox28->Margin = System::Windows::Forms::Padding(0);
               this->pictureBox28->Name = L"pictureBox28";
               this->pictureBox28->Size = System::Drawing::Size(100, 190);
               this->pictureBox28->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
               this->pictureBox28->TabIndex = 24;
               this->pictureBox28->TabStop = false;
               this->pictureBox28->Click += gcnew System::EventHandler(this, &CardOfDay::PictureBox_Click);
               // 
               // pictureBox29
               // 
               this->pictureBox29->Anchor = System::Windows::Forms::AnchorStyles::Top;
               this->pictureBox29->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox29.BackgroundImage")));
               this->pictureBox29->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
               this->pictureBox29->Cursor = System::Windows::Forms::Cursors::Hand;
               this->pictureBox29->Location = System::Drawing::Point(815, 445);
               this->pictureBox29->Margin = System::Windows::Forms::Padding(0);
               this->pictureBox29->Name = L"pictureBox29";
               this->pictureBox29->Size = System::Drawing::Size(100, 190);
               this->pictureBox29->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
               this->pictureBox29->TabIndex = 25;
               this->pictureBox29->TabStop = false;
               this->pictureBox29->Click += gcnew System::EventHandler(this, &CardOfDay::PictureBox_Click);
               // 
               // pictureBox30
               // 
               this->pictureBox30->Anchor = System::Windows::Forms::AnchorStyles::Top;
               this->pictureBox30->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox30.BackgroundImage")));
               this->pictureBox30->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
               this->pictureBox30->Cursor = System::Windows::Forms::Cursors::Hand;
               this->pictureBox30->Location = System::Drawing::Point(790, 445);
               this->pictureBox30->Margin = System::Windows::Forms::Padding(0);
               this->pictureBox30->Name = L"pictureBox30";
               this->pictureBox30->Size = System::Drawing::Size(100, 190);
               this->pictureBox30->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
               this->pictureBox30->TabIndex = 23;
               this->pictureBox30->TabStop = false;
               this->pictureBox30->Click += gcnew System::EventHandler(this, &CardOfDay::PictureBox_Click);
               // 
               // pictureBox31
               // 
               this->pictureBox31->Anchor = System::Windows::Forms::AnchorStyles::Top;
               this->pictureBox31->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox31.BackgroundImage")));
               this->pictureBox31->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
               this->pictureBox31->Cursor = System::Windows::Forms::Cursors::Hand;
               this->pictureBox31->Location = System::Drawing::Point(766, 445);
               this->pictureBox31->Margin = System::Windows::Forms::Padding(0);
               this->pictureBox31->Name = L"pictureBox31";
               this->pictureBox31->Size = System::Drawing::Size(100, 190);
               this->pictureBox31->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
               this->pictureBox31->TabIndex = 22;
               this->pictureBox31->TabStop = false;
               this->pictureBox31->Click += gcnew System::EventHandler(this, &CardOfDay::PictureBox_Click);
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
               this->exit->Location = System::Drawing::Point(1829, 11);
               this->exit->Margin = System::Windows::Forms::Padding(2);
               this->exit->Name = L"exit";
               this->exit->Size = System::Drawing::Size(56, 56);
               this->exit->TabIndex = 32;
               this->exit->Text = L"�";
               this->exit->UseVisualStyleBackColor = false;
               this->exit->Click += gcnew System::EventHandler(this, &CardOfDay::exit_Click);
               // 
               // previous1
               // 
               this->previous1->BackColor = System::Drawing::Color::Transparent;
               this->previous1->Cursor = System::Windows::Forms::Cursors::Hand;
               this->previous1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
               this->previous1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 48, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                   static_cast<System::Byte>(204)));
               this->previous1->ForeColor = System::Drawing::Color::LavenderBlush;
               this->previous1->Location = System::Drawing::Point(-3, 0);
               this->previous1->Name = L"previous1";
               this->previous1->Size = System::Drawing::Size(124, 76);
               this->previous1->TabIndex = 33;
               this->previous1->Text = L"<";
               this->previous1->UseVisualStyleBackColor = false;
               this->previous1->Click += gcnew System::EventHandler(this, &CardOfDay::previous1_Click);
               // 
               // card2
               // 
               this->card2->Anchor = System::Windows::Forms::AnchorStyles::Top;
               this->card2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"card2.BackgroundImage")));
               this->card2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
               this->card2->Location = System::Drawing::Point(591, 1128);
               this->card2->Margin = System::Windows::Forms::Padding(0);
               this->card2->Name = L"card2";
               this->card2->Size = System::Drawing::Size(110, 190);
               this->card2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
               this->card2->TabIndex = 34;
               this->card2->TabStop = false;
               this->card2->Click += gcnew System::EventHandler(this, &CardOfDay::card2_Click);
               // 
               // card3
               // 
               this->card3->Anchor = System::Windows::Forms::AnchorStyles::Top;
               this->card3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"card3.BackgroundImage")));
               this->card3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
               this->card3->Location = System::Drawing::Point(773, 1128);
               this->card3->Margin = System::Windows::Forms::Padding(0);
               this->card3->Name = L"card3";
               this->card3->Size = System::Drawing::Size(110, 190);
               this->card3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
               this->card3->TabIndex = 35;
               this->card3->TabStop = false;
               this->card3->Click += gcnew System::EventHandler(this, &CardOfDay::card3_Click);
               // 
               // card4
               // 
               this->card4->Anchor = System::Windows::Forms::AnchorStyles::Top;
               this->card4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"card4.BackgroundImage")));
               this->card4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
               this->card4->Location = System::Drawing::Point(500, 904);
               this->card4->Margin = System::Windows::Forms::Padding(0);
               this->card4->Name = L"card4";
               this->card4->Size = System::Drawing::Size(110, 190);
               this->card4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
               this->card4->TabIndex = 36;
               this->card4->TabStop = false;
               this->card4->Click += gcnew System::EventHandler(this, &CardOfDay::card4_Click);
               // 
               // card5
               // 
               this->card5->Anchor = System::Windows::Forms::AnchorStyles::Top;
               this->card5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"card5.BackgroundImage")));
               this->card5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
               this->card5->Location = System::Drawing::Point(686, 904);
               this->card5->Margin = System::Windows::Forms::Padding(0);
               this->card5->Name = L"card5";
               this->card5->Size = System::Drawing::Size(110, 190);
               this->card5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
               this->card5->TabIndex = 37;
               this->card5->TabStop = false;
               this->card5->Click += gcnew System::EventHandler(this, &CardOfDay::card5_Click);
               // 
               // card6
               // 
               this->card6->Anchor = System::Windows::Forms::AnchorStyles::Top;
               this->card6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"card6.BackgroundImage")));
               this->card6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
               this->card6->Location = System::Drawing::Point(591, 692);
               this->card6->Margin = System::Windows::Forms::Padding(0);
               this->card6->Name = L"card6";
               this->card6->Size = System::Drawing::Size(110, 190);
               this->card6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
               this->card6->TabIndex = 38;
               this->card6->TabStop = false;
               this->card6->Click += gcnew System::EventHandler(this, &CardOfDay::card6_Click);
               // 
               // pictureBox1
               // 
               this->pictureBox1->Anchor = System::Windows::Forms::AnchorStyles::Top;
               this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
               this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
               this->pictureBox1->Location = System::Drawing::Point(591, 1370);
               this->pictureBox1->Margin = System::Windows::Forms::Padding(0);
               this->pictureBox1->Name = L"pictureBox1";
               this->pictureBox1->Size = System::Drawing::Size(110, 190);
               this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
               this->pictureBox1->TabIndex = 39;
               this->pictureBox1->TabStop = false;
               this->pictureBox1->Click += gcnew System::EventHandler(this, &CardOfDay::pictureBox1_Click);
               // 
               // card
               // 
               this->card->Anchor = System::Windows::Forms::AnchorStyles::Top;
               this->card->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"card.BackgroundImage")));
               this->card->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
               this->card->Location = System::Drawing::Point(233, 1642);
               this->card->Margin = System::Windows::Forms::Padding(0);
               this->card->Name = L"card";
               this->card->Size = System::Drawing::Size(214, 366);
               this->card->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
               this->card->TabIndex = 41;
               this->card->TabStop = false;
               this->card->Click += gcnew System::EventHandler(this, &CardOfDay::�ard_Click);
               // 
               // name
               // 
               this->name->Anchor = System::Windows::Forms::AnchorStyles::Top;
               this->name->AutoSize = true;
               this->name->BackColor = System::Drawing::Color::Transparent;
               this->name->Font = (gcnew System::Drawing::Font(L"Arial", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                   static_cast<System::Byte>(204)));
               this->name->ForeColor = System::Drawing::Color::LavenderBlush;
               this->name->Location = System::Drawing::Point(552, 1651);
               this->name->Name = L"name";
               this->name->Size = System::Drawing::Size(0, 44);
               this->name->TabIndex = 43;
               // 
               // cardOfEnd
               // 
               this->cardOfEnd->Anchor = System::Windows::Forms::AnchorStyles::Top;
               this->cardOfEnd->AutoSize = true;
               this->cardOfEnd->BackColor = System::Drawing::Color::Transparent;
               this->cardOfEnd->Font = (gcnew System::Drawing::Font(L"Arial", 48, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                   static_cast<System::Byte>(204)));
               this->cardOfEnd->ForeColor = System::Drawing::Color::LavenderBlush;
               this->cardOfEnd->Location = System::Drawing::Point(537, 1817);
               this->cardOfEnd->Name = L"cardOfEnd";
               this->cardOfEnd->Size = System::Drawing::Size(464, 75);
               this->cardOfEnd->TabIndex = 44;
               this->cardOfEnd->Text = L"____________";
               // 
               // enterZZ
               // 
               this->enterZZ->Anchor = System::Windows::Forms::AnchorStyles::Top;
               this->enterZZ->BackColor = System::Drawing::Color::LavenderBlush;
               this->enterZZ->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 18));
               this->enterZZ->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                   static_cast<System::Int32>(static_cast<System::Byte>(64)));
               this->enterZZ->FormattingEnabled = true;
               this->enterZZ->Items->AddRange(gcnew cli::array< System::Object^  >(12) {
                   L"�������", L"�������", L"����", L"����", L"�����",
                       L"��������", L"���", L"���", L"����", L"����", L"��������", L"�������"
               });
               this->enterZZ->Location = System::Drawing::Point(316, 293);
               this->enterZZ->Name = L"enterZZ";
               this->enterZZ->Size = System::Drawing::Size(696, 35);
               this->enterZZ->TabIndex = 46;
               this->enterZZ->Text = L"�������� ���� �������";
               this->enterZZ->Enter += gcnew System::EventHandler(this, &CardOfDay::enterZZ_Enter);
               this->enterZZ->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &CardOfDay::enterZZ_KeyDown);
               this->enterZZ->Leave += gcnew System::EventHandler(this, &CardOfDay::enterZZ_Leave);
               // 
               // enter
               // 
               this->enter->Anchor = System::Windows::Forms::AnchorStyles::Top;
               this->enter->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 18));
               this->enter->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                   static_cast<System::Int32>(static_cast<System::Byte>(64)));
               this->enter->Location = System::Drawing::Point(902, 355);
               this->enter->Name = L"enter";
               this->enter->Size = System::Drawing::Size(110, 51);
               this->enter->TabIndex = 47;
               this->enter->Text = L"������";
               this->enter->UseVisualStyleBackColor = true;
               this->enter->Click += gcnew System::EventHandler(this, &CardOfDay::enter_Click);
               // 
               // question
               // 
               this->question->Anchor = System::Windows::Forms::AnchorStyles::Top;
               this->question->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(236)),
                   static_cast<System::Int32>(static_cast<System::Byte>(236)));
               this->question->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                   static_cast<System::Byte>(204)));
               this->question->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                   static_cast<System::Int32>(static_cast<System::Byte>(64)));
               this->question->ImeMode = System::Windows::Forms::ImeMode::KatakanaHalf;
               this->question->Location = System::Drawing::Point(316, 254);
               this->question->Margin = System::Windows::Forms::Padding(0);
               this->question->Name = L"question";
               this->question->Size = System::Drawing::Size(696, 40);
               this->question->TabIndex = 48;
               this->question->Text = L"������� ��� ������";
               this->question->Enter += gcnew System::EventHandler(this, &CardOfDay::question_Enter);
               this->question->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &CardOfDay::question_KeyDown);
               this->question->Leave += gcnew System::EventHandler(this, &CardOfDay::question_Leave);
               // 
               // description
               // 
               this->description->Anchor = System::Windows::Forms::AnchorStyles::Top;
               this->description->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                   static_cast<System::Int32>(static_cast<System::Byte>(64)));
               this->description->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                   static_cast<System::Byte>(204)));
               this->description->ForeColor = System::Drawing::Color::LavenderBlush;
               this->description->Location = System::Drawing::Point(145, 2040);
               this->description->Name = L"description";
               this->description->ReadOnly = true;
               this->description->Size = System::Drawing::Size(1134, 845);
               this->description->TabIndex = 49;
               this->description->Text = L"";
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
               this->button1->Location = System::Drawing::Point(1315, 0);
               this->button1->Margin = System::Windows::Forms::Padding(2);
               this->button1->Name = L"button1";
               this->button1->Size = System::Drawing::Size(85, 80);
               this->button1->TabIndex = 50;
               this->button1->Text = L"X";
               this->button1->UseVisualStyleBackColor = false;
               this->button1->Click += gcnew System::EventHandler(this, &CardOfDay::button1_Click);
               // 
               // label1
               // 
               this->label1->Anchor = System::Windows::Forms::AnchorStyles::Top;
               this->label1->AutoSize = true;
               this->label1->BackColor = System::Drawing::Color::Transparent;
               this->label1->Font = (gcnew System::Drawing::Font(L"Soledago", 59.99999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                   static_cast<System::Byte>(204)));
               this->label1->ForeColor = System::Drawing::Color::LavenderBlush;
               this->label1->Location = System::Drawing::Point(236, 22);
               this->label1->Name = L"label1";
               this->label1->Size = System::Drawing::Size(938, 103);
               this->label1->TabIndex = 51;
               this->label1->Text = L"������� �� ��������";
               // 
               // CardOfDay
               // 
               this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
               this->AutoScroll = true;
               this->AutoScrollMargin = System::Drawing::Size(10, 10);
               this->AutoScrollMinSize = System::Drawing::Size(0, 3000);
               this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
               this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
               this->ClientSize = System::Drawing::Size(1548, 1100);
               this->Controls->Add(this->label1);
               this->Controls->Add(this->button1);
               this->Controls->Add(this->description);
               this->Controls->Add(this->question);
               this->Controls->Add(this->enter);
               this->Controls->Add(this->enterZZ);
               this->Controls->Add(this->cardOfEnd);
               this->Controls->Add(this->name);
               this->Controls->Add(this->card);
               this->Controls->Add(this->pictureBox1);
               this->Controls->Add(this->card6);
               this->Controls->Add(this->card5);
               this->Controls->Add(this->card4);
               this->Controls->Add(this->card3);
               this->Controls->Add(this->card2);
               this->Controls->Add(this->previous1);
               this->Controls->Add(this->exit);
               this->Controls->Add(this->pictureBox22);
               this->Controls->Add(this->pictureBox23);
               this->Controls->Add(this->pictureBox24);
               this->Controls->Add(this->pictureBox25);
               this->Controls->Add(this->pictureBox26);
               this->Controls->Add(this->pictureBox27);
               this->Controls->Add(this->pictureBox28);
               this->Controls->Add(this->pictureBox29);
               this->Controls->Add(this->pictureBox30);
               this->Controls->Add(this->pictureBox31);
               this->Controls->Add(this->pictureBox12);
               this->Controls->Add(this->pictureBox13);
               this->Controls->Add(this->pictureBox14);
               this->Controls->Add(this->pictureBox15);
               this->Controls->Add(this->pictureBox16);
               this->Controls->Add(this->pictureBox17);
               this->Controls->Add(this->pictureBox18);
               this->Controls->Add(this->pictureBox19);
               this->Controls->Add(this->pictureBox20);
               this->Controls->Add(this->pictureBox21);
               this->Controls->Add(this->pictureBox6);
               this->Controls->Add(this->pictureBox7);
               this->Controls->Add(this->pictureBox8);
               this->Controls->Add(this->pictureBox10);
               this->Controls->Add(this->pictureBox11);
               this->Controls->Add(this->pictureBox9);
               this->Controls->Add(this->pictureBox4);
               this->Controls->Add(this->pictureBox5);
               this->Controls->Add(this->pictureBox3);
               this->Controls->Add(this->pictureBox2);
               this->Controls->Add(this->yourname);
               this->Controls->Add(this->card1);
               this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
               this->Name = L"CardOfDay";
               this->StartPosition = System::Windows::Forms::FormStartPosition::Manual;
               this->Text = L"CardOfDay";
               this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
               (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->card1))->EndInit();
               (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
               (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
               (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
               (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
               (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
               (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
               (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->EndInit();
               (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->EndInit();
               (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->EndInit();
               (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->EndInit();
               (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->EndInit();
               (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox13))->EndInit();
               (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox14))->EndInit();
               (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox15))->EndInit();
               (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox16))->EndInit();
               (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox17))->EndInit();
               (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox18))->EndInit();
               (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox19))->EndInit();
               (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox20))->EndInit();
               (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox21))->EndInit();
               (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox22))->EndInit();
               (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox23))->EndInit();
               (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox24))->EndInit();
               (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox25))->EndInit();
               (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox26))->EndInit();
               (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox27))->EndInit();
               (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox28))->EndInit();
               (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox29))->EndInit();
               (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox30))->EndInit();
               (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox31))->EndInit();
               (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->card2))->EndInit();
               (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->card3))->EndInit();
               (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->card4))->EndInit();
               (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->card5))->EndInit();
               (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->card6))->EndInit();
               (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
               (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->card))->EndInit();
               this->ResumeLayout(false);
               this->PerformLayout();

           }
    private: System::Void exit_Click(System::Object^ sender, System::EventArgs^ e) {
        Application::Exit();
    }
#pragma endregion
    private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
        if (this->pictureBox1->Tag == nullptr || this->pictureBox1->Tag->ToString() == "1") {
            LoadTarotCardData(this->pictureBox1, nullptr, nullptr);
            this->pictureBox1->Tag = gcnew array<String^>{"2", currentCardName, currentCardDescription};
        }
        else {
            if (card != nullptr && this->pictureBox1->Image != nullptr) {
                card->Image = this->pictureBox1->Image;
                card->SizeMode = PictureBoxSizeMode::Zoom;
                array<String^>^ cardData = safe_cast<array<String^>^>(this->pictureBox1->Tag);
                if (cardOfEnd != nullptr) cardOfEnd->Text = cardData[1];
                if (description != nullptr) description->Text = cardData[2];
                this->name->Text = "7)����";
            }
        }

    }
    
    public: System::Collections::Generic::List<System::Tuple<int, String^, String^, String^>^>^ GetAllTarotCards(sqlite3* db)
    {
        auto cards = gcnew System::Collections::Generic::List<System::Tuple<int, String^, String^, String^>^>();

        const char* sql = "SELECT id, name, description, image_path FROM tarot_cards";
        sqlite3_stmt* stmt;

        if (sqlite3_prepare_v2(db, sql, -1, &stmt, NULL) != SQLITE_OK) {
            MessageBox::Show("������ ���������� �������: " + gcnew String(sqlite3_errmsg(db)));
            return cards;
        }

        while (sqlite3_step(stmt) == SQLITE_ROW) {
            int id = sqlite3_column_int(stmt, 0);
            const unsigned char* name = sqlite3_column_text(stmt, 1);
            const unsigned char* description = sqlite3_column_text(stmt, 2);
            const unsigned char* imagePath = sqlite3_column_text(stmt, 3);

            String^ nameStr = (name != NULL) ?
                gcnew String((const char*)name, 0, sqlite3_column_bytes(stmt, 1), System::Text::Encoding::UTF8) :
                String::Empty;

            String^ descStr = (description != NULL) ?
                gcnew String((const char*)description, 0, sqlite3_column_bytes(stmt, 2), System::Text::Encoding::UTF8) :
                String::Empty;

            String^ imageStr = (imagePath != NULL) ?
                gcnew String((const char*)imagePath) :
                String::Empty;

            cards->Add(gcnew System::Tuple<int, String^, String^, String^>(id, nameStr, descStr, imageStr));
        }

        sqlite3_finalize(stmt);
        return cards;
    }

public: String^ currentCardName;
public: String^ currentCardDescription;

public: void LoadTarotCardData(PictureBox^ pictureBox, Label^ nameLabel, TextBox^ descriptionBox)
{
    String^ appDir = Application::StartupPath;
    String^ dbName = "test.db";
    String^ dbPath = Path::Combine(appDir, dbName);

    msclr::interop::marshal_context context;
    std::wstring widePath = context.marshal_as<std::wstring>(dbPath);
    std::wstring_convert<std::codecvt_utf8_utf16<wchar_t>> converter;
    std::string utf8Path = converter.to_bytes(widePath);

    sqlite3* db;
    int rc = sqlite3_open_v2(utf8Path.c_str(), &db, SQLITE_OPEN_READWRITE, nullptr);

    if (rc != SQLITE_OK) {
        String^ errorMsg = gcnew String(sqlite3_errmsg(db));
        MessageBox::Show("������ �������� ��:\n" + errorMsg +
            "\n����: " + dbPath,
            "������", MessageBoxButtons::OK, MessageBoxIcon::Error);
        if (db) sqlite3_close(db);
        return;
    }

    auto cards = GetAllTarotCards(db);

    if (cards->Count == 0) {
        MessageBox::Show("� �� �� ������� �� ����� �����!");
        sqlite3_close(db);
        return;
    }

    Random^ random = gcnew Random();
    int randomIndex = random->Next(0, cards->Count);
    auto selectedCard = cards[randomIndex];

    currentCardName = selectedCard->Item2;
    currentCardDescription = selectedCard->Item3;

    String^ imageRelativePath = selectedCard->Item4;
    String^ imageFullPath = Path::Combine(appDir, imageRelativePath);

    if (pictureBox != nullptr && File::Exists(imageFullPath)) {
        try {
            pictureBox->Image = Image::FromFile(imageFullPath);
            pictureBox->SizeMode = PictureBoxSizeMode::Zoom;
        }
        catch (Exception^ e) {
            MessageBox::Show("������ �������� �����������: " + e->Message);
        }
    }

    if (nameLabel != nullptr) {
        nameLabel->Text = currentCardName;
    }
    if (descriptionBox != nullptr) {
        descriptionBox->Text = currentCardDescription;
    }

    sqlite3_close(db);
}

    private: System::Void previous1_Click(System::Object^ sender, System::EventArgs^ e) {
        this->Hide();
    }
         
    private: System::Void card6_Click(System::Object^ sender, System::EventArgs^ e) {
        if (this->card6->Tag == nullptr || this->card6->Tag->ToString() == "1") {
            LoadTarotCardData(this->card6, nullptr, nullptr);
            this->card6->Tag = gcnew array<String^>{"2", currentCardName, currentCardDescription};
        }
        else {
            if (card != nullptr && this->card6->Image != nullptr) {
                card->Image = this->card6->Image;
                card->SizeMode = PictureBoxSizeMode::Zoom;
                array<String^>^ cardData = safe_cast<array<String^>^>(this->card6->Tag);
                if (cardOfEnd != nullptr) cardOfEnd->Text = cardData[1];
                if (description != nullptr) description->Text = cardData[2];
                this->name->Text = "1)��, ��� ������ �� �������� �� ���������";
            }
        }
    }
    private: System::Void card4_Click(System::Object^ sender, System::EventArgs^ e) {
        if (this->card4->Tag == nullptr || this->card4->Tag->ToString() == "1") {
            LoadTarotCardData(this->card4, nullptr, nullptr);
            this->card4->Tag = gcnew array<String^>{"2", currentCardName, currentCardDescription};
        }
        else {
            if (card != nullptr && this->card4->Image != nullptr) {
                card->Image = this->card4->Image;
                card->SizeMode = PictureBoxSizeMode::Zoom;
                array<String^>^ cardData = safe_cast<array<String^>^>(this->card4->Tag);
                if (cardOfEnd != nullptr) cardOfEnd->Text = cardData[1];
                if (description != nullptr) description->Text = cardData[2];
                this->name->Text = "2)������� ��������";
            }
        }
    }
    private: System::Void card5_Click(System::Object^ sender, System::EventArgs^ e) {
        if (this->card5->Tag == nullptr || this->card5->Tag->ToString() == "1") {
            LoadTarotCardData(this->card5, nullptr, nullptr);
            this->card5->Tag = gcnew array<String^>{"2", currentCardName, currentCardDescription};
        }
        else {
            if (card != nullptr && this->card5->Image != nullptr) {
                card->Image = this->card5->Image;
                card->SizeMode = PictureBoxSizeMode::Zoom;
                array<String^>^ cardData = safe_cast<array<String^>^>(this->card5->Tag);
                if (cardOfEnd != nullptr) cardOfEnd->Text = cardData[1];
                if (description != nullptr) description->Text = cardData[2];
                this->name->Text = "3)��� ����� ����������� �������";
            }
        }
    }
    private: System::Void card2_Click(System::Object^ sender, System::EventArgs^ e) {
        if (this->card2->Tag == nullptr || this->card2->Tag->ToString() == "1") {
            LoadTarotCardData(this->card2, nullptr, nullptr);
            this->card2->Tag = gcnew array<String^>{"2", currentCardName, currentCardDescription};
        }
        else {
            if (card != nullptr && this->card2->Image != nullptr) {
                card->Image = this->card2->Image;
                card->SizeMode = PictureBoxSizeMode::Zoom;
                array<String^>^ cardData = safe_cast<array<String^>^>(this->card2->Tag);
                if (cardOfEnd != nullptr) cardOfEnd->Text = cardData[1];
                if (description != nullptr) description->Text = cardData[2];
                this->name->Text = "5)������� ����� �� ��������";
            }
        }
    }
    private: System::Void card3_Click(System::Object^ sender, System::EventArgs^ e) {
        if (this->card3->Tag == nullptr || this->card3->Tag->ToString() == "1") {
            LoadTarotCardData(this->card3, nullptr, nullptr);
            this->card3->Tag = gcnew array<String^>{"2", currentCardName, currentCardDescription};
        }
        else {
            if (card != nullptr && this->card3->Image != nullptr) {
                card->Image = this->card3->Image;
                card->SizeMode = PictureBoxSizeMode::Zoom;
                array<String^>^ cardData = safe_cast<array<String^>^>(this->card3->Tag);
                if (cardOfEnd != nullptr) cardOfEnd->Text = cardData[1];
                if (description != nullptr) description->Text = cardData[2];
                this->name->Text = "6)���������, � �������� ����� �����������";
            }
        }
    }
    private: System::Void card1_Click(System::Object^ sender, System::EventArgs^ e) {
        if (this->card1->Tag == nullptr || this->card1->Tag->ToString() == "1") {
            LoadTarotCardData(this->card1, nullptr, nullptr);
            this->card1->Tag = gcnew array<String^>{"2", currentCardName, currentCardDescription};
        }
        else {
            if (card != nullptr && this->card1->Image != nullptr) {
                card->Image = this->card1->Image;
                card->SizeMode = PictureBoxSizeMode::Zoom;
                array<String^>^ cardData = safe_cast<array<String^>^>(this->card1->Tag);
                if (cardOfEnd != nullptr) cardOfEnd->Text = cardData[1];
                if (description != nullptr) description->Text = cardData[2];
                this->name->Text =  "4)��� ���� ���������";
            }
        }
    }
    private: System::Void �ard_Click(System::Object^ sender, System::EventArgs^ e) {

    }
    private: System::Void listBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void enter_Click(System::Object^ sender, System::EventArgs^ e) {
        bool allValid = true;
        if (!nameTextChanged || name->Text == "������� ���") {
            MessageBox::Show("����������, ������� ���� ���");
            allValid = false;
        }

        if (!questionTextChanged || question->Text == "������� ������") {
            MessageBox::Show("����������, ������� ��� ������");
            allValid = false;
        }

        if (enterZZ->SelectedIndex == -1) {
            MessageBox::Show("����������, �������� ���� �������");
            allValid = false;
        }

        if (allValid) {
            this->enter->Tag = "entered";
        }
    }
    private: System::Void yourname_TextChanged(System::Object^ sender, System::EventArgs^ e) {

    }
    private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
        Application::Exit();
    }
    private:
        bool nameTextChanged = false;
        bool questionTextChanged = false;
        bool enterZZChanged = false;

    private: System::Void yourname_Enter(System::Object^ sender, System::EventArgs^ e) {
        if (!nameTextChanged && yourname->Text == "������� ���� ���") {
            yourname->Text = "";
            yourname->ForeColor = System::Drawing::Color::Black; 
        }

    }
    private: System::Void question_Enter(System::Object^ sender, System::EventArgs^ e) {
        if (!questionTextChanged && question->Text == "������� ������") {
            question->Text = "";
            question->ForeColor = System::Drawing::Color::Black;
        }
    }
    private: System::Void question_Leave(System::Object^ sender, System::EventArgs^ e) {
        if (question->Text == "") {
            question->Text = "������� ������";
            question->ForeColor = System::Drawing::Color::Gray;
            questionTextChanged = false;
        }
        else {
            questionTextChanged = true;
        }
    }
    private: System::Void yourname_Leave(System::Object^ sender, System::EventArgs^ e) {
        if (yourname->Text == "") {
            yourname->Text = "������� ���� ���";
            yourname->ForeColor = System::Drawing::Color::Gray;
            nameTextChanged = false;
        }
        else {
            nameTextChanged = true;
        }
    }
    private: System::Void yourname_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
        if (e->KeyCode == Keys::Enter) {
            question->Focus();
            e->Handled = true;
        }
    }
    private: System::Void question_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
        if (e->KeyCode == Keys::Enter) {
            enterZZ->Focus();
            e->Handled = true;
        }
    }
    private: System::Void enterZZ_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
        if (e->KeyCode == Keys::Enter) {
            enter->Focus();
            e->Handled = true;
        }
    }
    private: System::Void enterZZ_Enter(System::Object^ sender, System::EventArgs^ e) {
        if (!enterZZChanged && enterZZ->Text == "�������� ��� ���� �������") {
            enterZZ->Text = "";
            enterZZ->ForeColor = System::Drawing::Color::Black;
        }
    }
    private: System::Void enterZZ_Leave(System::Object^ sender, System::EventArgs^ e) {
        if (enterZZ->Text == "") {
            enterZZ->Text = "�������� ��� ���� �������";
            enterZZ->ForeColor = System::Drawing::Color::Gray;
            enterZZChanged = false;
        }
        else {
            enterZZChanged = true;
        }
    }
};
}