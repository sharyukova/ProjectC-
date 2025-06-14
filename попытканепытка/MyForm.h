#pragma once
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
#include <locale>
#include <codecvt>

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
            Application::EnableVisualStyles();

            this->Paint += gcnew PaintEventHandler(this, &MyForm::MyForm_Paint);
        }

    private:
        System::Void MyForm_Paint(System::Object^ sender, PaintEventArgs^ e) {
            e->Graphics->SmoothingMode = System::Drawing::Drawing2D::SmoothingMode::AntiAlias;
        }
    private:
        FirstMenu^ firstMenu = nullptr;
    private:
        System::Drawing::Image^ bgImage;
    private: System::Windows::Forms::Button^ exit;

           void InitializeFirstMenu()
           {
               firstMenu = gcnew FirstMenu();
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
            this->start->Cursor = System::Windows::Forms::Cursors::Hand;
            this->start->FlatAppearance->BorderSize = 0;
            this->start->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->start->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->start->ForeColor = System::Drawing::SystemColors::ControlLight;
            this->start->Location = System::Drawing::Point(534, 641);
            this->start->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->start->Name = L"start";
            this->start->Size = System::Drawing::Size(364, 107);
            this->start->TabIndex = 0;
            this->start->Text = L"МЕНЮ";
            this->start->TextImageRelation = System::Windows::Forms::TextImageRelation::TextAboveImage;
            this->start->UseVisualStyleBackColor = false;
            this->start->Click += gcnew System::EventHandler(this, &MyForm::start_Click);
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
            this->exit->Location = System::Drawing::Point(1298, 14);
            this->exit->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->exit->Name = L"exit";
            this->exit->Size = System::Drawing::Size(113, 98);
            this->exit->TabIndex = 3;
            this->exit->Text = L"Х";
            this->exit->UseVisualStyleBackColor = false;
            this->exit->Click += gcnew System::EventHandler(this, &MyForm::exit_Click);
            // 
            // MyForm
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
            this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->ClientSize = System::Drawing::Size(1426, 934);
            this->Controls->Add(this->exit);
            this->Controls->Add(this->start);
            this->DoubleBuffered = true;
            this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
            this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->Name = L"MyForm";
            this->Text = L"MyForm";
            this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
            this->ResumeLayout(false);

        }
#pragma endregion

    private: System::Void start_Click(System::Object^ sender, System::EventArgs^ e) {
        firstMenu = gcnew FirstMenu();
        firstMenu->Opacity = 0;  
        firstMenu->Show();
        for (double opacity = 0; opacity <= 1; opacity += 0.1)
        {
            firstMenu->Opacity = opacity;
            Application::DoEvents();
            Threading::Thread::Sleep(15); 
        }
       // this->Hide();
    }
    private: System::Void exit_Click(System::Object^ sender, System::EventArgs^ e) {
        Application::Exit();
    }
    }; 
}