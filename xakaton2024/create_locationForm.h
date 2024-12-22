#pragma once

namespace xakaton2024 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для create_locationForm
	/// </summary>
	public ref class create_locationForm : public System::Windows::Forms::Form
	{
	public:
		create_locationForm(void)
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
		~create_locationForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ legeng_groupBox;
	private: System::Windows::Forms::Label^ locate_amplitude_label2;
	private: System::Windows::Forms::Label^ locate_amplitude_label3;
	private: System::Windows::Forms::PictureBox^ locate_amplitude_pictureBox5;
	protected:

	protected:



	private: System::Windows::Forms::PictureBox^ locate_amplitude_pictureBox4;

	private: System::Windows::Forms::PictureBox^ locate_amplitude_pictureBox3;

	private: System::Windows::Forms::PictureBox^ locate_amplitude_pictureBox2;

	private: System::Windows::Forms::PictureBox^ locate_amplitude_pictureBox1;

	private: System::Windows::Forms::PictureBox^ count_events_pictureBox5;

	private: System::Windows::Forms::PictureBox^ count_events_pictureBox4;

	private: System::Windows::Forms::PictureBox^ count_events_pictureBox3;

	private: System::Windows::Forms::PictureBox^ count_events_pictureBox2;

	private: System::Windows::Forms::PictureBox^ count_events_pictureBox1;
	private: System::Windows::Forms::Label^ locate_amplitude_label5;


	private: System::Windows::Forms::Label^ locate_amplitude_label4;

	private: System::Windows::Forms::Label^ locate_amplitude_label1;

	private: System::Windows::Forms::Label^ count_events_label5;

	private: System::Windows::Forms::Label^ count_events_label4;

	private: System::Windows::Forms::Label^ count_events_label3;

	private: System::Windows::Forms::Label^ count_events_label2;

	private: System::Windows::Forms::Label^ count_events_label1;
	private: System::Windows::Forms::Label^ locate_amplitude_label;





	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ size_label;

	private: System::Windows::Forms::Button^ change_parametrs_button;
	private: System::Windows::Forms::Label^ channel_label;
	private: System::Windows::Forms::Label^ group_label;
	private: System::Windows::Forms::TextBox^ channel_textBox;
	private: System::Windows::Forms::TextBox^ group_textBox;






	private: System::Windows::Forms::ListView^ listView1;
	private: System::Windows::Forms::ColumnHeader^ number_column;
	private: System::Windows::Forms::ColumnHeader^ name_group_column;
	private: System::Windows::Forms::ColumnHeader^ type_location_column;
	private: System::Windows::Forms::ColumnHeader^ channel_group_column;
	private: System::Windows::Forms::ColumnHeader^ L_column;
	private: System::Windows::Forms::ColumnHeader^ W_column;
	private: System::Windows::Forms::ColumnHeader^ page_column;
	private: System::Windows::Forms::Button^ ok_button;
	private: System::Windows::Forms::Button^ cancel_button;
	private: System::Windows::Forms::Button^ save_button;
	private: System::Windows::Forms::Button^ download_button;
	private: System::Windows::Forms::Button^ details_button;
	private: System::Windows::Forms::GroupBox^ locate_group_groupBox;
	private: System::Windows::Forms::Button^ delete_locate_group_button;








private: System::Windows::Forms::ComboBox^ locate_group_comboBox;

private: System::Windows::Forms::Button^ arrows_locate_group_button;

private: System::Windows::Forms::Button^ add_locate_group_button;
private: System::Windows::Forms::Button^ settings_button;


private: System::Windows::Forms::Label^ name_group_label;
private: System::Windows::Forms::Label^ type_location_label;
private: System::Windows::Forms::Label^ channel_in_group_label;
private: System::Windows::Forms::Label^ lenght_label;
private: System::Windows::Forms::Label^ width_label;
private: System::Windows::Forms::Label^ hight_label;








private: System::Windows::Forms::TextBox^ name_group_textBox;
private: System::Windows::Forms::ComboBox^ type_location_comboBox;
private: System::Windows::Forms::TextBox^ channel_in_group_textBox;
private: System::Windows::Forms::Button^ channel_in_group_button;
private: System::Windows::Forms::TextBox^ lenght_textBox;










	private: System::Windows::Forms::Label^ size_label2;
private: System::Windows::Forms::TextBox^ widht_textBox;
private: System::Windows::Forms::Label^ page_label;



private: System::Windows::Forms::TextBox^ hight_textBox;
private: System::Windows::Forms::ComboBox^ page_comboBox;



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
			this->legeng_groupBox = (gcnew System::Windows::Forms::GroupBox());
			this->size_label2 = (gcnew System::Windows::Forms::Label());
			this->locate_amplitude_label2 = (gcnew System::Windows::Forms::Label());
			this->locate_amplitude_label3 = (gcnew System::Windows::Forms::Label());
			this->locate_amplitude_pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->locate_amplitude_pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->locate_amplitude_pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->locate_amplitude_pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->locate_amplitude_pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->count_events_pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->count_events_pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->count_events_pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->count_events_pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->count_events_pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->locate_amplitude_label5 = (gcnew System::Windows::Forms::Label());
			this->locate_amplitude_label4 = (gcnew System::Windows::Forms::Label());
			this->locate_amplitude_label1 = (gcnew System::Windows::Forms::Label());
			this->count_events_label5 = (gcnew System::Windows::Forms::Label());
			this->count_events_label4 = (gcnew System::Windows::Forms::Label());
			this->count_events_label3 = (gcnew System::Windows::Forms::Label());
			this->count_events_label2 = (gcnew System::Windows::Forms::Label());
			this->count_events_label1 = (gcnew System::Windows::Forms::Label());
			this->locate_amplitude_label = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->size_label = (gcnew System::Windows::Forms::Label());
			this->change_parametrs_button = (gcnew System::Windows::Forms::Button());
			this->channel_label = (gcnew System::Windows::Forms::Label());
			this->group_label = (gcnew System::Windows::Forms::Label());
			this->channel_textBox = (gcnew System::Windows::Forms::TextBox());
			this->group_textBox = (gcnew System::Windows::Forms::TextBox());
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->number_column = (gcnew System::Windows::Forms::ColumnHeader());
			this->name_group_column = (gcnew System::Windows::Forms::ColumnHeader());
			this->type_location_column = (gcnew System::Windows::Forms::ColumnHeader());
			this->channel_group_column = (gcnew System::Windows::Forms::ColumnHeader());
			this->L_column = (gcnew System::Windows::Forms::ColumnHeader());
			this->W_column = (gcnew System::Windows::Forms::ColumnHeader());
			this->page_column = (gcnew System::Windows::Forms::ColumnHeader());
			this->ok_button = (gcnew System::Windows::Forms::Button());
			this->cancel_button = (gcnew System::Windows::Forms::Button());
			this->save_button = (gcnew System::Windows::Forms::Button());
			this->download_button = (gcnew System::Windows::Forms::Button());
			this->details_button = (gcnew System::Windows::Forms::Button());
			this->locate_group_groupBox = (gcnew System::Windows::Forms::GroupBox());
			this->delete_locate_group_button = (gcnew System::Windows::Forms::Button());
			this->locate_group_comboBox = (gcnew System::Windows::Forms::ComboBox());
			this->arrows_locate_group_button = (gcnew System::Windows::Forms::Button());
			this->add_locate_group_button = (gcnew System::Windows::Forms::Button());
			this->settings_button = (gcnew System::Windows::Forms::Button());
			this->name_group_label = (gcnew System::Windows::Forms::Label());
			this->type_location_label = (gcnew System::Windows::Forms::Label());
			this->channel_in_group_label = (gcnew System::Windows::Forms::Label());
			this->lenght_label = (gcnew System::Windows::Forms::Label());
			this->width_label = (gcnew System::Windows::Forms::Label());
			this->hight_label = (gcnew System::Windows::Forms::Label());
			this->name_group_textBox = (gcnew System::Windows::Forms::TextBox());
			this->type_location_comboBox = (gcnew System::Windows::Forms::ComboBox());
			this->channel_in_group_textBox = (gcnew System::Windows::Forms::TextBox());
			this->channel_in_group_button = (gcnew System::Windows::Forms::Button());
			this->lenght_textBox = (gcnew System::Windows::Forms::TextBox());
			this->widht_textBox = (gcnew System::Windows::Forms::TextBox());
			this->page_label = (gcnew System::Windows::Forms::Label());
			this->hight_textBox = (gcnew System::Windows::Forms::TextBox());
			this->page_comboBox = (gcnew System::Windows::Forms::ComboBox());
			this->legeng_groupBox->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->locate_amplitude_pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->locate_amplitude_pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->locate_amplitude_pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->locate_amplitude_pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->locate_amplitude_pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->count_events_pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->count_events_pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->count_events_pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->count_events_pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->count_events_pictureBox1))->BeginInit();
			this->locate_group_groupBox->SuspendLayout();
			this->SuspendLayout();
			// 
			// legeng_groupBox
			// 
			this->legeng_groupBox->Controls->Add(this->size_label2);
			this->legeng_groupBox->Controls->Add(this->locate_amplitude_label2);
			this->legeng_groupBox->Controls->Add(this->locate_amplitude_label3);
			this->legeng_groupBox->Controls->Add(this->locate_amplitude_pictureBox5);
			this->legeng_groupBox->Controls->Add(this->locate_amplitude_pictureBox4);
			this->legeng_groupBox->Controls->Add(this->locate_amplitude_pictureBox3);
			this->legeng_groupBox->Controls->Add(this->locate_amplitude_pictureBox2);
			this->legeng_groupBox->Controls->Add(this->locate_amplitude_pictureBox1);
			this->legeng_groupBox->Controls->Add(this->count_events_pictureBox5);
			this->legeng_groupBox->Controls->Add(this->count_events_pictureBox4);
			this->legeng_groupBox->Controls->Add(this->count_events_pictureBox3);
			this->legeng_groupBox->Controls->Add(this->count_events_pictureBox2);
			this->legeng_groupBox->Controls->Add(this->count_events_pictureBox1);
			this->legeng_groupBox->Controls->Add(this->locate_amplitude_label5);
			this->legeng_groupBox->Controls->Add(this->locate_amplitude_label4);
			this->legeng_groupBox->Controls->Add(this->locate_amplitude_label1);
			this->legeng_groupBox->Controls->Add(this->count_events_label5);
			this->legeng_groupBox->Controls->Add(this->count_events_label4);
			this->legeng_groupBox->Controls->Add(this->count_events_label3);
			this->legeng_groupBox->Controls->Add(this->count_events_label2);
			this->legeng_groupBox->Controls->Add(this->count_events_label1);
			this->legeng_groupBox->Controls->Add(this->locate_amplitude_label);
			this->legeng_groupBox->Controls->Add(this->label2);
			this->legeng_groupBox->Controls->Add(this->size_label);
			this->legeng_groupBox->Controls->Add(this->change_parametrs_button);
			this->legeng_groupBox->Location = System::Drawing::Point(13, 13);
			this->legeng_groupBox->Name = L"legeng_groupBox";
			this->legeng_groupBox->Size = System::Drawing::Size(643, 74);
			this->legeng_groupBox->TabIndex = 0;
			this->legeng_groupBox->TabStop = false;
			this->legeng_groupBox->Text = L"Легенда кластеризации";
			// 
			// size_label2
			// 
			this->size_label2->AutoSize = true;
			this->size_label2->Location = System::Drawing::Point(90, 51);
			this->size_label2->Name = L"size_label2";
			this->size_label2->Size = System::Drawing::Size(71, 13);
			this->size_label2->TabIndex = 5;
			this->size_label2->Text = L"200x200x200";
			// 
			// locate_amplitude_label2
			// 
			this->locate_amplitude_label2->AutoSize = true;
			this->locate_amplitude_label2->Location = System::Drawing::Point(476, 30);
			this->locate_amplitude_label2->Name = L"locate_amplitude_label2";
			this->locate_amplitude_label2->Size = System::Drawing::Size(34, 13);
			this->locate_amplitude_label2->TabIndex = 2;
			this->locate_amplitude_label2->Text = L"41-50";
			// 
			// locate_amplitude_label3
			// 
			this->locate_amplitude_label3->AutoSize = true;
			this->locate_amplitude_label3->Location = System::Drawing::Point(518, 30);
			this->locate_amplitude_label3->Name = L"locate_amplitude_label3";
			this->locate_amplitude_label3->Size = System::Drawing::Size(34, 13);
			this->locate_amplitude_label3->TabIndex = 3;
			this->locate_amplitude_label3->Text = L"51-60";
			// 
			// locate_amplitude_pictureBox5
			// 
			this->locate_amplitude_pictureBox5->BackColor = System::Drawing::Color::Maroon;
			this->locate_amplitude_pictureBox5->Location = System::Drawing::Point(605, 46);
			this->locate_amplitude_pictureBox5->Name = L"locate_amplitude_pictureBox5";
			this->locate_amplitude_pictureBox5->Size = System::Drawing::Size(17, 15);
			this->locate_amplitude_pictureBox5->TabIndex = 4;
			this->locate_amplitude_pictureBox5->TabStop = false;
			// 
			// locate_amplitude_pictureBox4
			// 
			this->locate_amplitude_pictureBox4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->locate_amplitude_pictureBox4->Location = System::Drawing::Point(564, 47);
			this->locate_amplitude_pictureBox4->Name = L"locate_amplitude_pictureBox4";
			this->locate_amplitude_pictureBox4->Size = System::Drawing::Size(17, 15);
			this->locate_amplitude_pictureBox4->TabIndex = 4;
			this->locate_amplitude_pictureBox4->TabStop = false;
			// 
			// locate_amplitude_pictureBox3
			// 
			this->locate_amplitude_pictureBox3->BackColor = System::Drawing::Color::Red;
			this->locate_amplitude_pictureBox3->Location = System::Drawing::Point(524, 46);
			this->locate_amplitude_pictureBox3->Name = L"locate_amplitude_pictureBox3";
			this->locate_amplitude_pictureBox3->Size = System::Drawing::Size(17, 15);
			this->locate_amplitude_pictureBox3->TabIndex = 4;
			this->locate_amplitude_pictureBox3->TabStop = false;
			// 
			// locate_amplitude_pictureBox2
			// 
			this->locate_amplitude_pictureBox2->BackColor = System::Drawing::Color::Red;
			this->locate_amplitude_pictureBox2->Location = System::Drawing::Point(482, 46);
			this->locate_amplitude_pictureBox2->Name = L"locate_amplitude_pictureBox2";
			this->locate_amplitude_pictureBox2->Size = System::Drawing::Size(17, 15);
			this->locate_amplitude_pictureBox2->TabIndex = 4;
			this->locate_amplitude_pictureBox2->TabStop = false;
			// 
			// locate_amplitude_pictureBox1
			// 
			this->locate_amplitude_pictureBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->locate_amplitude_pictureBox1->Location = System::Drawing::Point(441, 46);
			this->locate_amplitude_pictureBox1->Name = L"locate_amplitude_pictureBox1";
			this->locate_amplitude_pictureBox1->Size = System::Drawing::Size(17, 15);
			this->locate_amplitude_pictureBox1->TabIndex = 4;
			this->locate_amplitude_pictureBox1->TabStop = false;
			// 
			// count_events_pictureBox5
			// 
			this->count_events_pictureBox5->BackColor = System::Drawing::Color::Maroon;
			this->count_events_pictureBox5->Location = System::Drawing::Point(364, 46);
			this->count_events_pictureBox5->Name = L"count_events_pictureBox5";
			this->count_events_pictureBox5->Size = System::Drawing::Size(17, 15);
			this->count_events_pictureBox5->TabIndex = 4;
			this->count_events_pictureBox5->TabStop = false;
			// 
			// count_events_pictureBox4
			// 
			this->count_events_pictureBox4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->count_events_pictureBox4->Location = System::Drawing::Point(323, 46);
			this->count_events_pictureBox4->Name = L"count_events_pictureBox4";
			this->count_events_pictureBox4->Size = System::Drawing::Size(17, 15);
			this->count_events_pictureBox4->TabIndex = 4;
			this->count_events_pictureBox4->TabStop = false;
			// 
			// count_events_pictureBox3
			// 
			this->count_events_pictureBox3->BackColor = System::Drawing::Color::Red;
			this->count_events_pictureBox3->Location = System::Drawing::Point(282, 47);
			this->count_events_pictureBox3->Name = L"count_events_pictureBox3";
			this->count_events_pictureBox3->Size = System::Drawing::Size(17, 15);
			this->count_events_pictureBox3->TabIndex = 4;
			this->count_events_pictureBox3->TabStop = false;
			// 
			// count_events_pictureBox2
			// 
			this->count_events_pictureBox2->BackColor = System::Drawing::Color::Red;
			this->count_events_pictureBox2->Location = System::Drawing::Point(241, 48);
			this->count_events_pictureBox2->Name = L"count_events_pictureBox2";
			this->count_events_pictureBox2->Size = System::Drawing::Size(17, 15);
			this->count_events_pictureBox2->TabIndex = 4;
			this->count_events_pictureBox2->TabStop = false;
			// 
			// count_events_pictureBox1
			// 
			this->count_events_pictureBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->count_events_pictureBox1->Location = System::Drawing::Point(200, 48);
			this->count_events_pictureBox1->Name = L"count_events_pictureBox1";
			this->count_events_pictureBox1->Size = System::Drawing::Size(17, 15);
			this->count_events_pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->count_events_pictureBox1->TabIndex = 4;
			this->count_events_pictureBox1->TabStop = false;
			// 
			// locate_amplitude_label5
			// 
			this->locate_amplitude_label5->AutoSize = true;
			this->locate_amplitude_label5->Location = System::Drawing::Point(600, 30);
			this->locate_amplitude_label5->Name = L"locate_amplitude_label5";
			this->locate_amplitude_label5->Size = System::Drawing::Size(25, 13);
			this->locate_amplitude_label5->TabIndex = 3;
			this->locate_amplitude_label5->Text = L">70";
			// 
			// locate_amplitude_label4
			// 
			this->locate_amplitude_label4->AutoSize = true;
			this->locate_amplitude_label4->Location = System::Drawing::Point(559, 30);
			this->locate_amplitude_label4->Name = L"locate_amplitude_label4";
			this->locate_amplitude_label4->Size = System::Drawing::Size(34, 13);
			this->locate_amplitude_label4->TabIndex = 2;
			this->locate_amplitude_label4->Text = L"61-70";
			// 
			// locate_amplitude_label1
			// 
			this->locate_amplitude_label1->AutoSize = true;
			this->locate_amplitude_label1->Location = System::Drawing::Point(436, 30);
			this->locate_amplitude_label1->Name = L"locate_amplitude_label1";
			this->locate_amplitude_label1->Size = System::Drawing::Size(31, 13);
			this->locate_amplitude_label1->TabIndex = 3;
			this->locate_amplitude_label1->Text = L"40=>";
			// 
			// count_events_label5
			// 
			this->count_events_label5->AutoSize = true;
			this->count_events_label5->Location = System::Drawing::Point(358, 30);
			this->count_events_label5->Name = L"count_events_label5";
			this->count_events_label5->Size = System::Drawing::Size(31, 13);
			this->count_events_label5->TabIndex = 2;
			this->count_events_label5->Text = L">100";
			// 
			// count_events_label4
			// 
			this->count_events_label4->AutoSize = true;
			this->count_events_label4->Location = System::Drawing::Point(315, 31);
			this->count_events_label4->Name = L"count_events_label4";
			this->count_events_label4->Size = System::Drawing::Size(40, 13);
			this->count_events_label4->TabIndex = 3;
			this->count_events_label4->Text = L"26-100";
			// 
			// count_events_label3
			// 
			this->count_events_label3->AutoSize = true;
			this->count_events_label3->Location = System::Drawing::Point(275, 31);
			this->count_events_label3->Name = L"count_events_label3";
			this->count_events_label3->Size = System::Drawing::Size(34, 13);
			this->count_events_label3->TabIndex = 2;
			this->count_events_label3->Text = L"11-25";
			// 
			// count_events_label2
			// 
			this->count_events_label2->AutoSize = true;
			this->count_events_label2->Location = System::Drawing::Point(236, 31);
			this->count_events_label2->Name = L"count_events_label2";
			this->count_events_label2->Size = System::Drawing::Size(28, 13);
			this->count_events_label2->TabIndex = 3;
			this->count_events_label2->Text = L"3-10";
			// 
			// count_events_label1
			// 
			this->count_events_label1->AutoSize = true;
			this->count_events_label1->Location = System::Drawing::Point(197, 31);
			this->count_events_label1->Name = L"count_events_label1";
			this->count_events_label1->Size = System::Drawing::Size(22, 13);
			this->count_events_label1->TabIndex = 2;
			this->count_events_label1->Text = L"1-2";
			// 
			// locate_amplitude_label
			// 
			this->locate_amplitude_label->AutoSize = true;
			this->locate_amplitude_label->Location = System::Drawing::Point(456, 12);
			this->locate_amplitude_label->Name = L"locate_amplitude_label";
			this->locate_amplitude_label->Size = System::Drawing::Size(154, 13);
			this->locate_amplitude_label->TabIndex = 3;
			this->locate_amplitude_label->Text = L"Локационная амплитуда (дБ)";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(244, 12);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(112, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Количество событий";
			// 
			// size_label
			// 
			this->size_label->AutoSize = true;
			this->size_label->Location = System::Drawing::Point(7, 50);
			this->size_label->Name = L"size_label";
			this->size_label->Size = System::Drawing::Size(77, 13);
			this->size_label->TabIndex = 1;
			this->size_label->Text = L"Размер (мм): ";
			// 
			// change_parametrs_button
			// 
			this->change_parametrs_button->Location = System::Drawing::Point(7, 20);
			this->change_parametrs_button->Name = L"change_parametrs_button";
			this->change_parametrs_button->Size = System::Drawing::Size(143, 23);
			this->change_parametrs_button->TabIndex = 0;
			this->change_parametrs_button->Text = L"Изменить параметры";
			this->change_parametrs_button->UseVisualStyleBackColor = true;
			// 
			// channel_label
			// 
			this->channel_label->AutoSize = true;
			this->channel_label->Location = System::Drawing::Point(663, 33);
			this->channel_label->Name = L"channel_label";
			this->channel_label->Size = System::Drawing::Size(53, 13);
			this->channel_label->TabIndex = 1;
			this->channel_label->Text = L"Каналов:";
			// 
			// group_label
			// 
			this->group_label->AutoSize = true;
			this->group_label->Location = System::Drawing::Point(662, 61);
			this->group_label->Name = L"group_label";
			this->group_label->Size = System::Drawing::Size(39, 13);
			this->group_label->TabIndex = 1;
			this->group_label->Text = L"Групп:";
			// 
			// channel_textBox
			// 
			this->channel_textBox->Location = System::Drawing::Point(722, 30);
			this->channel_textBox->Name = L"channel_textBox";
			this->channel_textBox->Size = System::Drawing::Size(47, 20);
			this->channel_textBox->TabIndex = 2;
			// 
			// group_textBox
			// 
			this->group_textBox->Location = System::Drawing::Point(722, 57);
			this->group_textBox->Name = L"group_textBox";
			this->group_textBox->Size = System::Drawing::Size(47, 20);
			this->group_textBox->TabIndex = 2;
			// 
			// listView1
			// 
			this->listView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(7) {
				this->number_column, this->name_group_column,
					this->type_location_column, this->channel_group_column, this->L_column, this->W_column, this->page_column
			});
			this->listView1->HideSelection = false;
			this->listView1->Location = System::Drawing::Point(13, 93);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(647, 263);
			this->listView1->TabIndex = 3;
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->View = System::Windows::Forms::View::Details;
			// 
			// number_column
			// 
			this->number_column->Text = L"№";
			this->number_column->Width = 38;
			// 
			// name_group_column
			// 
			this->name_group_column->Text = L"Название группы";
			this->name_group_column->Width = 114;
			// 
			// type_location_column
			// 
			this->type_location_column->Text = L"Тип локации";
			this->type_location_column->Width = 102;
			// 
			// channel_group_column
			// 
			this->channel_group_column->Text = L"Каналов в группе";
			this->channel_group_column->Width = 112;
			// 
			// L_column
			// 
			this->L_column->Text = L"L (мм)";
			// 
			// W_column
			// 
			this->W_column->Text = L"W (мм)";
			// 
			// page_column
			// 
			this->page_column->Text = L"Страница";
			this->page_column->Width = 202;
			// 
			// ok_button
			// 
			this->ok_button->Location = System::Drawing::Point(682, 93);
			this->ok_button->Name = L"ok_button";
			this->ok_button->Size = System::Drawing::Size(83, 23);
			this->ok_button->TabIndex = 4;
			this->ok_button->Text = L"ОК";
			this->ok_button->UseVisualStyleBackColor = true;
			// 
			// cancel_button
			// 
			this->cancel_button->Location = System::Drawing::Point(682, 122);
			this->cancel_button->Name = L"cancel_button";
			this->cancel_button->Size = System::Drawing::Size(82, 23);
			this->cancel_button->TabIndex = 4;
			this->cancel_button->Text = L"Отмена";
			this->cancel_button->UseVisualStyleBackColor = true;
			this->cancel_button->Click += gcnew System::EventHandler(this, &create_locationForm::cancel_button_Click);
			// 
			// save_button
			// 
			this->save_button->Location = System::Drawing::Point(682, 151);
			this->save_button->Name = L"save_button";
			this->save_button->Size = System::Drawing::Size(82, 23);
			this->save_button->TabIndex = 4;
			this->save_button->Text = L"Сохранить";
			this->save_button->UseVisualStyleBackColor = true;
			// 
			// download_button
			// 
			this->download_button->Location = System::Drawing::Point(682, 180);
			this->download_button->Name = L"download_button";
			this->download_button->Size = System::Drawing::Size(82, 23);
			this->download_button->TabIndex = 4;
			this->download_button->Text = L"Загрузить";
			this->download_button->UseVisualStyleBackColor = true;
			// 
			// details_button
			// 
			this->details_button->Location = System::Drawing::Point(682, 209);
			this->details_button->Name = L"details_button";
			this->details_button->Size = System::Drawing::Size(82, 23);
			this->details_button->TabIndex = 4;
			this->details_button->Text = L"Подробности";
			this->details_button->UseVisualStyleBackColor = true;
			// 
			// locate_group_groupBox
			// 
			this->locate_group_groupBox->Controls->Add(this->delete_locate_group_button);
			this->locate_group_groupBox->Controls->Add(this->locate_group_comboBox);
			this->locate_group_groupBox->Controls->Add(this->arrows_locate_group_button);
			this->locate_group_groupBox->Controls->Add(this->add_locate_group_button);
			this->locate_group_groupBox->Location = System::Drawing::Point(666, 246);
			this->locate_group_groupBox->Name = L"locate_group_groupBox";
			this->locate_group_groupBox->Size = System::Drawing::Size(103, 110);
			this->locate_group_groupBox->TabIndex = 5;
			this->locate_group_groupBox->TabStop = false;
			this->locate_group_groupBox->Text = L"Лок. группы";
			// 
			// delete_locate_group_button
			// 
			this->delete_locate_group_button->Location = System::Drawing::Point(16, 79);
			this->delete_locate_group_button->Name = L"delete_locate_group_button";
			this->delete_locate_group_button->Size = System::Drawing::Size(75, 23);
			this->delete_locate_group_button->TabIndex = 3;
			this->delete_locate_group_button->Text = L"Удалить";
			this->delete_locate_group_button->UseVisualStyleBackColor = true;
			// 
			// locate_group_comboBox
			// 
			this->locate_group_comboBox->FormattingEnabled = true;
			this->locate_group_comboBox->Location = System::Drawing::Point(48, 51);
			this->locate_group_comboBox->Name = L"locate_group_comboBox";
			this->locate_group_comboBox->Size = System::Drawing::Size(49, 21);
			this->locate_group_comboBox->TabIndex = 2;
			// 
			// arrows_locate_group_button
			// 
			this->arrows_locate_group_button->Location = System::Drawing::Point(7, 50);
			this->arrows_locate_group_button->Name = L"arrows_locate_group_button";
			this->arrows_locate_group_button->Size = System::Drawing::Size(34, 23);
			this->arrows_locate_group_button->TabIndex = 1;
			this->arrows_locate_group_button->Text = L"🠄";
			this->arrows_locate_group_button->UseVisualStyleBackColor = true;
			// 
			// add_locate_group_button
			// 
			this->add_locate_group_button->Location = System::Drawing::Point(16, 21);
			this->add_locate_group_button->Name = L"add_locate_group_button";
			this->add_locate_group_button->Size = System::Drawing::Size(75, 23);
			this->add_locate_group_button->TabIndex = 0;
			this->add_locate_group_button->Text = L"Добавить";
			this->add_locate_group_button->UseVisualStyleBackColor = true;
			// 
			// settings_button
			// 
			this->settings_button->Location = System::Drawing::Point(665, 392);
			this->settings_button->Name = L"settings_button";
			this->settings_button->Size = System::Drawing::Size(102, 23);
			this->settings_button->TabIndex = 6;
			this->settings_button->Text = L"Параметры";
			this->settings_button->UseVisualStyleBackColor = true;
			// 
			// name_group_label
			// 
			this->name_group_label->AutoSize = true;
			this->name_group_label->Location = System::Drawing::Point(20, 376);
			this->name_group_label->Name = L"name_group_label";
			this->name_group_label->Size = System::Drawing::Size(99, 13);
			this->name_group_label->TabIndex = 7;
			this->name_group_label->Text = L"Название группы:";
			// 
			// type_location_label
			// 
			this->type_location_label->AutoSize = true;
			this->type_location_label->Location = System::Drawing::Point(146, 376);
			this->type_location_label->Name = L"type_location_label";
			this->type_location_label->Size = System::Drawing::Size(74, 13);
			this->type_location_label->TabIndex = 7;
			this->type_location_label->Text = L"Тип локации:";
			// 
			// channel_in_group_label
			// 
			this->channel_in_group_label->AutoSize = true;
			this->channel_in_group_label->Location = System::Drawing::Point(238, 376);
			this->channel_in_group_label->Name = L"channel_in_group_label";
			this->channel_in_group_label->Size = System::Drawing::Size(99, 13);
			this->channel_in_group_label->TabIndex = 7;
			this->channel_in_group_label->Text = L"Каналов в группе:";
			// 
			// lenght_label
			// 
			this->lenght_label->AutoSize = true;
			this->lenght_label->Location = System::Drawing::Point(344, 376);
			this->lenght_label->Name = L"lenght_label";
			this->lenght_label->Size = System::Drawing::Size(68, 13);
			this->lenght_label->TabIndex = 7;
			this->lenght_label->Text = L"Длина (мм):";
			// 
			// width_label
			// 
			this->width_label->AutoSize = true;
			this->width_label->Location = System::Drawing::Point(420, 376);
			this->width_label->Name = L"width_label";
			this->width_label->Size = System::Drawing::Size(74, 13);
			this->width_label->TabIndex = 7;
			this->width_label->Text = L"Ширина (мм):";
			// 
			// hight_label
			// 
			this->hight_label->AutoSize = true;
			this->hight_label->Location = System::Drawing::Point(501, 376);
			this->hight_label->Name = L"hight_label";
			this->hight_label->Size = System::Drawing::Size(73, 13);
			this->hight_label->TabIndex = 7;
			this->hight_label->Text = L"Высота (мм):";
			// 
			// name_group_textBox
			// 
			this->name_group_textBox->Location = System::Drawing::Point(12, 395);
			this->name_group_textBox->Name = L"name_group_textBox";
			this->name_group_textBox->Size = System::Drawing::Size(112, 20);
			this->name_group_textBox->TabIndex = 8;
			// 
			// type_location_comboBox
			// 
			this->type_location_comboBox->FormattingEnabled = true;
			this->type_location_comboBox->Location = System::Drawing::Point(141, 393);
			this->type_location_comboBox->Name = L"type_location_comboBox";
			this->type_location_comboBox->Size = System::Drawing::Size(79, 21);
			this->type_location_comboBox->TabIndex = 9;
			// 
			// channel_in_group_textBox
			// 
			this->channel_in_group_textBox->Location = System::Drawing::Point(241, 395);
			this->channel_in_group_textBox->Name = L"channel_in_group_textBox";
			this->channel_in_group_textBox->Size = System::Drawing::Size(38, 20);
			this->channel_in_group_textBox->TabIndex = 10;
			// 
			// channel_in_group_button
			// 
			this->channel_in_group_button->Location = System::Drawing::Point(285, 393);
			this->channel_in_group_button->Name = L"channel_in_group_button";
			this->channel_in_group_button->Size = System::Drawing::Size(52, 22);
			this->channel_in_group_button->TabIndex = 11;
			this->channel_in_group_button->Text = L"Выбор";
			this->channel_in_group_button->UseVisualStyleBackColor = true;
			// 
			// lenght_textBox
			// 
			this->lenght_textBox->Location = System::Drawing::Point(349, 395);
			this->lenght_textBox->Name = L"lenght_textBox";
			this->lenght_textBox->Size = System::Drawing::Size(53, 20);
			this->lenght_textBox->TabIndex = 12;
			// 
			// widht_textBox
			// 
			this->widht_textBox->Location = System::Drawing::Point(426, 395);
			this->widht_textBox->Name = L"widht_textBox";
			this->widht_textBox->Size = System::Drawing::Size(54, 20);
			this->widht_textBox->TabIndex = 12;
			// 
			// page_label
			// 
			this->page_label->AutoSize = true;
			this->page_label->Location = System::Drawing::Point(586, 376);
			this->page_label->Name = L"page_label";
			this->page_label->Size = System::Drawing::Size(58, 13);
			this->page_label->TabIndex = 7;
			this->page_label->Text = L"Страница:";
			// 
			// hight_textBox
			// 
			this->hight_textBox->Location = System::Drawing::Point(499, 395);
			this->hight_textBox->Name = L"hight_textBox";
			this->hight_textBox->Size = System::Drawing::Size(70, 20);
			this->hight_textBox->TabIndex = 12;
			// 
			// page_comboBox
			// 
			this->page_comboBox->FormattingEnabled = true;
			this->page_comboBox->Location = System::Drawing::Point(575, 394);
			this->page_comboBox->Name = L"page_comboBox";
			this->page_comboBox->Size = System::Drawing::Size(79, 21);
			this->page_comboBox->TabIndex = 9;
			// 
			// create_locationForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(776, 421);
			this->Controls->Add(this->hight_textBox);
			this->Controls->Add(this->widht_textBox);
			this->Controls->Add(this->lenght_textBox);
			this->Controls->Add(this->channel_in_group_button);
			this->Controls->Add(this->channel_in_group_textBox);
			this->Controls->Add(this->page_comboBox);
			this->Controls->Add(this->type_location_comboBox);
			this->Controls->Add(this->name_group_textBox);
			this->Controls->Add(this->page_label);
			this->Controls->Add(this->hight_label);
			this->Controls->Add(this->width_label);
			this->Controls->Add(this->lenght_label);
			this->Controls->Add(this->channel_in_group_label);
			this->Controls->Add(this->type_location_label);
			this->Controls->Add(this->name_group_label);
			this->Controls->Add(this->settings_button);
			this->Controls->Add(this->locate_group_groupBox);
			this->Controls->Add(this->details_button);
			this->Controls->Add(this->download_button);
			this->Controls->Add(this->save_button);
			this->Controls->Add(this->cancel_button);
			this->Controls->Add(this->ok_button);
			this->Controls->Add(this->listView1);
			this->Controls->Add(this->group_textBox);
			this->Controls->Add(this->channel_textBox);
			this->Controls->Add(this->group_label);
			this->Controls->Add(this->channel_label);
			this->Controls->Add(this->legeng_groupBox);
			this->Name = L"create_locationForm";
			this->Text = L"Настройка локационных групп";
			this->legeng_groupBox->ResumeLayout(false);
			this->legeng_groupBox->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->locate_amplitude_pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->locate_amplitude_pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->locate_amplitude_pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->locate_amplitude_pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->locate_amplitude_pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->count_events_pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->count_events_pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->count_events_pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->count_events_pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->count_events_pictureBox1))->EndInit();
			this->locate_group_groupBox->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: System::Void cancel_button_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
};
}
