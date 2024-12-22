#pragma once
#include "param_chlsForm.h"
#include "aboutForm.h"
#include "create_project_Form.h"
#include "create_locationForm.h"
#include "param_chlsForm.h"
#include "amp_settingsForm.h"
#include "statistic_settingsForm.h"
#include "gb_settingsForm.h"
#include "jb_settingsForm.h"
#include "pictureBoxForm.h"
#include "new_measurement_speed_distance.h"
#include "param_controllersForm.h"


namespace xakaton2024 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для mainForm
	/// </summary>
	public ref class mainForm : public System::Windows::Forms::Form
	{
	public:
		mainForm(void)
		{
			InitializeComponent();
			redraw_icons();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		/// 
		/// 
		
		~mainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
		     pictureBoxForm^ pb_ldc;
			 pictureBoxForm^ pb_SHdiag;

	protected:


	private: System::Windows::Forms::ToolStripMenuItem^ управлениеToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ локацияToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ классификацияToolStripMenuItem;




	private: System::Windows::Forms::ToolStrip^ toolStrip1;
	private: System::Windows::Forms::ToolStripButton^ toolStripButton1;
	private: System::Windows::Forms::ToolStripButton^ button_new_record;


	private: System::Windows::Forms::ToolStripButton^ button_refresh;

	private: System::Windows::Forms::ToolStripButton^ toolStripButton4;
	private: System::Windows::Forms::ToolStripButton^ toolStripButton5;
	private: System::Windows::Forms::ToolStripButton^ toolStripButton6;
	private: System::Windows::Forms::ToolStripButton^ button_channel_params;

	private: System::Windows::Forms::ToolStripButton^ button_OSC_params;
	private: System::Windows::Forms::ToolStripButton^ button_auto;


	private: System::Windows::Forms::ToolStripButton^ button_volume;

	private: System::Windows::Forms::ToolStripButton^ toolStripButton11;
	private: System::Windows::Forms::ToolStripButton^ toolStripButton12;
	private: System::Windows::Forms::ToolStripButton^ button_zoom_in;
	private: System::Windows::Forms::ToolStripButton^ button_zoom_out;
	private: System::Windows::Forms::ToolStripButton^ button_polygon;
	private: System::Windows::Forms::ToolStripButton^ button_shift;
	private: System::Windows::Forms::ToolStripButton^ button_clear;
	private: System::Windows::Forms::ToolStripButton^ button_return_win;






	private: System::Windows::Forms::ToolStripButton^ button_help;

	private: System::Windows::Forms::TabControl^ tabControl1;
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::TabPage^ tabPage3;
	private: System::Windows::Forms::TabPage^ tabPage4;





	private: System::Windows::Forms::ToolStripMenuItem^ новаяЛокацияToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ открытьЛокациюToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ закрытьЛокациюToolStripMenuItem;
	private: System::Windows::Forms::ToolStripSeparator^ toolStripSeparator7;
	private: System::Windows::Forms::ToolStripMenuItem^ очисткаОконЛокацииToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ восстановлениеОконЛокацииToolStripMenuItem;
	private: System::Windows::Forms::ToolStripSeparator^ toolStripSeparator8;
	private: System::Windows::Forms::ToolStripMenuItem^ новоеИзмерениеСкоростиToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ открытьКалибровкуКаналовToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ изменитьПараметрыКалибровкиToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ закрытьКалибровкуКаналовToolStripMenuItem;
	private: System::Windows::Forms::MenuStrip^ menuStrip2;
	private: System::Windows::Forms::ToolStripMenuItem^ печатьToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ видToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ окноToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ помощьToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ создатьПроектToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ открытьПроектToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ закрытьПроектToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripSeparator^ toolStripSeparator9;
	private: System::Windows::Forms::ToolStripMenuItem^ создатьНастройкиКомплексаToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ открытьНастройкиToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ сохранитьНастройкиToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem2;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem3;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem4;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem5;
	private: System::Windows::Forms::ToolStripSeparator^ toolStripSeparator10;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem6;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem7;
	private: System::Windows::Forms::ToolStripSeparator^ toolStripSeparator11;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem8;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem9;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem10;
	private: System::Windows::Forms::ToolStripSeparator^ toolStripSeparator12;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem11;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem12;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem13;
	private: System::Windows::Forms::ToolStripSeparator^ toolStripSeparator13;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem14;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem15;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem16;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem17;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem18;
	private: System::Windows::Forms::ToolStripSeparator^ toolStripSeparator14;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem19;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem20;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem21;
	private: System::Windows::Forms::ToolStripSeparator^ toolStripSeparator15;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem22;

private: System::Windows::Forms::ToolStripMenuItem^ настройкиToolStripMenuItem;
private: System::Windows::Forms::ToolStripSeparator^ toolStripSeparator1;
private: System::Windows::Forms::ToolStripSeparator^ toolStripSeparator4;
private: System::Windows::Forms::ToolStripButton^ toolStripButton20;
private: System::Windows::Forms::ToolStripSeparator^ toolStripSeparator3;
private: System::Windows::Forms::ToolStripSeparator^ toolStripSeparator2;
private: System::Windows::Forms::ToolStripSeparator^ toolStripSeparator5;
private: System::Windows::Forms::ToolStripSeparator^ toolStripSeparator6;
private: System::Windows::Forms::ToolStripButton^ toolStripButton21;
private: System::Windows::Forms::ToolStripButton^ toolStripButton22;
private: System::Windows::Forms::ImageList^ imageList;
private: System::Windows::Forms::ToolStripComboBox^ toolStripComboBox1;
private: System::Windows::Forms::ToolStripMenuItem^ параметрыКаналовToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ параметрыКонтроллеровToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ амплитудныйКритерийToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ критерийGBT181822012ToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ критерийJBT107642023ToolStripMenuItem;
private: System::Windows::Forms::ToolStripSeparator^ toolStripSeparator16;
private: System::Windows::Forms::ToolStripMenuItem^ button_local_dynamic_crit;
private: System::Windows::Forms::ToolStripMenuItem^ button_SHdiagram;


private: System::Windows::Forms::ToolStripMenuItem^ статистическToolStripMenuItem;
private: System::Windows::Forms::ToolStripButton^ button_viewfilt_currentfile;
private: System::Windows::Forms::ToolStripSeparator^ toolStripSeparator17;
private: System::Windows::Forms::SplitContainer^ splitContainer1;
private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
private: System::Windows::Forms::Label^ label2;
private: System::Windows::Forms::Label^ label1;
private: System::Windows::Forms::CheckBox^ checkBox1;
private: System::Windows::Forms::CheckBox^ checkBox2;
private: System::Windows::Forms::CheckBox^ checkBox4;
private: System::Windows::Forms::CheckBox^ checkBox5;
private: System::Windows::Forms::CheckBox^ checkBox6;
private: System::Windows::Forms::CheckBox^ checkBox7;
private: System::Windows::Forms::CheckBox^ checkBox8;
private: System::Windows::Forms::CheckBox^ checkBox3;


private: System::ComponentModel::IContainer^ components;







	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(mainForm::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->toolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->создатьПроектToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->открытьПроектToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->закрытьПроектToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator9 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->создатьНастройкиКомплексаToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->открытьНастройкиToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->сохранитьНастройкиToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->локацияToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->новаяЛокацияToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->открытьЛокациюToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->закрытьЛокациюToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator7 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->очисткаОконЛокацииToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->восстановлениеОконЛокацииToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator8 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->новоеИзмерениеСкоростиToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->открытьКалибровкуКаналовToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->изменитьПараметрыКалибровкиToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->закрытьКалибровкуКаналовToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->управлениеToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->классификацияToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->амплитудныйКритерийToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->статистическToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->критерийGBT181822012ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->критерийJBT107642023ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator16 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->button_local_dynamic_crit = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->button_SHdiagram = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->настройкиToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->параметрыКаналовToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->параметрыКонтроллеровToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStrip1 = (gcnew System::Windows::Forms::ToolStrip());
			this->toolStripButton1 = (gcnew System::Windows::Forms::ToolStripButton());
			this->button_viewfilt_currentfile = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripSeparator1 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->button_refresh = (gcnew System::Windows::Forms::ToolStripButton());
			this->button_new_record = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripSeparator5 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->toolStripButton4 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButton5 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButton6 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripSeparator6 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->button_channel_params = (gcnew System::Windows::Forms::ToolStripButton());
			this->button_OSC_params = (gcnew System::Windows::Forms::ToolStripButton());
			this->button_auto = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripSeparator4 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->toolStripButton20 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButton21 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButton22 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButton11 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButton12 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripSeparator3 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->button_zoom_in = (gcnew System::Windows::Forms::ToolStripButton());
			this->button_zoom_out = (gcnew System::Windows::Forms::ToolStripButton());
			this->button_polygon = (gcnew System::Windows::Forms::ToolStripButton());
			this->button_shift = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripSeparator17 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->button_clear = (gcnew System::Windows::Forms::ToolStripButton());
			this->button_return_win = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripSeparator2 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->button_volume = (gcnew System::Windows::Forms::ToolStripButton());
			this->button_help = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripComboBox1 = (gcnew System::Windows::Forms::ToolStripComboBox());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->menuStrip2 = (gcnew System::Windows::Forms::MenuStrip());
			this->toolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem3 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem4 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem5 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator10 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->toolStripMenuItem6 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem7 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator11 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->toolStripMenuItem8 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem9 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem10 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator12 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->toolStripMenuItem11 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem12 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem13 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator13 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->toolStripMenuItem14 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem15 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem16 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem17 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem18 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator14 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->toolStripMenuItem19 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem20 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem21 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator15 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->toolStripMenuItem22 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->видToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->печатьToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->окноToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->помощьToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->imageList = (gcnew System::Windows::Forms::ImageList(this->components));
			this->splitContainer1 = (gcnew System::Windows::Forms::SplitContainer());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox4 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox5 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox6 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox7 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox8 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->menuStrip1->SuspendLayout();
			this->toolStrip1->SuspendLayout();
			this->tabControl1->SuspendLayout();
			this->menuStrip2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer1))->BeginInit();
			this->splitContainer1->Panel1->SuspendLayout();
			this->splitContainer1->Panel2->SuspendLayout();
			this->splitContainer1->SuspendLayout();
			this->tableLayoutPanel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->toolStripMenuItem1,
					this->локацияToolStripMenuItem, this->управлениеToolStripMenuItem, this->классификацияToolStripMenuItem, this->настройкиToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 24);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1090, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// toolStripMenuItem1
			// 
			this->toolStripMenuItem1->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(7) {
				this->создатьПроектToolStripMenuItem1,
					this->открытьПроектToolStripMenuItem1, this->закрытьПроектToolStripMenuItem1, this->toolStripSeparator9, this->создатьНастройкиКомплексаToolStripMenuItem,
					this->открытьНастройкиToolStripMenuItem1, this->сохранитьНастройкиToolStripMenuItem1
			});
			this->toolStripMenuItem1->Name = L"toolStripMenuItem1";
			this->toolStripMenuItem1->Size = System::Drawing::Size(105, 20);
			this->toolStripMenuItem1->Text = L"Начало работы";
			// 
			// создатьПроектToolStripMenuItem1
			// 
			this->создатьПроектToolStripMenuItem1->Name = L"создатьПроектToolStripMenuItem1";
			this->создатьПроектToolStripMenuItem1->Size = System::Drawing::Size(241, 22);
			this->создатьПроектToolStripMenuItem1->Text = L"Создать проект";
			// 
			// открытьПроектToolStripMenuItem1
			// 
			this->открытьПроектToolStripMenuItem1->Name = L"открытьПроектToolStripMenuItem1";
			this->открытьПроектToolStripMenuItem1->Size = System::Drawing::Size(241, 22);
			this->открытьПроектToolStripMenuItem1->Text = L"Открыть проект";
			// 
			// закрытьПроектToolStripMenuItem1
			// 
			this->закрытьПроектToolStripMenuItem1->Name = L"закрытьПроектToolStripMenuItem1";
			this->закрытьПроектToolStripMenuItem1->Size = System::Drawing::Size(241, 22);
			this->закрытьПроектToolStripMenuItem1->Text = L"Закрыть проект";
			// 
			// toolStripSeparator9
			// 
			this->toolStripSeparator9->Name = L"toolStripSeparator9";
			this->toolStripSeparator9->Size = System::Drawing::Size(238, 6);
			// 
			// создатьНастройкиКомплексаToolStripMenuItem
			// 
			this->создатьНастройкиКомплексаToolStripMenuItem->Name = L"создатьНастройкиКомплексаToolStripMenuItem";
			this->создатьНастройкиКомплексаToolStripMenuItem->Size = System::Drawing::Size(241, 22);
			this->создатьНастройкиКомплексаToolStripMenuItem->Text = L"Создать настройки комплекса";
			// 
			// открытьНастройкиToolStripMenuItem1
			// 
			this->открытьНастройкиToolStripMenuItem1->Name = L"открытьНастройкиToolStripMenuItem1";
			this->открытьНастройкиToolStripMenuItem1->Size = System::Drawing::Size(241, 22);
			this->открытьНастройкиToolStripMenuItem1->Text = L"Открыть настройки";
			// 
			// сохранитьНастройкиToolStripMenuItem1
			// 
			this->сохранитьНастройкиToolStripMenuItem1->Name = L"сохранитьНастройкиToolStripMenuItem1";
			this->сохранитьНастройкиToolStripMenuItem1->Size = System::Drawing::Size(241, 22);
			this->сохранитьНастройкиToolStripMenuItem1->Text = L"Сохранить настройки";
			// 
			// локацияToolStripMenuItem
			// 
			this->локацияToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(11) {
				this->новаяЛокацияToolStripMenuItem,
					this->открытьЛокациюToolStripMenuItem, this->закрытьЛокациюToolStripMenuItem, this->toolStripSeparator7, this->очисткаОконЛокацииToolStripMenuItem,
					this->восстановлениеОконЛокацииToolStripMenuItem, this->toolStripSeparator8, this->новоеИзмерениеСкоростиToolStripMenuItem, this->открытьКалибровкуКаналовToolStripMenuItem,
					this->изменитьПараметрыКалибровкиToolStripMenuItem, this->закрытьКалибровкуКаналовToolStripMenuItem
			});
			this->локацияToolStripMenuItem->Name = L"локацияToolStripMenuItem";
			this->локацияToolStripMenuItem->Size = System::Drawing::Size(66, 20);
			this->локацияToolStripMenuItem->Text = L"Локация";
			// 
			// новаяЛокацияToolStripMenuItem
			// 
			this->новаяЛокацияToolStripMenuItem->Name = L"новаяЛокацияToolStripMenuItem";
			this->новаяЛокацияToolStripMenuItem->Size = System::Drawing::Size(262, 22);
			this->новаяЛокацияToolStripMenuItem->Text = L"Новая локация";
			this->новаяЛокацияToolStripMenuItem->Click += gcnew System::EventHandler(this, &mainForm::новаяЛокацияToolStripMenuItem_Click);
			// 
			// открытьЛокациюToolStripMenuItem
			// 
			this->открытьЛокациюToolStripMenuItem->Name = L"открытьЛокациюToolStripMenuItem";
			this->открытьЛокациюToolStripMenuItem->Size = System::Drawing::Size(262, 22);
			this->открытьЛокациюToolStripMenuItem->Text = L"Открыть локацию";
			// 
			// закрытьЛокациюToolStripMenuItem
			// 
			this->закрытьЛокациюToolStripMenuItem->Enabled = false;
			this->закрытьЛокациюToolStripMenuItem->Name = L"закрытьЛокациюToolStripMenuItem";
			this->закрытьЛокациюToolStripMenuItem->Size = System::Drawing::Size(262, 22);
			this->закрытьЛокациюToolStripMenuItem->Text = L"Закрыть локацию";
			// 
			// toolStripSeparator7
			// 
			this->toolStripSeparator7->Name = L"toolStripSeparator7";
			this->toolStripSeparator7->Size = System::Drawing::Size(259, 6);
			// 
			// очисткаОконЛокацииToolStripMenuItem
			// 
			this->очисткаОконЛокацииToolStripMenuItem->Name = L"очисткаОконЛокацииToolStripMenuItem";
			this->очисткаОконЛокацииToolStripMenuItem->Size = System::Drawing::Size(262, 22);
			this->очисткаОконЛокацииToolStripMenuItem->Text = L"Очистка окон локации";
			// 
			// восстановлениеОконЛокацииToolStripMenuItem
			// 
			this->восстановлениеОконЛокацииToolStripMenuItem->Enabled = false;
			this->восстановлениеОконЛокацииToolStripMenuItem->Name = L"восстановлениеОконЛокацииToolStripMenuItem";
			this->восстановлениеОконЛокацииToolStripMenuItem->Size = System::Drawing::Size(262, 22);
			this->восстановлениеОконЛокацииToolStripMenuItem->Text = L"Восстановление окон локации";
			// 
			// toolStripSeparator8
			// 
			this->toolStripSeparator8->Name = L"toolStripSeparator8";
			this->toolStripSeparator8->Size = System::Drawing::Size(259, 6);
			// 
			// новоеИзмерениеСкоростиToolStripMenuItem
			// 
			this->новоеИзмерениеСкоростиToolStripMenuItem->Name = L"новоеИзмерениеСкоростиToolStripMenuItem";
			this->новоеИзмерениеСкоростиToolStripMenuItem->Size = System::Drawing::Size(262, 22);
			this->новоеИзмерениеСкоростиToolStripMenuItem->Text = L"Новое измерение скорости";
			this->новоеИзмерениеСкоростиToolStripMenuItem->Click += gcnew System::EventHandler(this, &mainForm::новоеИзмерениеСкоростиToolStripMenuItem_Click);
			// 
			// открытьКалибровкуКаналовToolStripMenuItem
			// 
			this->открытьКалибровкуКаналовToolStripMenuItem->Name = L"открытьКалибровкуКаналовToolStripMenuItem";
			this->открытьКалибровкуКаналовToolStripMenuItem->Size = System::Drawing::Size(262, 22);
			this->открытьКалибровкуКаналовToolStripMenuItem->Text = L"Открыть калибровку каналов";
			// 
			// изменитьПараметрыКалибровкиToolStripMenuItem
			// 
			this->изменитьПараметрыКалибровкиToolStripMenuItem->Enabled = false;
			this->изменитьПараметрыКалибровкиToolStripMenuItem->Name = L"изменитьПараметрыКалибровкиToolStripMenuItem";
			this->изменитьПараметрыКалибровкиToolStripMenuItem->Size = System::Drawing::Size(262, 22);
			this->изменитьПараметрыКалибровкиToolStripMenuItem->Text = L"Изменить параметры калибровки";
			// 
			// закрытьКалибровкуКаналовToolStripMenuItem
			// 
			this->закрытьКалибровкуКаналовToolStripMenuItem->Enabled = false;
			this->закрытьКалибровкуКаналовToolStripMenuItem->Name = L"закрытьКалибровкуКаналовToolStripMenuItem";
			this->закрытьКалибровкуКаналовToolStripMenuItem->Size = System::Drawing::Size(262, 22);
			this->закрытьКалибровкуКаналовToolStripMenuItem->Text = L"Закрыть калибровку каналов";
			// 
			// управлениеToolStripMenuItem
			// 
			this->управлениеToolStripMenuItem->Name = L"управлениеToolStripMenuItem";
			this->управлениеToolStripMenuItem->Size = System::Drawing::Size(85, 20);
			this->управлениеToolStripMenuItem->Text = L"Управление";
			// 
			// классификацияToolStripMenuItem
			// 
			this->классификацияToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(7) {
				this->амплитудныйКритерийToolStripMenuItem,
					this->статистическToolStripMenuItem, this->критерийGBT181822012ToolStripMenuItem, this->критерийJBT107642023ToolStripMenuItem,
					this->toolStripSeparator16, this->button_local_dynamic_crit, this->button_SHdiagram
			});
			this->классификацияToolStripMenuItem->Name = L"классификацияToolStripMenuItem";
			this->классификацияToolStripMenuItem->Size = System::Drawing::Size(106, 20);
			this->классификацияToolStripMenuItem->Text = L"Классификация";
			// 
			// амплитудныйКритерийToolStripMenuItem
			// 
			this->амплитудныйКритерийToolStripMenuItem->Name = L"амплитудныйКритерийToolStripMenuItem";
			this->амплитудныйКритерийToolStripMenuItem->Size = System::Drawing::Size(269, 22);
			this->амплитудныйКритерийToolStripMenuItem->Text = L"Амплитудный критерий";
			this->амплитудныйКритерийToolStripMenuItem->Click += gcnew System::EventHandler(this, &mainForm::амплитудныйКритерийToolStripMenuItem_Click);
			// 
			// статистическToolStripMenuItem
			// 
			this->статистическToolStripMenuItem->Name = L"статистическToolStripMenuItem";
			this->статистическToolStripMenuItem->Size = System::Drawing::Size(269, 22);
			this->статистическToolStripMenuItem->Text = L"Статистический критерий";
			this->статистическToolStripMenuItem->Click += gcnew System::EventHandler(this, &mainForm::статистическToolStripMenuItem_Click);
			// 
			// критерийGBT181822012ToolStripMenuItem
			// 
			this->критерийGBT181822012ToolStripMenuItem->Name = L"критерийGBT181822012ToolStripMenuItem";
			this->критерийGBT181822012ToolStripMenuItem->Size = System::Drawing::Size(269, 22);
			this->критерийGBT181822012ToolStripMenuItem->Text = L"Критерий GB/T 18182-2012";
			this->критерийGBT181822012ToolStripMenuItem->Click += gcnew System::EventHandler(this, &mainForm::критерийGBT181822012ToolStripMenuItem_Click);
			// 
			// критерийJBT107642023ToolStripMenuItem
			// 
			this->критерийJBT107642023ToolStripMenuItem->Name = L"критерийJBT107642023ToolStripMenuItem";
			this->критерийJBT107642023ToolStripMenuItem->Size = System::Drawing::Size(269, 22);
			this->критерийJBT107642023ToolStripMenuItem->Text = L"Критерий JB/T 10764-2023";
			this->критерийJBT107642023ToolStripMenuItem->Click += gcnew System::EventHandler(this, &mainForm::критерийJBT107642023ToolStripMenuItem_Click);
			// 
			// toolStripSeparator16
			// 
			this->toolStripSeparator16->Name = L"toolStripSeparator16";
			this->toolStripSeparator16->Size = System::Drawing::Size(266, 6);
			// 
			// button_local_dynamic_crit
			// 
			this->button_local_dynamic_crit->CheckOnClick = true;
			this->button_local_dynamic_crit->Name = L"button_local_dynamic_crit";
			this->button_local_dynamic_crit->Size = System::Drawing::Size(269, 22);
			this->button_local_dynamic_crit->Text = L"Локально-динамический критерий";
			this->button_local_dynamic_crit->CheckStateChanged += gcnew System::EventHandler(this, &mainForm::button_local_dynamic_crit_CheckStateChanged);
			// 
			// button_SHdiagram
			// 
			this->button_SHdiagram->CheckOnClick = true;
			this->button_SHdiagram->Name = L"button_SHdiagram";
			this->button_SHdiagram->Size = System::Drawing::Size(269, 22);
			this->button_SHdiagram->Text = L"Диаграмм S-H";
			this->button_SHdiagram->CheckStateChanged += gcnew System::EventHandler(this, &mainForm::button_SHdiagram_CheckStateChanged);
			// 
			// настройкиToolStripMenuItem
			// 
			this->настройкиToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->параметрыКаналовToolStripMenuItem,
					this->параметрыКонтроллеровToolStripMenuItem
			});
			this->настройкиToolStripMenuItem->Name = L"настройкиToolStripMenuItem";
			this->настройкиToolStripMenuItem->Size = System::Drawing::Size(127, 20);
			this->настройкиToolStripMenuItem->Text = L"Настройки каналов";
			// 
			// параметрыКаналовToolStripMenuItem
			// 
			this->параметрыКаналовToolStripMenuItem->Name = L"параметрыКаналовToolStripMenuItem";
			this->параметрыКаналовToolStripMenuItem->Size = System::Drawing::Size(220, 22);
			this->параметрыКаналовToolStripMenuItem->Text = L"Параметры каналов";
			this->параметрыКаналовToolStripMenuItem->Click += gcnew System::EventHandler(this, &mainForm::параметрыКаналовToolStripMenuItem_Click);
			// 
			// параметрыКонтроллеровToolStripMenuItem
			// 
			this->параметрыКонтроллеровToolStripMenuItem->Name = L"параметрыКонтроллеровToolStripMenuItem";
			this->параметрыКонтроллеровToolStripMenuItem->Size = System::Drawing::Size(220, 22);
			this->параметрыКонтроллеровToolStripMenuItem->Text = L"Параметры контроллеров";
			// 
			// toolStrip1
			// 
			this->toolStrip1->AutoSize = false;
			this->toolStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(31) {
				this->toolStripButton1,
					this->button_viewfilt_currentfile, this->toolStripSeparator1, this->button_refresh, this->button_new_record, this->toolStripSeparator5,
					this->toolStripButton4, this->toolStripButton5, this->toolStripButton6, this->toolStripSeparator6, this->button_channel_params,
					this->button_OSC_params, this->button_auto, this->toolStripSeparator4, this->toolStripButton20, this->toolStripButton21, this->toolStripButton22,
					this->toolStripButton11, this->toolStripButton12, this->toolStripSeparator3, this->button_zoom_in, this->button_zoom_out, this->button_polygon,
					this->button_shift, this->toolStripSeparator17, this->button_clear, this->button_return_win, this->toolStripSeparator2, this->button_volume,
					this->button_help, this->toolStripComboBox1
			});
			this->toolStrip1->Location = System::Drawing::Point(0, 48);
			this->toolStrip1->Name = L"toolStrip1";
			this->toolStrip1->Size = System::Drawing::Size(1090, 40);
			this->toolStrip1->TabIndex = 1;
			this->toolStrip1->Text = L"toolStrip1";
			// 
			// toolStripButton1
			// 
			this->toolStripButton1->AutoSize = false;
			this->toolStripButton1->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton1.Image")));
			this->toolStripButton1->ImageScaling = System::Windows::Forms::ToolStripItemImageScaling::None;
			this->toolStripButton1->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton1->Name = L"toolStripButton1";
			this->toolStripButton1->Size = System::Drawing::Size(36, 36);
			this->toolStripButton1->Text = L"Открыть";
			this->toolStripButton1->Click += gcnew System::EventHandler(this, &mainForm::toolStripButton1_Click);
			// 
			// button_viewfilt_currentfile
			// 
			this->button_viewfilt_currentfile->AutoSize = false;
			this->button_viewfilt_currentfile->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->button_viewfilt_currentfile->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button_viewfilt_currentfile.Image")));
			this->button_viewfilt_currentfile->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->button_viewfilt_currentfile->Name = L"button_viewfilt_currentfile";
			this->button_viewfilt_currentfile->Size = System::Drawing::Size(36, 36);
			this->button_viewfilt_currentfile->Text = L"toolStripButton2";
			this->button_viewfilt_currentfile->ToolTipText = L"Просмотр и фильтр текущего файла";
			// 
			// toolStripSeparator1
			// 
			this->toolStripSeparator1->Name = L"toolStripSeparator1";
			this->toolStripSeparator1->Size = System::Drawing::Size(6, 40);
			// 
			// button_refresh
			// 
			this->button_refresh->AutoSize = false;
			this->button_refresh->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->button_refresh->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button_refresh.Image")));
			this->button_refresh->ImageScaling = System::Windows::Forms::ToolStripItemImageScaling::None;
			this->button_refresh->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->button_refresh->Name = L"button_refresh";
			this->button_refresh->Size = System::Drawing::Size(36, 36);
			this->button_refresh->Text = L"toolStripButton3";
			this->button_refresh->ToolTipText = L"Перезапустить комплекс";
			// 
			// button_new_record
			// 
			this->button_new_record->AutoSize = false;
			this->button_new_record->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->button_new_record->Enabled = false;
			this->button_new_record->ImageScaling = System::Windows::Forms::ToolStripItemImageScaling::None;
			this->button_new_record->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->button_new_record->Name = L"button_new_record";
			this->button_new_record->Size = System::Drawing::Size(36, 36);
			this->button_new_record->Text = L"toolStripButton2";
			this->button_new_record->ToolTipText = L"Новое измерение";
			// 
			// toolStripSeparator5
			// 
			this->toolStripSeparator5->Name = L"toolStripSeparator5";
			this->toolStripSeparator5->Size = System::Drawing::Size(6, 40);
			// 
			// toolStripButton4
			// 
			this->toolStripButton4->AutoSize = false;
			this->toolStripButton4->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton4->Enabled = false;
			this->toolStripButton4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton4.Image")));
			this->toolStripButton4->ImageScaling = System::Windows::Forms::ToolStripItemImageScaling::None;
			this->toolStripButton4->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton4->Name = L"toolStripButton4";
			this->toolStripButton4->Size = System::Drawing::Size(36, 36);
			this->toolStripButton4->Text = L"toolStripButton4";
			this->toolStripButton4->ToolTipText = L"Старт комплекса";
			// 
			// toolStripButton5
			// 
			this->toolStripButton5->AutoSize = false;
			this->toolStripButton5->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton5->Enabled = false;
			this->toolStripButton5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton5.Image")));
			this->toolStripButton5->ImageScaling = System::Windows::Forms::ToolStripItemImageScaling::None;
			this->toolStripButton5->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton5->Name = L"toolStripButton5";
			this->toolStripButton5->Size = System::Drawing::Size(36, 36);
			this->toolStripButton5->Text = L"toolStripButton5";
			this->toolStripButton5->ToolTipText = L"Стоп комплекса";
			// 
			// toolStripButton6
			// 
			this->toolStripButton6->AutoSize = false;
			this->toolStripButton6->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton6->Enabled = false;
			this->toolStripButton6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton6.Image")));
			this->toolStripButton6->ImageScaling = System::Windows::Forms::ToolStripItemImageScaling::None;
			this->toolStripButton6->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton6->Name = L"toolStripButton6";
			this->toolStripButton6->Size = System::Drawing::Size(36, 36);
			this->toolStripButton6->Text = L"toolStripButton6";
			this->toolStripButton6->ToolTipText = L"Пауза";
			// 
			// toolStripSeparator6
			// 
			this->toolStripSeparator6->Name = L"toolStripSeparator6";
			this->toolStripSeparator6->Size = System::Drawing::Size(6, 40);
			// 
			// button_channel_params
			// 
			this->button_channel_params->AutoSize = false;
			this->button_channel_params->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->button_channel_params->ImageScaling = System::Windows::Forms::ToolStripItemImageScaling::None;
			this->button_channel_params->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->button_channel_params->Name = L"button_channel_params";
			this->button_channel_params->Size = System::Drawing::Size(36, 36);
			this->button_channel_params->ToolTipText = L"Настройка каналов";
			this->button_channel_params->Click += gcnew System::EventHandler(this, &mainForm::button_channel_params_Click);
			// 
			// button_OSC_params
			// 
			this->button_OSC_params->AutoSize = false;
			this->button_OSC_params->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->button_OSC_params->ImageScaling = System::Windows::Forms::ToolStripItemImageScaling::None;
			this->button_OSC_params->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->button_OSC_params->Name = L"button_OSC_params";
			this->button_OSC_params->Size = System::Drawing::Size(36, 36);
			this->button_OSC_params->Text = L"toolStripButton9";
			this->button_OSC_params->ToolTipText = L"Параметры осциллографа";
			// 
			// button_auto
			// 
			this->button_auto->AutoSize = false;
			this->button_auto->CheckOnClick = true;
			this->button_auto->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->button_auto->ImageScaling = System::Windows::Forms::ToolStripItemImageScaling::None;
			this->button_auto->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->button_auto->Name = L"button_auto";
			this->button_auto->Size = System::Drawing::Size(36, 36);
			this->button_auto->ToolTipText = L"Автоматический порог";
			// 
			// toolStripSeparator4
			// 
			this->toolStripSeparator4->Name = L"toolStripSeparator4";
			this->toolStripSeparator4->Size = System::Drawing::Size(6, 40);
			// 
			// toolStripButton20
			// 
			this->toolStripButton20->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Text;
			this->toolStripButton20->Enabled = false;
			this->toolStripButton20->Font = (gcnew System::Drawing::Font(L"Segoe UI Black", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->toolStripButton20->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton20->Name = L"toolStripButton20";
			this->toolStripButton20->Size = System::Drawing::Size(39, 37);
			this->toolStripButton20->Text = L"OSC:";
			// 
			// toolStripButton21
			// 
			this->toolStripButton21->AutoSize = false;
			this->toolStripButton21->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton21->Enabled = false;
			this->toolStripButton21->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton21.Image")));
			this->toolStripButton21->ImageScaling = System::Windows::Forms::ToolStripItemImageScaling::None;
			this->toolStripButton21->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton21->Name = L"toolStripButton21";
			this->toolStripButton21->Size = System::Drawing::Size(36, 36);
			this->toolStripButton21->Text = L"toolStripButton21";
			// 
			// toolStripButton22
			// 
			this->toolStripButton22->AutoSize = false;
			this->toolStripButton22->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton22->Enabled = false;
			this->toolStripButton22->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton22.Image")));
			this->toolStripButton22->ImageScaling = System::Windows::Forms::ToolStripItemImageScaling::None;
			this->toolStripButton22->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton22->Name = L"toolStripButton22";
			this->toolStripButton22->Size = System::Drawing::Size(36, 36);
			this->toolStripButton22->Text = L"toolStripButton22";
			// 
			// toolStripButton11
			// 
			this->toolStripButton11->AutoSize = false;
			this->toolStripButton11->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton11->Enabled = false;
			this->toolStripButton11->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton11.Image")));
			this->toolStripButton11->ImageScaling = System::Windows::Forms::ToolStripItemImageScaling::None;
			this->toolStripButton11->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton11->Name = L"toolStripButton11";
			this->toolStripButton11->Size = System::Drawing::Size(36, 36);
			this->toolStripButton11->Text = L"toolStripButton11";
			// 
			// toolStripButton12
			// 
			this->toolStripButton12->AutoSize = false;
			this->toolStripButton12->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton12->Enabled = false;
			this->toolStripButton12->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton12.Image")));
			this->toolStripButton12->ImageScaling = System::Windows::Forms::ToolStripItemImageScaling::None;
			this->toolStripButton12->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton12->Name = L"toolStripButton12";
			this->toolStripButton12->Size = System::Drawing::Size(36, 36);
			this->toolStripButton12->Text = L"toolStripButton12";
			// 
			// toolStripSeparator3
			// 
			this->toolStripSeparator3->Name = L"toolStripSeparator3";
			this->toolStripSeparator3->Size = System::Drawing::Size(6, 40);
			// 
			// button_zoom_in
			// 
			this->button_zoom_in->AutoSize = false;
			this->button_zoom_in->ImageScaling = System::Windows::Forms::ToolStripItemImageScaling::None;
			this->button_zoom_in->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->button_zoom_in->Name = L"button_zoom_in";
			this->button_zoom_in->Size = System::Drawing::Size(36, 36);
			this->button_zoom_in->Text = L"+";
			this->button_zoom_in->TextImageRelation = System::Windows::Forms::TextImageRelation::Overlay;
			// 
			// button_zoom_out
			// 
			this->button_zoom_out->AutoSize = false;
			this->button_zoom_out->ImageScaling = System::Windows::Forms::ToolStripItemImageScaling::None;
			this->button_zoom_out->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->button_zoom_out->Name = L"button_zoom_out";
			this->button_zoom_out->Size = System::Drawing::Size(36, 36);
			this->button_zoom_out->Text = L"-";
			this->button_zoom_out->TextImageRelation = System::Windows::Forms::TextImageRelation::Overlay;
			// 
			// button_polygon
			// 
			this->button_polygon->AutoSize = false;
			this->button_polygon->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->button_polygon->ImageScaling = System::Windows::Forms::ToolStripItemImageScaling::None;
			this->button_polygon->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->button_polygon->Name = L"button_polygon";
			this->button_polygon->Size = System::Drawing::Size(36, 36);
			this->button_polygon->Text = L"Полигон";
			this->button_polygon->TextImageRelation = System::Windows::Forms::TextImageRelation::Overlay;
			this->button_polygon->ToolTipText = L"Регион/Многоугольник";
			// 
			// button_shift
			// 
			this->button_shift->AutoSize = false;
			this->button_shift->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->button_shift->ImageScaling = System::Windows::Forms::ToolStripItemImageScaling::None;
			this->button_shift->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->button_shift->Name = L"button_shift";
			this->button_shift->Size = System::Drawing::Size(36, 36);
			this->button_shift->Text = L"toolStripButton16";
			// 
			// toolStripSeparator17
			// 
			this->toolStripSeparator17->Name = L"toolStripSeparator17";
			this->toolStripSeparator17->Size = System::Drawing::Size(6, 40);
			// 
			// button_clear
			// 
			this->button_clear->AutoSize = false;
			this->button_clear->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->button_clear->ImageScaling = System::Windows::Forms::ToolStripItemImageScaling::None;
			this->button_clear->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->button_clear->Name = L"button_clear";
			this->button_clear->Size = System::Drawing::Size(36, 36);
			this->button_clear->Text = L"toolStripButton17";
			// 
			// button_return_win
			// 
			this->button_return_win->AutoSize = false;
			this->button_return_win->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->button_return_win->ImageScaling = System::Windows::Forms::ToolStripItemImageScaling::None;
			this->button_return_win->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->button_return_win->Name = L"button_return_win";
			this->button_return_win->Size = System::Drawing::Size(36, 36);
			this->button_return_win->Text = L"toolStripButton18";
			// 
			// toolStripSeparator2
			// 
			this->toolStripSeparator2->Name = L"toolStripSeparator2";
			this->toolStripSeparator2->Size = System::Drawing::Size(6, 40);
			// 
			// button_volume
			// 
			this->button_volume->AutoSize = false;
			this->button_volume->CheckOnClick = true;
			this->button_volume->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->button_volume->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button_volume.Image")));
			this->button_volume->ImageScaling = System::Windows::Forms::ToolStripItemImageScaling::None;
			this->button_volume->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->button_volume->Name = L"button_volume";
			this->button_volume->Size = System::Drawing::Size(36, 36);
			this->button_volume->Text = L"toolStripButton10";
			this->button_volume->CheckedChanged += gcnew System::EventHandler(this, &mainForm::button_volume_CheckedChanged);
			// 
			// button_help
			// 
			this->button_help->AutoSize = false;
			this->button_help->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->button_help->ImageScaling = System::Windows::Forms::ToolStripItemImageScaling::None;
			this->button_help->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->button_help->Name = L"button_help";
			this->button_help->Size = System::Drawing::Size(36, 36);
			this->button_help->Text = L"toolStripButton19";
			this->button_help->ToolTipText = L"Справка";
			this->button_help->Click += gcnew System::EventHandler(this, &mainForm::toolStripButton19_Click);
			// 
			// toolStripComboBox1
			// 
			this->toolStripComboBox1->Enabled = false;
			this->toolStripComboBox1->Name = L"toolStripComboBox1";
			this->toolStripComboBox1->Size = System::Drawing::Size(121, 40);
			this->toolStripComboBox1->Text = L"обычный";
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Controls->Add(this->tabPage4);
			this->tabControl1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tabControl1->Location = System::Drawing::Point(0, 0);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(933, 673);
			this->tabControl1->TabIndex = 2;
			// 
			// tabPage1
			// 
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(925, 647);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Основные";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// tabPage2
			// 
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(925, 647);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Осциллограф";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// tabPage3
			// 
			this->tabPage3->Location = System::Drawing::Point(4, 22);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Size = System::Drawing::Size(925, 647);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Параметрич.каналы";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// tabPage4
			// 
			this->tabPage4->Location = System::Drawing::Point(4, 22);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Size = System::Drawing::Size(925, 647);
			this->tabPage4->TabIndex = 3;
			this->tabPage4->Text = L"Локация";
			this->tabPage4->UseVisualStyleBackColor = true;
			// 
			// menuStrip2
			// 
			this->menuStrip2->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->toolStripMenuItem2,
					this->видToolStripMenuItem1, this->печатьToolStripMenuItem1, this->окноToolStripMenuItem1, this->помощьToolStripMenuItem1
			});
			this->menuStrip2->Location = System::Drawing::Point(0, 0);
			this->menuStrip2->Name = L"menuStrip2";
			this->menuStrip2->Size = System::Drawing::Size(1090, 24);
			this->menuStrip2->TabIndex = 3;
			this->menuStrip2->Text = L"menuStrip2";
			// 
			// toolStripMenuItem2
			// 
			this->toolStripMenuItem2->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(26) {
				this->toolStripMenuItem3,
					this->toolStripMenuItem4, this->toolStripMenuItem5, this->toolStripSeparator10, this->toolStripMenuItem6, this->toolStripMenuItem7,
					this->toolStripSeparator11, this->toolStripMenuItem8, this->toolStripMenuItem9, this->toolStripMenuItem10, this->toolStripSeparator12,
					this->toolStripMenuItem11, this->toolStripMenuItem12, this->toolStripMenuItem13, this->toolStripSeparator13, this->toolStripMenuItem14,
					this->toolStripMenuItem15, this->toolStripMenuItem16, this->toolStripMenuItem17, this->toolStripMenuItem18, this->toolStripSeparator14,
					this->toolStripMenuItem19, this->toolStripMenuItem20, this->toolStripMenuItem21, this->toolStripSeparator15, this->toolStripMenuItem22
			});
			this->toolStripMenuItem2->Name = L"toolStripMenuItem2";
			this->toolStripMenuItem2->Size = System::Drawing::Size(48, 20);
			this->toolStripMenuItem2->Text = L"Файл";
			// 
			// toolStripMenuItem3
			// 
			this->toolStripMenuItem3->Name = L"toolStripMenuItem3";
			this->toolStripMenuItem3->Size = System::Drawing::Size(209, 22);
			this->toolStripMenuItem3->Text = L"Открыть";
			this->toolStripMenuItem3->Click += gcnew System::EventHandler(this, &mainForm::toolStripMenuItem3_Click);
			// 
			// toolStripMenuItem4
			// 
			this->toolStripMenuItem4->Enabled = false;
			this->toolStripMenuItem4->Name = L"toolStripMenuItem4";
			this->toolStripMenuItem4->Size = System::Drawing::Size(209, 22);
			this->toolStripMenuItem4->Text = L"Показать заголовок";
			// 
			// toolStripMenuItem5
			// 
			this->toolStripMenuItem5->Enabled = false;
			this->toolStripMenuItem5->Name = L"toolStripMenuItem5";
			this->toolStripMenuItem5->Size = System::Drawing::Size(209, 22);
			this->toolStripMenuItem5->Text = L"Фильтр текущего файла";
			// 
			// toolStripSeparator10
			// 
			this->toolStripSeparator10->Name = L"toolStripSeparator10";
			this->toolStripSeparator10->Size = System::Drawing::Size(206, 6);
			// 
			// toolStripMenuItem6
			// 
			this->toolStripMenuItem6->Name = L"toolStripMenuItem6";
			this->toolStripMenuItem6->Size = System::Drawing::Size(209, 22);
			this->toolStripMenuItem6->Text = L"Открыть OSC";
			this->toolStripMenuItem6->Click += gcnew System::EventHandler(this, &mainForm::toolStripMenuItem6_Click);
			// 
			// toolStripMenuItem7
			// 
			this->toolStripMenuItem7->Enabled = false;
			this->toolStripMenuItem7->Name = L"toolStripMenuItem7";
			this->toolStripMenuItem7->Size = System::Drawing::Size(209, 22);
			this->toolStripMenuItem7->Text = L"Показать заголовок OSC";
			// 
			// toolStripSeparator11
			// 
			this->toolStripSeparator11->Name = L"toolStripSeparator11";
			this->toolStripSeparator11->Size = System::Drawing::Size(206, 6);
			// 
			// toolStripMenuItem8
			// 
			this->toolStripMenuItem8->Name = L"toolStripMenuItem8";
			this->toolStripMenuItem8->Size = System::Drawing::Size(209, 22);
			this->toolStripMenuItem8->Text = L"Создать проект";
			// 
			// toolStripMenuItem9
			// 
			this->toolStripMenuItem9->Name = L"toolStripMenuItem9";
			this->toolStripMenuItem9->Size = System::Drawing::Size(209, 22);
			this->toolStripMenuItem9->Text = L"Открыть проект";
			// 
			// toolStripMenuItem10
			// 
			this->toolStripMenuItem10->Enabled = false;
			this->toolStripMenuItem10->Name = L"toolStripMenuItem10";
			this->toolStripMenuItem10->Size = System::Drawing::Size(209, 22);
			this->toolStripMenuItem10->Text = L"Закрыть проект";
			// 
			// toolStripSeparator12
			// 
			this->toolStripSeparator12->Name = L"toolStripSeparator12";
			this->toolStripSeparator12->Size = System::Drawing::Size(206, 6);
			// 
			// toolStripMenuItem11
			// 
			this->toolStripMenuItem11->Name = L"toolStripMenuItem11";
			this->toolStripMenuItem11->Size = System::Drawing::Size(209, 22);
			this->toolStripMenuItem11->Text = L"Установка принтера";
			// 
			// toolStripMenuItem12
			// 
			this->toolStripMenuItem12->Name = L"toolStripMenuItem12";
			this->toolStripMenuItem12->Size = System::Drawing::Size(209, 22);
			this->toolStripMenuItem12->Text = L"Печать";
			// 
			// toolStripMenuItem13
			// 
			this->toolStripMenuItem13->Enabled = false;
			this->toolStripMenuItem13->Name = L"toolStripMenuItem13";
			this->toolStripMenuItem13->Size = System::Drawing::Size(209, 22);
			this->toolStripMenuItem13->Text = L"Печать протокола";
			// 
			// toolStripSeparator13
			// 
			this->toolStripSeparator13->Name = L"toolStripSeparator13";
			this->toolStripSeparator13->Size = System::Drawing::Size(206, 6);
			// 
			// toolStripMenuItem14
			// 
			this->toolStripMenuItem14->Name = L"toolStripMenuItem14";
			this->toolStripMenuItem14->Size = System::Drawing::Size(209, 22);
			this->toolStripMenuItem14->Text = L"Фильтр и просмотр";
			// 
			// toolStripMenuItem15
			// 
			this->toolStripMenuItem15->Name = L"toolStripMenuItem15";
			this->toolStripMenuItem15->Size = System::Drawing::Size(209, 22);
			this->toolStripMenuItem15->Text = L"Восстановление";
			// 
			// toolStripMenuItem16
			// 
			this->toolStripMenuItem16->Name = L"toolStripMenuItem16";
			this->toolStripMenuItem16->Size = System::Drawing::Size(209, 22);
			this->toolStripMenuItem16->Text = L"Объединение";
			// 
			// toolStripMenuItem17
			// 
			this->toolStripMenuItem17->Name = L"toolStripMenuItem17";
			this->toolStripMenuItem17->Size = System::Drawing::Size(209, 22);
			this->toolStripMenuItem17->Text = L"Экспорт данных ALD";
			// 
			// toolStripMenuItem18
			// 
			this->toolStripMenuItem18->Name = L"toolStripMenuItem18";
			this->toolStripMenuItem18->Size = System::Drawing::Size(209, 22);
			this->toolStripMenuItem18->Text = L"Экспорт данных OSC";
			// 
			// toolStripSeparator14
			// 
			this->toolStripSeparator14->Name = L"toolStripSeparator14";
			this->toolStripSeparator14->Size = System::Drawing::Size(206, 6);
			// 
			// toolStripMenuItem19
			// 
			this->toolStripMenuItem19->Name = L"toolStripMenuItem19";
			this->toolStripMenuItem19->Size = System::Drawing::Size(209, 22);
			this->toolStripMenuItem19->Text = L"Создать настройки";
			// 
			// toolStripMenuItem20
			// 
			this->toolStripMenuItem20->Name = L"toolStripMenuItem20";
			this->toolStripMenuItem20->Size = System::Drawing::Size(209, 22);
			this->toolStripMenuItem20->Text = L"Открыть настройки";
			// 
			// toolStripMenuItem21
			// 
			this->toolStripMenuItem21->Name = L"toolStripMenuItem21";
			this->toolStripMenuItem21->Size = System::Drawing::Size(209, 22);
			this->toolStripMenuItem21->Text = L"Сохранить настройки";
			// 
			// toolStripSeparator15
			// 
			this->toolStripSeparator15->Name = L"toolStripSeparator15";
			this->toolStripSeparator15->Size = System::Drawing::Size(206, 6);
			// 
			// toolStripMenuItem22
			// 
			this->toolStripMenuItem22->Name = L"toolStripMenuItem22";
			this->toolStripMenuItem22->Size = System::Drawing::Size(209, 22);
			this->toolStripMenuItem22->Text = L"Выход";
			this->toolStripMenuItem22->Click += gcnew System::EventHandler(this, &mainForm::toolStripMenuItem22_Click);
			// 
			// видToolStripMenuItem1
			// 
			this->видToolStripMenuItem1->Name = L"видToolStripMenuItem1";
			this->видToolStripMenuItem1->Size = System::Drawing::Size(39, 20);
			this->видToolStripMenuItem1->Text = L"Вид";
			// 
			// печатьToolStripMenuItem1
			// 
			this->печатьToolStripMenuItem1->Name = L"печатьToolStripMenuItem1";
			this->печатьToolStripMenuItem1->Size = System::Drawing::Size(58, 20);
			this->печатьToolStripMenuItem1->Text = L"Печать";
			// 
			// окноToolStripMenuItem1
			// 
			this->окноToolStripMenuItem1->Name = L"окноToolStripMenuItem1";
			this->окноToolStripMenuItem1->Size = System::Drawing::Size(48, 20);
			this->окноToolStripMenuItem1->Text = L"Окно";
			// 
			// помощьToolStripMenuItem1
			// 
			this->помощьToolStripMenuItem1->Name = L"помощьToolStripMenuItem1";
			this->помощьToolStripMenuItem1->Size = System::Drawing::Size(68, 20);
			this->помощьToolStripMenuItem1->Text = L"Помощь";
			// 
			// imageList
			// 
			this->imageList->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^>(resources->GetObject(L"imageList.ImageStream")));
			this->imageList->TransparentColor = System::Drawing::Color::Transparent;
			this->imageList->Images->SetKeyName(0, L"button_mute");
			this->imageList->Images->SetKeyName(1, L"button_play");
			this->imageList->Images->SetKeyName(2, L"button_stop");
			this->imageList->Images->SetKeyName(3, L"button_back");
			this->imageList->Images->SetKeyName(4, L"button_next");
			this->imageList->Images->SetKeyName(5, L"button_open");
			this->imageList->Images->SetKeyName(6, L"button_undo");
			this->imageList->Images->SetKeyName(7, L"button_refresh.png");
			this->imageList->Images->SetKeyName(8, L"button_Help");
			this->imageList->Images->SetKeyName(9, L"button_new");
			this->imageList->Images->SetKeyName(10, L"button_zoom_in");
			this->imageList->Images->SetKeyName(11, L"button_zoom_out");
			this->imageList->Images->SetKeyName(12, L"button_polygon");
			this->imageList->Images->SetKeyName(13, L"button_revert");
			this->imageList->Images->SetKeyName(14, L"button_table");
			this->imageList->Images->SetKeyName(15, L"Signal.png");
			this->imageList->Images->SetKeyName(16, L"button_clear.png");
			this->imageList->Images->SetKeyName(17, L"Expand.png");
			this->imageList->Images->SetKeyName(18, L"Auto.png");
			this->imageList->Images->SetKeyName(19, L"Equipment.png");
			// 
			// splitContainer1
			// 
			this->splitContainer1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->splitContainer1->Location = System::Drawing::Point(0, 88);
			this->splitContainer1->Name = L"splitContainer1";
			// 
			// splitContainer1.Panel1
			// 
			this->splitContainer1->Panel1->Controls->Add(this->tableLayoutPanel1);
			// 
			// splitContainer1.Panel2
			// 
			this->splitContainer1->Panel2->Controls->Add(this->tabControl1);
			this->splitContainer1->Size = System::Drawing::Size(1090, 673);
			this->splitContainer1->SplitterDistance = 153;
			this->splitContainer1->TabIndex = 4;
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->ColumnCount = 2;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				71.89542F)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				28.10458F)));
			this->tableLayoutPanel1->Controls->Add(this->label2, 1, 0);
			this->tableLayoutPanel1->Controls->Add(this->label1, 0, 0);
			this->tableLayoutPanel1->Controls->Add(this->checkBox1, 1, 1);
			this->tableLayoutPanel1->Controls->Add(this->checkBox2, 1, 2);
			this->tableLayoutPanel1->Controls->Add(this->checkBox4, 1, 3);
			this->tableLayoutPanel1->Controls->Add(this->checkBox5, 1, 4);
			this->tableLayoutPanel1->Controls->Add(this->checkBox6, 1, 5);
			this->tableLayoutPanel1->Controls->Add(this->checkBox7, 1, 6);
			this->tableLayoutPanel1->Controls->Add(this->checkBox8, 1, 7);
			this->tableLayoutPanel1->Controls->Add(this->checkBox3, 1, 8);
			this->tableLayoutPanel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel1->Location = System::Drawing::Point(0, 0);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 11;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 18)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 30)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 30)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 30)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 30)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 30)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 30)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 30)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 30)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(153, 673);
			this->tableLayoutPanel1->TabIndex = 0;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(112, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(38, 18);
			this->label2->TabIndex = 1;
			this->label2->Text = L"OSC";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(3, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(103, 18);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Канал";
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->CheckAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->checkBox1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->checkBox1->Location = System::Drawing::Point(112, 21);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(38, 24);
			this->checkBox1->TabIndex = 2;
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->CheckAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->checkBox2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->checkBox2->Location = System::Drawing::Point(112, 51);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(38, 24);
			this->checkBox2->TabIndex = 3;
			this->checkBox2->UseVisualStyleBackColor = true;
			// 
			// checkBox4
			// 
			this->checkBox4->AutoSize = true;
			this->checkBox4->CheckAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->checkBox4->Dock = System::Windows::Forms::DockStyle::Fill;
			this->checkBox4->Location = System::Drawing::Point(112, 81);
			this->checkBox4->Name = L"checkBox4";
			this->checkBox4->Size = System::Drawing::Size(38, 24);
			this->checkBox4->TabIndex = 5;
			this->checkBox4->UseVisualStyleBackColor = true;
			// 
			// checkBox5
			// 
			this->checkBox5->AutoSize = true;
			this->checkBox5->CheckAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->checkBox5->Dock = System::Windows::Forms::DockStyle::Fill;
			this->checkBox5->Location = System::Drawing::Point(112, 111);
			this->checkBox5->Name = L"checkBox5";
			this->checkBox5->Size = System::Drawing::Size(38, 24);
			this->checkBox5->TabIndex = 6;
			this->checkBox5->UseVisualStyleBackColor = true;
			// 
			// checkBox6
			// 
			this->checkBox6->AutoSize = true;
			this->checkBox6->CheckAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->checkBox6->Dock = System::Windows::Forms::DockStyle::Fill;
			this->checkBox6->Location = System::Drawing::Point(112, 141);
			this->checkBox6->Name = L"checkBox6";
			this->checkBox6->Size = System::Drawing::Size(38, 24);
			this->checkBox6->TabIndex = 7;
			this->checkBox6->UseVisualStyleBackColor = true;
			// 
			// checkBox7
			// 
			this->checkBox7->AutoSize = true;
			this->checkBox7->CheckAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->checkBox7->Dock = System::Windows::Forms::DockStyle::Fill;
			this->checkBox7->Location = System::Drawing::Point(112, 171);
			this->checkBox7->Name = L"checkBox7";
			this->checkBox7->Size = System::Drawing::Size(38, 24);
			this->checkBox7->TabIndex = 8;
			this->checkBox7->UseVisualStyleBackColor = true;
			// 
			// checkBox8
			// 
			this->checkBox8->AutoSize = true;
			this->checkBox8->CheckAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->checkBox8->Dock = System::Windows::Forms::DockStyle::Fill;
			this->checkBox8->Location = System::Drawing::Point(112, 201);
			this->checkBox8->Name = L"checkBox8";
			this->checkBox8->Size = System::Drawing::Size(38, 24);
			this->checkBox8->TabIndex = 9;
			this->checkBox8->UseVisualStyleBackColor = true;
			// 
			// checkBox3
			// 
			this->checkBox3->AutoSize = true;
			this->checkBox3->CheckAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->checkBox3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->checkBox3->Location = System::Drawing::Point(112, 231);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(38, 24);
			this->checkBox3->TabIndex = 4;
			this->checkBox3->UseVisualStyleBackColor = true;
			// 
			// mainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1090, 761);
			this->Controls->Add(this->splitContainer1);
			this->Controls->Add(this->toolStrip1);
			this->Controls->Add(this->menuStrip1);
			this->Controls->Add(this->menuStrip2);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"mainForm";
			this->Text = L"A-Line";
			this->Load += gcnew System::EventHandler(this, &mainForm::mainForm_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->toolStrip1->ResumeLayout(false);
			this->toolStrip1->PerformLayout();
			this->tabControl1->ResumeLayout(false);
			this->menuStrip2->ResumeLayout(false);
			this->menuStrip2->PerformLayout();
			this->splitContainer1->Panel1->ResumeLayout(false);
			this->splitContainer1->Panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer1))->EndInit();
			this->splitContainer1->ResumeLayout(false);
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tableLayoutPanel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		void redraw_icons()
		{
			button_help->Image = this->imageList->Images[8];
			button_new_record->Image = this->imageList->Images[9];
			button_zoom_in->Image = this->imageList->Images[10];
			button_zoom_out->Image = this->imageList->Images[11];
			button_polygon->Image = this -> imageList->Images[12];
			button_OSC_params->Image = this->imageList->Images[15];
			button_viewfilt_currentfile->Image = this->imageList->Images[14];
			button_return_win->Image = this->imageList->Images[13];
			button_clear->Image = this->imageList->Images[16];
			button_shift->Image = this->imageList->Images[17];
			button_auto->Image = this->imageList->Images[18];
			button_channel_params->Image = this->imageList->Images[19];

		}
#pragma endregion
	private: System::Void mainForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void five_option_on_one_Click(System::Object^ sender, System::EventArgs^ e) {

		param_chlsForm^ form = gcnew param_chlsForm();
		form->Show();
	}

private: System::Void toolStripButton19_Click(System::Object^ sender, System::EventArgs^ e) {
	
	mainForm1^ mf = gcnew mainForm1();
	mf->Show();

	}
private: System::Void создатьToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	

}
private: System::Void выходToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void создатьПроектToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	create_project_Form^ crt_prjForm = gcnew create_project_Form();
	crt_prjForm->Show();
}

