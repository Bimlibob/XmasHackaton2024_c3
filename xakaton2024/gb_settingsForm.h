#pragma once

namespace xakaton2024 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для gb_settingsForm
	/// </summary>
	public ref class gb_settingsForm : public System::Windows::Forms::Form
	{
	public:
		gb_settingsForm(void)
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
		~gb_settingsForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::CheckBox^ show_checkBox;
	private: System::Windows::Forms::GroupBox^ intensivity_Q_groupBox;
	private: System::Windows::Forms::RadioButton^ location_amp_radioButton2;

	private: System::Windows::Forms::RadioButton^ energy_radioButton;
	private: System::Windows::Forms::GroupBox^ activity_N_groupBox;
	private: System::Windows::Forms::GroupBox^ loading_cycles_groupBox;

	protected:

	protected:






	private: System::Windows::Forms::Button^ ok_button;
	private: System::Windows::Forms::Button^ cancel_button;


	private: System::Windows::Forms::TextBox^ b_textBox;

	private: System::Windows::Forms::TextBox^ a_textBox;

	private: System::Windows::Forms::Label^ b_label;

	private: System::Windows::Forms::Label^ a_label;
	private: System::Windows::Forms::TextBox^ n_up_textBox;


	private: System::Windows::Forms::TextBox^ n_down_textBox;
	private: System::Windows::Forms::Label^ n_up_label;



	private: System::Windows::Forms::Label^ n_down_label;
	private: System::Windows::Forms::TextBox^ Excerpt_textBox3;



	private: System::Windows::Forms::TextBox^ Excerpt_textBox;

	private: System::Windows::Forms::TextBox^ loading_cycles_textBox3;

	private: System::Windows::Forms::TextBox^ loading_cycles_textBox;

	private: System::Windows::Forms::Label^ first_cycles_label;
	private: System::Windows::Forms::CheckBox^ two_cycles_checkBox;
	private: System::Windows::Forms::Label^ Excerpt_label2;





	private: System::Windows::Forms::Label^ Excerpt_label;

	private: System::Windows::Forms::Label^ loading_cycles_label2;

	private: System::Windows::Forms::Label^ loading_cycles_label;
	private: System::Windows::Forms::TextBox^ Excerpt_textBox4;


	private: System::Windows::Forms::TextBox^ Excerpt_textBox2;

	private: System::Windows::Forms::TextBox^ loading_cycles_textBox4;

	private: System::Windows::Forms::TextBox^ loading_cycles_textBox2;


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
			this->show_checkBox = (gcnew System::Windows::Forms::CheckBox());
			this->intensivity_Q_groupBox = (gcnew System::Windows::Forms::GroupBox());
			this->b_textBox = (gcnew System::Windows::Forms::TextBox());
			this->a_textBox = (gcnew System::Windows::Forms::TextBox());
			this->b_label = (gcnew System::Windows::Forms::Label());
			this->a_label = (gcnew System::Windows::Forms::Label());
			this->location_amp_radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->energy_radioButton = (gcnew System::Windows::Forms::RadioButton());
			this->activity_N_groupBox = (gcnew System::Windows::Forms::GroupBox());
			this->n_up_textBox = (gcnew System::Windows::Forms::TextBox());
			this->n_down_textBox = (gcnew System::Windows::Forms::TextBox());
			this->n_up_label = (gcnew System::Windows::Forms::Label());
			this->n_down_label = (gcnew System::Windows::Forms::Label());
			this->loading_cycles_groupBox = (gcnew System::Windows::Forms::GroupBox());
			this->two_cycles_checkBox = (gcnew System::Windows::Forms::CheckBox());
			this->Excerpt_label2 = (gcnew System::Windows::Forms::Label());
			this->Excerpt_label = (gcnew System::Windows::Forms::Label());
			this->loading_cycles_label2 = (gcnew System::Windows::Forms::Label());
			this->loading_cycles_label = (gcnew System::Windows::Forms::Label());
			this->Excerpt_textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->Excerpt_textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->Excerpt_textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->loading_cycles_textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->Excerpt_textBox = (gcnew System::Windows::Forms::TextBox());
			this->loading_cycles_textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->loading_cycles_textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->loading_cycles_textBox = (gcnew System::Windows::Forms::TextBox());
			this->first_cycles_label = (gcnew System::Windows::Forms::Label());
			this->ok_button = (gcnew System::Windows::Forms::Button());
			this->cancel_button = (gcnew System::Windows::Forms::Button());
			this->intensivity_Q_groupBox->SuspendLayout();
			this->activity_N_groupBox->SuspendLayout();
			this->loading_cycles_groupBox->SuspendLayout();
			this->SuspendLayout();
			// 
			// show_checkBox
			// 
			this->show_checkBox->AutoSize = true;
			this->show_checkBox->Location = System::Drawing::Point(13, 13);
			this->show_checkBox->Name = L"show_checkBox";
			this->show_checkBox->Size = System::Drawing::Size(234, 17);
			this->show_checkBox->TabIndex = 0;
			this->show_checkBox->Text = L"Показывать результаты классификации";
			this->show_checkBox->UseVisualStyleBackColor = true;
			// 
			// intensivity_Q_groupBox
			// 
			this->intensivity_Q_groupBox->Controls->Add(this->b_textBox);
			this->intensivity_Q_groupBox->Controls->Add(this->a_textBox);
			this->intensivity_Q_groupBox->Controls->Add(this->b_label);
			this->intensivity_Q_groupBox->Controls->Add(this->a_label);
			this->intensivity_Q_groupBox->Controls->Add(this->location_amp_radioButton2);
			this->intensivity_Q_groupBox->Controls->Add(this->energy_radioButton);
			this->intensivity_Q_groupBox->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->intensivity_Q_groupBox->Location = System::Drawing::Point(13, 37);
			this->intensivity_Q_groupBox->Name = L"intensivity_Q_groupBox";
			this->intensivity_Q_groupBox->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->intensivity_Q_groupBox->Size = System::Drawing::Size(218, 132);
			this->intensivity_Q_groupBox->TabIndex = 1;
			this->intensivity_Q_groupBox->TabStop = false;
			this->intensivity_Q_groupBox->Text = L"Определение уровня интенсивности (Q)";
			// 
			// b_textBox
			// 
			this->b_textBox->Location = System::Drawing::Point(112, 92);
			this->b_textBox->Name = L"b_textBox";
			this->b_textBox->Size = System::Drawing::Size(100, 20);
			this->b_textBox->TabIndex = 5;
			// 
			// a_textBox
			// 
			this->a_textBox->Location = System::Drawing::Point(112, 65);
			this->a_textBox->Name = L"a_textBox";
			this->a_textBox->Size = System::Drawing::Size(100, 20);
			this->a_textBox->TabIndex = 4;
			// 
			// b_label
			// 
			this->b_label->AutoSize = true;
			this->b_label->Location = System::Drawing::Point(10, 95);
			this->b_label->Name = L"b_label";
			this->b_label->Size = System::Drawing::Size(13, 13);
			this->b_label->TabIndex = 3;
			this->b_label->Text = L"b";
			// 
			// a_label
			// 
			this->a_label->AutoSize = true;
			this->a_label->Location = System::Drawing::Point(10, 68);
			this->a_label->Name = L"a_label";
			this->a_label->Size = System::Drawing::Size(13, 13);
			this->a_label->TabIndex = 2;
			this->a_label->Text = L"a";
			// 
			// location_amp_radioButton2
			// 
			this->location_amp_radioButton2->AutoSize = true;
			this->location_amp_radioButton2->Location = System::Drawing::Point(7, 43);
			this->location_amp_radioButton2->Name = L"location_amp_radioButton2";
			this->location_amp_radioButton2->Size = System::Drawing::Size(150, 17);
			this->location_amp_radioButton2->TabIndex = 1;
			this->location_amp_radioButton2->TabStop = true;
			this->location_amp_radioButton2->Text = L"Локационная амплитуда";
			this->location_amp_radioButton2->UseVisualStyleBackColor = true;
			// 
			// energy_radioButton
			// 
			this->energy_radioButton->AutoSize = true;
			this->energy_radioButton->Location = System::Drawing::Point(7, 20);
			this->energy_radioButton->Name = L"energy_radioButton";
			this->energy_radioButton->Size = System::Drawing::Size(67, 17);
			this->energy_radioButton->TabIndex = 0;
			this->energy_radioButton->TabStop = true;
			this->energy_radioButton->Text = L"Энергия";
			this->energy_radioButton->UseVisualStyleBackColor = true;
			// 
			// activity_N_groupBox
			// 
			this->activity_N_groupBox->Controls->Add(this->n_up_textBox);
			this->activity_N_groupBox->Controls->Add(this->n_down_textBox);
			this->activity_N_groupBox->Controls->Add(this->n_up_label);
			this->activity_N_groupBox->Controls->Add(this->n_down_label);
			this->activity_N_groupBox->Location = System::Drawing::Point(12, 175);
			this->activity_N_groupBox->Name = L"activity_N_groupBox";
			this->activity_N_groupBox->Size = System::Drawing::Size(213, 82);
			this->activity_N_groupBox->TabIndex = 1;
			this->activity_N_groupBox->TabStop = false;
			this->activity_N_groupBox->Text = L"Определения уровня активности (N)";
			// 
			// n_up_textBox
			// 
			this->n_up_textBox->Location = System::Drawing::Point(107, 52);
			this->n_up_textBox->Name = L"n_up_textBox";
			this->n_up_textBox->Size = System::Drawing::Size(100, 20);
			this->n_up_textBox->TabIndex = 1;
			// 
			// n_down_textBox
			// 
			this->n_down_textBox->Location = System::Drawing::Point(107, 20);
			this->n_down_textBox->Name = L"n_down_textBox";
			this->n_down_textBox->Size = System::Drawing::Size(100, 20);
			this->n_down_textBox->TabIndex = 1;
			// 
			// n_up_label
			// 
			this->n_up_label->AutoSize = true;
			this->n_up_label->Location = System::Drawing::Point(5, 55);
			this->n_up_label->Name = L"n_up_label";
			this->n_up_label->Size = System::Drawing::Size(59, 13);
			this->n_up_label->TabIndex = 0;
			this->n_up_label->Text = L"N верхнее";
			// 
			// n_down_label
			// 
			this->n_down_label->AutoSize = true;
			this->n_down_label->Location = System::Drawing::Point(5, 23);
			this->n_down_label->Name = L"n_down_label";
			this->n_down_label->Size = System::Drawing::Size(56, 13);
			this->n_down_label->TabIndex = 0;
			this->n_down_label->Text = L"N нижнее";
			// 
			// loading_cycles_groupBox
			// 
			this->loading_cycles_groupBox->Controls->Add(this->two_cycles_checkBox);
			this->loading_cycles_groupBox->Controls->Add(this->Excerpt_label2);
			this->loading_cycles_groupBox->Controls->Add(this->Excerpt_label);
			this->loading_cycles_groupBox->Controls->Add(this->loading_cycles_label2);
			this->loading_cycles_groupBox->Controls->Add(this->loading_cycles_label);
			this->loading_cycles_groupBox->Controls->Add(this->Excerpt_textBox4);
			this->loading_cycles_groupBox->Controls->Add(this->Excerpt_textBox2);
			this->loading_cycles_groupBox->Controls->Add(this->Excerpt_textBox3);
			this->loading_cycles_groupBox->Controls->Add(this->loading_cycles_textBox4);
			this->loading_cycles_groupBox->Controls->Add(this->Excerpt_textBox);
			this->loading_cycles_groupBox->Controls->Add(this->loading_cycles_textBox2);
			this->loading_cycles_groupBox->Controls->Add(this->loading_cycles_textBox3);
			this->loading_cycles_groupBox->Controls->Add(this->loading_cycles_textBox);
			this->loading_cycles_groupBox->Controls->Add(this->first_cycles_label);
			this->loading_cycles_groupBox->Location = System::Drawing::Point(13, 263);
			this->loading_cycles_groupBox->Name = L"loading_cycles_groupBox";
			this->loading_cycles_groupBox->Size = System::Drawing::Size(401, 126);
			this->loading_cycles_groupBox->TabIndex = 1;
			this->loading_cycles_groupBox->TabStop = false;
			this->loading_cycles_groupBox->Text = L"Циклы нагружения";
			// 
			// two_cycles_checkBox
			// 
			this->two_cycles_checkBox->AutoSize = true;
			this->two_cycles_checkBox->Location = System::Drawing::Point(10, 78);
			this->two_cycles_checkBox->Name = L"two_cycles_checkBox";
			this->two_cycles_checkBox->Size = System::Drawing::Size(89, 17);
			this->two_cycles_checkBox->TabIndex = 3;
			this->two_cycles_checkBox->Text = L"Второй цикл";
			this->two_cycles_checkBox->UseVisualStyleBackColor = true;
			// 
			// Excerpt_label2
			// 
			this->Excerpt_label2->AutoSize = true;
			this->Excerpt_label2->Location = System::Drawing::Point(323, 30);
			this->Excerpt_label2->Name = L"Excerpt_label2";
			this->Excerpt_label2->Size = System::Drawing::Size(72, 13);
			this->Excerpt_label2->TabIndex = 2;
			this->Excerpt_label2->Text = L"(интервал, с)";
			// 
			// Excerpt_label
			// 
			this->Excerpt_label->AutoSize = true;
			this->Excerpt_label->Location = System::Drawing::Point(256, 27);
			this->Excerpt_label->Name = L"Excerpt_label";
			this->Excerpt_label->Size = System::Drawing::Size(60, 13);
			this->Excerpt_label->TabIndex = 2;
			this->Excerpt_label->Text = L"Выдержка";
			// 
			// loading_cycles_label2
			// 
			this->loading_cycles_label2->AutoSize = true;
			this->loading_cycles_label2->Location = System::Drawing::Point(168, 27);
			this->loading_cycles_label2->Name = L"loading_cycles_label2";
			this->loading_cycles_label2->Size = System::Drawing::Size(72, 13);
			this->loading_cycles_label2->TabIndex = 2;
			this->loading_cycles_label2->Text = L"(интервал, с)";
			// 
			// loading_cycles_label
			// 
			this->loading_cycles_label->AutoSize = true;
			this->loading_cycles_label->Location = System::Drawing::Point(98, 27);
			this->loading_cycles_label->Name = L"loading_cycles_label";
			this->loading_cycles_label->Size = System::Drawing::Size(69, 13);
			this->loading_cycles_label->TabIndex = 2;
			this->loading_cycles_label->Text = L"Нагружение";
			// 
			// Excerpt_textBox4
			// 
			this->Excerpt_textBox4->Location = System::Drawing::Point(327, 75);
			this->Excerpt_textBox4->Name = L"Excerpt_textBox4";
			this->Excerpt_textBox4->Size = System::Drawing::Size(68, 20);
			this->Excerpt_textBox4->TabIndex = 1;
			// 
			// Excerpt_textBox2
			// 
			this->Excerpt_textBox2->Location = System::Drawing::Point(251, 76);
			this->Excerpt_textBox2->Name = L"Excerpt_textBox2";
			this->Excerpt_textBox2->Size = System::Drawing::Size(70, 20);
			this->Excerpt_textBox2->TabIndex = 1;
			// 
			// Excerpt_textBox3
			// 
			this->Excerpt_textBox3->Location = System::Drawing::Point(327, 46);
			this->Excerpt_textBox3->Name = L"Excerpt_textBox3";
			this->Excerpt_textBox3->Size = System::Drawing::Size(68, 20);
			this->Excerpt_textBox3->TabIndex = 1;
			// 
			// loading_cycles_textBox4
			// 
			this->loading_cycles_textBox4->Location = System::Drawing::Point(171, 75);
			this->loading_cycles_textBox4->Name = L"loading_cycles_textBox4";
			this->loading_cycles_textBox4->Size = System::Drawing::Size(64, 20);
			this->loading_cycles_textBox4->TabIndex = 1;
			// 
			// Excerpt_textBox
			// 
			this->Excerpt_textBox->Location = System::Drawing::Point(251, 46);
			this->Excerpt_textBox->Name = L"Excerpt_textBox";
			this->Excerpt_textBox->Size = System::Drawing::Size(70, 20);
			this->Excerpt_textBox->TabIndex = 1;
			// 
			// loading_cycles_textBox2
			// 
			this->loading_cycles_textBox2->Location = System::Drawing::Point(101, 75);
			this->loading_cycles_textBox2->Name = L"loading_cycles_textBox2";
			this->loading_cycles_textBox2->Size = System::Drawing::Size(64, 20);
			this->loading_cycles_textBox2->TabIndex = 1;
			// 
			// loading_cycles_textBox3
			// 
			this->loading_cycles_textBox3->Location = System::Drawing::Point(171, 46);
			this->loading_cycles_textBox3->Name = L"loading_cycles_textBox3";
			this->loading_cycles_textBox3->Size = System::Drawing::Size(64, 20);
			this->loading_cycles_textBox3->TabIndex = 1;
			// 
			// loading_cycles_textBox
			// 
			this->loading_cycles_textBox->Location = System::Drawing::Point(101, 46);
			this->loading_cycles_textBox->Name = L"loading_cycles_textBox";
			this->loading_cycles_textBox->Size = System::Drawing::Size(64, 20);
			this->loading_cycles_textBox->TabIndex = 1;
			// 
			// first_cycles_label
			// 
			this->first_cycles_label->AutoSize = true;
			this->first_cycles_label->Location = System::Drawing::Point(10, 46);
			this->first_cycles_label->Name = L"first_cycles_label";
			this->first_cycles_label->Size = System::Drawing::Size(74, 13);
			this->first_cycles_label->TabIndex = 0;
			this->first_cycles_label->Text = L"Первый цикл";
			// 
			// ok_button
			// 
			this->ok_button->Location = System::Drawing::Point(325, 13);
			this->ok_button->Name = L"ok_button";
			this->ok_button->Size = System::Drawing::Size(75, 23);
			this->ok_button->TabIndex = 2;
			this->ok_button->Text = L"ОК";
			this->ok_button->UseVisualStyleBackColor = true;
			// 
			// cancel_button
			// 
			this->cancel_button->Location = System::Drawing::Point(325, 42);
			this->cancel_button->Name = L"cancel_button";
			this->cancel_button->Size = System::Drawing::Size(75, 23);
			this->cancel_button->TabIndex = 2;
			this->cancel_button->Text = L"Отмена";
			this->cancel_button->UseVisualStyleBackColor = true;
			this->cancel_button->Click += gcnew System::EventHandler(this, &gb_settingsForm::cancel_button_Click);
			// 
			// gb_settingsForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(426, 399);
			this->Controls->Add(this->cancel_button);
			this->Controls->Add(this->ok_button);
			this->Controls->Add(this->loading_cycles_groupBox);
			this->Controls->Add(this->activity_N_groupBox);
			this->Controls->Add(this->intensivity_Q_groupBox);
			this->Controls->Add(this->show_checkBox);
			this->Name = L"gb_settingsForm";
			this->Text = L"Настройка критерия GB/T 18182-2012";
			this->intensivity_Q_groupBox->ResumeLayout(false);
			this->intensivity_Q_groupBox->PerformLayout();
			this->activity_N_groupBox->ResumeLayout(false);
			this->activity_N_groupBox->PerformLayout();
			this->loading_cycles_groupBox->ResumeLayout(false);
			this->loading_cycles_groupBox->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void cancel_button_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
};
}
