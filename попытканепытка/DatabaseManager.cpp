//#include "DatabaseManager.h"
//#include <msclr/marshal.h>
//#include <msclr/marshal_cppstd.h>
//
//namespace попытканепытка {
//
//    DatabaseManager::DatabaseManager()
//    {
//        String^ appDir = Application::StartupPath;
//        String^ dbPath = Path::Combine(appDir, "test.db");
//
//        msclr::interop::marshal_context context;
//        std::string utf8Path = context.marshal_as<std::string>(dbPath);
//
//        int rc = sqlite3_open_v2(utf8Path.c_str(), &db, SQLITE_OPEN_READWRITE, nullptr);
//        CheckDBError(rc);
//    }
//
//    DatabaseManager::~DatabaseManager()
//    {
//        this->!DatabaseManager();
//    }
//
//    DatabaseManager::!DatabaseManager()
//    {
//        if (db) sqlite3_close(db);
//        db = nullptr;
//    }
//
//    void DatabaseManager::CheckDBError(int rc)
//    {
//        if (rc != SQLITE_OK) {
//            String^ errorMsg = gcnew String(sqlite3_errmsg(db));
//            throw gcnew Exception("Ошибка БД: " + errorMsg);
//        }
//    }
//
//    System::Collections::Generic::List<String^>^ DatabaseManager::GetAllTarotCards()
//    {
//        auto cards = gcnew System::Collections::Generic::List<String^>();
//        const char* sql = "SELECT image_path FROM tarot_cards";
//        sqlite3_stmt* stmt;
//
//        int rc = sqlite3_prepare_v2(db, sql, -1, &stmt, NULL);
//        CheckDBError(rc);
//
//        while (sqlite3_step(stmt) == SQLITE_ROW) {
//            const unsigned char* imagePath = sqlite3_column_text(stmt, 0);
//            if (imagePath != NULL) {
//                cards->Add(gcnew String((const char*)imagePath));
//            }
//        }
//
//        sqlite3_finalize(stmt);
//        return cards;
//    }
//
//    String^ DatabaseManager::GetRandomTarotCardPath()
//    {
//        auto cards = GetAllTarotCards();
//        if (cards->Count == 0) {
//            throw gcnew Exception("В БД не найдено ни одной карты!");
//        }
//
//        Random^ random = gcnew Random();
//        int randomIndex = random->Next(0, cards->Count);
//        String^ imageRelativePath = cards[randomIndex];
//
//        return Path::Combine(Application::StartupPath, imageRelativePath);
//    }
//
//    System::Drawing::Image^ DatabaseManager::LoadTarotCardImage(String^ imagePath)
//    {
//        if (!File::Exists(imagePath)) {
//            throw gcnew Exception("Изображение не найдено: " + imagePath);
//        }
//
//        return Image::FromFile(imagePath);
//    }
//}