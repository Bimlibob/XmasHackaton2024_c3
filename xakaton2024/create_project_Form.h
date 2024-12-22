#pragma once

namespace xakaton2024 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для create_project_Form
	/// </summary>
	public ref class create_project_Form : public System::Windows::Forms::Form
	{
	public:
		create_project_Form(void)
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
		~create_project_Form()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ name_lable;
	private: System::Windows::Forms::CheckBox^ locate_checkBox;
	private: System::Windows::Forms::CheckBox^ speed_checkBox;
	private: System::Windows::Forms::CheckBox^ loading_checkBox;
	private: System::Windows::Forms::CheckBox^ settings_checkBox;
	private: System::Windows::Forms::TextBox^ name_textBox;

	protected:

	protected:





	private: System::Windows::Forms::Button^ Create_button;
	private: System::Windows::Forms::Button^ Cancel_button;
	private: System::Windows::Forms::TextBox^ locate_textBox;
	private: System::Windows::Forms::TextBox^ speed_textBox;
	private: System::Windows::Forms::TextBox^ loading_textBox;
	private: System::Windows::Forms::TextBox^ settings_textBox;
	private: System::Windows::Forms::Label^ path_label;







	private: System::Windows::Forms::TextBox^ path_textBox;
	private: System::Windows::Forms::Button^ view_path_button;




	protected:

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
			this->name_lable = (gcnew System::Windows::Forms::Label());
			this->locate_checkBox = (gcnew System::Windows::Forms::CheckBox());
			this->speed_checkBox = (gcnew System::Windows::Forms::CheckBox());
			this->loading_checkBox = (gcnew System::Windows::Forms::CheckBox());
			this->settings_checkBox = (gcnew System::Windows::Forms::CheckBox());
			this->name_textBox = (gcnew System::Windows::Forms::TextBox());
			this->Create_button = (gcnew System::Windows::Forms::Button());
			this->Cancel_button = (gcnew System::Windows::Forms::Button());
			this->locate_textBox = (gcnew System::Windows::Forms::TextBox());
			this->speed_textBox = (gcnew System::Windows::Forms::TextBox());
			this->loading_textBox = (gcnew System::Windows::Forms::TextBox());
			this->settings_textBox = (gcnew System::Windows::Forms::TextBox());
			this->path_label = (gcnew System::Windows::Forms::Label());
			this->path_textBox = (gcnew System::Windows::Forms::TextBox());
			this->view_path_button = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// name_lable
			// 
			this->name_lable->AutoSize = true;
			this->name_lable->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.25F));
			this->name_lable->Location = System::Drawing::Point(12, 9);
			this->name_lable->Name = L"name_lable";
			this->name_lable->Size = System::Drawing::Size(36, 16);
			this->name_lable->TabIndex = 0;
			this->name_lable->Text = L"Имя:";
			// 
			// locate_checkBox
			// 
			this->locate_checkBox->AutoSize = true;
			this->locate_checkBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.25F));
			this->locate_checkBox->Location = System::Drawing::Point(12, 66);
			this->locate_checkBox->Name = L"locate_checkBox";
			this->locate_checkBox->Size = System::Drawing::Size(122, 20);
			this->locate_checkBox->TabIndex = 1;
			this->locate_checkBox->Text = L"Файл локации:";
			this->locate_checkBox->UseVisualStyleBackColor = true;
			// 
			// speed_checkBox
			// 
			this->speed_checkBox->AutoSize = true;
			this->speed_checkBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.25F));
			this->speed_checkBox->Location = System::Drawing::Point(12, 98);
			this->speed_checkBox->Name = L"speed_checkBox";
			this->speed_checkBox->Size = System::Drawing::Size(127, 20);
			this->speed_checkBox->TabIndex = 2;
			this->speed_checkBox->Text = L"Файл скорости:";
			this->speed_checkBox->UseVisualStyleBackColor = true;
			// 
			// loading_checkBox
			// 
			this->loading_checkBox->AutoSize = true;
			this->loading_checkBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.25F));
			this->loading_checkBox->Location = System::Drawing::Point(12, 130);
			this->loading_checkBox->Name = L"loading_checkBox";
			this->loading_checkBox->Size = System::Drawing::Size(168, 20);
			this->loading_checkBox->TabIndex = 3;
			this->loading_checkBox->Text = L"Файл нагруженности:";
			this->loading_checkBox->UseVisualStyleBackColor = true;
			// 
			// settings_checkBox
			// 
			this->settings_checkBox->AutoSize = true;
			this->settings_checkBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.25F));
			this->settings_checkBox->Location = System::Drawing::Point(12, 166);
			this->settings_checkBox->Name = L"settings_checkBox";
			this->settings_checkBox->Size = System::Drawing::Size(128, 20);
			this->settings_checkBox->TabIndex = 4;
			this->settings_checkBox->Text = L"Файл настроек:";
			this->settings_checkBox->UseVisualStyleBackColor = true;
			// 
			// name_textBox
			// 
			this->name_textBox->Location = System::Drawing::Point(55, 5);
			this->name_textBox->Name = L"name_textBox";
			this->name_textBox->Size = System::Drawing::Size(291, 20);
			this->name_textBox->TabIndex = 5;
			// 
			// Create_button
			// 
			this->Create_button->Location = System::Drawing::Point(352, 2);
			this->Create_button->Name = L"Create_button";
			this->Create_button->Size = System::Drawing::Size(75, 23);
			this->Create_button->TabIndex = 6;
			this->Create_button->Text = L"Создать";
			this->Create_button->UseVisualStyleBackColor = true;
			// 
			// Cancel_button
			// 
			this->Cancel_button->Location = System::Drawing::Point(352, 31);
			this->Cancel_button->Name = L"Cancel_button";
			this->Cancel_button->Size = System::Drawing::Size(75, 23);
			this->Cancel_button->TabIndex = 7;
			this->Cancel_button->Text = L"Отмена";
			this->Cancel_button->UseVisualStyleBackColor = true;
			this->Cancel_button->Click += gcnew System::EventHandler(this, &create_project_Form::Cancel_button_Click);
			// 
			// locate_textBox
			// 
			this->locate_textBox->Location = System::Drawing::Point(178, 67);
			this->locate_textBox->Name = L"locate_textBox";
			this->locate_textBox->Size = System::Drawing::Size(171, 20);
			this->locate_textBox->TabIndex = 5;
			// 
			// speed_textBox
			// 
			this->speed_textBox->Location = System::Drawing::Point(178, 99);
			this->speed_textBox->Name = L"speed_textBox";
			this->speed_textBox->Size = System::Drawing::Size(171, 20);
			this->speed_textBox->TabIndex = 5;
			// 
			// loading_textBox
			// 
			this->loading_textBox->Location = System::Drawing::Point(178, 130);
			this->loading_textBox->Name = L"loading_textBox";
			this->loading_textBox->Size = System::Drawing::Size(171, 20);
			this->loading_textBox->TabIndex = 5;
			// 
			// settings_textBox
			// 
			this->settings_textBox->Location = System::Drawing::Point(178, 166);
			this->settings_textBox->Name = L"settings_textBox";
			this->settings_textBox->Size = System::Drawing::Size(171, 20);
			this->settings_textBox->TabIndex = 5;
			// 
			// path_label
			// 
			this->path_label->AutoSize = true;
			this->path_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.25F));
			this->path_label->Location = System::Drawing::Point(12, 212);
			this->path_label->Name = L"path_label";
			this->path_label->Size = System::Drawing::Size(42, 16);
			this->path_label->TabIndex = 8;
			this->path_label->Text = L"Путь:";
			// 
			// path_textBox
			// 
			this->path_textBox->Location = System::Drawing::Point(55, 208);
			this->path_textBox->Name = L"path_textBox";
			this->path_textBox->Size = System::Drawing::Size(275, 20);
			this->path_textBox->TabIndex = 9;
			// 
			// view_path_button
			// 
			this->view_path_button->Location = System::Drawing::Point(352, 208);
			this->view_path_button->Name = L"view_path_button";
			this->view_path_button->Size = System::Drawing::Size(75, 23);
			this->view_path_button->TabIndex = 7;
			this->view_path_button->Text = L"Обзор";
			this->view_path_button->UseVisualStyleBackColor = true;
			// 
			// create_project_Form
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(446, 274);
			this->Controls->Add(this->path_textBox);
			this->Controls->Add(this->path_label);
			this->Controls->Add(this->view_path_button);
			this->Controls->Add(this->Cancel_button);
			this->Controls->Add(this->Create_button);
			this->Controls->Add(this->settings_textBox);
			this->Controls->Add(this->loading_textBox);
			this->Controls->Add(this->speed_textBox);
			this->Controls->Add(this->locate_textBox);
			this->Controls->Add(this->name_textBox);
			this->Controls->Add(this->settings_checkBox);
			this->Controls->Add(this->loading_checkBox);
			this->Controls->Add(this->speed_checkBox);
			this->Controls->Add(this->locate_checkBox);
			this->Controls->Add(this->name_lable);
			this->Name = L"create_project_Form";
			this->Text = L"Создание нового проекта";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		
	}
	private: System::Void Cancel_button_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
};
}
