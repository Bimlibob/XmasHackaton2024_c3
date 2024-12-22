#pragma once

namespace xakaton2024 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для mainForm1
	/// </summary>
	public ref class mainForm1 : public System::Windows::Forms::Form
	{
	public:
		mainForm1(void)
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
		~mainForm1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::LinkLabel^ linkLabel1;
	private: System::Windows::Forms::Label^ label8;

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
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->linkLabel1);
			this->panel1->Controls->Add(this->label8);
			this->panel1->Controls->Add(this->label6);
			this->panel1->Controls->Add(this->label5);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Location = System::Drawing::Point(177, 163);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(216, 132);
			this->panel1->TabIndex = 0;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(18, 61);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(190, 13);
			this->label6->TabIndex = 1;
			this->label6->Text = L"тел./факс:(495) 361 76 73, 361 19 90";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(18, 38);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(195, 13);
			this->label5->TabIndex = 1;
			this->label5->Text = L"Россия, Москва, ш. Энтузиастов 20Б";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(40, 14);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(138, 13);
			this->label4->TabIndex = 1;
			this->label4->Text = L"ООО \"ИНТЕРЮНИСТ-ИТ\"";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(174, 125);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(74, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Версия 6.08b";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(276, 125);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(117, 13);
			this->label3->TabIndex = 1;
			this->label3->Text = L"Copytight © 1997-2024";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(213, 66);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(146, 13);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Программное обеспечение";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(170, 79);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(223, 13);
			this->label7->TabIndex = 3;
			this->label7->Text = L"акустико-эмиссионных комплексов A-Line";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(53, 82);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(125, 13);
			this->label8->TabIndex = 2;
			this->label8->Text = L"E-mail:info@interunis-it.ru";
			// 
			// linkLabel1
			// 
			this->linkLabel1->AutoSize = true;
			this->linkLabel1->Location = System::Drawing::Point(49, 107);
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->Size = System::Drawing::Size(129, 13);
			this->linkLabel1->TabIndex = 3;
			this->linkLabel1->TabStop = true;
			this->linkLabel1->Text = L"https://www.interunis-it.ru";
			// 
			// mainForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(539, 350);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->panel1);
			this->Name = L"mainForm1";
			this->Text = L"mainForm1";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


};
}
