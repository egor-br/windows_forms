#pragma once

namespace WinForms {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	int number = 1;
	int answers[5];
	int rightanswers[5] = { 3,3,2,2,1 };

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ главноеМенюToolStripMenuItem;


	private: System::Windows::Forms::Panel^ main_panel;
	private: System::Windows::Forms::Panel^ right_panel;
	private: System::Windows::Forms::Panel^ left_panel;


	private: System::Windows::Forms::Panel^ question_number;
	private: System::Windows::Forms::Label^ label_question_number;
	private: System::Windows::Forms::Button^ button_start;
	private: System::Windows::Forms::TextBox^ textBox_name;
	private: System::Windows::Forms::Label^ label_name;
	private: System::Windows::Forms::Label^ label_title;
	private: System::Windows::Forms::Label^ label_question;
	private: System::Windows::Forms::Button^ button_next;
	private: System::Windows::Forms::Button^ button_end;
	private: System::Windows::Forms::Button^ button_prev;
	private: System::Windows::Forms::RadioButton^ radioButton3;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::ToolStripMenuItem^ оПрограммеToolStripMenuItem;






	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->главноеМенюToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->оПрограммеToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->main_panel = (gcnew System::Windows::Forms::Panel());
			this->right_panel = (gcnew System::Windows::Forms::Panel());
			this->button_next = (gcnew System::Windows::Forms::Button());
			this->button_end = (gcnew System::Windows::Forms::Button());
			this->button_prev = (gcnew System::Windows::Forms::Button());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->label_question = (gcnew System::Windows::Forms::Label());
			this->question_number = (gcnew System::Windows::Forms::Panel());
			this->label_question_number = (gcnew System::Windows::Forms::Label());
			this->left_panel = (gcnew System::Windows::Forms::Panel());
			this->button_start = (gcnew System::Windows::Forms::Button());
			this->textBox_name = (gcnew System::Windows::Forms::TextBox());
			this->label_name = (gcnew System::Windows::Forms::Label());
			this->label_title = (gcnew System::Windows::Forms::Label());
			this->menuStrip1->SuspendLayout();
			this->main_panel->SuspendLayout();
			this->right_panel->SuspendLayout();
			this->question_number->SuspendLayout();
			this->left_panel->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->BackColor = System::Drawing::SystemColors::Control;
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->главноеМенюToolStripMenuItem,
					this->оПрограммеToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(884, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// главноеМенюToolStripMenuItem
			// 
			this->главноеМенюToolStripMenuItem->CheckOnClick = true;
			this->главноеМенюToolStripMenuItem->Name = L"главноеМенюToolStripMenuItem";
			this->главноеМенюToolStripMenuItem->Size = System::Drawing::Size(99, 20);
			this->главноеМенюToolStripMenuItem->Text = L"Главное меню";
			this->главноеМенюToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::главноеМенюToolStripMenuItem_Click);
			// 
			// оПрограммеToolStripMenuItem
			// 
			this->оПрограммеToolStripMenuItem->Name = L"оПрограммеToolStripMenuItem";
			this->оПрограммеToolStripMenuItem->Size = System::Drawing::Size(94, 20);
			this->оПрограммеToolStripMenuItem->Text = L"О программе";
			this->оПрограммеToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::оПрограммеToolStripMenuItem_Click);
			// 
			// main_panel
			// 
			this->main_panel->Controls->Add(this->right_panel);
			this->main_panel->Controls->Add(this->left_panel);
			this->main_panel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->main_panel->Location = System::Drawing::Point(0, 24);
			this->main_panel->Name = L"main_panel";
			this->main_panel->Size = System::Drawing::Size(884, 387);
			this->main_panel->TabIndex = 1;
			// 
			// right_panel
			// 
			this->right_panel->BackColor = System::Drawing::Color::White;
			this->right_panel->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->right_panel->Controls->Add(this->button_next);
			this->right_panel->Controls->Add(this->button_end);
			this->right_panel->Controls->Add(this->button_prev);
			this->right_panel->Controls->Add(this->radioButton3);
			this->right_panel->Controls->Add(this->radioButton2);
			this->right_panel->Controls->Add(this->radioButton1);
			this->right_panel->Controls->Add(this->label_question);
			this->right_panel->Controls->Add(this->question_number);
			this->right_panel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->right_panel->Location = System::Drawing::Point(287, 0);
			this->right_panel->Name = L"right_panel";
			this->right_panel->Size = System::Drawing::Size(597, 387);
			this->right_panel->TabIndex = 1;
			this->right_panel->Visible = false;
			// 
			// button_next
			// 
			this->button_next->BackColor = System::Drawing::Color::Gainsboro;
			this->button_next->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->button_next->Font = (gcnew System::Drawing::Font(L"Consolas", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_next->Location = System::Drawing::Point(469, 323);
			this->button_next->Name = L"button_next";
			this->button_next->Size = System::Drawing::Size(116, 51);
			this->button_next->TabIndex = 7;
			this->button_next->Text = L"Следующий вопрос";
			this->button_next->UseVisualStyleBackColor = false;
			this->button_next->Click += gcnew System::EventHandler(this, &MyForm::button_next_Click);
			// 
			// button_end
			// 
			this->button_end->BackColor = System::Drawing::Color::Gainsboro;
			this->button_end->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->button_end->Font = (gcnew System::Drawing::Font(L"Consolas", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_end->Location = System::Drawing::Point(247, 323);
			this->button_end->Name = L"button_end";
			this->button_end->Size = System::Drawing::Size(116, 51);
			this->button_end->TabIndex = 6;
			this->button_end->Text = L"Завершить тест";
			this->button_end->UseVisualStyleBackColor = false;
			this->button_end->Click += gcnew System::EventHandler(this, &MyForm::button_end_Click);
			// 
			// button_prev
			// 
			this->button_prev->BackColor = System::Drawing::Color::Gainsboro;
			this->button_prev->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->button_prev->Font = (gcnew System::Drawing::Font(L"Consolas", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_prev->Location = System::Drawing::Point(15, 323);
			this->button_prev->Name = L"button_prev";
			this->button_prev->Size = System::Drawing::Size(116, 51);
			this->button_prev->TabIndex = 5;
			this->button_prev->Text = L"Предыдущий вопрос";
			this->button_prev->UseVisualStyleBackColor = false;
			this->button_prev->Click += gcnew System::EventHandler(this, &MyForm::button_prev_Click);
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Font = (gcnew System::Drawing::Font(L"Consolas", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radioButton3->Location = System::Drawing::Point(41, 268);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(171, 23);
			this->radioButton3->TabIndex = 4;
			this->radioButton3->TabStop = true;
			this->radioButton3->Text = L"Бьёрн Страуструп";
			this->radioButton3->UseVisualStyleBackColor = true;
			this->radioButton3->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton3_CheckedChanged);
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Font = (gcnew System::Drawing::Font(L"Consolas", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radioButton2->Location = System::Drawing::Point(41, 239);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(144, 23);
			this->radioButton2->TabIndex = 3;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"Дональд Трамп";
			this->radioButton2->UseVisualStyleBackColor = true;
			this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton2_CheckedChanged);
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Font = (gcnew System::Drawing::Font(L"Consolas", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radioButton1->Location = System::Drawing::Point(41, 210);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(126, 23);
			this->radioButton1->TabIndex = 2;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Кен Томпсон";
			this->radioButton1->UseVisualStyleBackColor = true;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton1_CheckedChanged);
			// 
			// label_question
			// 
			this->label_question->Dock = System::Windows::Forms::DockStyle::Top;
			this->label_question->Font = (gcnew System::Drawing::Font(L"Consolas", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_question->Location = System::Drawing::Point(0, 78);
			this->label_question->Name = L"label_question";
			this->label_question->Size = System::Drawing::Size(595, 121);
			this->label_question->TabIndex = 1;
			this->label_question->Text = L"Кто разработал язык программирования С++\?";
			this->label_question->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// question_number
			// 
			this->question_number->Controls->Add(this->label_question_number);
			this->question_number->Dock = System::Windows::Forms::DockStyle::Top;
			this->question_number->Location = System::Drawing::Point(0, 0);
			this->question_number->Name = L"question_number";
			this->question_number->Size = System::Drawing::Size(595, 78);
			this->question_number->TabIndex = 0;
			// 
			// label_question_number
			// 
			this->label_question_number->AutoSize = true;
			this->label_question_number->Font = (gcnew System::Drawing::Font(L"Consolas", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_question_number->Location = System::Drawing::Point(200, 18);
			this->label_question_number->Name = L"label_question_number";
			this->label_question_number->Size = System::Drawing::Size(199, 43);
			this->label_question_number->TabIndex = 0;
			this->label_question_number->Text = L"Вопрос №1";
			this->label_question_number->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// left_panel
			// 
			this->left_panel->BackColor = System::Drawing::Color::Gainsboro;
			this->left_panel->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->left_panel->Controls->Add(this->button_start);
			this->left_panel->Controls->Add(this->textBox_name);
			this->left_panel->Controls->Add(this->label_name);
			this->left_panel->Controls->Add(this->label_title);
			this->left_panel->Dock = System::Windows::Forms::DockStyle::Left;
			this->left_panel->Location = System::Drawing::Point(0, 0);
			this->left_panel->Name = L"left_panel";
			this->left_panel->Size = System::Drawing::Size(287, 387);
			this->left_panel->TabIndex = 0;
			// 
			// button_start
			// 
			this->button_start->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->button_start->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->button_start->Font = (gcnew System::Drawing::Font(L"Consolas", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_start->Location = System::Drawing::Point(0, 309);
			this->button_start->Name = L"button_start";
			this->button_start->Size = System::Drawing::Size(285, 76);
			this->button_start->TabIndex = 3;
			this->button_start->Text = L"Начать тест";
			this->button_start->UseVisualStyleBackColor = true;
			this->button_start->Click += gcnew System::EventHandler(this, &MyForm::button_start_Click);
			// 
			// textBox_name
			// 
			this->textBox_name->Font = (gcnew System::Drawing::Font(L"Consolas", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox_name->Location = System::Drawing::Point(90, 206);
			this->textBox_name->Name = L"textBox_name";
			this->textBox_name->Size = System::Drawing::Size(166, 20);
			this->textBox_name->TabIndex = 2;
			this->textBox_name->Text = L"Пользователь";
			// 
			// label_name
			// 
			this->label_name->AutoSize = true;
			this->label_name->Font = (gcnew System::Drawing::Font(L"Consolas", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_name->Location = System::Drawing::Point(21, 201);
			this->label_name->Name = L"label_name";
			this->label_name->Size = System::Drawing::Size(64, 28);
			this->label_name->TabIndex = 1;
			this->label_name->Text = L"Имя:";
			// 
			// label_title
			// 
			this->label_title->Font = (gcnew System::Drawing::Font(L"Consolas", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_title->Location = System::Drawing::Point(12, 18);
			this->label_title->Name = L"label_title";
			this->label_title->Size = System::Drawing::Size(261, 149);
			this->label_title->TabIndex = 0;
			this->label_title->Text = L"Тест\r\nWindows Forms";
			this->label_title->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(884, 411);
			this->Controls->Add(this->main_panel);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(900, 450);
			this->MinimumSize = System::Drawing::Size(900, 450);
			this->Name = L"MyForm";
			this->Text = L"Тест на Windows Forms";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->main_panel->ResumeLayout(false);
			this->right_panel->ResumeLayout(false);
			this->right_panel->PerformLayout();
			this->question_number->ResumeLayout(false);
			this->question_number->PerformLayout();
			this->left_panel->ResumeLayout(false);
			this->left_panel->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button_start_Click(System::Object^ sender, System::EventArgs^ e) {

		right_panel->Visible = true;
		left_panel->Enabled = false;

		number = 1;

		label_question_number->Text = L"Вопрос №1";
		label_question->Text = L"Кто разработал язык программирования С++?";
		radioButton1->Text = L"Кен Томпсон";
		radioButton2->Text = L"Дональд Трамп";
		radioButton3->Text = L"Бьёрн Страуструп";
		button_prev->Enabled = false;

		radioButton1->Checked = false;
		radioButton2->Checked = false;
		radioButton3->Checked = false;

		button_next->Enabled = false;
		button_end->Enabled = false;
	}

private: System::Void button_prev_Click(System::Object^ sender, System::EventArgs^ e) {

	if (number > 1) number--;

	switch (number) {
	case 1:
		label_question_number->Text = L"Вопрос №1";
		label_question->Text = L"Кто разработал язык программирования С++?";
		radioButton1->Text = L"Кен Томпсон";
		radioButton2->Text = L"Дональд Трамп";
		radioButton3->Text = L"Бьёрн Страуструп";
		button_prev->Enabled = false;
		break;
	case 2:
		label_question_number->Text = L"Вопрос №2";
		label_question->Text = L"Какой заголовочный файл С++ содержит инструкции файлового ввода/вывода?";
		radioButton1->Text = L"infstream";
		radioButton2->Text = L"fstream";
		radioButton3->Text = L"iostream";
		button_prev->Enabled = true;
		break;
	case 3:
		label_question_number->Text = L"Вопрос №3";
		label_question->Text = L"Для обозначения какой арифметической операции используется знак \"%\"?";
		radioButton1->Text = L"Деление";
		radioButton2->Text = L"Нахождение остатка от деления";
		radioButton3->Text = L"Нахождение целой части от деления";
		button_prev->Enabled = true;
		break;
	case 4:
		label_question_number->Text = L"Вопрос №4";
		label_question->Text = L"Какого типа данных нет в языке Си?";
		radioButton1->Text = L"Char";
		radioButton2->Text = L"String";
		radioButton3->Text = L"Double";
		button_prev->Enabled = true;
		break;
	case 5:
		label_question_number->Text = L"Вопрос №5";
		label_question->Text = L"Какое ключевое слово необходимо использовать при определении структуры?";
		radioButton1->Text = L"struct";
		radioButton2->Text = L"object";
		radioButton3->Text = L"record";
		button_prev->Enabled = true;
		break;
	}

	radioButton1->Checked = false;
	radioButton2->Checked = false;
	radioButton3->Checked = false;

	button_next->Enabled = false;
	button_end->Enabled = false;
}

private: System::Void button_next_Click(System::Object^ sender, System::EventArgs^ e) {

	if (number < 5) number++;

	switch (number) {
	case 1:
		label_question_number->Text = L"Вопрос №1";
		label_question->Text = L"Кто разработал язык программирования С++?";
		radioButton1->Text = L"Кен Томпсон";
		radioButton2->Text = L"Дональд Трамп";
		radioButton3->Text = L"Бьёрн Страуструп";
		button_prev->Enabled = false;
		break;
	case 2:
		label_question_number->Text = L"Вопрос №2";
		label_question->Text = L"Какой заголовочный файл С++ содержит инструкции файлового ввода/вывода?";
		radioButton1->Text = L"infstream";
		radioButton2->Text = L"fstream";
		radioButton3->Text = L"iostream";
		button_prev->Enabled = true;
		break;
	case 3:
		label_question_number->Text = L"Вопрос №3";
		label_question->Text = L"Для обозначения какой арифметической операции используется знак \"%\"?";
		radioButton1->Text = L"Деление";
		radioButton2->Text = L"Нахождение остатка от деления";
		radioButton3->Text = L"Нахождение целой части от деления";
		button_prev->Enabled = true;
		break;
	case 4:
		label_question_number->Text = L"Вопрос №4";
		label_question->Text = L"Какого типа данных нет в языке Си?";
		radioButton1->Text = L"Char";
		radioButton2->Text = L"String";
		radioButton3->Text = L"Double";
		button_prev->Enabled = true;
		break;
	case 5:
		label_question_number->Text = L"Вопрос №5";
		label_question->Text = L"Какое ключевое слово необходимо использовать при определении структуры?";
		radioButton1->Text = L"struct";
		radioButton2->Text = L"object";
		radioButton3->Text = L"record";
		button_prev->Enabled = true;
		break;
	}

	radioButton1->Checked = false;
	radioButton2->Checked = false;
	radioButton3->Checked = false;

	button_next->Enabled = false;
	button_end->Enabled = false;
}

private: System::Void radioButton1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	answers[number - 1] = 1;
	if (number < 5) button_next->Enabled = true;
	if (number == 5) button_end->Enabled = true;
}

private: System::Void radioButton2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	answers[number - 1] = 2;
	if (number < 5) button_next->Enabled = true;
	if (number == 5) button_end->Enabled = true;
}

private: System::Void radioButton3_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	answers[number - 1] = 3;
	if (number < 5) button_next->Enabled = true;
	if (number == 5) button_end->Enabled = true;
}

private: System::Void button_end_Click(System::Object^ sender, System::EventArgs^ e) {

	int k = 0;

	for (int i = 0; i < 5; i++) if (answers[i] == rightanswers[i]) k++;

	MessageBox::Show(textBox_name->Text + ", вы дали " + k + " из 5 правильных ответов", "Тест окончен");

	left_panel->Enabled = true;
	right_panel->Visible = false;
}

private: System::Void главноеМенюToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	left_panel->Enabled = true;
	right_panel->Visible = false;
}

private: System::Void оПрограммеToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show("Данная программа - небольшой тест о языке программирования С++,\
 написанный на Windows Forms", "О программе");
}

};
}
