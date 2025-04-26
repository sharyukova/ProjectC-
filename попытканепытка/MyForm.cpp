#include "MyForm.h" 
using namespace попытканепытка;
using namespace System;
using namespace System::Windows::Forms;

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {

	Application:: EnableVisualStyles();
	Application:: SetCompatibleTextRenderingDefault(false);
	Application:: Run(gcnew MyForm);
	return 0;
}
