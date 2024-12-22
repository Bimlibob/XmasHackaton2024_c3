#pragma once

namespace xakaton2024 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для create_calibForm
	/// </summary>
	public ref class create_calibForm : public System::Windows::Forms::Form
	{
	public:
		create_calibForm(void)
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
		~create_calibForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ groupBox1;
	protected:
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::GroupBox^ groupBox4;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;

	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::CheckedListBox^ checkedListBox1;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown3;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown2;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::CheckBox^ checkBox2;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown4;
	private: System::Windows::Forms::Label^ label5;

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
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->checkedListBox1 = (gcnew System::Windows::Forms::CheckedListBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->numericUpDown3 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->numericUpDown4 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			this->groupBox3->SuspendLayout();
			this->groupBox4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown4))->BeginInit();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->checkedListBox1);
			this->groupBox1->Controls->Add(this->button5);
			this->groupBox1->Controls->Add(this->checkBox1);
			this->groupBox1->Controls->Add(this->comboBox1);
			this->groupBox1->Location = System::Drawing::Point(13, 13);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(100, 222);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Каналы";
			// 
			// checkedListBox1
			// 
			this->checkedListBox1->FormattingEnabled = true;
			this->checkedListBox1->Items->AddRange(gcnew cli::array< System::Object^  >(6) {
				L"01-1/01", L"01-1/02", L"01-1/03", L"01-1/04",
					L"01-1/05", L"01-1/06"
			});
			this->checkedListBox1->Location = System::Drawing::Point(6, 71);
			this->checkedListBox1->Name = L"checkedListBox1";
			this->checkedListBox1->Size = System::Drawing::Size(88, 109);
			this->checkedListBox1->TabIndex = 3;
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(12, 186);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 23);
			this->button5->TabIndex = 2;
			this->button5->Text = L"Выбрать";
			this->button5->UseVisualStyleBackColor = true;
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(7, 48);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(45, 17);
			this->checkBox1->TabIndex = 1;
			this->checkBox1->Text = L"Все";
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(7, 20);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(87, 21);
			this->comboBox1->TabIndex = 0;
			this->comboBox1->Text = L"Излучают";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->numericUpDown3);
			this->groupBox2->Controls->Add(this->numericUpDown2);
			this->groupBox2->Controls->Add(this->numericUpDown1);
			this->groupBox2->Controls->Add(this->label4);
			this->groupBox2->Controls->Add(this->label3);
			this->groupBox2->Controls->Add(this->label2);
			this->groupBox2->Controls->Add(this->radioButton2);
			this->groupBox2->Controls->Add(this->radioButton1);
			this->groupBox2->Location = System::Drawing::Point(119, 13);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(156, 207);
			this->groupBox2->TabIndex = 0;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Параметры излучения";
			// 
			// numericUpDown3
			// 
			this->numericUpDown3->Location = System::Drawing::Point(92, 166);
			this->numericUpDown3->Name = L"numericUpDown3";
			this->numericUpDown3->Size = System::Drawing::Size(48, 20);
			this->numericUpDown3->TabIndex = 2;
			this->numericUpDown3->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// numericUpDown2
			// 
			this->numericUpDown2->Location = System::Drawing::Point(92, 127);
			this->numericUpDown2->Name = L"numericUpDown2";
			this->numericUpDown2->Size = System::Drawing::Size(48, 20);
			this->numericUpDown2->TabIndex = 2;
			this->numericUpDown2->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Location = System::Drawing::Point(92, 88);
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(48, 20);
			this->numericUpDown1->TabIndex = 2;
			this->numericUpDown1->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(8, 160);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(59, 26);
			this->label4->TabIndex = 1;
			this->label4->Text = L"   Число\r\nизлучений";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(8, 129);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(71, 13);
			this->label3->TabIndex = 1;
			this->label3->Text = L"Интервал (с)";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(8, 90);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(78, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Амплитуда (В)";
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(7, 47);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(127, 17);
			this->radioButton2->TabIndex = 0;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"Излучение модулем";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(7, 20);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(115, 17);
			this->radioButton1->TabIndex = 0;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Ручное излучение";
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->checkBox2);
			this->groupBox3->Controls->Add(this->button6);
			this->groupBox3->Controls->Add(this->comboBox2);
			this->groupBox3->Location = System::Drawing::Point(12, 241);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(263, 80);
			this->groupBox3->TabIndex = 0;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Профиль для тестов и калибровки";
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Location = System::Drawing::Point(21, 47);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(229, 17);
			this->checkBox2->TabIndex = 2;
			this->checkBox2->Text = L"При отсутствии создать автоматически";
			this->checkBox2->UseVisualStyleBackColor = true;
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(230, 19);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(27, 23);
			this->button6->TabIndex = 1;
			this->button6->Text = L"...";
			this->button6->UseVisualStyleBackColor = true;
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Location = System::Drawing::Point(13, 20);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(216, 21);
			this->comboBox2->TabIndex = 0;
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->button8);
			this->groupBox4->Controls->Add(this->button11);
			this->groupBox4->Controls->Add(this->button10);
			this->groupBox4->Controls->Add(this->button9);
			this->groupBox4->Controls->Add(this->button7);
			this->groupBox4->Controls->Add(this->numericUpDown4);
			this->groupBox4->Controls->Add(this->label5);
			this->groupBox4->Location = System::Drawing::Point(13, 327);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(355, 140);
			this->groupBox4->TabIndex = 0;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Настройки тестов и калибровки";
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(167, 55);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(129, 23);
			this->button8->TabIndex = 2;
			this->button8->Text = L"Тест калибровки";
			this->button8->UseVisualStyleBackColor = true;
			// 
			// button11
			// 
			this->button11->Location = System::Drawing::Point(223, 97);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(75, 23);
			this->button11->TabIndex = 2;
			this->button11->Text = L"Фильтр";
			this->button11->UseVisualStyleBackColor = true;
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(117, 97);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(100, 23);
			this->button10->TabIndex = 2;
			this->button10->Text = L"Дополнительно";
			this->button10->UseVisualStyleBackColor = true;
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(25, 97);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(86, 23);
			this->button9->TabIndex = 2;
			this->button9->Text = L"Калибровка";
			this->button9->UseVisualStyleBackColor = true;
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(25, 55);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(136, 23);
			this->button7->TabIndex = 2;
			this->button7->Text = L"Тест шума";
			this->button7->UseVisualStyleBackColor = true;
			// 
			// numericUpDown4
			// 
			this->numericUpDown4->Location = System::Drawing::Point(246, 16);
			this->numericUpDown4->Name = L"numericUpDown4";
			this->numericUpDown4->Size = System::Drawing::Size(70, 20);
			this->numericUpDown4->TabIndex = 1;
			this->numericUpDown4->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(34, 16);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(206, 26);
			this->label5->TabIndex = 0;
			this->label5->Text = L"Множитель для выводимой велинины\r\n                                      оценки ка"
				L"чества";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(119, 225);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(109, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Мин. скорость (м/с)";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(293, 13);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 2;
			this->button1->Text = L"ОК";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(293, 42);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Отмена";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &create_calibForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(293, 108);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Запустить";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(293, 137);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 2;
			this->button4->Text = L"Сохранить";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(234, 222);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(41, 20);
			this->textBox1->TabIndex = 3;
			// 
			// create_calibForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(380, 479);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->groupBox4);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Name = L"create_calibForm";
			this->Text = L"Параметры калибровки";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown4))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
};
}
