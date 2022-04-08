// Заголовочный файл, в котором хранится вся информация о текущей форме
#include "MyForm.h"

// Пространство имен для работы с формами
using namespace System;
using namespace System::Windows::Forms;

// Указатель на то, что дальше будет идти точка входа для текущего приложения
[STAThreadAttribute]

void main(array<String^>^ args) {

	// Стандартные параметры для запуска формы
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	// Запуск формы
	WinForms::MyForm form;
	Application::Run(% form);
}