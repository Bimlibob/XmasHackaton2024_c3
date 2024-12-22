#pragma once

namespace xakaton2024 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для param_chlsForm
	/// </summary>
	public ref class param_chlsForm : public System::Windows::Forms::Form
	{
	public:
		param_chlsForm(void)
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
		~param_chlsForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::VScrollBar^ vScrollBar1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::VScrollBar^ vScrollBar2;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Panel^ panel5;

	private: System::Windows::Forms::VScrollBar^ vScrollBar4;
	private: System::Windows::Forms::VScrollBar^ vScrollBar5;








	private: System::Windows::Forms::Label^ label1;




	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button14;

	private: System::Windows::Forms::Button^ button16;











	private: System::Windows::Forms::Button^ button19;
	private: System::Windows::Forms::Button^ button17;
	private: System::Windows::Forms::Button^ button18;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Button^ button36;
	private: System::Windows::Forms::Button^ button32;
	private: System::Windows::Forms::Button^ button35;
	private: System::Windows::Forms::Button^ button31;
	private: System::Windows::Forms::Button^ button33;
	private: System::Windows::Forms::Button^ button34;
	private: System::Windows::Forms::Button^ button37;
	private: System::Windows::Forms::TabControl^ tabControl1;
	private: System::Windows::Forms::TabPage^ tabPage_base;
	private: System::Windows::Forms::TabPage^ tabPage_osc;
	private: System::Windows::Forms::TabPage^ tabPage_time;
	private: System::Windows::Forms::TabPage^ tabPage_calibrator;
	private: System::Windows::Forms::TabPage^ tabPage_input_params;
	private: System::Windows::Forms::DataGridView^ dataGridView;



	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::CheckBox^ checkBox2;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button40;
	private: System::Windows::Forms::Button^ button39;
	private: System::Windows::Forms::Button^ button38;
	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::Button^ button41;
	private: System::Windows::Forms::CheckBox^ checkBox3;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown2;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown1;
	private: System::Windows::Forms::Label^ label7;
private: System::Windows::Forms::Label^ label14;
private: System::Windows::Forms::Label^ label16;
private: System::Windows::Forms::Label^ label13;
private: System::Windows::Forms::Label^ label15;
private: System::Windows::Forms::Label^ label12;
private: System::Windows::Forms::Label^ label11;
private: System::Windows::Forms::Button^ button43;
private: System::Windows::Forms::CheckBox^ checkBox6;
private: System::Windows::Forms::Label^ label10;
private: System::Windows::Forms::Label^ label9;
private: System::Windows::Forms::CheckBox^ checkBox5;
private: System::Windows::Forms::CheckBox^ checkBox4;
private: System::Windows::Forms::Button^ button42;
private: System::Windows::Forms::Label^ label8;
private: System::Windows::Forms::DataGridView^ dataGridView1;
private: System::Windows::Forms::GroupBox^ groupBox4;
private: System::Windows::Forms::TextBox^ textBox2;
private: System::Windows::Forms::CheckBox^ checkBox7;
private: System::Windows::Forms::NumericUpDown^ numericUpDown3;
private: System::Windows::Forms::RadioButton^ radioButton4;
private: System::Windows::Forms::RadioButton^ radioButton3;
private: System::Windows::Forms::Label^ label17;
private: System::Windows::Forms::TextBox^ textBox3;
private: System::Windows::Forms::CheckBox^ checkBox9;
private: System::Windows::Forms::CheckBox^ checkBox8;
private: System::Windows::Forms::NumericUpDown^ numericUpDown5;
private: System::Windows::Forms::ComboBox^ comboBox6;
private: System::Windows::Forms::ComboBox^ comboBox5;
private: System::Windows::Forms::ComboBox^ comboBox4;
private: System::Windows::Forms::ComboBox^ comboBox3;
private: System::Windows::Forms::NumericUpDown^ numericUpDown4;
private: System::Windows::Forms::Button^ button47;

private: System::Windows::Forms::Button^ button45;
private: System::Windows::Forms::Button^ button44;







private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column8;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column9;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column10;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column11;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column12;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column13;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column14;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column15;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column16;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column17;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column6;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column7;
private: System::Windows::Forms::TextBox^ textBox7;
private: System::Windows::Forms::Button^ button50;
private: System::Windows::Forms::Label^ label21;
private: System::Windows::Forms::Label^ label20;
private: System::Windows::Forms::Label^ label19;
private: System::Windows::Forms::Label^ label18;
private: System::Windows::Forms::TextBox^ textBox6;
private: System::Windows::Forms::TextBox^ textBox5;
private: System::Windows::Forms::TextBox^ textBox4;
private: System::Windows::Forms::Button^ button49;
private: System::Windows::Forms::DataGridView^ dataGridView2;
private: System::Windows::Forms::Button^ button48;
private: System::Windows::Forms::Button^ button54;
private: System::Windows::Forms::Button^ button53;
private: System::Windows::Forms::Button^ button52;
private: System::Windows::Forms::Button^ button51;
private: System::Windows::Forms::ComboBox^ comboBox7;
private: System::Windows::Forms::NumericUpDown^ numericUpDown10;
private: System::Windows::Forms::NumericUpDown^ numericUpDown9;
private: System::Windows::Forms::NumericUpDown^ numericUpDown8;
private: System::Windows::Forms::NumericUpDown^ numericUpDown7;
private: System::Windows::Forms::NumericUpDown^ numericUpDown6;
private: System::Windows::Forms::Label^ label29;
private: System::Windows::Forms::Label^ label28;
private: System::Windows::Forms::Label^ label27;
private: System::Windows::Forms::Label^ label26;
private: System::Windows::Forms::Label^ label25;
private: System::Windows::Forms::Label^ label24;
private: System::Windows::Forms::CheckBox^ checkBox11;
private: System::Windows::Forms::CheckBox^ checkBox10;
private: System::Windows::Forms::Label^ label23;
private: System::Windows::Forms::Label^ label22;
private: System::Windows::Forms::DataGridView^ dataGridView3;
private: System::Windows::Forms::VScrollBar^ vScrollBar3;
private: System::Windows::Forms::Button^ button55;
private: System::Windows::Forms::Button^ button58;
private: System::Windows::Forms::Button^ button57;
private: System::Windows::Forms::Button^ button56;
private: System::Windows::Forms::Button^ button64;
private: System::Windows::Forms::Button^ button63;
private: System::Windows::Forms::Button^ button62;
private: System::Windows::Forms::Button^ button61;
private: System::Windows::Forms::Button^ button60;
private: System::Windows::Forms::TextBox^ textBox8;
private: System::Windows::Forms::Label^ label30;
private: System::Windows::Forms::Button^ button59;
private: System::Windows::Forms::TextBox^ textBox9;
private: System::Windows::Forms::Label^ label38;
private: System::Windows::Forms::ComboBox^ comboBox11;
private: System::Windows::Forms::Label^ label37;
private: System::Windows::Forms::Button^ button65;
private: System::Windows::Forms::Label^ label36;
private: System::Windows::Forms::Label^ label35;
private: System::Windows::Forms::ComboBox^ comboBox10;
private: System::Windows::Forms::Label^ label34;
private: System::Windows::Forms::ComboBox^ comboBox9;
private: System::Windows::Forms::Label^ label33;
private: System::Windows::Forms::ComboBox^ comboBox8;
private: System::Windows::Forms::Label^ label32;
private: System::Windows::Forms::CheckBox^ checkBox12;
private: System::Windows::Forms::Label^ label31;
private: System::Windows::Forms::DataGridView^ dataGridView4;
private: System::Windows::Forms::TextBox^ textBox11;
private: System::Windows::Forms::TextBox^ textBox10;














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
			System::Windows::Forms::Button^ button46;
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button54 = (gcnew System::Windows::Forms::Button());
			this->button53 = (gcnew System::Windows::Forms::Button());
			this->button52 = (gcnew System::Windows::Forms::Button());
			this->button51 = (gcnew System::Windows::Forms::Button());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->button41 = (gcnew System::Windows::Forms::Button());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->numericUpDown2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button40 = (gcnew System::Windows::Forms::Button());
			this->button39 = (gcnew System::Windows::Forms::Button());
			this->button38 = (gcnew System::Windows::Forms::Button());
			this->dataGridView = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->vScrollBar1 = (gcnew System::Windows::Forms::VScrollBar());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->button47 = (gcnew System::Windows::Forms::Button());
			this->button45 = (gcnew System::Windows::Forms::Button());
			this->button44 = (gcnew System::Windows::Forms::Button());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->checkBox9 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox8 = (gcnew System::Windows::Forms::CheckBox());
			this->numericUpDown5 = (gcnew System::Windows::Forms::NumericUpDown());
			this->comboBox6 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox5 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox4 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->numericUpDown4 = (gcnew System::Windows::Forms::NumericUpDown());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->checkBox7 = (gcnew System::Windows::Forms::CheckBox());
			this->numericUpDown3 = (gcnew System::Windows::Forms::NumericUpDown());
			this->radioButton4 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->button43 = (gcnew System::Windows::Forms::Button());
			this->checkBox6 = (gcnew System::Windows::Forms::CheckBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->checkBox5 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox4 = (gcnew System::Windows::Forms::CheckBox());
			this->button42 = (gcnew System::Windows::Forms::Button());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column9 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column10 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column11 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column12 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column13 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column14 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column15 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column16 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column17 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->vScrollBar2 = (gcnew System::Windows::Forms::VScrollBar());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->button64 = (gcnew System::Windows::Forms::Button());
			this->button63 = (gcnew System::Windows::Forms::Button());
			this->button62 = (gcnew System::Windows::Forms::Button());
			this->button61 = (gcnew System::Windows::Forms::Button());
			this->button60 = (gcnew System::Windows::Forms::Button());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->button59 = (gcnew System::Windows::Forms::Button());
			this->comboBox7 = (gcnew System::Windows::Forms::ComboBox());
			this->numericUpDown10 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown9 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown8 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown7 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown6 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->checkBox11 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox10 = (gcnew System::Windows::Forms::CheckBox());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->dataGridView3 = (gcnew System::Windows::Forms::DataGridView());
			this->vScrollBar3 = (gcnew System::Windows::Forms::VScrollBar());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->button58 = (gcnew System::Windows::Forms::Button());
			this->button57 = (gcnew System::Windows::Forms::Button());
			this->button56 = (gcnew System::Windows::Forms::Button());
			this->button55 = (gcnew System::Windows::Forms::Button());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->button50 = (gcnew System::Windows::Forms::Button());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->button49 = (gcnew System::Windows::Forms::Button());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->vScrollBar4 = (gcnew System::Windows::Forms::VScrollBar());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button48 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->label38 = (gcnew System::Windows::Forms::Label());
			this->comboBox11 = (gcnew System::Windows::Forms::ComboBox());
			this->label37 = (gcnew System::Windows::Forms::Label());
			this->button65 = (gcnew System::Windows::Forms::Button());
			this->label36 = (gcnew System::Windows::Forms::Label());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->comboBox10 = (gcnew System::Windows::Forms::ComboBox());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->comboBox9 = (gcnew System::Windows::Forms::ComboBox());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->comboBox8 = (gcnew System::Windows::Forms::ComboBox());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->checkBox12 = (gcnew System::Windows::Forms::CheckBox());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->dataGridView4 = (gcnew System::Windows::Forms::DataGridView());
			this->vScrollBar5 = (gcnew System::Windows::Forms::VScrollBar());
			this->button36 = (gcnew System::Windows::Forms::Button());
			this->button37 = (gcnew System::Windows::Forms::Button());
			this->button32 = (gcnew System::Windows::Forms::Button());
			this->button35 = (gcnew System::Windows::Forms::Button());
			this->button31 = (gcnew System::Windows::Forms::Button());
			this->button33 = (gcnew System::Windows::Forms::Button());
			this->button34 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage_base = (gcnew System::Windows::Forms::TabPage());
			this->tabPage_osc = (gcnew System::Windows::Forms::TabPage());
			this->tabPage_time = (gcnew System::Windows::Forms::TabPage());
			this->tabPage_calibrator = (gcnew System::Windows::Forms::TabPage());
			this->tabPage_input_params = (gcnew System::Windows::Forms::TabPage());
			button46 = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			this->groupBox3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->BeginInit();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView))->BeginInit();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown5))->BeginInit();
			this->groupBox4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->panel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown10))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->BeginInit();
			this->panel4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->panel5->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView4))->BeginInit();
			this->tabControl1->SuspendLayout();
			this->tabPage_base->SuspendLayout();
			this->tabPage_osc->SuspendLayout();
			this->tabPage_time->SuspendLayout();
			this->tabPage_calibrator->SuspendLayout();
			this->tabPage_input_params->SuspendLayout();
			this->SuspendLayout();
			// 
			// button46
			// 
			button46->Location = System::Drawing::Point(614, 550);
			button46->Name = L"button46";
			button46->Size = System::Drawing::Size(75, 23);
			button46->TabIndex = 16;
			button46->Text = L"Применить";
			button46->UseVisualStyleBackColor = true;
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->button54);
			this->panel1->Controls->Add(this->button53);
			this->panel1->Controls->Add(this->button52);
			this->panel1->Controls->Add(this->button51);
			this->panel1->Controls->Add(this->groupBox3);
			this->panel1->Controls->Add(this->groupBox2);
			this->panel1->Controls->Add(this->groupBox1);
			this->panel1->Controls->Add(this->checkBox2);
			this->panel1->Controls->Add(this->checkBox1);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->button40);
			this->panel1->Controls->Add(this->button39);
			this->panel1->Controls->Add(this->button38);
			this->panel1->Controls->Add(this->dataGridView);
			this->panel1->Controls->Add(this->vScrollBar1);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel1->Location = System::Drawing::Point(3, 3);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(819, 578);
			this->panel1->TabIndex = 0;
			// 
			// button54
			// 
			this->button54->Location = System::Drawing::Point(656, 544);
			this->button54->Name = L"button54";
			this->button54->Size = System::Drawing::Size(75, 23);
			this->button54->TabIndex = 9;
			this->button54->Text = L"Справка";
			this->button54->UseVisualStyleBackColor = true;
			// 
			// button53
			// 
			this->button53->Location = System::Drawing::Point(575, 544);
			this->button53->Name = L"button53";
			this->button53->Size = System::Drawing::Size(75, 23);
			this->button53->TabIndex = 9;
			this->button53->Text = L"Применить";
			this->button53->UseVisualStyleBackColor = true;
			// 
			// button52
			// 
			this->button52->Location = System::Drawing::Point(494, 544);
			this->button52->Name = L"button52";
			this->button52->Size = System::Drawing::Size(75, 23);
			this->button52->TabIndex = 9;
			this->button52->Text = L"Отмена";
			this->button52->UseVisualStyleBackColor = true;
			this->button52->Click += gcnew System::EventHandler(this, &param_chlsForm::button52_Click);
			// 
			// button51
			// 
			this->button51->Location = System::Drawing::Point(413, 544);
			this->button51->Name = L"button51";
			this->button51->Size = System::Drawing::Size(75, 23);
			this->button51->TabIndex = 9;
			this->button51->Text = L"ОК";
			this->button51->UseVisualStyleBackColor = true;
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->button41);
			this->groupBox3->Controls->Add(this->checkBox3);
			this->groupBox3->Controls->Add(this->radioButton2);
			this->groupBox3->Controls->Add(this->textBox1);
			this->groupBox3->Controls->Add(this->numericUpDown2);
			this->groupBox3->Controls->Add(this->radioButton1);
			this->groupBox3->Location = System::Drawing::Point(484, 451);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(306, 86);
			this->groupBox3->TabIndex = 8;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Порог";
			// 
			// button41
			// 
			this->button41->Location = System::Drawing::Point(220, 56);
			this->button41->Name = L"button41";
			this->button41->Size = System::Drawing::Size(75, 21);
			this->button41->TabIndex = 5;
			this->button41->Text = L"Детально";
			this->button41->UseVisualStyleBackColor = true;
			// 
			// checkBox3
			// 
			this->checkBox3->AutoSize = true;
			this->checkBox3->Location = System::Drawing::Point(220, 36);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(50, 17);
			this->checkBox3->TabIndex = 4;
			this->checkBox3->Text = L"Авто";
			this->checkBox3->UseVisualStyleBackColor = true;
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(122, 33);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(66, 17);
			this->radioButton2->TabIndex = 3;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"ед. АЦП";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(122, 52);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(85, 20);
			this->textBox1->TabIndex = 2;
			// 
			// numericUpDown2
			// 
			this->numericUpDown2->Location = System::Drawing::Point(7, 54);
			this->numericUpDown2->Name = L"numericUpDown2";
			this->numericUpDown2->Size = System::Drawing::Size(85, 20);
			this->numericUpDown2->TabIndex = 1;
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(7, 31);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(38, 17);
			this->radioButton1->TabIndex = 0;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"дБ";
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->listBox1);
			this->groupBox2->Controls->Add(this->numericUpDown1);
			this->groupBox2->Controls->Add(this->label7);
			this->groupBox2->Location = System::Drawing::Point(334, 454);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(144, 83);
			this->groupBox2->TabIndex = 7;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Усиление";
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"5.9", L"84.2" });
			this->listBox1->Location = System::Drawing::Point(70, 16);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(60, 56);
			this->listBox1->TabIndex = 2;
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Location = System::Drawing::Point(6, 36);
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(58, 20);
			this->numericUpDown1->TabIndex = 1;
			this->numericUpDown1->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(7, 20);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(36, 13);
			this->label7->TabIndex = 0;
			this->label7->Text = L"К (дБ)";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->comboBox2);
			this->groupBox1->Controls->Add(this->comboBox1);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Location = System::Drawing::Point(172, 454);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(156, 83);
			this->groupBox1->TabIndex = 6;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Фильтры";
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Location = System::Drawing::Point(97, 41);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(58, 21);
			this->comboBox2->TabIndex = 2;
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(6, 41);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(60, 21);
			this->comboBox1->TabIndex = 1;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(94, 20);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(61, 13);
			this->label6->TabIndex = 0;
			this->label6->Text = L"ФНЧ (кГц)";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(7, 20);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(60, 13);
			this->label5->TabIndex = 0;
			this->label5->Text = L"ФВЧ (кГц)";
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Location = System::Drawing::Point(127, 467);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(15, 14);
			this->checkBox2->TabIndex = 5;
			this->checkBox2->UseVisualStyleBackColor = true;
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(79, 470);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(15, 14);
			this->checkBox1->TabIndex = 5;
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(115, 451);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(41, 13);
			this->label4->TabIndex = 4;
			this->label4->Text = L"Отобр.";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(76, 451);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(29, 13);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Вкл.";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(17, 451);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(38, 13);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Цвета";
			// 
			// button40
			// 
			this->button40->Location = System::Drawing::Point(20, 525);
			this->button40->Name = L"button40";
			this->button40->Size = System::Drawing::Size(96, 23);
			this->button40->TabIndex = 3;
			this->button40->Text = L"Фильтры всем";
			this->button40->UseVisualStyleBackColor = true;
			// 
			// button39
			// 
			this->button39->Location = System::Drawing::Point(20, 495);
			this->button39->Name = L"button39";
			this->button39->Size = System::Drawing::Size(96, 23);
			this->button39->TabIndex = 3;
			this->button39->Text = L"Выбрать все";
			this->button39->UseVisualStyleBackColor = true;
			// 
			// button38
			// 
			this->button38->Location = System::Drawing::Point(20, 470);
			this->button38->Name = L"button38";
			this->button38->Size = System::Drawing::Size(25, 14);
			this->button38->TabIndex = 3;
			this->button38->UseVisualStyleBackColor = true;
			// 
			// dataGridView
			// 
			this->dataGridView->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(7) {
				this->Column1,
					this->Column2, this->Column3, this->Column4, this->Column5, this->Column6, this->Column7
			});
			this->dataGridView->Dock = System::Windows::Forms::DockStyle::Top;
			this->dataGridView->Location = System::Drawing::Point(0, 0);
			this->dataGridView->Name = L"dataGridView";
			this->dataGridView->Size = System::Drawing::Size(819, 420);
			this->dataGridView->TabIndex = 2;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Вкл. Отобр.";
			this->Column1->Name = L"Column1";
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Канал";
			this->Column2->Name = L"Column2";
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"ФВЧ (кГц)";
			this->Column3->Name = L"Column3";
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"ФНЧ (кГц)";
			this->Column4->Name = L"Column4";
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"Усиление (дБ)";
			this->Column5->Name = L"Column5";
			// 
			// Column6
			// 
			this->Column6->HeaderText = L"Порог (дБ)";
			this->Column6->Name = L"Column6";
			// 
			// Column7
			// 
			this->Column7->HeaderText = L"Порог (ед.АЦП)";
			this->Column7->Name = L"Column7";
			// 
			// vScrollBar1
			// 
			this->vScrollBar1->Location = System::Drawing::Point(793, -1);
			this->vScrollBar1->Name = L"vScrollBar1";
			this->vScrollBar1->Size = System::Drawing::Size(21, 449);
			this->vScrollBar1->TabIndex = 0;
			this->vScrollBar1->Scroll += gcnew System::Windows::Forms::ScrollEventHandler(this, &param_chlsForm::vScrollBar1_Scroll);
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->button47);
			this->panel2->Controls->Add(button46);
			this->panel2->Controls->Add(this->button45);
			this->panel2->Controls->Add(this->button44);
			this->panel2->Controls->Add(this->textBox3);
			this->panel2->Controls->Add(this->checkBox9);
			this->panel2->Controls->Add(this->checkBox8);
			this->panel2->Controls->Add(this->numericUpDown5);
			this->panel2->Controls->Add(this->comboBox6);
			this->panel2->Controls->Add(this->comboBox5);
			this->panel2->Controls->Add(this->comboBox4);
			this->panel2->Controls->Add(this->comboBox3);
			this->panel2->Controls->Add(this->groupBox4);
			this->panel2->Controls->Add(this->label17);
			this->panel2->Controls->Add(this->label14);
			this->panel2->Controls->Add(this->label16);
			this->panel2->Controls->Add(this->label13);
			this->panel2->Controls->Add(this->label15);
			this->panel2->Controls->Add(this->label12);
			this->panel2->Controls->Add(this->label11);
			this->panel2->Controls->Add(this->button43);
			this->panel2->Controls->Add(this->checkBox6);
			this->panel2->Controls->Add(this->label10);
			this->panel2->Controls->Add(this->label9);
			this->panel2->Controls->Add(this->checkBox5);
			this->panel2->Controls->Add(this->checkBox4);
			this->panel2->Controls->Add(this->button42);
			this->panel2->Controls->Add(this->label8);
			this->panel2->Controls->Add(this->dataGridView1);
			this->panel2->Controls->Add(this->vScrollBar2);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel2->Location = System::Drawing::Point(3, 3);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(819, 578);
			this->panel2->TabIndex = 1;
			// 
			// button47
			// 
			this->button47->Location = System::Drawing::Point(695, 550);
			this->button47->Name = L"button47";
			this->button47->Size = System::Drawing::Size(75, 23);
			this->button47->TabIndex = 16;
			this->button47->Text = L"Справка";
			this->button47->UseVisualStyleBackColor = true;
			// 
			// button45
			// 
			this->button45->Location = System::Drawing::Point(533, 550);
			this->button45->Name = L"button45";
			this->button45->Size = System::Drawing::Size(75, 23);
			this->button45->TabIndex = 16;
			this->button45->Text = L"Отмена";
			this->button45->UseVisualStyleBackColor = true;
			// 
			// button44
			// 
			this->button44->Location = System::Drawing::Point(452, 550);
			this->button44->Name = L"button44";
			this->button44->Size = System::Drawing::Size(75, 23);
			this->button44->TabIndex = 15;
			this->button44->Text = L"ОК";
			this->button44->UseVisualStyleBackColor = true;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(392, 460);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(62, 20);
			this->textBox3->TabIndex = 14;
			// 
			// checkBox9
			// 
			this->checkBox9->AutoSize = true;
			this->checkBox9->Location = System::Drawing::Point(425, 510);
			this->checkBox9->Name = L"checkBox9";
			this->checkBox9->Size = System::Drawing::Size(15, 14);
			this->checkBox9->TabIndex = 13;
			this->checkBox9->UseVisualStyleBackColor = true;
			// 
			// checkBox8
			// 
			this->checkBox8->AutoSize = true;
			this->checkBox8->Location = System::Drawing::Point(199, 512);
			this->checkBox8->Name = L"checkBox8";
			this->checkBox8->Size = System::Drawing::Size(15, 14);
			this->checkBox8->TabIndex = 12;
			this->checkBox8->UseVisualStyleBackColor = true;
			// 
			// numericUpDown5
			// 
			this->numericUpDown5->Location = System::Drawing::Point(220, 508);
			this->numericUpDown5->Name = L"numericUpDown5";
			this->numericUpDown5->Size = System::Drawing::Size(75, 20);
			this->numericUpDown5->TabIndex = 5;
			this->numericUpDown5->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// comboBox6
			// 
			this->comboBox6->FormattingEnabled = true;
			this->comboBox6->Location = System::Drawing::Point(315, 509);
			this->comboBox6->Name = L"comboBox6";
			this->comboBox6->Size = System::Drawing::Size(82, 21);
			this->comboBox6->TabIndex = 11;
			// 
			// comboBox5
			// 
			this->comboBox5->FormattingEnabled = true;
			this->comboBox5->Location = System::Drawing::Point(315, 459);
			this->comboBox5->Name = L"comboBox5";
			this->comboBox5->Size = System::Drawing::Size(57, 21);
			this->comboBox5->TabIndex = 11;
			// 
			// comboBox4
			// 
			this->comboBox4->FormattingEnabled = true;
			this->comboBox4->Location = System::Drawing::Point(202, 459);
			this->comboBox4->Name = L"comboBox4";
			this->comboBox4->Size = System::Drawing::Size(93, 21);
			this->comboBox4->TabIndex = 11;
			// 
			// comboBox3
			// 
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Location = System::Drawing::Point(137, 459);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(48, 21);
			this->comboBox3->TabIndex = 11;
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->numericUpDown4);
			this->groupBox4->Controls->Add(this->textBox2);
			this->groupBox4->Controls->Add(this->checkBox7);
			this->groupBox4->Controls->Add(this->numericUpDown3);
			this->groupBox4->Controls->Add(this->radioButton4);
			this->groupBox4->Controls->Add(this->radioButton3);
			this->groupBox4->Location = System::Drawing::Point(466, 441);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(200, 100);
			this->groupBox4->TabIndex = 10;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Порог";
			// 
			// numericUpDown4
			// 
			this->numericUpDown4->Location = System::Drawing::Point(127, 65);
			this->numericUpDown4->Name = L"numericUpDown4";
			this->numericUpDown4->Size = System::Drawing::Size(60, 20);
			this->numericUpDown4->TabIndex = 5;
			this->numericUpDown4->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(129, 39);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(58, 20);
			this->textBox2->TabIndex = 4;
			// 
			// checkBox7
			// 
			this->checkBox7->AutoSize = true;
			this->checkBox7->Location = System::Drawing::Point(6, 65);
			this->checkBox7->Name = L"checkBox7";
			this->checkBox7->Size = System::Drawing::Size(96, 17);
			this->checkBox7->TabIndex = 3;
			this->checkBox7->Text = L"Порог канала";
			this->checkBox7->UseVisualStyleBackColor = true;
			// 
			// numericUpDown3
			// 
			this->numericUpDown3->Location = System::Drawing::Point(6, 39);
			this->numericUpDown3->Name = L"numericUpDown3";
			this->numericUpDown3->Size = System::Drawing::Size(60, 20);
			this->numericUpDown3->TabIndex = 2;
			this->numericUpDown3->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// radioButton4
			// 
			this->radioButton4->AutoSize = true;
			this->radioButton4->Location = System::Drawing::Point(102, 16);
			this->radioButton4->Name = L"radioButton4";
			this->radioButton4->Size = System::Drawing::Size(64, 17);
			this->radioButton4->TabIndex = 1;
			this->radioButton4->TabStop = true;
			this->radioButton4->Text = L"ед.АДЦ";
			this->radioButton4->UseVisualStyleBackColor = true;
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Location = System::Drawing::Point(6, 16);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(38, 17);
			this->radioButton3->TabIndex = 0;
			this->radioButton3->TabStop = true;
			this->radioButton3->Text = L"дБ";
			this->radioButton3->UseVisualStyleBackColor = true;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(411, 492);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(46, 13);
			this->label17->TabIndex = 9;
			this->label17->Text = L"AE-OSC";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(392, 438);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(65, 13);
			this->label14->TabIndex = 9;
			this->label14->Text = L"Длит. (мкс)";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(312, 492);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(85, 13);
			this->label16->TabIndex = 9;
			this->label16->Text = L"Синхронизация";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(312, 438);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(60, 13);
			this->label13->TabIndex = 9;
			this->label13->Text = L"К-во точек";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(217, 492);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(83, 13);
			this->label15->TabIndex = 9;
			this->label15->Text = L"Претриггеринг";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(209, 438);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(86, 13);
			this->label12->TabIndex = 9;
			this->label12->Text = L"Ч-та диск. (кГц)";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(144, 438);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(33, 13);
			this->label11->TabIndex = 9;
			this->label11->Text = L"Окно";
			// 
			// button43
			// 
			this->button43->Location = System::Drawing::Point(30, 525);
			this->button43->Name = L"button43";
			this->button43->Size = System::Drawing::Size(84, 23);
			this->button43->TabIndex = 8;
			this->button43->Text = L"Выбрать все";
			this->button43->UseVisualStyleBackColor = true;
			// 
			// checkBox6
			// 
			this->checkBox6->AutoSize = true;
			this->checkBox6->Location = System::Drawing::Point(8, 493);
			this->checkBox6->Name = L"checkBox6";
			this->checkBox6->Size = System::Drawing::Size(90, 17);
			this->checkBox6->TabIndex = 7;
			this->checkBox6->Text = L"Цвет канала";
			this->checkBox6->UseVisualStyleBackColor = true;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(80, 438);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(34, 13);
			this->label10->TabIndex = 6;
			this->label10->Text = L"Сохр.";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(45, 438);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(29, 13);
			this->label9->TabIndex = 6;
			this->label9->Text = L"Вкл.";
			// 
			// checkBox5
			// 
			this->checkBox5->AutoSize = true;
			this->checkBox5->Location = System::Drawing::Point(90, 458);
			this->checkBox5->Name = L"checkBox5";
			this->checkBox5->Size = System::Drawing::Size(15, 14);
			this->checkBox5->TabIndex = 5;
			this->checkBox5->UseVisualStyleBackColor = true;
			// 
			// checkBox4
			// 
			this->checkBox4->AutoSize = true;
			this->checkBox4->Location = System::Drawing::Point(51, 459);
			this->checkBox4->Name = L"checkBox4";
			this->checkBox4->Size = System::Drawing::Size(15, 14);
			this->checkBox4->TabIndex = 5;
			this->checkBox4->UseVisualStyleBackColor = true;
			// 
			// button42
			// 
			this->button42->Location = System::Drawing::Point(8, 455);
			this->button42->Name = L"button42";
			this->button42->Size = System::Drawing::Size(29, 20);
			this->button42->TabIndex = 4;
			this->button42->UseVisualStyleBackColor = true;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(7, 438);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(32, 13);
			this->label8->TabIndex = 3;
			this->label8->Text = L"Цвет";
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(10) {
				this->Column8,
					this->Column9, this->Column10, this->Column11, this->Column12, this->Column13, this->Column14, this->Column15, this->Column16,
					this->Column17
			});
			this->dataGridView1->Dock = System::Windows::Forms::DockStyle::Top;
			this->dataGridView1->Location = System::Drawing::Point(0, 0);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(819, 407);
			this->dataGridView1->TabIndex = 2;
			// 
			// Column8
			// 
			this->Column8->HeaderText = L"Вкл. Сохр";
			this->Column8->Name = L"Column8";
			// 
			// Column9
			// 
			this->Column9->HeaderText = L"Канал";
			this->Column9->Name = L"Column9";
			// 
			// Column10
			// 
			this->Column10->HeaderText = L"Окно";
			this->Column10->Name = L"Column10";
			// 
			// Column11
			// 
			this->Column11->HeaderText = L"Частоста дискретизации (кГц)";
			this->Column11->Name = L"Column11";
			// 
			// Column12
			// 
			this->Column12->HeaderText = L"Количество точек";
			this->Column12->Name = L"Column12";
			// 
			// Column13
			// 
			this->Column13->HeaderText = L"Длительность (мкс)";
			this->Column13->Name = L"Column13";
			// 
			// Column14
			// 
			this->Column14->HeaderText = L"Претриггеринг";
			this->Column14->Name = L"Column14";
			// 
			// Column15
			// 
			this->Column15->HeaderText = L"Синхронизация";
			this->Column15->Name = L"Column15";
			// 
			// Column16
			// 
			this->Column16->HeaderText = L"Порог (дБ)";
			this->Column16->Name = L"Column16";
			// 
			// Column17
			// 
			this->Column17->HeaderText = L"Порог (ед.АЦП)";
			this->Column17->Name = L"Column17";
			// 
			// vScrollBar2
			// 
			this->vScrollBar2->Location = System::Drawing::Point(753, 0);
			this->vScrollBar2->Name = L"vScrollBar2";
			this->vScrollBar2->Size = System::Drawing::Size(17, 435);
			this->vScrollBar2->TabIndex = 0;
			// 
			// panel3
			// 
			this->panel3->Controls->Add(this->button64);
			this->panel3->Controls->Add(this->button63);
			this->panel3->Controls->Add(this->button62);
			this->panel3->Controls->Add(this->button61);
			this->panel3->Controls->Add(this->button60);
			this->panel3->Controls->Add(this->textBox8);
			this->panel3->Controls->Add(this->label30);
			this->panel3->Controls->Add(this->button59);
			this->panel3->Controls->Add(this->comboBox7);
			this->panel3->Controls->Add(this->numericUpDown10);
			this->panel3->Controls->Add(this->numericUpDown9);
			this->panel3->Controls->Add(this->numericUpDown8);
			this->panel3->Controls->Add(this->numericUpDown7);
			this->panel3->Controls->Add(this->numericUpDown6);
			this->panel3->Controls->Add(this->label29);
			this->panel3->Controls->Add(this->label28);
			this->panel3->Controls->Add(this->label27);
			this->panel3->Controls->Add(this->label26);
			this->panel3->Controls->Add(this->label25);
			this->panel3->Controls->Add(this->label24);
			this->panel3->Controls->Add(this->checkBox11);
			this->panel3->Controls->Add(this->checkBox10);
			this->panel3->Controls->Add(this->label23);
			this->panel3->Controls->Add(this->label22);
			this->panel3->Controls->Add(this->dataGridView3);
			this->panel3->Controls->Add(this->vScrollBar3);
			this->panel3->Controls->Add(this->button10);
			this->panel3->Controls->Add(this->button16);
			this->panel3->Controls->Add(this->button14);
			this->panel3->Controls->Add(this->button11);
			this->panel3->Controls->Add(this->button9);
			this->panel3->Controls->Add(this->button13);
			this->panel3->Controls->Add(this->button12);
			this->panel3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel3->Location = System::Drawing::Point(0, 0);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(825, 584);
			this->panel3->TabIndex = 2;
			// 
			// button64
			// 
			this->button64->Location = System::Drawing::Point(345, 446);
			this->button64->Name = L"button64";
			this->button64->Size = System::Drawing::Size(75, 23);
			this->button64->TabIndex = 13;
			this->button64->Text = L"ОК";
			this->button64->UseVisualStyleBackColor = true;
			// 
			// button63
			// 
			this->button63->Location = System::Drawing::Point(588, 446);
			this->button63->Name = L"button63";
			this->button63->Size = System::Drawing::Size(75, 23);
			this->button63->TabIndex = 13;
			this->button63->Text = L"Справка";
			this->button63->UseVisualStyleBackColor = true;
			// 
			// button62
			// 
			this->button62->Location = System::Drawing::Point(507, 446);
			this->button62->Name = L"button62";
			this->button62->Size = System::Drawing::Size(75, 23);
			this->button62->TabIndex = 13;
			this->button62->Text = L"Применить";
			this->button62->UseVisualStyleBackColor = true;
			// 
			// button61
			// 
			this->button61->Location = System::Drawing::Point(426, 446);
			this->button61->Name = L"button61";
			this->button61->Size = System::Drawing::Size(75, 23);
			this->button61->TabIndex = 13;
			this->button61->Text = L"Отмена";
			this->button61->UseVisualStyleBackColor = true;
			// 
			// button60
			// 
			this->button60->Location = System::Drawing::Point(588, 392);
			this->button60->Name = L"button60";
			this->button60->Size = System::Drawing::Size(75, 23);
			this->button60->TabIndex = 12;
			this->button60->Text = L"Выполнить";
			this->button60->UseVisualStyleBackColor = true;
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(218, 394);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(364, 20);
			this->textBox8->TabIndex = 11;
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->Location = System::Drawing::Point(119, 397);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(93, 13);
			this->label30->TabIndex = 10;
			this->label30->Text = L"Команда каналу:";
			// 
			// button59
			// 
			this->button59->Location = System::Drawing::Point(11, 392);
			this->button59->Name = L"button59";
			this->button59->Size = System::Drawing::Size(93, 23);
			this->button59->TabIndex = 9;
			this->button59->Text = L"Выбрать все";
			this->button59->UseVisualStyleBackColor = true;
			// 
			// comboBox7
			// 
			this->comboBox7->FormattingEnabled = true;
			this->comboBox7->Location = System::Drawing::Point(507, 360);
			this->comboBox7->Name = L"comboBox7";
			this->comboBox7->Size = System::Drawing::Size(85, 21);
			this->comboBox7->TabIndex = 8;
			// 
			// numericUpDown10
			// 
			this->numericUpDown10->Location = System::Drawing::Point(432, 361);
			this->numericUpDown10->Name = L"numericUpDown10";
			this->numericUpDown10->Size = System::Drawing::Size(56, 20);
			this->numericUpDown10->TabIndex = 7;
			// 
			// numericUpDown9
			// 
			this->numericUpDown9->Location = System::Drawing::Point(340, 361);
			this->numericUpDown9->Name = L"numericUpDown9";
			this->numericUpDown9->Size = System::Drawing::Size(79, 20);
			this->numericUpDown9->TabIndex = 7;
			// 
			// numericUpDown8
			// 
			this->numericUpDown8->Location = System::Drawing::Point(255, 361);
			this->numericUpDown8->Name = L"numericUpDown8";
			this->numericUpDown8->Size = System::Drawing::Size(71, 20);
			this->numericUpDown8->TabIndex = 7;
			// 
			// numericUpDown7
			// 
			this->numericUpDown7->Location = System::Drawing::Point(166, 361);
			this->numericUpDown7->Name = L"numericUpDown7";
			this->numericUpDown7->Size = System::Drawing::Size(70, 20);
			this->numericUpDown7->TabIndex = 7;
			// 
			// numericUpDown6
			// 
			this->numericUpDown6->Location = System::Drawing::Point(79, 361);
			this->numericUpDown6->Name = L"numericUpDown6";
			this->numericUpDown6->Size = System::Drawing::Size(78, 20);
			this->numericUpDown6->TabIndex = 7;
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Location = System::Drawing::Point(511, 344);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(29, 13);
			this->label29->TabIndex = 6;
			this->label29->Text = L"ПАЭ";
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Location = System::Drawing::Point(429, 344);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(36, 13);
			this->label28->TabIndex = 6;
			this->label28->Text = L"Smax:";
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Location = System::Drawing::Point(342, 344);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(77, 13);
			this->label27->TabIndex = 6;
			this->label27->Text = L"Част. в. (кГц):";
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Location = System::Drawing::Point(252, 344);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(77, 13);
			this->label26->TabIndex = 6;
			this->label26->Text = L"Част. н. (кГц):";
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Location = System::Drawing::Point(163, 343);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(83, 13);
			this->label25->TabIndex = 6;
			this->label25->Text = L"Длительность:";
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Location = System::Drawing::Point(76, 343);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(81, 13);
			this->label24->TabIndex = 6;
			this->label24->Text = L"Амплитуда (В):";
			// 
			// checkBox11
			// 
			this->checkBox11->AutoSize = true;
			this->checkBox11->Location = System::Drawing::Point(48, 361);
			this->checkBox11->Name = L"checkBox11";
			this->checkBox11->Size = System::Drawing::Size(15, 14);
			this->checkBox11->TabIndex = 5;
			this->checkBox11->UseVisualStyleBackColor = true;
			// 
			// checkBox10
			// 
			this->checkBox10->AutoSize = true;
			this->checkBox10->Location = System::Drawing::Point(14, 361);
			this->checkBox10->Name = L"checkBox10";
			this->checkBox10->Size = System::Drawing::Size(15, 14);
			this->checkBox10->TabIndex = 5;
			this->checkBox10->UseVisualStyleBackColor = true;
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Location = System::Drawing::Point(42, 344);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(28, 13);
			this->label23->TabIndex = 4;
			this->label23->Text = L"АКК";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Location = System::Drawing::Point(9, 344);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(29, 13);
			this->label22->TabIndex = 4;
			this->label22->Text = L"Вкл.";
			// 
			// dataGridView3
			// 
			this->dataGridView3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView3->Location = System::Drawing::Point(14, 28);
			this->dataGridView3->Name = L"dataGridView3";
			this->dataGridView3->Size = System::Drawing::Size(630, 307);
			this->dataGridView3->TabIndex = 3;
			// 
			// vScrollBar3
			// 
			this->vScrollBar3->Location = System::Drawing::Point(646, 0);
			this->vScrollBar3->Name = L"vScrollBar3";
			this->vScrollBar3->Size = System::Drawing::Size(17, 335);
			this->vScrollBar3->TabIndex = 2;
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(-1, -1);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(25, 23);
			this->button10->TabIndex = 1;
			this->button10->UseVisualStyleBackColor = true;
			// 
			// button16
			// 
			this->button16->Location = System::Drawing::Point(29, -1);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(75, 23);
			this->button16->TabIndex = 1;
			this->button16->Text = L"Вкл. Сохр.";
			this->button16->UseVisualStyleBackColor = true;
			// 
			// button14
			// 
			this->button14->Location = System::Drawing::Point(390, -1);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(75, 23);
			this->button14->TabIndex = 1;
			this->button14->Text = L"Длительность (мкс)";
			this->button14->UseVisualStyleBackColor = true;
			// 
			// button11
			// 
			this->button11->Location = System::Drawing::Point(161, -1);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(75, 23);
			this->button11->TabIndex = 1;
			this->button11->Text = L"Окно";
			this->button11->UseVisualStyleBackColor = true;
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(98, -1);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(75, 23);
			this->button9->TabIndex = 1;
			this->button9->Text = L"Канал";
			this->button9->UseVisualStyleBackColor = true;
			// 
			// button13
			// 
			this->button13->Location = System::Drawing::Point(303, -1);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(93, 23);
			this->button13->TabIndex = 1;
			this->button13->Text = L"Количество точек";
			this->button13->UseVisualStyleBackColor = true;
			// 
			// button12
			// 
			this->button12->Location = System::Drawing::Point(230, -1);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(75, 23);
			this->button12->TabIndex = 1;
			this->button12->Text = L"Частота дискритизации (кГЦ)";
			this->button12->UseVisualStyleBackColor = true;
			// 
			// panel4
			// 
			this->panel4->Controls->Add(this->button58);
			this->panel4->Controls->Add(this->button57);
			this->panel4->Controls->Add(this->button56);
			this->panel4->Controls->Add(this->button55);
			this->panel4->Controls->Add(this->textBox7);
			this->panel4->Controls->Add(this->button50);
			this->panel4->Controls->Add(this->label21);
			this->panel4->Controls->Add(this->label20);
			this->panel4->Controls->Add(this->label19);
			this->panel4->Controls->Add(this->label18);
			this->panel4->Controls->Add(this->textBox6);
			this->panel4->Controls->Add(this->textBox5);
			this->panel4->Controls->Add(this->textBox4);
			this->panel4->Controls->Add(this->button49);
			this->panel4->Controls->Add(this->dataGridView2);
			this->panel4->Controls->Add(this->vScrollBar4);
			this->panel4->Controls->Add(this->button19);
			this->panel4->Controls->Add(this->button48);
			this->panel4->Controls->Add(this->button17);
			this->panel4->Controls->Add(this->button18);
			this->panel4->Controls->Add(this->button15);
			this->panel4->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel4->Location = System::Drawing::Point(0, 0);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(825, 584);
			this->panel4->TabIndex = 3;
			// 
			// button58
			// 
			this->button58->Location = System::Drawing::Point(576, 446);
			this->button58->Name = L"button58";
			this->button58->Size = System::Drawing::Size(75, 23);
			this->button58->TabIndex = 9;
			this->button58->Text = L"Справка";
			this->button58->UseVisualStyleBackColor = true;
			// 
			// button57
			// 
			this->button57->Location = System::Drawing::Point(495, 446);
			this->button57->Name = L"button57";
			this->button57->Size = System::Drawing::Size(75, 23);
			this->button57->TabIndex = 9;
			this->button57->Text = L"Применить";
			this->button57->UseVisualStyleBackColor = true;
			// 
			// button56
			// 
			this->button56->Location = System::Drawing::Point(414, 446);
			this->button56->Name = L"button56";
			this->button56->Size = System::Drawing::Size(75, 23);
			this->button56->TabIndex = 9;
			this->button56->Text = L"Отмена";
			this->button56->UseVisualStyleBackColor = true;
			// 
			// button55
			// 
			this->button55->Location = System::Drawing::Point(333, 446);
			this->button55->Name = L"button55";
			this->button55->Size = System::Drawing::Size(75, 23);
			this->button55->TabIndex = 9;
			this->button55->Text = L"ОК";
			this->button55->UseVisualStyleBackColor = true;
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(219, 402);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(53, 20);
			this->textBox7->TabIndex = 8;
			// 
			// button50
			// 
			this->button50->Location = System::Drawing::Point(278, 401);
			this->button50->Name = L"button50";
			this->button50->Size = System::Drawing::Size(48, 23);
			this->button50->TabIndex = 7;
			this->button50->Text = L"Поиск";
			this->button50->UseVisualStyleBackColor = true;
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(5, 405);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(208, 13);
			this->label21->TabIndex = 6;
			this->label21->Text = L"Поиск модуля по физическому номеру:";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(392, 351);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(142, 13);
			this->label20->TabIndex = 5;
			this->label20->Text = L"Макс. длительность (мкс):";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(253, 351);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(118, 13);
			this->label19->TabIndex = 5;
			this->label19->Text = L"Мертвое время (мкс):";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(100, 350);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(142, 13);
			this->label18->TabIndex = 5;
			this->label18->Text = L"Инт. контроля импю (мкс):";
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(395, 366);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(139, 20);
			this->textBox6->TabIndex = 4;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(256, 366);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(115, 20);
			this->textBox5->TabIndex = 4;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(98, 366);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(142, 20);
			this->textBox4->TabIndex = 4;
			// 
			// button49
			// 
			this->button49->Location = System::Drawing::Point(6, 363);
			this->button49->Name = L"button49";
			this->button49->Size = System::Drawing::Size(86, 23);
			this->button49->TabIndex = 3;
			this->button49->Text = L"Выбрать все";
			this->button49->UseVisualStyleBackColor = true;
			// 
			// dataGridView2
			// 
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Location = System::Drawing::Point(3, 28);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->Size = System::Drawing::Size(628, 311);
			this->dataGridView2->TabIndex = 2;
			// 
			// vScrollBar4
			// 
			this->vScrollBar4->Location = System::Drawing::Point(634, 0);
			this->vScrollBar4->Name = L"vScrollBar4";
			this->vScrollBar4->Size = System::Drawing::Size(17, 339);
			this->vScrollBar4->TabIndex = 0;
			this->vScrollBar4->Scroll += gcnew System::Windows::Forms::ScrollEventHandler(this, &param_chlsForm::vScrollBar1_Scroll);
			// 
			// button19
			// 
			this->button19->Location = System::Drawing::Point(-1, -1);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(25, 23);
			this->button19->TabIndex = 1;
			this->button19->UseVisualStyleBackColor = true;
			// 
			// button48
			// 
			this->button48->Location = System::Drawing::Point(428, -1);
			this->button48->Name = L"button48";
			this->button48->Size = System::Drawing::Size(203, 23);
			this->button48->TabIndex = 1;
			this->button48->Text = L"Максимальная длительность (мкс)";
			this->button48->UseVisualStyleBackColor = true;
			// 
			// button17
			// 
			this->button17->Location = System::Drawing::Point(308, -1);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(123, 23);
			this->button17->TabIndex = 1;
			this->button17->Text = L"Мертвое время (мкс)";
			this->button17->UseVisualStyleBackColor = true;
			// 
			// button18
			// 
			this->button18->Location = System::Drawing::Point(29, -1);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(75, 23);
			this->button18->TabIndex = 1;
			this->button18->Text = L"Канал";
			this->button18->UseVisualStyleBackColor = true;
			// 
			// button15
			// 
			this->button15->Location = System::Drawing::Point(101, -1);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(209, 23);
			this->button15->TabIndex = 1;
			this->button15->Text = L"Интервал контроля импульса (мкс)";
			this->button15->UseVisualStyleBackColor = true;
			// 
			// panel5
			// 
			this->panel5->Controls->Add(this->textBox11);
			this->panel5->Controls->Add(this->textBox10);
			this->panel5->Controls->Add(this->textBox9);
			this->panel5->Controls->Add(this->label38);
			this->panel5->Controls->Add(this->comboBox11);
			this->panel5->Controls->Add(this->label37);
			this->panel5->Controls->Add(this->button65);
			this->panel5->Controls->Add(this->label36);
			this->panel5->Controls->Add(this->label35);
			this->panel5->Controls->Add(this->comboBox10);
			this->panel5->Controls->Add(this->label34);
			this->panel5->Controls->Add(this->comboBox9);
			this->panel5->Controls->Add(this->label33);
			this->panel5->Controls->Add(this->comboBox8);
			this->panel5->Controls->Add(this->label32);
			this->panel5->Controls->Add(this->checkBox12);
			this->panel5->Controls->Add(this->label31);
			this->panel5->Controls->Add(this->dataGridView4);
			this->panel5->Controls->Add(this->vScrollBar5);
			this->panel5->Controls->Add(this->button36);
			this->panel5->Controls->Add(this->button37);
			this->panel5->Controls->Add(this->button32);
			this->panel5->Controls->Add(this->button35);
			this->panel5->Controls->Add(this->button31);
			this->panel5->Controls->Add(this->button33);
			this->panel5->Controls->Add(this->button34);
			this->panel5->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel5->Location = System::Drawing::Point(0, 0);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(825, 584);
			this->panel5->TabIndex = 4;
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(496, 306);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(67, 20);
			this->textBox11->TabIndex = 18;
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(407, 306);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(67, 20);
			this->textBox10->TabIndex = 17;
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(263, 367);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(300, 20);
			this->textBox9->TabIndex = 16;
			this->textBox9->Text = L"Температура модуля, град.";
			// 
			// label38
			// 
			this->label38->AutoSize = true;
			this->label38->Location = System::Drawing::Point(260, 351);
			this->label38->Name = L"label38";
			this->label38->Size = System::Drawing::Size(83, 13);
			this->label38->TabIndex = 15;
			this->label38->Text = L"Наименование";
			// 
			// comboBox11
			// 
			this->comboBox11->FormattingEnabled = true;
			this->comboBox11->Location = System::Drawing::Point(121, 366);
			this->comboBox11->Name = L"comboBox11";
			this->comboBox11->Size = System::Drawing::Size(121, 21);
			this->comboBox11->TabIndex = 14;
			// 
			// label37
			// 
			this->label37->AutoSize = true;
			this->label37->Location = System::Drawing::Point(153, 350);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(61, 13);
			this->label37->TabIndex = 13;
			this->label37->Text = L"Параметр:";
			// 
			// button65
			// 
			this->button65->Location = System::Drawing::Point(11, 364);
			this->button65->Name = L"button65";
			this->button65->Size = System::Drawing::Size(75, 23);
			this->button65->TabIndex = 12;
			this->button65->Text = L"Выбрать все";
			this->button65->UseVisualStyleBackColor = true;
			// 
			// label36
			// 
			this->label36->AutoSize = true;
			this->label36->Location = System::Drawing::Point(499, 290);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(23, 13);
			this->label36->TabIndex = 11;
			this->label36->Text = L"K2:";
			// 
			// label35
			// 
			this->label35->AutoSize = true;
			this->label35->Location = System::Drawing::Point(409, 291);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(23, 13);
			this->label35->TabIndex = 11;
			this->label35->Text = L"K1:";
			// 
			// comboBox10
			// 
			this->comboBox10->FormattingEnabled = true;
			this->comboBox10->Location = System::Drawing::Point(275, 312);
			this->comboBox10->Name = L"comboBox10";
			this->comboBox10->Size = System::Drawing::Size(47, 21);
			this->comboBox10->TabIndex = 10;
			// 
			// label34
			// 
			this->label34->AutoSize = true;
			this->label34->Location = System::Drawing::Point(225, 320);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(44, 13);
			this->label34->TabIndex = 9;
			this->label34->Text = L"x10 exp";
			// 
			// comboBox9
			// 
			this->comboBox9->FormattingEnabled = true;
			this->comboBox9->Location = System::Drawing::Point(156, 312);
			this->comboBox9->Name = L"comboBox9";
			this->comboBox9->Size = System::Drawing::Size(63, 21);
			this->comboBox9->TabIndex = 8;
			// 
			// label33
			// 
			this->label33->AutoSize = true;
			this->label33->Location = System::Drawing::Point(205, 289);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(73, 13);
			this->label33->TabIndex = 7;
			this->label33->Text = L"Частота (Гц):";
			// 
			// comboBox8
			// 
			this->comboBox8->FormattingEnabled = true;
			this->comboBox8->Location = System::Drawing::Point(66, 312);
			this->comboBox8->Name = L"comboBox8";
			this->comboBox8->Size = System::Drawing::Size(61, 21);
			this->comboBox8->TabIndex = 6;
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->Location = System::Drawing::Point(67, 289);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(60, 13);
			this->label32->TabIndex = 5;
			this->label32->Text = L"Усиление:";
			// 
			// checkBox12
			// 
			this->checkBox12->AutoSize = true;
			this->checkBox12->Location = System::Drawing::Point(12, 306);
			this->checkBox12->Name = L"checkBox12";
			this->checkBox12->Size = System::Drawing::Size(15, 14);
			this->checkBox12->TabIndex = 4;
			this->checkBox12->UseVisualStyleBackColor = true;
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->Location = System::Drawing::Point(6, 291);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(29, 13);
			this->label31->TabIndex = 3;
			this->label31->Text = L"Вкл.";
			// 
			// dataGridView4
			// 
			this->dataGridView4->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView4->Location = System::Drawing::Point(4, 28);
			this->dataGridView4->Name = L"dataGridView4";
			this->dataGridView4->Size = System::Drawing::Size(539, 244);
			this->dataGridView4->TabIndex = 2;
			// 
			// vScrollBar5
			// 
			this->vScrollBar5->Location = System::Drawing::Point(546, 0);
			this->vScrollBar5->Name = L"vScrollBar5";
			this->vScrollBar5->Size = System::Drawing::Size(17, 272);
			this->vScrollBar5->TabIndex = 0;
			this->vScrollBar5->Scroll += gcnew System::Windows::Forms::ScrollEventHandler(this, &param_chlsForm::vScrollBar1_Scroll);
			// 
			// button36
			// 
			this->button36->Location = System::Drawing::Point(-1, -1);
			this->button36->Name = L"button36";
			this->button36->Size = System::Drawing::Size(25, 23);
			this->button36->TabIndex = 1;
			this->button36->UseVisualStyleBackColor = true;
			// 
			// button37
			// 
			this->button37->Location = System::Drawing::Point(433, -1);
			this->button37->Name = L"button37";
			this->button37->Size = System::Drawing::Size(110, 23);
			this->button37->TabIndex = 1;
			this->button37->Text = L"Коэффициент К2";
			this->button37->UseVisualStyleBackColor = true;
			// 
			// button32
			// 
			this->button32->Location = System::Drawing::Point(330, -1);
			this->button32->Name = L"button32";
			this->button32->Size = System::Drawing::Size(107, 23);
			this->button32->TabIndex = 1;
			this->button32->Text = L"Коэффициент К1";
			this->button32->UseVisualStyleBackColor = true;
			// 
			// button35
			// 
			this->button35->Location = System::Drawing::Point(26, -1);
			this->button35->Name = L"button35";
			this->button35->Size = System::Drawing::Size(75, 23);
			this->button35->TabIndex = 1;
			this->button35->Text = L"Вкл.";
			this->button35->UseVisualStyleBackColor = true;
			// 
			// button31
			// 
			this->button31->Location = System::Drawing::Point(240, -1);
			this->button31->Name = L"button31";
			this->button31->Size = System::Drawing::Size(93, 23);
			this->button31->TabIndex = 1;
			this->button31->Text = L"Частота (ГЦ)";
			this->button31->UseVisualStyleBackColor = true;
			// 
			// button33
			// 
			this->button33->Location = System::Drawing::Point(98, -1);
			this->button33->Name = L"button33";
			this->button33->Size = System::Drawing::Size(75, 23);
			this->button33->TabIndex = 1;
			this->button33->Text = L"Канал";
			this->button33->UseVisualStyleBackColor = true;
			// 
			// button34
			// 
			this->button34->Location = System::Drawing::Point(167, -1);
			this->button34->Name = L"button34";
			this->button34->Size = System::Drawing::Size(75, 23);
			this->button34->TabIndex = 1;
			this->button34->Text = L"Усиление";
			this->button34->UseVisualStyleBackColor = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.25F));
			this->label1->Location = System::Drawing::Point(12, 5);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(61, 16);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Главная";
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage_base);
			this->tabControl1->Controls->Add(this->tabPage_osc);
			this->tabControl1->Controls->Add(this->tabPage_time);
			this->tabControl1->Controls->Add(this->tabPage_calibrator);
			this->tabControl1->Controls->Add(this->tabPage_input_params);
			this->tabControl1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tabControl1->Location = System::Drawing::Point(0, 0);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(833, 610);
			this->tabControl1->TabIndex = 8;
			// 
			// tabPage_base
			// 
			this->tabPage_base->Controls->Add(this->panel1);
			this->tabPage_base->Location = System::Drawing::Point(4, 22);
			this->tabPage_base->Name = L"tabPage_base";
			this->tabPage_base->Padding = System::Windows::Forms::Padding(3);
			this->tabPage_base->Size = System::Drawing::Size(825, 584);
			this->tabPage_base->TabIndex = 0;
			this->tabPage_base->Text = L"Основные";
			this->tabPage_base->UseVisualStyleBackColor = true;
			// 
			// tabPage_osc
			// 
			this->tabPage_osc->Controls->Add(this->panel2);
			this->tabPage_osc->Location = System::Drawing::Point(4, 22);
			this->tabPage_osc->Name = L"tabPage_osc";
			this->tabPage_osc->Padding = System::Windows::Forms::Padding(3);
			this->tabPage_osc->Size = System::Drawing::Size(825, 584);
			this->tabPage_osc->TabIndex = 1;
			this->tabPage_osc->Text = L"Осциллограф";
			this->tabPage_osc->UseVisualStyleBackColor = true;
			// 
			// tabPage_time
			// 
			this->tabPage_time->Controls->Add(this->panel4);
			this->tabPage_time->Location = System::Drawing::Point(4, 22);
			this->tabPage_time->Name = L"tabPage_time";
			this->tabPage_time->Size = System::Drawing::Size(825, 584);
			this->tabPage_time->TabIndex = 2;
			this->tabPage_time->Text = L"Временные";
			this->tabPage_time->UseVisualStyleBackColor = true;
			// 
			// tabPage_calibrator
			// 
			this->tabPage_calibrator->Controls->Add(this->panel3);
			this->tabPage_calibrator->Location = System::Drawing::Point(4, 22);
			this->tabPage_calibrator->Name = L"tabPage_calibrator";
			this->tabPage_calibrator->Size = System::Drawing::Size(825, 584);
			this->tabPage_calibrator->TabIndex = 3;
			this->tabPage_calibrator->Text = L"Калибратор";
			this->tabPage_calibrator->UseVisualStyleBackColor = true;
			// 
			// tabPage_input_params
			// 
			this->tabPage_input_params->Controls->Add(this->panel5);
			this->tabPage_input_params->Location = System::Drawing::Point(4, 22);
			this->tabPage_input_params->Name = L"tabPage_input_params";
			this->tabPage_input_params->Size = System::Drawing::Size(825, 584);
			this->tabPage_input_params->TabIndex = 4;
			this->tabPage_input_params->Text = L"Параметрические входы";
			this->tabPage_input_params->UseVisualStyleBackColor = true;
			// 
			// param_chlsForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(833, 610);
			this->Controls->Add(this->tabControl1);
			this->Controls->Add(this->label1);
			this->Name = L"param_chlsForm";
			this->Text = L"Параметры каналов";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->EndInit();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView))->EndInit();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown5))->EndInit();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown10))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->EndInit();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView4))->EndInit();
			this->tabControl1->ResumeLayout(false);
			this->tabPage_base->ResumeLayout(false);
			this->tabPage_osc->ResumeLayout(false);
			this->tabPage_time->ResumeLayout(false);
			this->tabPage_calibrator->ResumeLayout(false);
			this->tabPage_input_params->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void vScrollBar1_Scroll(System::Object^ sender, System::Windows::Forms::ScrollEventArgs^ e) {
	}



private: System::Void button52_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
};
}
