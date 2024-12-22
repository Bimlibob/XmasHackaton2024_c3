#include "mainForm.h"


using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int main(array<String^>^ args) {

	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	xakaton2024::mainForm A_line;
	Application::Run(% A_line);

}