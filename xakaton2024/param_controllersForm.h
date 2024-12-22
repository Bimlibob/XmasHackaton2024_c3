#pragma once

namespace xakaton2024 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для param_controllersForm
	/// </summary>
	public ref class param_controllersForm : public System::Windows::Forms::Form
	{
	public:
		param_controllersForm(void)
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
		~param_controllersForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ListView^ listView1;
	protected:
	private: System::Windows::Forms::ColumnHeader^ color_columnHeader;
	private: System::Windows::Forms::ColumnHeader^ selected_columnHeader;
	private: System::Windows::Forms::ColumnHeader^ type_info_columnHeader;
	private: System::Windows::Forms::ColumnHeader^ number_param_columnHeader;
	private: System::Windows::Forms::ColumnHeader^ coefficient_K1_columnHeader;
	private: System::Windows::Forms::ColumnHeader^ coefficient_K2_columnHeader;
	private: System::Windows::Forms::ColumnHeader^ columnheader;
	private: System::Windows::Forms::Button^ color_button;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Button^ all_choice_button;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Button^ testA_button;
	private: System::Windows::Forms::Button^ testB_button;
	private: System::Windows::Forms::Button^ ok_button;
	private: System::Windows::Forms::Button^ apply_button;

	private: System::Windows::Forms::Button^ statistic_button;
	private: System::Windows::Forms::Button^ cancel_button;


	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::CheckBox^ view_checkBox;
	private: System::Windows::Forms::CheckBox^ text_checkBox;

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
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->color_columnHeader = (gcnew System::Windows::Forms::ColumnHeader());
			this->selected_columnHeader = (gcnew System::Windows::Forms::ColumnHeader());
			this->type_info_columnHeader = (gcnew System::Windows::Forms::ColumnHeader());
			this->number_param_columnHeader = (gcnew System::Windows::Forms::ColumnHeader());
			this->coefficient_K1_columnHeader = (gcnew System::Windows::Forms::ColumnHeader());
			this->coefficient_K2_columnHeader = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnheader = (gcnew System::Windows::Forms::ColumnHeader());
			this->color_button = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->all_choice_button = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->testA_button = (gcnew System::Windows::Forms::Button());
			this->testB_button = (gcnew System::Windows::Forms::Button());
			this->ok_button = (gcnew System::Windows::Forms::Button());
			this->apply_button = (gcnew System::Windows::Forms::Button());
			this->statistic_button = (gcnew System::Windows::Forms::Button());
			this->cancel_button = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->view_checkBox = (gcnew System::Windows::Forms::CheckBox());
			this->text_checkBox = (gcnew System::Windows::Forms::CheckBox());
			this->SuspendLayout();
			// 
			// listView1
			// 
			this->listView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(7) {
				this->color_columnHeader,
					this->selected_columnHeader, this->type_info_columnHeader, this->number_param_columnHeader, this->coefficient_K1_columnHeader,
					this->coefficient_K2_columnHeader, this->columnheader
			});
			this->listView1->HideSelection = false;
			this->listView1->Location = System::Drawing::Point(12, 12);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(612, 323);
			this->listView1->TabIndex = 0;
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->View = System::Windows::Forms::View::Details;
			// 
			// color_columnHeader
			// 
			this->color_columnHeader->Text = L" ";
			this->color_columnHeader->Width = 30;
			// 
			// selected_columnHeader
			// 
			this->selected_columnHeader->Text = L"Отобр.";
			// 
			// type_info_columnHeader
			// 
			this->type_info_columnHeader->Text = L"Тип инф.";
			// 
			// number_param_columnHeader
			// 
			this->number_param_columnHeader->Text = L"Номер парам.";
			this->number_param_columnHeader->Width = 98;
			// 
			// coefficient_K1_columnHeader
			// 
			this->coefficient_K1_columnHeader->Text = L"Коэффициент К1";
			this->coefficient_K1_columnHeader->Width = 116;
			// 
			// coefficient_K2_columnHeader
			// 
			this->coefficient_K2_columnHeader->Text = L"Коэффициент К2";
			this->coefficient_K2_columnHeader->Width = 122;
			// 
			// columnheader
			// 
			this->columnheader->Text = L" ";
			this->columnheader->Width = 252;
			// 
			// color_button
			// 
			this->color_button->Location = System::Drawing::Point(15, 358);
			this->color_button->Name = L"color_button";
			this->color_button->Size = System::Drawing::Size(21, 23);
			this->color_button->TabIndex = 1;
			this->color_button->UseVisualStyleBackColor = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(11, 342);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(32, 13);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Цвет";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(64, 342);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(41, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Отобр.";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(109, 342);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(37, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Текст";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(168, 342);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(23, 13);
			this->label4->TabIndex = 2;
			this->label4->Text = L"К1:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(118, 407);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(39, 13);
			this->label5->TabIndex = 2;
			this->label5->Text = L"Линия";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(272, 342);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(23, 13);
			this->label6->TabIndex = 2;
			this->label6->Text = L"К2:";
			// 
			// all_choice_button
			// 
			this->all_choice_button->Location = System::Drawing::Point(15, 423);
			this->all_choice_button->Name = L"all_choice_button";
			this->all_choice_button->Size = System::Drawing::Size(88, 23);
			this->all_choice_button->TabIndex = 3;
			this->all_choice_button->Text = L"Выбрать все";
			this->all_choice_button->UseVisualStyleBackColor = true;
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"линия 01", L"линия 02" });
			this->comboBox1->Location = System::Drawing::Point(119, 423);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(72, 21);
			this->comboBox1->TabIndex = 4;
			// 
			// testA_button
			// 
			this->testA_button->Location = System::Drawing::Point(207, 423);
			this->testA_button->Name = L"testA_button";
			this->testA_button->Size = System::Drawing::Size(62, 23);
			this->testA_button->TabIndex = 5;
			this->testA_button->Text = L"Тест А";
			this->testA_button->UseVisualStyleBackColor = true;
			// 
			// testB_button
			// 
			this->testB_button->Location = System::Drawing::Point(275, 423);
			this->testB_button->Name = L"testB_button";
			this->testB_button->Size = System::Drawing::Size(62, 23);
			this->testB_button->TabIndex = 5;
			this->testB_button->Text = L"Тест В";
			this->testB_button->UseVisualStyleBackColor = true;
			// 
			// ok_button
			// 
			this->ok_button->Location = System::Drawing::Point(386, 423);
			this->ok_button->Name = L"ok_button";
			this->ok_button->Size = System::Drawing::Size(75, 23);
			this->ok_button->TabIndex = 5;
			this->ok_button->Text = L"ОК";
			this->ok_button->UseVisualStyleBackColor = true;
			// 
			// apply_button
			// 
			this->apply_button->Location = System::Drawing::Point(467, 423);
			this->apply_button->Name = L"apply_button";
			this->apply_button->Size = System::Drawing::Size(75, 23);
			this->apply_button->TabIndex = 5;
			this->apply_button->Text = L"Применить";
			this->apply_button->UseVisualStyleBackColor = true;
			// 
			// statistic_button
			// 
			this->statistic_button->Location = System::Drawing::Point(386, 358);
			this->statistic_button->Name = L"statistic_button";
			this->statistic_button->Size = System::Drawing::Size(75, 23);
			this->statistic_button->TabIndex = 5;
			this->statistic_button->Text = L"Статистика";
			this->statistic_button->UseVisualStyleBackColor = true;
			// 
			// cancel_button
			// 
			this->cancel_button->Location = System::Drawing::Point(549, 423);
			this->cancel_button->Name = L"cancel_button";
			this->cancel_button->Size = System::Drawing::Size(75, 23);
			this->cancel_button->TabIndex = 5;
			this->cancel_button->Text = L"Отменить";
			this->cancel_button->UseVisualStyleBackColor = true;
			this->cancel_button->Click += gcnew System::EventHandler(this, &param_controllersForm::cancel_button_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(171, 361);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(98, 20);
			this->textBox1->TabIndex = 6;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(275, 361);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(88, 20);
			this->textBox2->TabIndex = 6;
			// 
			// view_checkBox
			// 
			this->view_checkBox->AutoSize = true;
			this->view_checkBox->Location = System::Drawing::Point(75, 358);
			this->view_checkBox->Name = L"view_checkBox";
			this->view_checkBox->Size = System::Drawing::Size(15, 14);
			this->view_checkBox->TabIndex = 7;
			this->view_checkBox->UseVisualStyleBackColor = true;
			// 
			// text_checkBox
			// 
			this->text_checkBox->AutoSize = true;
			this->text_checkBox->Location = System::Drawing::Point(119, 358);
			this->text_checkBox->Name = L"text_checkBox";
			this->text_checkBox->Size = System::Drawing::Size(15, 14);
			this->text_checkBox->TabIndex = 7;
			this->text_checkBox->UseVisualStyleBackColor = true;
			// 
			// param_controllersForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(636, 465);
			this->Controls->Add(this->text_checkBox);
			this->Controls->Add(this->view_checkBox);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->cancel_button);
			this->Controls->Add(this->apply_button);
			this->Controls->Add(this->statistic_button);
			this->Controls->Add(this->ok_button);
			this->Controls->Add(this->testB_button);
			this->Controls->Add(this->testA_button);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->all_choice_button);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->color_button);
			this->Controls->Add(this->listView1);
			this->Name = L"param_controllersForm";
			this->Text = L"Параметры контроллеров";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void cancel_button_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
};
}