private: System::Void новаяЛокацияToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	create_locationForm^ crt_locationForm = gcnew create_locationForm();
	crt_locationForm->Show();
}

private: System::Void button_volume_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(mainForm::typeid));
	if (this->button_volume->Checked == true)
	{
		this->button_volume->Image = this->imageList->Images[0];// (cli::safe_cast<System::Drawing::Image^>(resources->GetObject("button_mute.Image")));
	}
	else
	{
		this->button_volume->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject("button_volume.Image")));
	}
}
private: System::Void параметрыКаналовToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	param_chlsForm^ paramForm = gcnew param_chlsForm();
	paramForm->Show();
}
private: System::Void амплитудныйКритерийToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	amp_settingsForm^ amp_crit = gcnew amp_settingsForm();
	amp_crit->Show();
}
private: System::Void статистическToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	statistic_settingsForm^ stat_crit = gcnew statistic_settingsForm();
	stat_crit->Show();
}
private: System::Void критерийGBT181822012ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	gb_settingsForm^ gb_crit = gcnew gb_settingsForm();
	gb_crit->Show();
}
private: System::Void критерийJBT107642023ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	jb_settingsForm^ jb_crit = gcnew jb_settingsForm();
	jb_crit->Show();
}

private: System::Void button_local_dynamic_crit_CheckStateChanged(System::Object^ sender, System::EventArgs^ e) {
	
	
	if (button_local_dynamic_crit->Checked == true)
	{
		pb_ldc = gcnew pictureBoxForm("Степень локально-динамического критерия n/Время(с)");
		pb_ldc->Show();
	}
	else
	{
		pb_ldc->Close();
	}

}

