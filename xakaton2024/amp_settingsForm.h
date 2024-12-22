#pragma once

namespace xakaton2024 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для amp_settingsForm
	/// </summary>
	public ref class amp_settingsForm : public System::Windows::Forms::Form
	{
	public:
		amp_settingsForm(void)
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
		~amp_settingsForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::CheckBox^ show_result_classification_checkBox;
	private: System::Windows::Forms::Button^ OK_button;
	private: System::Windows::Forms::Button^ cancel_button;
	private: System::Windows::Forms::GroupBox^ criterion_option_groupBox;
	private: System::Windows::Forms::GroupBox^ choice_settings_groupBox;
	private: System::Windows::Forms::GroupBox^ settings_object_groupBox;
	private: System::Windows::Forms::Label^ A1_label;
	private: System::Windows::Forms::Label^ A2_label;
	private: System::Windows::Forms::Label^ N1_label;

	protected:

	protected:








	private: System::Windows::Forms::TextBox^ A1_textBox1;
	private: System::Windows::Forms::TextBox^ A2_textBox2;
	private: System::Windows::Forms::TextBox^ N1_textBox;





	private: System::Windows::Forms::RadioButton^ criterion_option_radioButton2;

	private: System::Windows::Forms::RadioButton^ criterion_option_radioButton;
	private: System::Windows::Forms::RadioButton^ choice_settings_hands_radioButton2;



	private: System::Windows::Forms::RadioButton^ choice_settings_automatic_radioButton;
	private: System::Windows::Forms::ComboBox^ settings_object_comboBox2;


	private: System::Windows::Forms::ComboBox^ settings_object_comboBox;

	private: System::Windows::Forms::Label^ settings_object_label2;

	private: System::Windows::Forms::Label^ settings_object_label;
	private: System::Windows::Forms::Label^ N2_label;
	private: System::Windows::Forms::TextBox^ N2_textBox;





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
			this->show_result_classification_checkBox = (gcnew System::Windows::Forms::CheckBox());
			this->OK_button = (gcnew System::Windows::Forms::Button());
			this->cancel_button = (gcnew System::Windows::Forms::Button());
			this->criterion_option_groupBox = (gcnew System::Windows::Forms::GroupBox());
			this->criterion_option_radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->criterion_option_radioButton = (gcnew System::Windows::Forms::RadioButton());
			this->choice_settings_groupBox = (gcnew System::Windows::Forms::GroupBox());
			this->choice_settings_hands_radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->choice_settings_automatic_radioButton = (gcnew System::Windows::Forms::RadioButton());
			this->settings_object_groupBox = (gcnew System::Windows::Forms::GroupBox());
			this->settings_object_comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->settings_object_comboBox = (gcnew System::Windows::Forms::ComboBox());
			this->settings_object_label2 = (gcnew System::Windows::Forms::Label());
			this->settings_object_label = (gcnew System::Windows::Forms::Label());
			this->A1_label = (gcnew System::Windows::Forms::Label());
			this->A2_label = (gcnew System::Windows::Forms::Label());
			this->N1_label = (gcnew System::Windows::Forms::Label());
			this->A1_textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->A2_textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->N1_textBox = (gcnew System::Windows::Forms::TextBox());
			this->N2_label = (gcnew System::Windows::Forms::Label());
			this->N2_textBox = (gcnew System::Windows::Forms::TextBox());
			this->criterion_option_groupBox->SuspendLayout();
			this->choice_settings_groupBox->SuspendLayout();
			this->settings_object_groupBox->SuspendLayout();
			this->SuspendLayout();
			// 
			// show_result_classification_checkBox
			// 
			this->show_result_classification_checkBox->AutoSize = true;
			this->show_result_classification_checkBox->Location = System::Drawing::Point(13, 13);
			this->show_result_classification_checkBox->Name = L"show_result_classification_checkBox";
			this->show_result_classification_checkBox->Size = System::Drawing::Size(234, 17);
			this->show_result_classification_checkBox->TabIndex = 0;
			this->show_result_classification_checkBox->Text = L"Показывать результаты классификации";
			this->show_result_classification_checkBox->UseVisualStyleBackColor = true;
			// 
			// OK_button
			// 
			this->OK_button->Location = System::Drawing::Point(253, 13);
			this->OK_button->Name = L"OK_button";
			this->OK_button->Size = System::Drawing::Size(75, 23);
			this->OK_button->TabIndex = 1;
			this->OK_button->Text = L"ОК";
			this->OK_button->UseVisualStyleBackColor = true;
			// 
			// cancel_button
			// 
			this->cancel_button->Location = System::Drawing::Point(253, 42);
			this->cancel_button->Name = L"cancel_button";
			this->cancel_button->Size = System::Drawing::Size(75, 23);
			this->cancel_button->TabIndex = 1;
			this->cancel_button->Text = L"Отмена";
			this->cancel_button->UseVisualStyleBackColor = true;
			this->cancel_button->Click += gcnew System::EventHandler(this, &amp_settingsForm::cancel_button_Click);
			// 
			// criterion_option_groupBox
			// 
			this->criterion_option_groupBox->Controls->Add(this->criterion_option_radioButton2);
			this->criterion_option_groupBox->Controls->Add(this->criterion_option_radioButton);
			this->criterion_option_groupBox->Location = System::Drawing::Point(13, 42);
			this->criterion_option_groupBox->Name = L"criterion_option_groupBox";
			this->criterion_option_groupBox->Size = System::Drawing::Size(234, 74);
			this->criterion_option_groupBox->TabIndex = 2;
			this->criterion_option_groupBox->TabStop = false;
			this->criterion_option_groupBox->Text = L"Вариант критерия";
			// 
			// criterion_option_radioButton2
			// 
			this->criterion_option_radioButton2->AutoSize = true;
			this->criterion_option_radioButton2->Location = System::Drawing::Point(7, 43);
			this->criterion_option_radioButton2->Name = L"criterion_option_radioButton2";
			this->criterion_option_radioButton2->Size = System::Drawing::Size(150, 17);
			this->criterion_option_radioButton2->TabIndex = 1;
			this->criterion_option_radioButton2->TabStop = true;
			this->criterion_option_radioButton2->Text = L"согласно EN 14584:2005";
			this->criterion_option_radioButton2->UseVisualStyleBackColor = true;
			// 
			// criterion_option_radioButton
			// 
			this->criterion_option_radioButton->AutoSize = true;
			this->criterion_option_radioButton->Location = System::Drawing::Point(7, 20);
			this->criterion_option_radioButton->Name = L"criterion_option_radioButton";
			this->criterion_option_radioButton->Size = System::Drawing::Size(156, 17);
			this->criterion_option_radioButton->TabIndex = 0;
			this->criterion_option_radioButton->TabStop = true;
			this->criterion_option_radioButton->Text = L"локационно-амплитудный";
			this->criterion_option_radioButton->UseVisualStyleBackColor = true;
			// 
			// choice_settings_groupBox
			// 
			this->choice_settings_groupBox->Controls->Add(this->choice_settings_hands_radioButton2);
			this->choice_settings_groupBox->Controls->Add(this->choice_settings_automatic_radioButton);
			this->choice_settings_groupBox->Location = System::Drawing::Point(13, 122);
			this->choice_settings_groupBox->Name = L"choice_settings_groupBox";
			this->choice_settings_groupBox->Size = System::Drawing::Size(234, 100);
			this->choice_settings_groupBox->TabIndex = 2;
			this->choice_settings_groupBox->TabStop = false;
			this->choice_settings_groupBox->Text = L"Выбор параметров";
			// 
			// choice_settings_hands_radioButton2
			// 
			this->choice_settings_hands_radioButton2->AutoSize = true;
			this->choice_settings_hands_radioButton2->Location = System::Drawing::Point(6, 43);
			this->choice_settings_hands_radioButton2->Name = L"choice_settings_hands_radioButton2";
			this->choice_settings_hands_radioButton2->Size = System::Drawing::Size(60, 17);
			this->choice_settings_hands_radioButton2->TabIndex = 0;
			this->choice_settings_hands_radioButton2->TabStop = true;
			this->choice_settings_hands_radioButton2->Text = L"Ручной";
			this->choice_settings_hands_radioButton2->UseVisualStyleBackColor = true;
			// 
			// choice_settings_automatic_radioButton
			// 
			this->choice_settings_automatic_radioButton->AutoSize = true;
			this->choice_settings_automatic_radioButton->Location = System::Drawing::Point(7, 20);
			this->choice_settings_automatic_radioButton->Name = L"choice_settings_automatic_radioButton";
			this->choice_settings_automatic_radioButton->Size = System::Drawing::Size(109, 17);
			this->choice_settings_automatic_radioButton->TabIndex = 0;
			this->choice_settings_automatic_radioButton->TabStop = true;
			this->choice_settings_automatic_radioButton->Text = L"Автоматический";
			this->choice_settings_automatic_radioButton->UseVisualStyleBackColor = true;
			// 
			// settings_object_groupBox
			// 
			this->settings_object_groupBox->Controls->Add(this->settings_object_comboBox2);
			this->settings_object_groupBox->Controls->Add(this->settings_object_comboBox);
			this->settings_object_groupBox->Controls->Add(this->settings_object_label2);
			this->settings_object_groupBox->Controls->Add(this->settings_object_label);
			this->settings_object_groupBox->Location = System::Drawing::Point(13, 240);
			this->settings_object_groupBox->Name = L"settings_object_groupBox";
			this->settings_object_groupBox->Size = System::Drawing::Size(234, 84);
			this->settings_object_groupBox->TabIndex = 2;
			this->settings_object_groupBox->TabStop = false;
			this->settings_object_groupBox->Text = L"Параметры объекта";
			// 
			// settings_object_comboBox2
			// 
			this->settings_object_comboBox2->FormattingEnabled = true;
			this->settings_object_comboBox2->Location = System::Drawing::Point(124, 47);
			this->settings_object_comboBox2->Name = L"settings_object_comboBox2";
			this->settings_object_comboBox2->Size = System::Drawing::Size(94, 21);
			this->settings_object_comboBox2->TabIndex = 1;
			// 
			// settings_object_comboBox
			// 
			this->settings_object_comboBox->FormattingEnabled = true;
			this->settings_object_comboBox->Location = System::Drawing::Point(124, 17);
			this->settings_object_comboBox->Name = L"settings_object_comboBox";
			this->settings_object_comboBox->Size = System::Drawing::Size(94, 21);
			this->settings_object_comboBox->TabIndex = 1;
			// 
			// settings_object_label2
			// 
			this->settings_object_label2->AutoSize = true;
			this->settings_object_label2->Location = System::Drawing::Point(7, 55);
			this->settings_object_label2->Name = L"settings_object_label2";
			this->settings_object_label2->Size = System::Drawing::Size(74, 13);
			this->settings_object_label2->TabIndex = 0;
			this->settings_object_label2->Text = L"Тип объекта:";
			// 
			// settings_object_label
			// 
			this->settings_object_label->AutoSize = true;
			this->settings_object_label->Location = System::Drawing::Point(7, 20);
			this->settings_object_label->Name = L"settings_object_label";
			this->settings_object_label->Size = System::Drawing::Size(101, 13);
			this->settings_object_label->TabIndex = 0;
			this->settings_object_label->Text = L"Марка материала:";
			// 
			// A1_label
			// 
			this->A1_label->AutoSize = true;
			this->A1_label->Location = System::Drawing::Point(13, 348);
			this->A1_label->Name = L"A1_label";
			this->A1_label->Size = System::Drawing::Size(45, 13);
			this->A1_label->TabIndex = 3;
			this->A1_label->Text = L"А1 (дБ):";
			// 
			// A2_label
			// 
			this->A2_label->AutoSize = true;
			this->A2_label->Location = System::Drawing::Point(13, 383);
			this->A2_label->Name = L"A2_label";
			this->A2_label->Size = System::Drawing::Size(45, 13);
			this->A2_label->TabIndex = 3;
			this->A2_label->Text = L"А2 (дБ):";
			// 
			// N1_label
			// 
			this->N1_label->AutoSize = true;
			this->N1_label->Location = System::Drawing::Point(13, 415);
			this->N1_label->Name = L"N1_label";
			this->N1_label->Size = System::Drawing::Size(24, 13);
			this->N1_label->TabIndex = 3;
			this->N1_label->Text = L"N1:";
			// 
			// A1_textBox1
			// 
			this->A1_textBox1->Location = System::Drawing::Point(147, 345);
			this->A1_textBox1->Name = L"A1_textBox1";
			this->A1_textBox1->Size = System::Drawing::Size(100, 20);
			this->A1_textBox1->TabIndex = 4;
			// 
			// A2_textBox2
			// 
			this->A2_textBox2->Location = System::Drawing::Point(147, 376);
			this->A2_textBox2->Name = L"A2_textBox2";
			this->A2_textBox2->Size = System::Drawing::Size(100, 20);
			this->A2_textBox2->TabIndex = 4;
			// 
			// N1_textBox
			// 
			this->N1_textBox->Location = System::Drawing::Point(147, 408);
			this->N1_textBox->Name = L"N1_textBox";
			this->N1_textBox->Size = System::Drawing::Size(100, 20);
			this->N1_textBox->TabIndex = 4;
			// 
			// N2_label
			// 
			this->N2_label->AutoSize = true;
			this->N2_label->Location = System::Drawing::Point(13, 444);
			this->N2_label->Name = L"N2_label";
			this->N2_label->Size = System::Drawing::Size(24, 13);
			this->N2_label->TabIndex = 3;
			this->N2_label->Text = L"N2:";
			// 
			// N2_textBox
			// 
			this->N2_textBox->Location = System::Drawing::Point(147, 437);
			this->N2_textBox->Name = L"N2_textBox";
			this->N2_textBox->Size = System::Drawing::Size(100, 20);
			this->N2_textBox->TabIndex = 4;
			// 
			// amp_settingsForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(402, 469);
			this->Controls->Add(this->N2_textBox);
			this->Controls->Add(this->N1_textBox);
			this->Controls->Add(this->A2_textBox2);
			this->Controls->Add(this->N2_label);
			this->Controls->Add(this->A1_textBox1);
			this->Controls->Add(this->N1_label);
			this->Controls->Add(this->A2_label);
			this->Controls->Add(this->A1_label);
			this->Controls->Add(this->settings_object_groupBox);
			this->Controls->Add(this->choice_settings_groupBox);
			this->Controls->Add(this->criterion_option_groupBox);
			this->Controls->Add(this->cancel_button);
			this->Controls->Add(this->OK_button);
			this->Controls->Add(this->show_result_classification_checkBox);
			this->Name = L"amp_settingsForm";
			this->Text = L"Настройка амплитудного критерия";
			this->criterion_option_groupBox->ResumeLayout(false);
			this->criterion_option_groupBox->PerformLayout();
			this->choice_settings_groupBox->ResumeLayout(false);
			this->choice_settings_groupBox->PerformLayout();
			this->settings_object_groupBox->ResumeLayout(false);
			this->settings_object_groupBox->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void cancel_button_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
};
}
