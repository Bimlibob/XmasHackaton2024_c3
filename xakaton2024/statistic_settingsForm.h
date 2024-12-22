#pragma once

namespace xakaton2024 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для statistic_settingsForm
	/// </summary>
	public ref class statistic_settingsForm : public System::Windows::Forms::Form
	{
	public:
		statistic_settingsForm(void)
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
		~statistic_settingsForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::CheckBox^ checkBox1;
	protected:
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::GroupBox^ groupBox5;
	private: System::Windows::Forms::CheckBox^ checkBox2;
	private: System::Windows::Forms::GroupBox^ groupBox6;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown2;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::CheckBox^ checkBox3;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::ComboBox^ comboBox3;
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::CheckBox^ checkBox7;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::CheckBox^ checkBox6;
	private: System::Windows::Forms::CheckedListBox^ checkedListBox1;
	private: System::Windows::Forms::CheckBox^ checkBox5;
	private: System::Windows::Forms::CheckBox^ checkBox4;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown3;
	private: System::Windows::Forms::Label^ label10;

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
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->numericUpDown2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->checkBox7 = (gcnew System::Windows::Forms::CheckBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->checkBox6 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->groupBox6 = (gcnew System::Windows::Forms::GroupBox());
			this->checkedListBox1 = (gcnew System::Windows::Forms::CheckedListBox());
			this->checkBox5 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox4 = (gcnew System::Windows::Forms::CheckBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->numericUpDown3 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			this->groupBox5->SuspendLayout();
			this->groupBox6->SuspendLayout();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->BeginInit();
			this->SuspendLayout();
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(13, 13);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(234, 17);
			this->checkBox1->TabIndex = 0;
			this->checkBox1->Text = L"Показывать результаты классификации";
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->numericUpDown2);
			this->groupBox1->Controls->Add(this->numericUpDown1);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->radioButton2);
			this->groupBox1->Controls->Add(this->radioButton1);
			this->groupBox1->Location = System::Drawing::Point(13, 42);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(274, 151);
			this->groupBox1->TabIndex = 1;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Формирование выборки для анализа";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(153, 118);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(13, 13);
			this->label4->TabIndex = 4;
			this->label4->Text = L"=";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(172, 115);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(62, 20);
			this->textBox2->TabIndex = 3;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(172, 89);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(62, 20);
			this->textBox1->TabIndex = 3;
			// 
			// numericUpDown2
			// 
			this->numericUpDown2->Location = System::Drawing::Point(85, 115);
			this->numericUpDown2->Name = L"numericUpDown2";
			this->numericUpDown2->Size = System::Drawing::Size(62, 20);
			this->numericUpDown2->TabIndex = 2;
			this->numericUpDown2->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Location = System::Drawing::Point(172, 62);
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(62, 20);
			this->numericUpDown1->TabIndex = 2;
			this->numericUpDown1->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(7, 119);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(70, 13);
			this->label3->TabIndex = 1;
			this->label3->Text = L"Перекрытие";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(7, 93);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(142, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Длительность выборки (с)";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(3, 67);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(153, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Число импульсов в выборке";
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(7, 43);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(86, 17);
			this->radioButton2->TabIndex = 0;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"По времени";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(7, 20);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(128, 17);
			this->radioButton1->TabIndex = 0;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"По числу импульсов";
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// groupBox5
			// 
			this->groupBox5->Controls->Add(this->textBox5);
			this->groupBox5->Controls->Add(this->checkBox7);
			this->groupBox5->Controls->Add(this->label11);
			this->groupBox5->Controls->Add(this->button3);
			this->groupBox5->Controls->Add(this->checkBox6);
			this->groupBox5->Location = System::Drawing::Point(12, 377);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Size = System::Drawing::Size(420, 109);
			this->groupBox5->TabIndex = 1;
			this->groupBox5->TabStop = false;
			this->groupBox5->Text = L"Результаты расчета";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(7, 83);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(407, 20);
			this->textBox5->TabIndex = 4;
			// 
			// checkBox7
			// 
			this->checkBox7->AutoSize = true;
			this->checkBox7->Location = System::Drawing::Point(142, 58);
			this->checkBox7->Name = L"checkBox7";
			this->checkBox7->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->checkBox7->Size = System::Drawing::Size(76, 17);
			this->checkBox7->TabIndex = 3;
			this->checkBox7->Text = L"Имя тоже";
			this->checkBox7->UseVisualStyleBackColor = true;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(8, 58);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(127, 13);
			this->label11->TabIndex = 2;
			this->label11->Text = L"Имя файла результата:";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(147, 16);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 1;
			this->button3->Text = L"Обзор";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// checkBox6
			// 
			this->checkBox6->AutoSize = true;
			this->checkBox6->Location = System::Drawing::Point(7, 20);
			this->checkBox6->Name = L"checkBox6";
			this->checkBox6->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->checkBox6->Size = System::Drawing::Size(123, 17);
			this->checkBox6->TabIndex = 0;
			this->checkBox6->Text = L"Сохранить в файле";
			this->checkBox6->UseVisualStyleBackColor = true;
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Location = System::Drawing::Point(12, 492);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(225, 17);
			this->checkBox2->TabIndex = 2;
			this->checkBox2->Text = L"Показывать временное окно критерия";
			this->checkBox2->UseVisualStyleBackColor = true;
			// 
			// groupBox6
			// 
			this->groupBox6->Controls->Add(this->checkedListBox1);
			this->groupBox6->Controls->Add(this->checkBox5);
			this->groupBox6->Controls->Add(this->checkBox4);
			this->groupBox6->Location = System::Drawing::Point(293, 85);
			this->groupBox6->Name = L"groupBox6";
			this->groupBox6->Size = System::Drawing::Size(139, 272);
			this->groupBox6->TabIndex = 1;
			this->groupBox6->TabStop = false;
			this->groupBox6->Text = L"Каналы";
			// 
			// checkedListBox1
			// 
			this->checkedListBox1->FormattingEnabled = true;
			this->checkedListBox1->Items->AddRange(gcnew cli::array< System::Object^  >(1) { L"" });
			this->checkedListBox1->Location = System::Drawing::Point(7, 50);
			this->checkedListBox1->Name = L"checkedListBox1";
			this->checkedListBox1->Size = System::Drawing::Size(126, 184);
			this->checkedListBox1->TabIndex = 2;
			// 
			// checkBox5
			// 
			this->checkBox5->AutoSize = true;
			this->checkBox5->Location = System::Drawing::Point(29, 240);
			this->checkBox5->Name = L"checkBox5";
			this->checkBox5->Size = System::Drawing::Size(80, 17);
			this->checkBox5->TabIndex = 1;
			this->checkBox5->Text = L"Разделить";
			this->checkBox5->UseVisualStyleBackColor = true;
			// 
			// checkBox4
			// 
			this->checkBox4->AutoSize = true;
			this->checkBox4->Location = System::Drawing::Point(7, 20);
			this->checkBox4->Name = L"checkBox4";
			this->checkBox4->Size = System::Drawing::Size(45, 17);
			this->checkBox4->TabIndex = 0;
			this->checkBox4->Text = L"Все";
			this->checkBox4->UseVisualStyleBackColor = true;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(293, 27);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 3;
			this->button1->Text = L"ОК";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(293, 56);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Отмена";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &statistic_settingsForm::button2_Click);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->numericUpDown3);
			this->groupBox2->Controls->Add(this->label10);
			this->groupBox2->Controls->Add(this->textBox4);
			this->groupBox2->Controls->Add(this->label9);
			this->groupBox2->Controls->Add(this->textBox3);
			this->groupBox2->Controls->Add(this->label8);
			this->groupBox2->Controls->Add(this->checkBox3);
			this->groupBox2->Controls->Add(this->label7);
			this->groupBox2->Controls->Add(this->label6);
			this->groupBox2->Controls->Add(this->comboBox3);
			this->groupBox2->Controls->Add(this->comboBox2);
			this->groupBox2->Controls->Add(this->comboBox1);
			this->groupBox2->Controls->Add(this->label5);
			this->groupBox2->Location = System::Drawing::Point(12, 211);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(275, 146);
			this->groupBox2->TabIndex = 1;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Параметры для осей";
			// 
			// numericUpDown3
			// 
			this->numericUpDown3->Location = System::Drawing::Point(205, 116);
			this->numericUpDown3->Name = L"numericUpDown3";
			this->numericUpDown3->Size = System::Drawing::Size(64, 20);
			this->numericUpDown3->TabIndex = 9;
			this->numericUpDown3->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(15, 118);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(184, 13);
			this->label10->TabIndex = 8;
			this->label10->Text = L"Число гистограммных интервалов";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(212, 90);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(57, 20);
			this->textBox4->TabIndex = 7;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(178, 93);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(30, 13);
			this->label9->TabIndex = 6;
			this->label9->Text = L"Max:";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(111, 90);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(56, 20);
			this->textBox3->TabIndex = 5;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(78, 93);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(27, 13);
			this->label8->TabIndex = 4;
			this->label8->Text = L"Min:";
			// 
			// checkBox3
			// 
			this->checkBox3->AutoSize = true;
			this->checkBox3->Location = System::Drawing::Point(13, 93);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->checkBox3->Size = System::Drawing::Size(50, 17);
			this->checkBox3->TabIndex = 3;
			this->checkBox3->Text = L"Авто";
			this->checkBox3->UseVisualStyleBackColor = true;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(9, 55);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(40, 13);
			this->label7->TabIndex = 2;
			this->label7->Text = L"Ось X:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(68, 55);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(43, 13);
			this->label6->TabIndex = 2;
			this->label6->Text = L"X-крит.";
			// 
			// comboBox3
			// 
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Location = System::Drawing::Point(127, 52);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(148, 21);
			this->comboBox3->TabIndex = 1;
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Location = System::Drawing::Point(127, 20);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(148, 21);
			this->comboBox2->TabIndex = 1;
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(49, 20);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(72, 21);
			this->comboBox1->TabIndex = 1;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(9, 24);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(40, 13);
			this->label5->TabIndex = 0;
			this->label5->Text = L"Ось Y:";
			// 
			// statistic_settingsForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(444, 521);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->checkBox2);
			this->Controls->Add(this->groupBox6);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox5);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->checkBox1);
			this->Name = L"statistic_settingsForm";
			this->Text = L"Настройка статического критерия";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			this->groupBox5->ResumeLayout(false);
			this->groupBox5->PerformLayout();
			this->groupBox6->ResumeLayout(false);
			this->groupBox6->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
};
}
