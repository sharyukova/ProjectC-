#pragma one
#include "FirstMenu.h"
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

#pragma comment(lib, "sqlite3.lib")
#include <msclr/marshal_cppstd.h>  

using namespace System;
using namespace System::IO;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace System::Threading;
using namespace System::Runtime::InteropServices;

namespace попытканепытка {

    public ref class MyForm : public System::Windows::Forms::Form
    {
    public:
        MyForm(void)
        {
            InitializeComponent();
            LoadTarotCardImage();
            String^ dbPath = "D:\\source\\repos\\попытканепытка\\попытканепытка\\test.db";

            if (!File::Exists(dbPath)) {
                MessageBox::Show("Файл БД не найден по пути: " + dbPath);
                return;
            }

            msclr::interop::marshal_context context;
            std::string dbPathNative = context.marshal_as<std::string>(dbPath);

            sqlite3* db;
            if (sqlite3_open("test.db", &db) != SQLITE_OK) {
                MessageBox::Show("Ошибка открытия БД: " + gcnew String(sqlite3_errmsg(db)));
                return;
            }
            else {
                MessageBox::Show("Подключение к БД успешно!");
                sqlite3_close(db);
            }
            LoadTarotCardImage();
            this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
            this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
            this->DoubleBuffered = true;

            this->SetStyle(
                ControlStyles::ResizeRedraw |
                ControlStyles::AllPaintingInWmPaint |
                ControlStyles::UserPaint |
                ControlStyles::OptimizedDoubleBuffer,
                true
            );
            firstMenu = gcnew FirstMenu();
            firstMenu->FormClosed += gcnew FormClosedEventHandler(this, &MyForm::OnFirstMenuClosed);
            Application::EnableVisualStyles();

            this->Paint += gcnew PaintEventHandler(this, &MyForm::MyForm_Paint);
            this->Load += gcnew EventHandler(this, &MyForm::MyForm_Load);
        }

    private:
        System::Void MyForm_Paint(System::Object^ sender, PaintEventArgs^ e) {
            e->Graphics->SmoothingMode = System::Drawing::Drawing2D::SmoothingMode::AntiAlias;
        }

    private:
        System::Drawing::Image^ bgImage;
    private: System::Windows::Forms::Button^ exit;
    private: System::Windows::Forms::PictureBox^ pictureBox1;
           FirstMenu^ firstMenu;

           void InitializeFirstMenu()
           {
               firstMenu = gcnew FirstMenu();
               firstMenu->FormClosed += gcnew FormClosedEventHandler(this, &MyForm::OnFirstMenuClosed);
           }


    protected:
        ~MyForm()
        {
            if (components) { delete components; }
            if (bgImage) { delete bgImage; }
            if (firstMenu) { delete firstMenu; }
        }

    private:
        System::Windows::Forms::Button^ start;


    private:
        System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
        void InitializeComponent(void)
        {
            System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
            this->start = (gcnew System::Windows::Forms::Button());
            this->exit = (gcnew System::Windows::Forms::Button());
            this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
            this->SuspendLayout();
            this->start->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->start->BackColor = System::Drawing::Color::Transparent;
            this->start->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"start.BackgroundImage")));
            this->start->Cursor = System::Windows::Forms::Cursors::Hand;
            this->start->FlatAppearance->BorderSize = 0;
            this->start->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->start->Font = (gcnew System::Drawing::Font(L"Soledago", 22.2, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->start->ForeColor = System::Drawing::SystemColors::ControlLight;
            this->start->Location = System::Drawing::Point(587, 589);
            this->start->Margin = System::Windows::Forms::Padding(2);
            this->start->Name = L"start";
            this->start->Size = System::Drawing::Size(273, 87);
            this->start->TabIndex = 0;
            this->start->Text = L"МЕНЮ";
            this->start->TextImageRelation = System::Windows::Forms::TextImageRelation::TextAboveImage;
            this->start->UseVisualStyleBackColor = false;
            this->start->Click += gcnew System::EventHandler(this, &MyForm::start_Click);
            this->exit->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
            this->exit->BackColor = System::Drawing::Color::Transparent;
            this->exit->Cursor = System::Windows::Forms::Cursors::Hand;
            this->exit->FlatAppearance->BorderSize = 0;
            this->exit->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->exit->Font = (gcnew System::Drawing::Font(L"Soledago", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->exit->ForeColor = System::Drawing::Color::White;
            this->exit->Location = System::Drawing::Point(1348, 11);
            this->exit->Margin = System::Windows::Forms::Padding(2);
            this->exit->Name = L"exit";
            this->exit->Size = System::Drawing::Size(85, 80);
            this->exit->TabIndex = 3;
            this->exit->Text = L"Х";
            this->exit->UseVisualStyleBackColor = false;
            this->exit->Click += gcnew System::EventHandler(this, &MyForm::exit_Click);
            this->pictureBox1->Location = System::Drawing::Point(172, 498);
            this->pictureBox1->Name = L"pictureBox1";
            this->pictureBox1->Size = System::Drawing::Size(379, 436);
            this->pictureBox1->TabIndex = 4;
            this->pictureBox1->TabStop = false;
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
            this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->ClientSize = System::Drawing::Size(1444, 981);
            this->Controls->Add(this->pictureBox1);
            this->Controls->Add(this->exit);
            this->Controls->Add(this->start);
            this->DoubleBuffered = true;
            this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
            this->Margin = System::Windows::Forms::Padding(2);
            this->Name = L"MyForm";
            this->Text = L"MyForm";
            this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
            this->ResumeLayout(false);

        }
#pragma endregion
    private: System::Collections::Generic::List<String^>^ GetAllTarotCards(sqlite3* db)
    {
        System::Collections::Generic::List<String^>^ cards = gcnew System::Collections::Generic::List<String^>();

        const char* sql = "SELECT image_path FROM tarot_cards";
        sqlite3_stmt* stmt;

        if (sqlite3_prepare_v2(db, sql, -1, &stmt, NULL) != SQLITE_OK) {
            MessageBox::Show("Ошибка подготовки запроса: " + gcnew String(sqlite3_errmsg(db)));
            return cards;
        }

        while (sqlite3_step(stmt) == SQLITE_ROW) {
            const unsigned char* imagePath = sqlite3_column_text(stmt, 0);
            if (imagePath != NULL) {
                cards->Add(gcnew String((const char*)imagePath));
            }
        }

        sqlite3_finalize(stmt);
        return cards;
    }
    private:
        System::Void OnFirstMenuClosed(System::Object^ sender, FormClosedEventArgs^ e) { }

    private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void start_Click(System::Object^ sender, System::EventArgs^ e) {
        FirstMenu^ firstMenu = gcnew FirstMenu;
        firstMenu->Show();
        this->Hide();
    }
    private: System::Void exit_Click(System::Object^ sender, System::EventArgs^ e) {
        Application::Exit();
    }
           void LoadTarotCardImage()
           {
               String^ dbPath = "D:\\source\\repos\\попытканепытка\\попытканепытка\\test.db";

               if (!File::Exists(dbPath)) {
                   MessageBox::Show("Файл БД не найден!");
                   return;
               }

               msclr::interop::marshal_context context;
               std::string dbPathNative = context.marshal_as<std::string>(dbPath);

               sqlite3* db;
               if (sqlite3_open("test.db", &db) != SQLITE_OK) {
                   MessageBox::Show("Ошибка открытия БД: " + gcnew String(sqlite3_errmsg(db)));
                   return;
               }
               System::Collections::Generic::List<String^>^ cards = GetAllTarotCards(db);

               if (cards->Count == 0) {
                   MessageBox::Show("В БД не найдено ни одной карты!");
                   sqlite3_close(db);
                   return;
               }

               Random^ random = gcnew Random();
               int randomIndex = random->Next(0, cards->Count);
               String^ randomCardPath = cards[randomIndex];

               String^ dbFolder = Path::GetDirectoryName(Application::ExecutablePath);
               String^ path = dbFolder + "\\" + randomCardPath;

               if (File::Exists(path)) {
                   try {
                       pictureBox1->Image = Image::FromFile(path);
                       pictureBox1->SizeMode = PictureBoxSizeMode::Zoom; // Добавляем для правильного отображения
                   }
                   catch (Exception^ e) {
                       MessageBox::Show("Ошибка загрузки изображения: " + e->Message);
                   }
               }
               else {
                   MessageBox::Show("Изображение не найдено по пути: " + path);
               }

               sqlite3_close(db);
           }
    };

}