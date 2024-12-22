#pragma once

namespace xakaton2024 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для new_measurement_speed_distance
	/// </summary>
	public ref class new_measurement_speed_distance : public System::Windows::Forms::Form
	{
	public:
		new_measurement_speed_distance(void)
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
		~new_measurement_speed_distance()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ action_groupBox;
	private: System::Windows::Forms::RadioButton^ action_radioButton2;
	protected:

	protected:

	protected:

	private: System::Windows::Forms::RadioButton^ action_radioButton;
	private: System::Windows::Forms::GroupBox^ speed_deistance_groupBox;
	private: System::Windows::Forms::RadioButton^ speed_distance_radioButton2;



	private: System::Windows::Forms::RadioButton^ speed_distance_radioButton;
	private: System::Windows::Forms::GroupBox^ sensors_groupBox;
	private: System::Windows::Forms::Label^ sensor_label3;




	private: System::Windows::Forms::Label^ sensor_label2;

	private: System::Windows::Forms::Label^ sensor_label;
	private: System::Windows::Forms::GroupBox^ settings_groupBox;
	private: System::Windows::Forms::GroupBox^ settings_choice_impuls_groupBox;




	private: System::Windows::Forms::Button^ ok_button;
	private: System::Windows::Forms::Button^ cancel_button;
	private: System::Windows::Forms::Button^ save_button;
	private: System::Windows::Forms::Button^ download_button;
	private: System::Windows::Forms::TextBox^ sensor_textBox;





	private: System::Windows::Forms::ComboBox^ sensor_comboBox2;

	private: System::Windows::Forms::ComboBox^ sensor_comboBox;
	private: System::Windows::Forms::Label^ settings_label3;



	private: System::Windows::Forms::Label^ settings_label2;

	private: System::Windows::Forms::Label^ settings_label;
	private: System::Windows::Forms::CheckBox^ settings_checkBox;


	private: System::Windows::Forms::TextBox^ settings_textBox3;

	private: System::Windows::Forms::TextBox^ settings_textBox2;

	private: System::Windows::Forms::TextBox^ settings_textBox;
	private: System::Windows::Forms::TextBox^ checkbox1_textBox;



	private: System::Windows::Forms::CheckBox^ settings_choice_impuls_checkBox2;

	private: System::Windows::Forms::CheckBox^ settings_choice_impulse_checkBox;
	private: System::Windows::Forms::Label^ checkbox2_label2;



	private: System::Windows::Forms::Label^ checkbox1_label;
	private: System::Windows::Forms::TextBox^ checkbox2_textBox2;





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
			this->action_groupBox = (gcnew System::Windows::Forms::GroupBox());
			this->action_radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->action_radioButton = (gcnew System::Windows::Forms::RadioButton());
			this->speed_deistance_groupBox = (gcnew System::Windows::Forms::GroupBox());
			this->speed_distance_radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->speed_distance_radioButton = (gcnew System::Windows::Forms::RadioButton());
			this->sensors_groupBox = (gcnew System::Windows::Forms::GroupBox());
			this->sensor_textBox = (gcnew System::Windows::Forms::TextBox());
			this->sensor_comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->sensor_comboBox = (gcnew System::Windows::Forms::ComboBox());
			this->sensor_label3 = (gcnew System::Windows::Forms::Label());
			this->sensor_label2 = (gcnew System::Windows::Forms::Label());
			this->sensor_label = (gcnew System::Windows::Forms::Label());
			this->settings_groupBox = (gcnew System::Windows::Forms::GroupBox());
			this->settings_textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->settings_textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->settings_textBox = (gcnew System::Windows::Forms::TextBox());
			this->settings_label3 = (gcnew System::Windows::Forms::Label());
			this->settings_label2 = (gcnew System::Windows::Forms::Label());
			this->settings_label = (gcnew System::Windows::Forms::Label());
			this->settings_checkBox = (gcnew System::Windows::Forms::CheckBox());
			this->settings_choice_impuls_groupBox = (gcnew System::Windows::Forms::GroupBox());
			this->checkbox1_textBox = (gcnew System::Windows::Forms::TextBox());
			this->settings_choice_impuls_checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->settings_choice_impulse_checkBox = (gcnew System::Windows::Forms::CheckBox());
			this->ok_button = (gcnew System::Windows::Forms::Button());
			this->cancel_button = (gcnew System::Windows::Forms::Button());
			this->save_button = (gcnew System::Windows::Forms::Button());
			this->download_button = (gcnew System::Windows::Forms::Button());
			this->checkbox2_textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->checkbox1_label = (gcnew System::Windows::Forms::Label());
			this->checkbox2_label2 = (gcnew System::Windows::Forms::Label());
			this->action_groupBox->SuspendLayout();
			this->speed_deistance_groupBox->SuspendLayout();
			this->sensors_groupBox->SuspendLayout();
			this->settings_groupBox->SuspendLayout();
			this->settings_choice_impuls_groupBox->SuspendLayout();
			this->SuspendLayout();
			// 
			// action_groupBox
			// 
			this->action_groupBox->Controls->Add(this->action_radioButton2);
			this->action_groupBox->Controls->Add(this->action_radioButton);
			this->action_groupBox->Location = System::Drawing::Point(13, 13);
			this->action_groupBox->Name = L"action_groupBox";
			this->action_groupBox->Size = System::Drawing::Size(166, 74);
			this->action_groupBox->TabIndex = 0;
			this->action_groupBox->TabStop = false;
			this->action_groupBox->Text = L"Действие";
			// 
			// action_radioButton2
			// 
			this->action_radioButton2->AutoSize = true;
			this->action_radioButton2->Location = System::Drawing::Point(7, 43);
			this->action_radioButton2->Name = L"action_radioButton2";
			this->action_radioButton2->Size = System::Drawing::Size(151, 17);
			this->action_radioButton2->TabIndex = 0;
			this->action_radioButton2->TabStop = true;
			this->action_radioButton2->Text = L"Измерение расстрояния";
			this->action_radioButton2->UseVisualStyleBackColor = true;
			// 
			// action_radioButton
			// 
			this->action_radioButton->AutoSize = true;
			this->action_radioButton->Location = System::Drawing::Point(7, 20);
			this->action_radioButton->Name = L"action_radioButton";
			this->action_radioButton->Size = System::Drawing::Size(133, 17);
			this->action_radioButton->TabIndex = 0;
			this->action_radioButton->TabStop = true;
			this->action_radioButton->Text = L"Измерение скорости";
			this->action_radioButton->UseVisualStyleBackColor = true;
			// 
			// speed_deistance_groupBox
			// 
			this->speed_deistance_groupBox->Controls->Add(this->speed_distance_radioButton2);
			this->speed_deistance_groupBox->Controls->Add(this->speed_distance_radioButton);
			this->speed_deistance_groupBox->Location = System::Drawing::Point(185, 13);
			this->speed_deistance_groupBox->Name = L"speed_deistance_groupBox";
			this->speed_deistance_groupBox->Size = System::Drawing::Size(208, 74);
			this->speed_deistance_groupBox->TabIndex = 0;
			this->speed_deistance_groupBox->TabStop = false;
			this->speed_deistance_groupBox->Text = L"Считать скорость/расстрояние";
			// 
			// speed_distance_radioButton2
			// 
			this->speed_distance_radioButton2->AutoSize = true;
			this->speed_distance_radioButton2->Location = System::Drawing::Point(6, 43);
			this->speed_distance_radioButton2->Name = L"speed_distance_radioButton2";
			this->speed_distance_radioButton2->Size = System::Drawing::Size(148, 17);
			this->speed_distance_radioButton2->TabIndex = 0;
			this->speed_distance_radioButton2->TabStop = true;
			this->speed_distance_radioButton2->Text = L"По времени максимума";
			this->speed_distance_radioButton2->UseVisualStyleBackColor = true;
			// 
			// speed_distance_radioButton
			// 
			this->speed_distance_radioButton->AutoSize = true;
			this->speed_distance_radioButton->Location = System::Drawing::Point(6, 20);
			this->speed_distance_radioButton->Name = L"speed_distance_radioButton";
			this->speed_distance_radioButton->Size = System::Drawing::Size(165, 17);
			this->speed_distance_radioButton->TabIndex = 0;
			this->speed_distance_radioButton->TabStop = true;
			this->speed_distance_radioButton->Text = L"по времени начала АЭ-имп.";
			this->speed_distance_radioButton->UseVisualStyleBackColor = true;
			// 
			// sensors_groupBox
			// 
			this->sensors_groupBox->Controls->Add(this->sensor_textBox);
			this->sensors_groupBox->Controls->Add(this->sensor_comboBox2);
			this->sensors_groupBox->Controls->Add(this->sensor_comboBox);
			this->sensors_groupBox->Controls->Add(this->sensor_label3);
			this->sensors_groupBox->Controls->Add(this->sensor_label2);
			this->sensors_groupBox->Controls->Add(this->sensor_label);
			this->sensors_groupBox->Location = System::Drawing::Point(13, 99);
			this->sensors_groupBox->Name = L"sensors_groupBox";
			this->sensors_groupBox->Size = System::Drawing::Size(166, 140);
			this->sensors_groupBox->TabIndex = 0;
			this->sensors_groupBox->TabStop = false;
			this->sensors_groupBox->Text = L"Датчики";
			// 
			// sensor_textBox
			// 
			this->sensor_textBox->Location = System::Drawing::Point(83, 83);
			this->sensor_textBox->Name = L"sensor_textBox";
			this->sensor_textBox->Size = System::Drawing::Size(75, 20);
			this->sensor_textBox->TabIndex = 2;
			// 
			// sensor_comboBox2
			// 
			this->sensor_comboBox2->FormattingEnabled = true;
			this->sensor_comboBox2->Location = System::Drawing::Point(83, 52);
			this->sensor_comboBox2->Name = L"sensor_comboBox2";
			this->sensor_comboBox2->Size = System::Drawing::Size(75, 21);
			this->sensor_comboBox2->TabIndex = 1;
			// 
			// sensor_comboBox
			// 
			this->sensor_comboBox->FormattingEnabled = true;
			this->sensor_comboBox->Location = System::Drawing::Point(83, 20);
			this->sensor_comboBox->Name = L"sensor_comboBox";
			this->sensor_comboBox->Size = System::Drawing::Size(75, 21);
			this->sensor_comboBox->TabIndex = 1;
			// 
			// sensor_label3
			// 
			this->sensor_label3->AutoSize = true;
			this->sensor_label3->Location = System::Drawing::Point(7, 83);
			this->sensor_label3->Name = L"sensor_label3";
			this->sensor_label3->Size = System::Drawing::Size(70, 26);
			this->sensor_label3->TabIndex = 0;
			this->sensor_label3->Text = L"Расстояние:\r\n      (мм)";
			// 
			// sensor_label2
			// 
			this->sensor_label2->AutoSize = true;
			this->sensor_label2->Location = System::Drawing::Point(6, 56);
			this->sensor_label2->Name = L"sensor_label2";
			this->sensor_label2->Size = System::Drawing::Size(68, 13);
			this->sensor_label2->TabIndex = 0;
			this->sensor_label2->Text = L"Удалённый:";
			// 
			// sensor_label
			// 
			this->sensor_label->AutoSize = true;
			this->sensor_label->Location = System::Drawing::Point(7, 23);
			this->sensor_label->Name = L"sensor_label";
			this->sensor_label->Size = System::Drawing::Size(69, 13);
			this->sensor_label->TabIndex = 0;
			this->sensor_label->Text = L"Ближайший:";
			// 
			// settings_groupBox
			// 
			this->settings_groupBox->Controls->Add(this->settings_textBox3);
			this->settings_groupBox->Controls->Add(this->settings_textBox2);
			this->settings_groupBox->Controls->Add(this->settings_textBox);
			this->settings_groupBox->Controls->Add(this->settings_label3);
			this->settings_groupBox->Controls->Add(this->settings_label2);
			this->settings_groupBox->Controls->Add(this->settings_label);
			this->settings_groupBox->Controls->Add(this->settings_checkBox);
			this->settings_groupBox->Location = System::Drawing::Point(185, 99);
			this->settings_groupBox->Name = L"settings_groupBox";
			this->settings_groupBox->Size = System::Drawing::Size(208, 140);
			this->settings_groupBox->TabIndex = 0;
			this->settings_groupBox->TabStop = false;
			this->settings_groupBox->Text = L"Параметры";
			// 
			// settings_textBox3
			// 
			this->settings_textBox3->Location = System::Drawing::Point(100, 85);
			this->settings_textBox3->Name = L"settings_textBox3";
			this->settings_textBox3->Size = System::Drawing::Size(102, 20);
			this->settings_textBox3->TabIndex = 4;
			// 
			// settings_textBox2
			// 
			this->settings_textBox2->Location = System::Drawing::Point(100, 56);
			this->settings_textBox2->Name = L"settings_textBox2";
			this->settings_textBox2->Size = System::Drawing::Size(102, 20);
			this->settings_textBox2->TabIndex = 4;
			// 
			// settings_textBox
			// 
			this->settings_textBox->Location = System::Drawing::Point(100, 28);
			this->settings_textBox->Name = L"settings_textBox";
			this->settings_textBox->Size = System::Drawing::Size(102, 20);
			this->settings_textBox->TabIndex = 4;
			// 
			// settings_label3
			// 
			this->settings_label3->AutoSize = true;
			this->settings_label3->Location = System::Drawing::Point(7, 88);
			this->settings_label3->Name = L"settings_label3";
			this->settings_label3->Size = System::Drawing::Size(86, 13);
			this->settings_label3->TabIndex = 3;
			this->settings_label3->Text = L"Кол-во делений";
			// 
			// settings_label2
			// 
			this->settings_label2->AutoSize = true;
			this->settings_label2->Location = System::Drawing::Point(7, 55);
			this->settings_label2->Name = L"settings_label2";
			this->settings_label2->Size = System::Drawing::Size(88, 26);
			this->settings_label2->TabIndex = 2;
			this->settings_label2->Text = L"Верхний предел\r\nскорости (м/c)\r\n";
			// 
			// settings_label
			// 
			this->settings_label->AutoSize = true;
			this->settings_label->Location = System::Drawing::Point(7, 23);
			this->settings_label->Name = L"settings_label";
			this->settings_label->Size = System::Drawing::Size(86, 26);
			this->settings_label->TabIndex = 1;
			this->settings_label->Text = L"Нижний предел\r\nскорости (м/c)";
			// 
			// settings_checkBox
			// 
			this->settings_checkBox->AutoSize = true;
			this->settings_checkBox->Location = System::Drawing::Point(10, 111);
			this->settings_checkBox->Name = L"settings_checkBox";
			this->settings_checkBox->Size = System::Drawing::Size(149, 17);
			this->settings_checkBox->TabIndex = 0;
			this->settings_checkBox->Text = L"Создать окно затухания";
			this->settings_checkBox->UseVisualStyleBackColor = true;
			// 
			// settings_choice_impuls_groupBox
			// 
			this->settings_choice_impuls_groupBox->Controls->Add(this->checkbox2_label2);
			this->settings_choice_impuls_groupBox->Controls->Add(this->checkbox1_label);
			this->settings_choice_impuls_groupBox->Controls->Add(this->checkbox2_textBox2);
			this->settings_choice_impuls_groupBox->Controls->Add(this->checkbox1_textBox);
			this->settings_choice_impuls_groupBox->Controls->Add(this->settings_choice_impuls_checkBox2);
			this->settings_choice_impuls_groupBox->Controls->Add(this->settings_choice_impulse_checkBox);
			this->settings_choice_impuls_groupBox->Location = System::Drawing::Point(13, 245);
			this->settings_choice_impuls_groupBox->Name = L"settings_choice_impuls_groupBox";
			this->settings_choice_impuls_groupBox->Size = System::Drawing::Size(453, 86);
			this->settings_choice_impuls_groupBox->TabIndex = 0;
			this->settings_choice_impuls_groupBox->TabStop = false;
			this->settings_choice_impuls_groupBox->Text = L"Параметры выбранных импульсов";
			// 
			// checkbox1_textBox
			// 
			this->checkbox1_textBox->Location = System::Drawing::Point(361, 21);
			this->checkbox1_textBox->Name = L"checkbox1_textBox";
			this->checkbox1_textBox->Size = System::Drawing::Size(50, 20);
			this->checkbox1_textBox->TabIndex = 1;
			// 
			// settings_choice_impuls_checkBox2
			// 
			this->settings_choice_impuls_checkBox2->AutoSize = true;
			this->settings_choice_impuls_checkBox2->Location = System::Drawing::Point(6, 52);
			this->settings_choice_impuls_checkBox2->Name = L"settings_choice_impuls_checkBox2";
			this->settings_choice_impuls_checkBox2->Size = System::Drawing::Size(238, 17);
			this->settings_choice_impuls_checkBox2->TabIndex = 0;
			this->settings_choice_impuls_checkBox2->Text = L"Мертвое время для измерения скорости:";
			this->settings_choice_impuls_checkBox2->UseVisualStyleBackColor = true;
			// 
			// settings_choice_impulse_checkBox
			// 
			this->settings_choice_impulse_checkBox->AutoSize = true;
			this->settings_choice_impulse_checkBox->Location = System::Drawing::Point(7, 20);
			this->settings_choice_impulse_checkBox->Name = L"settings_choice_impulse_checkBox";
			this->settings_choice_impulse_checkBox->Size = System::Drawing::Size(338, 17);
			this->settings_choice_impulse_checkBox->TabIndex = 0;
			this->settings_choice_impulse_checkBox->Text = L"Должны удовлетворять амплитудному критерию с невязкой:";
			this->settings_choice_impulse_checkBox->UseVisualStyleBackColor = true;
			// 
			// ok_button
			// 
			this->ok_button->Location = System::Drawing::Point(399, 13);
			this->ok_button->Name = L"ok_button";
			this->ok_button->Size = System::Drawing::Size(73, 23);
			this->ok_button->TabIndex = 1;
			this->ok_button->Text = L"ОК";
			this->ok_button->UseVisualStyleBackColor = true;
			this->ok_button->Click += gcnew System::EventHandler(this, &new_measurement_speed_distance::button1_Click);
			// 
			// cancel_button
			// 
			this->cancel_button->Location = System::Drawing::Point(399, 41);
			this->cancel_button->Name = L"cancel_button";
			this->cancel_button->Size = System::Drawing::Size(73, 23);
			this->cancel_button->TabIndex = 1;
			this->cancel_button->Text = L"Отмена";
			this->cancel_button->UseVisualStyleBackColor = true;
			this->cancel_button->Click += gcnew System::EventHandler(this, &new_measurement_speed_distance::button2_Click);
			// 
			// save_button
			// 
			this->save_button->Location = System::Drawing::Point(399, 70);
			this->save_button->Name = L"save_button";
			this->save_button->Size = System::Drawing::Size(73, 23);
			this->save_button->TabIndex = 1;
			this->save_button->Text = L"Сохранить";
			this->save_button->UseVisualStyleBackColor = true;
			this->save_button->Click += gcnew System::EventHandler(this, &new_measurement_speed_distance::button3_Click);
			// 
			// download_button
			// 
			this->download_button->Location = System::Drawing::Point(399, 99);
			this->download_button->Name = L"download_button";
			this->download_button->Size = System::Drawing::Size(73, 23);
			this->download_button->TabIndex = 1;
			this->download_button->Text = L"Загрузить";
			this->download_button->UseVisualStyleBackColor = true;
			this->download_button->Click += gcnew System::EventHandler(this, &new_measurement_speed_distance::button4_Click);
			// 
			// checkbox2_textBox2
			// 
			this->checkbox2_textBox2->Location = System::Drawing::Point(339, 56);
			this->checkbox2_textBox2->Name = L"checkbox2_textBox2";
			this->checkbox2_textBox2->Size = System::Drawing::Size(72, 20);
			this->checkbox2_textBox2->TabIndex = 1;
			// 
			// checkbox1_label
			// 
			this->checkbox1_label->AutoSize = true;
			this->checkbox1_label->Location = System::Drawing::Point(417, 25);
			this->checkbox1_label->Name = L"checkbox1_label";
			this->checkbox1_label->Size = System::Drawing::Size(26, 13);
			this->checkbox1_label->TabIndex = 2;
			this->checkbox1_label->Text = L"(дБ)";
			// 
			// checkbox2_label2
			// 
			this->checkbox2_label2->AutoSize = true;
			this->checkbox2_label2->Location = System::Drawing::Point(414, 59);
			this->checkbox2_label2->Name = L"checkbox2_label2";
			this->checkbox2_label2->Size = System::Drawing::Size(33, 13);
			this->checkbox2_label2->TabIndex = 2;
			this->checkbox2_label2->Text = L"(мкс)";
			// 
			// new_measurement_speed_distance
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(478, 343);
			this->Controls->Add(this->download_button);
			this->Controls->Add(this->save_button);
			this->Controls->Add(this->cancel_button);
			this->Controls->Add(this->ok_button);
			this->Controls->Add(this->settings_groupBox);
			this->Controls->Add(this->settings_choice_impuls_groupBox);
			this->Controls->Add(this->sensors_groupBox);
			this->Controls->Add(this->speed_deistance_groupBox);
			this->Controls->Add(this->action_groupBox);
			this->Name = L"new_measurement_speed_distance";
			this->Text = L"Новое измерение скорости/расстояния";
			this->action_groupBox->ResumeLayout(false);
			this->action_groupBox->PerformLayout();
			this->speed_deistance_groupBox->ResumeLayout(false);
			this->speed_deistance_groupBox->PerformLayout();
			this->sensors_groupBox->ResumeLayout(false);
			this->sensors_groupBox->PerformLayout();
			this->settings_groupBox->ResumeLayout(false);
			this->settings_groupBox->PerformLayout();
			this->settings_choice_impuls_groupBox->ResumeLayout(false);
			this->settings_choice_impuls_groupBox->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
