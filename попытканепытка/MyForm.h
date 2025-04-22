#pragma one
#include "FirstMenu.h"
#include <thread>
#include <msclr/marshal.h>
#include <msclr/marshal_cppstd.h>
#include "sqlite3.h"
#include <stdlib.h>
#include <windows.h>
#include <shlwapi.h>
#pragma comment(lib, "shlwapi.lib")
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
            String^ dbPath = Path::Combine(Environment::GetFolderPath(Environment::SpecialFolder::MyDocuments), "test.db");

            msclr::interop::marshal_context context;
            const char* dbPathNative = context.marshal_as<const char*>(dbPath);

            sqlite3* db;
            char* zErrMsg =
                0;
            int rc;
            rc = sqlite3_open("test.db", &db);
            if (rc) 
            {
                fprintf(stderr, "ErrorBlat: %s\n", sqlite3_errmsg(db));
                MessageBox::Show("huita:\n");

                std::exit(0);
            }
            else
            {
                MessageBox::Show("NOEM:\n");
            }

            sqlite3_close(db);


            if (rc == SQLITE_OK)
            {
                const char* sql = "CREATE TABLE IF NOT EXISTS test (id INTEGER);";
                rc = sqlite3_exec(db, sql, NULL, NULL, NULL);

                if (rc == SQLITE_OK)
                {
                    MessageBox::Show("БД создана здесь:\n" + dbPath);
                }
                else
                {
                    MessageBox::Show("Ошибка создания таблицы!");
                }
                sqlite3_close(db);
            }
            else
            {
                MessageBox::Show("Ошибка создания БД!\nКод: " + rc.ToString());
            }



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
            this->SuspendLayout();
            // 
            // start
            // 
            this->start->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->start->BackColor = System::Drawing::Color::Transparent;
            this->start->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"start.BackgroundImage")));
            this->start->Cursor = System::Windows::Forms::Cursors::Hand;
            this->start->Font = (gcnew System::Drawing::Font(L"Soledago", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->start->ForeColor = System::Drawing::SystemColors::ControlLight;
            this->start->Location = System::Drawing::Point(586, 569);
            this->start->Margin = System::Windows::Forms::Padding(2);
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
            this->exit->Cursor = System::Windows::Forms::Cursors::Hand;
            this->exit->Font = (gcnew System::Drawing::Font(L"Soledago", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->exit->ForeColor = System::Drawing::Color::IndianRed;
            this->exit->Location = System::Drawing::Point(1377, 11);
            this->exit->Margin = System::Windows::Forms::Padding(2);
            this->exit->Name = L"exit";
            this->exit->Size = System::Drawing::Size(56, 56);
            this->exit->TabIndex = 3;
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
            this->ClientSize = System::Drawing::Size(1444, 981);
            this->Controls->Add(this->exit);
            this->Controls->Add(this->start);
            this->DoubleBuffered = true;
            this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
            this->Margin = System::Windows::Forms::Padding(2);
            this->Name = L"MyForm";
            this->Text = L"MyForm";
            this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
            this->ResumeLayout(false);

        }
#pragma endregion

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
    };
}