private: System::Void button_SHdiagram_CheckStateChanged(System::Object^ sender, System::EventArgs^ e) {
	if (button_SHdiagram->Checked == true)
	{
		pb_SHdiag= gcnew pictureBoxForm("S-H Диаграмма");
		pb_SHdiag->Show();
	}
	else
	{
		pb_SHdiag->Close();
	}
}
private: System::Void toolStripMenuItem22_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void toolStripButton1_Click(System::Object^ sender, System::EventArgs^ e) {
	OpenFileDialog^ open = gcnew OpenFileDialog();
	open->Filter = "Данные А-Line(*.ald,*dat)|dat, ald";
	open->ShowDialog();

}
private: System::Void toolStripMenuItem3_Click(System::Object^ sender, System::EventArgs^ e) {
	OpenFileDialog^ open = gcnew OpenFileDialog();
	open->Filter = "Данные А-Line(*.ald,*dat)|dat, ald";
	open->ShowDialog();
}
	   
private: System::Void toolStripMenuItem6_Click(System::Object^ sender, System::EventArgs^ e) {
	OpenFileDialog^ open = gcnew OpenFileDialog();
	open->Filter = "Данные А-Line(*.osc)|osc";
	open->ShowDialog();
}
private: System::Void button_channel_params_Click(System::Object^ sender, System::EventArgs^ e) {
	param_chlsForm^ paramForm = gcnew param_chlsForm();
	paramForm->Show();
}
private: System::Void новоеИзмерениеСкоростиToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	new_measurement_speed_distance^ nmsd = gcnew new_measurement_speed_distance();
	nmsd->Show();
}
};
};

