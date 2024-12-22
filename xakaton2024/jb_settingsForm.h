#pragma once

namespace xakaton2024 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для jb_settingsForm
	/// </summary>
	public ref class jb_settingsForm : public System::Windows::Forms::Form
	{
	public:
		jb_settingsForm(void)
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
		~jb_settingsForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::CheckBox^ show_classification_checkBox;
	private: System::Windows::Forms::Button^ ok_button;
	private: System::Windows::Forms::Button^ cancel_button;
	protected:

	protected:


	private: System::Windows::Forms::GroupBox^ classicifation_on_groupbox;

	private: System::Windows::Forms::Label^ a_label;
	private: System::Windows::Forms::RadioButton^ H_parametr_radioButton;


	private: System::Windows::Forms::RadioButton^ E_parametr_radioButton;

	private: System::Windows::Forms::TextBox^ c_textBox;

	private: System::Windows::Forms::TextBox^ b_textBox;

	private: System::Windows::Forms::TextBox^ a_textBox;

	private: System::Windows::Forms::Label^ c_label;

	private: System::Windows::Forms::Label^ b_label;


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
			this->show_classification_checkBox = (gcnew System::Windows::Forms::CheckBox());
			this->ok_button = (gcnew System::Windows::Forms::Button());
			this->cancel_button = (gcnew System::Windows::Forms::Button());
			this->classicifation_on_groupbox = (gcnew System::Windows::Forms::GroupBox());
			this->c_textBox = (gcnew System::Windows::Forms::TextBox());
			this->b_textBox = (gcnew System::Windows::Forms::TextBox());
			this->a_textBox = (gcnew System::Windows::Forms::TextBox());
			this->c_label = (gcnew System::Windows::Forms::Label());
			this->b_label = (gcnew System::Windows::Forms::Label());
			this->a_label = (gcnew System::Windows::Forms::Label());
			this->H_parametr_radioButton = (gcnew System::Windows::Forms::RadioButton());
			this->E_parametr_radioButton = (gcnew System::Windows::Forms::RadioButton());
			this->classicifation_on_groupbox->SuspendLayout();
			this->SuspendLayout();
			// 
			// show_classification_checkBox
			// 
			this->show_classification_checkBox->AutoSize = true;
			this->show_classification_checkBox->Location = System::Drawing::Point(13, 13);
			this->show_classification_checkBox->Name = L"show_classification_checkBox";
			this->show_classification_checkBox->Size = System::Drawing::Size(234, 17);
			this->show_classification_checkBox->TabIndex = 0;
			this->show_classification_checkBox->Text = L"Показывать результаты классификации";
			this->show_classification_checkBox->UseVisualStyleBackColor = true;
			// 
			// ok_button
			// 
			this->ok_button->Location = System::Drawing::Point(253, 8);
			this->ok_button->Name = L"ok_button";
			this->ok_button->Size = System::Drawing::Size(75, 23);
			this->ok_button->TabIndex = 1;
			this->ok_button->Text = L"ОК";
			this->ok_button->UseVisualStyleBackColor = true;
			// 
			// cancel_button
			// 
			this->cancel_button->Location = System::Drawing::Point(253, 37);
			this->cancel_button->Name = L"cancel_button";
			this->cancel_button->Size = System::Drawing::Size(75, 23);
			this->cancel_button->TabIndex = 1;
			this->cancel_button->Text = L"Отмена";
			this->cancel_button->UseVisualStyleBackColor = true;
			this->cancel_button->Click += gcnew System::EventHandler(this, &jb_settingsForm::cancel_button_Click);
			// 
			// classicifation_on_groupbox
			// 
			this->classicifation_on_groupbox->Controls->Add(this->c_textBox);
			this->classicifation_on_groupbox->Controls->Add(this->b_textBox);
			this->classicifation_on_groupbox->Controls->Add(this->a_textBox);
			this->classicifation_on_groupbox->Controls->Add(this->c_label);
			this->classicifation_on_groupbox->Controls->Add(this->b_label);
			this->classicifation_on_groupbox->Controls->Add(this->a_label);
			this->classicifation_on_groupbox->Controls->Add(this->H_parametr_radioButton);
			this->classicifation_on_groupbox->Controls->Add(this->E_parametr_radioButton);
			this->classicifation_on_groupbox->Location = System::Drawing::Point(13, 37);
			this->classicifation_on_groupbox->Name = L"classicifation_on_groupbox";
			this->classicifation_on_groupbox->Size = System::Drawing::Size(224, 148);
			this->classicifation_on_groupbox->TabIndex = 2;
			this->classicifation_on_groupbox->TabStop = false;
			this->classicifation_on_groupbox->Text = L"Классификация по";
			// 
			// c_textBox
			// 
			this->c_textBox->Location = System::Drawing::Point(118, 118);
			this->c_textBox->Name = L"c_textBox";
			this->c_textBox->Size = System::Drawing::Size(100, 20);
			this->c_textBox->TabIndex = 2;
			// 
			// b_textBox
			// 
			this->b_textBox->Location = System::Drawing::Point(118, 91);
			this->b_textBox->Name = L"b_textBox";
			this->b_textBox->Size = System::Drawing::Size(100, 20);
			this->b_textBox->TabIndex = 2;
			// 
			// a_textBox
			// 
			this->a_textBox->Location = System::Drawing::Point(118, 64);
			this->a_textBox->Name = L"a_textBox";
			this->a_textBox->Size = System::Drawing::Size(100, 20);
			this->a_textBox->TabIndex = 2;
			// 
			// c_label
			// 
			this->c_label->AutoSize = true;
			this->c_label->Location = System::Drawing::Point(7, 125);
			this->c_label->Name = L"c_label";
			this->c_label->Size = System::Drawing::Size(13, 13);
			this->c_label->TabIndex = 1;
			this->c_label->Text = L"c";
			// 
			// b_label
			// 
			this->b_label->AutoSize = true;
			this->b_label->Location = System::Drawing::Point(7, 95);
			this->b_label->Name = L"b_label";
			this->b_label->Size = System::Drawing::Size(13, 13);
			this->b_label->TabIndex = 1;
			this->b_label->Text = L"b";
			// 
			// a_label
			// 
			this->a_label->AutoSize = true;
			this->a_label->Location = System::Drawing::Point(7, 67);
			this->a_label->Name = L"a_label";
			this->a_label->Size = System::Drawing::Size(13, 13);
			this->a_label->TabIndex = 1;
			this->a_label->Text = L"a";
			// 
			// H_parametr_radioButton
			// 
			this->H_parametr_radioButton->AutoSize = true;
			this->H_parametr_radioButton->Location = System::Drawing::Point(6, 43);
			this->H_parametr_radioButton->Name = L"H_parametr_radioButton";
			this->H_parametr_radioButton->Size = System::Drawing::Size(175, 17);
			this->H_parametr_radioButton->TabIndex = 0;
			this->H_parametr_radioButton->TabStop = true;
			this->H_parametr_radioButton->Text = L"H параметр (зонная локация)";
			this->H_parametr_radioButton->UseVisualStyleBackColor = true;
			// 
			// E_parametr_radioButton
			// 
			this->E_parametr_radioButton->AutoSize = true;
			this->E_parametr_radioButton->Location = System::Drawing::Point(7, 20);
			this->E_parametr_radioButton->Name = L"E_parametr_radioButton";
			this->E_parametr_radioButton->Size = System::Drawing::Size(135, 17);
			this->E_parametr_radioButton->TabIndex = 0;
			this->E_parametr_radioButton->TabStop = true;
			this->E_parametr_radioButton->Text = L"E параметр (локация)";
			this->E_parametr_radioButton->UseVisualStyleBackColor = true;
			// 
			// jb_settingsForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(340, 197);
			this->Controls->Add(this->classicifation_on_groupbox);
			this->Controls->Add(this->cancel_button);
			this->Controls->Add(this->ok_button);
			this->Controls->Add(this->show_classification_checkBox);
			this->Name = L"jb_settingsForm";
			this->Text = L"Настройка критерия JB/T 10764-2023";
			this->classicifation_on_groupbox->ResumeLayout(false);
			this->classicifation_on_groupbox->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void cancel_button_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
};
}
