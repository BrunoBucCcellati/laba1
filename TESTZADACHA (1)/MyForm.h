#include "Функции.h"
namespace TESTZADACHA {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::TextBox^ textBox11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::TextBox^ textBox12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::TextBox^ textBox13;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::TextBox^ textBox14;
	private: System::Windows::Forms::TextBox^ textBox15;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::TextBox^ textBox16;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::TextBox^ textBox17;
	private: System::Windows::Forms::TextBox^ textBox18;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::DataGridView^ dataGridView1;

	private: System::Windows::Forms::TextBox^ textBox19;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::Label^ label23;
	private: System::Windows::Forms::Label^ label24;
	private: System::Windows::Forms::Label^ label25;
	private: System::Windows::Forms::Label^ label26;
	private: System::Windows::Forms::Label^ label27;
	private: System::Windows::Forms::Label^ label28;
	private: System::Windows::Forms::Label^ label29;
	private: System::Windows::Forms::Label^ label30;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart;
	private: System::Windows::Forms::Label^ label31;
	private: System::Windows::Forms::TextBox^ textBox20;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart2;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart3;
	private: System::Windows::Forms::DataGridView^ dataGridView2;
	private: System::Windows::Forms::Label^ label32;



	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::RadioButton^ radioButton3;
	private: System::Windows::Forms::Label^ label33;
	private: System::Windows::Forms::DataGridView^ dataGridView3;
	private: System::Windows::Forms::Label^ label34;
	private: System::Windows::Forms::Label^ label35;
	private: System::Windows::Forms::Label^ label36;
	private: System::Windows::Forms::TabControl^ tabControl1;
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::TabPage^ tabPage3;
	private: System::Windows::Forms::TabPage^ tabPage5;
	private: System::Windows::Forms::TabPage^ tabPage4;
	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Title^ title1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Title());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea2 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Title^ title2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Title());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea3 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series4 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Title^ title3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Title());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea4 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend4 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series5 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Title^ title4 = (gcnew System::Windows::Forms::DataVisualization::Charting::Title());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->textBox16 = (gcnew System::Windows::Forms::TextBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->textBox17 = (gcnew System::Windows::Forms::TextBox());
			this->textBox18 = (gcnew System::Windows::Forms::TextBox());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->textBox19 = (gcnew System::Windows::Forms::TextBox());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->chart = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->textBox20 = (gcnew System::Windows::Forms::TextBox());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->chart2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->chart3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->dataGridView3 = (gcnew System::Windows::Forms::DataGridView());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->label36 = (gcnew System::Windows::Forms::Label());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage5 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->BeginInit();
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->tabPage5->SuspendLayout();
			this->tabPage3->SuspendLayout();
			this->tabPage4->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(8, 198);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(213, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Введите левый отрезок интегрирования";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(227, 195);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 1;
			this->textBox1->Text = L"-10";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(8, 221);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(219, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Введите правый отрезок интегрирования";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(227, 218);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 3;
			this->textBox2->Text = L"-9";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(184, 245);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(64, 13);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Н.У. U(a) = ";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(254, 242);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(73, 20);
			this->textBox3->TabIndex = 5;
			this->textBox3->Text = L"0,75";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(108, 272);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(113, 13);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Начальный шаг h0 = ";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(227, 269);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 20);
			this->textBox4->TabIndex = 7;
			this->textBox4->Text = L"0,1";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(72, 299);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(149, 13);
			this->label5->TabIndex = 8;
			this->label5->Text = L"Макс. кол-во шагов Nmax = ";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(227, 296);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(100, 20);
			this->textBox5->TabIndex = 9;
			this->textBox5->Text = L"100";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(51, 324);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(170, 13);
			this->label6->TabIndex = 10;
			this->label6->Text = L"Выход на правую границу Eгр = ";
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(227, 321);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(100, 20);
			this->textBox6->TabIndex = 11;
			this->textBox6->Text = L"0,0000005 ";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(18, 351);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(203, 13);
			this->label7->TabIndex = 12;
			this->label7->Text = L"Контроль локальной погрешности E = ";
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(227, 348);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(100, 20);
			this->textBox7->TabIndex = 13;
			this->textBox7->Text = L"0,0000005 ";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(11, 378);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(146, 46);
			this->button1->TabIndex = 14;
			this->button1->Text = L"Счёт с постоянным шагом";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(172, 378);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(155, 46);
			this->button2->TabIndex = 15;
			this->button2->Text = L"Счёт с контролем локал.погрешности";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(126, 56);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(157, 13);
			this->label8->TabIndex = 16;
			this->label8->Text = L"Количество итераций n =";
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(289, 53);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(100, 20);
			this->textBox8->TabIndex = 17;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->Location = System::Drawing::Point(70, 103);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(54, 13);
			this->label9->TabIndex = 18;
			this->label9->Text = L"b - xn = ";
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(70, 119);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(319, 20);
			this->textBox9->TabIndex = 19;
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(70, 189);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(319, 20);
			this->textBox10->TabIndex = 20;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label10->Location = System::Drawing::Point(67, 173);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(75, 13);
			this->label10->TabIndex = 21;
			this->label10->Text = L"max ОЛП = ";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label11->Location = System::Drawing::Point(153, 273);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(130, 13);
			this->label11->TabIndex = 22;
			this->label11->Text = L"Число делений шага";
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(289, 270);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(100, 20);
			this->textBox11->TabIndex = 23;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label12->Location = System::Drawing::Point(147, 301);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(136, 13);
			this->label12->TabIndex = 24;
			this->label12->Text = L"Число удвоений шага";
			// 
			// textBox12
			// 
			this->textBox12->Location = System::Drawing::Point(289, 298);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(100, 20);
			this->textBox12->TabIndex = 25;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label13->Location = System::Drawing::Point(66, 348);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(58, 13);
			this->label13->TabIndex = 26;
			this->label13->Text = L"max hi = ";
			// 
			// textBox13
			// 
			this->textBox13->Location = System::Drawing::Point(69, 364);
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(320, 20);
			this->textBox13->TabIndex = 27;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label14->Location = System::Drawing::Point(236, 393);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(56, 13);
			this->label14->TabIndex = 28;
			this->label14->Text = L"при xi = ";
			// 
			// textBox14
			// 
			this->textBox14->Location = System::Drawing::Point(289, 390);
			this->textBox14->Name = L"textBox14";
			this->textBox14->Size = System::Drawing::Size(100, 20);
			this->textBox14->TabIndex = 29;
			// 
			// textBox15
			// 
			this->textBox15->Location = System::Drawing::Point(289, 474);
			this->textBox15->Name = L"textBox15";
			this->textBox15->Size = System::Drawing::Size(100, 20);
			this->textBox15->TabIndex = 33;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label15->Location = System::Drawing::Point(236, 477);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(56, 13);
			this->label15->TabIndex = 32;
			this->label15->Text = L"при xi = ";
			// 
			// textBox16
			// 
			this->textBox16->Location = System::Drawing::Point(69, 448);
			this->textBox16->Name = L"textBox16";
			this->textBox16->Size = System::Drawing::Size(320, 20);
			this->textBox16->TabIndex = 31;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label16->Location = System::Drawing::Point(66, 432);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(55, 13);
			this->label16->TabIndex = 30;
			this->label16->Text = L"min hi = ";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label17->Location = System::Drawing::Point(67, 519);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(82, 13);
			this->label17->TabIndex = 34;
			this->label17->Text = L"max|ui - vi| = ";
			// 
			// textBox17
			// 
			this->textBox17->Location = System::Drawing::Point(69, 535);
			this->textBox17->Name = L"textBox17";
			this->textBox17->Size = System::Drawing::Size(320, 20);
			this->textBox17->TabIndex = 35;
			// 
			// textBox18
			// 
			this->textBox18->Location = System::Drawing::Point(289, 561);
			this->textBox18->Name = L"textBox18";
			this->textBox18->Size = System::Drawing::Size(100, 20);
			this->textBox18->TabIndex = 37;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label18->Location = System::Drawing::Point(236, 564);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(56, 13);
			this->label18->TabIndex = 36;
			this->label18->Text = L"при xi = ";
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->AllowUserToResizeColumns = false;
			this->dataGridView1->AllowUserToResizeRows = false;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->ColumnHeadersVisible = false;
			this->dataGridView1->Enabled = false;
			this->dataGridView1->Location = System::Drawing::Point(6, 32);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->RowHeadersVisible = false;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			this->dataGridView1->RowsDefaultCellStyle = dataGridViewCellStyle1;
			this->dataGridView1->Size = System::Drawing::Size(1320, 636);
			this->dataGridView1->TabIndex = 38;
			this->dataGridView1->Visible = false;
			// 
			// textBox19
			// 
			this->textBox19->Location = System::Drawing::Point(289, 215);
			this->textBox19->Name = L"textBox19";
			this->textBox19->Size = System::Drawing::Size(100, 20);
			this->textBox19->TabIndex = 41;
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label19->Location = System::Drawing::Point(236, 218);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(56, 13);
			this->label19->TabIndex = 40;
			this->label19->Text = L"при xi = ";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label20->Enabled = false;
			this->label20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label20->Location = System::Drawing::Point(15, 3);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(17, 26);
			this->label20->TabIndex = 42;
			this->label20->Text = L"I";
			this->label20->Visible = false;
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label21->Enabled = false;
			this->label21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label21->Location = System::Drawing::Point(106, 3);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(32, 26);
			this->label21->TabIndex = 43;
			this->label21->Text = L"Xi";
			this->label21->Visible = false;
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label22->Enabled = false;
			this->label22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label22->Location = System::Drawing::Point(248, 3);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(31, 26);
			this->label22->TabIndex = 44;
			this->label22->Text = L"Vi";
			this->label22->Visible = false;
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label23->Enabled = false;
			this->label23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label23->Location = System::Drawing::Point(391, 3);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(42, 26);
			this->label23->TabIndex = 45;
			this->label23->Text = L"V2i";
			this->label23->Visible = false;
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label24->Enabled = false;
			this->label24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label24->Location = System::Drawing::Point(534, 3);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(80, 26);
			this->label24->TabIndex = 46;
			this->label24->Text = L"Vi - V2i";
			this->label24->Visible = false;
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label25->Enabled = false;
			this->label25->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label25->Location = System::Drawing::Point(700, 3);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(55, 26);
			this->label25->TabIndex = 47;
			this->label25->Text = L"ОЛП";
			this->label25->Visible = false;
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label26->Enabled = false;
			this->label26->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label26->Location = System::Drawing::Point(869, 3);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(29, 26);
			this->label26->TabIndex = 48;
			this->label26->Text = L"hi";
			this->label26->Visible = false;
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label27->Enabled = false;
			this->label27->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label27->Location = System::Drawing::Point(953, 3);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(37, 26);
			this->label27->TabIndex = 49;
			this->label27->Text = L"C1";
			this->label27->Visible = false;
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label28->Enabled = false;
			this->label28->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label28->Location = System::Drawing::Point(986, 3);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(37, 26);
			this->label28->TabIndex = 50;
			this->label28->Text = L"C2";
			this->label28->Visible = false;
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label29->Enabled = false;
			this->label29->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label29->Location = System::Drawing::Point(1074, 3);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(31, 26);
			this->label29->TabIndex = 51;
			this->label29->Text = L"Ui";
			this->label29->Visible = false;
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label30->Enabled = false;
			this->label30->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label30->Location = System::Drawing::Point(1199, 3);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(79, 26);
			this->label30->TabIndex = 52;
			this->label30->Text = L"|Ui - Vi|";
			this->label30->Visible = false;
			// 
			// chart
			// 
			chartArea1->Name = L"ChartArea1";
			this->chart->ChartAreas->Add(chartArea1);
			this->chart->Enabled = false;
			legend1->Docking = System::Windows::Forms::DataVisualization::Charting::Docking::Top;
			legend1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			legend1->IsTextAutoFit = false;
			legend1->Name = L"Legend1";
			legend1->Title = L"Легенда:";
			legend1->TitleSeparator = System::Windows::Forms::DataVisualization::Charting::LegendSeparatorStyle::DashLine;
			this->chart->Legends->Add(legend1);
			this->chart->Location = System::Drawing::Point(3, 3);
			this->chart->Name = L"chart";
			series1->BorderWidth = 2;
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series1->Color = System::Drawing::Color::Red;
			series1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			series1->Legend = L"Legend1";
			series1->LegendText = L"Истинное решение";
			series1->Name = L"Series1";
			series2->BorderWidth = 2;
			series2->ChartArea = L"ChartArea1";
			series2->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series2->Color = System::Drawing::Color::Blue;
			series2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			series2->Legend = L"Legend1";
			series2->LegendText = L"Численное решение";
			series2->Name = L"Series2";
			this->chart->Series->Add(series1);
			this->chart->Series->Add(series2);
			this->chart->Size = System::Drawing::Size(600, 600);
			this->chart->TabIndex = 53;
			this->chart->Text = L"chart1";
			title1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			title1->Name = L"Title1";
			title1->Text = L"Графики решений";
			this->chart->Titles->Add(title1);
			this->chart->Visible = false;
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->Enabled = false;
			this->label31->Location = System::Drawing::Point(33, 245);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(66, 13);
			this->label31->TabIndex = 54;
			this->label31->Text = L"Н.У. U\'(a) = ";
			// 
			// textBox20
			// 
			this->textBox20->Enabled = false;
			this->textBox20->Location = System::Drawing::Point(105, 242);
			this->textBox20->Name = L"textBox20";
			this->textBox20->Size = System::Drawing::Size(73, 20);
			this->textBox20->TabIndex = 55;
			this->textBox20->Text = L"0";
			// 
			// chart1
			// 
			chartArea2->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea2);
			this->chart1->Enabled = false;
			legend2->Docking = System::Windows::Forms::DataVisualization::Charting::Docking::Top;
			legend2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			legend2->IsTextAutoFit = false;
			legend2->Name = L"Legend1";
			legend2->Title = L"Легенда:";
			legend2->TitleSeparator = System::Windows::Forms::DataVisualization::Charting::LegendSeparatorStyle::DashLine;
			this->chart1->Legends->Add(legend2);
			this->chart1->Location = System::Drawing::Point(709, 3);
			this->chart1->Name = L"chart1";
			series3->BorderWidth = 2;
			series3->ChartArea = L"ChartArea1";
			series3->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series3->Color = System::Drawing::Color::Blue;
			series3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			series3->Legend = L"Legend1";
			series3->LegendText = L"Численное решение в осях U\' и x";
			series3->Name = L"Series2";
			this->chart1->Series->Add(series3);
			this->chart1->Size = System::Drawing::Size(600, 600);
			this->chart1->TabIndex = 56;
			this->chart1->Text = L"chart1";
			title2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			title2->Name = L"Title1";
			title2->Text = L"График приближённого решения";
			this->chart1->Titles->Add(title2);
			this->chart1->Visible = false;
			// 
			// chart2
			// 
			chartArea3->Name = L"ChartArea1";
			this->chart2->ChartAreas->Add(chartArea3);
			this->chart2->Enabled = false;
			legend3->Docking = System::Windows::Forms::DataVisualization::Charting::Docking::Top;
			legend3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			legend3->IsTextAutoFit = false;
			legend3->Name = L"Legend1";
			legend3->Title = L"Легенда:";
			legend3->TitleSeparator = System::Windows::Forms::DataVisualization::Charting::LegendSeparatorStyle::DashLine;
			this->chart2->Legends->Add(legend3);
			this->chart2->Location = System::Drawing::Point(3, 3);
			this->chart2->Name = L"chart2";
			series4->BorderWidth = 2;
			series4->ChartArea = L"ChartArea1";
			series4->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series4->Color = System::Drawing::Color::Blue;
			series4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			series4->Legend = L"Legend1";
			series4->LegendText = L"Фазовая траектория на плоскости (U\', U)";
			series4->Name = L"Series2";
			this->chart2->Series->Add(series4);
			this->chart2->Size = System::Drawing::Size(600, 600);
			this->chart2->TabIndex = 57;
			this->chart2->Text = L"chart1";
			title3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			title3->Name = L"Title1";
			title3->Text = L"Фазовый портрет";
			this->chart2->Titles->Add(title3);
			this->chart2->Visible = false;
			// 
			// chart3
			// 
			chartArea4->Name = L"ChartArea1";
			this->chart3->ChartAreas->Add(chartArea4);
			this->chart3->Enabled = false;
			legend4->Docking = System::Windows::Forms::DataVisualization::Charting::Docking::Top;
			legend4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			legend4->IsTextAutoFit = false;
			legend4->Name = L"Legend1";
			legend4->Title = L"Легенда:";
			legend4->TitleSeparator = System::Windows::Forms::DataVisualization::Charting::LegendSeparatorStyle::DashLine;
			this->chart3->Legends->Add(legend4);
			this->chart3->Location = System::Drawing::Point(3, 3);
			this->chart3->Name = L"chart3";
			series5->BorderWidth = 2;
			series5->ChartArea = L"ChartArea1";
			series5->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series5->Color = System::Drawing::Color::Blue;
			series5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			series5->Legend = L"Legend1";
			series5->LegendText = L"Численное решение в осях U и x";
			series5->Name = L"Series2";
			this->chart3->Series->Add(series5);
			this->chart3->Size = System::Drawing::Size(600, 600);
			this->chart3->TabIndex = 58;
			this->chart3->Text = L"chart3";
			title4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			title4->Name = L"Title1";
			title4->Text = L"График приближённого решения";
			this->chart3->Titles->Add(title4);
			this->chart3->Visible = false;
			// 
			// dataGridView2
			// 
			this->dataGridView2->AllowUserToAddRows = false;
			this->dataGridView2->AllowUserToDeleteRows = false;
			this->dataGridView2->AllowUserToResizeColumns = false;
			this->dataGridView2->AllowUserToResizeRows = false;
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->ColumnHeadersVisible = false;
			this->dataGridView2->Enabled = false;
			this->dataGridView2->Location = System::Drawing::Point(6, 32);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->ReadOnly = true;
			this->dataGridView2->RowHeadersVisible = false;
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			this->dataGridView2->RowsDefaultCellStyle = dataGridViewCellStyle2;
			this->dataGridView2->Size = System::Drawing::Size(1013, 636);
			this->dataGridView2->TabIndex = 59;
			this->dataGridView2->Visible = false;
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label32->Location = System::Drawing::Point(44, 3);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(187, 24);
			this->label32->TabIndex = 60;
			this->label32->Text = L"Выберите задачу:";
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radioButton1->Location = System::Drawing::Point(5, 46);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(161, 24);
			this->radioButton1->TabIndex = 64;
			this->radioButton1->Text = L"Тестовая задача:";
			this->radioButton1->UseVisualStyleBackColor = true;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton1_CheckedChanged);
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radioButton2->Location = System::Drawing::Point(5, 96);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(102, 24);
			this->radioButton2->TabIndex = 65;
			this->radioButton2->Text = L"Задача 2:";
			this->radioButton2->UseVisualStyleBackColor = true;
			this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton2_CheckedChanged);
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radioButton3->Location = System::Drawing::Point(5, 148);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(102, 24);
			this->radioButton3->TabIndex = 66;
			this->radioButton3->Text = L"Задача 3:";
			this->radioButton3->UseVisualStyleBackColor = true;
			this->radioButton3->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton3_CheckedChanged);
			// 
			// label33
			// 
			this->label33->AutoSize = true;
			this->label33->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label33->Enabled = false;
			this->label33->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label33->Location = System::Drawing::Point(1074, 3);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(37, 26);
			this->label33->TabIndex = 67;
			this->label33->Text = L"V²i";
			this->label33->Visible = false;
			// 
			// dataGridView3
			// 
			this->dataGridView3->AllowUserToAddRows = false;
			this->dataGridView3->AllowUserToDeleteRows = false;
			this->dataGridView3->AllowUserToResizeColumns = false;
			this->dataGridView3->AllowUserToResizeRows = false;
			this->dataGridView3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView3->ColumnHeadersVisible = false;
			this->dataGridView3->Enabled = false;
			this->dataGridView3->Location = System::Drawing::Point(6, 32);
			this->dataGridView3->Name = L"dataGridView3";
			this->dataGridView3->ReadOnly = true;
			this->dataGridView3->RowHeadersVisible = false;
			dataGridViewCellStyle3->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			this->dataGridView3->RowsDefaultCellStyle = dataGridViewCellStyle3;
			this->dataGridView3->Size = System::Drawing::Size(1167, 636);
			this->dataGridView3->TabIndex = 68;
			this->dataGridView3->Visible = false;
			// 
			// label34
			// 
			this->label34->AutoSize = true;
			this->label34->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label34->Location = System::Drawing::Point(168, 48);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(96, 20);
			this->label34->TabIndex = 69;
			this->label34->Text = L"du/dx = 3 * u";
			// 
			// label35
			// 
			this->label35->AutoSize = true;
			this->label35->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label35->Location = System::Drawing::Point(113, 98);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(292, 20);
			this->label35->TabIndex = 70;
			this->label35->Text = L"du/dx = (1/(2x + x²)) * u² + u - u³ * sin(10x)";
			// 
			// label36
			// 
			this->label36->AutoSize = true;
			this->label36->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label36->Location = System::Drawing::Point(113, 150);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(241, 20);
			this->label36->TabIndex = 71;
			this->label36->Text = L"d²u/dx² + a * ((du/dx)² + 1)^0.5 = 0";
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage5);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Controls->Add(this->tabPage4);
			this->tabControl1->Location = System::Drawing::Point(12, 12);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(1340, 700);
			this->tabControl1->TabIndex = 72;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->label32);
			this->tabPage1->Controls->Add(this->textBox20);
			this->tabPage1->Controls->Add(this->label36);
			this->tabPage1->Controls->Add(this->label31);
			this->tabPage1->Controls->Add(this->radioButton1);
			this->tabPage1->Controls->Add(this->label35);
			this->tabPage1->Controls->Add(this->radioButton2);
			this->tabPage1->Controls->Add(this->label34);
			this->tabPage1->Controls->Add(this->radioButton3);
			this->tabPage1->Controls->Add(this->button2);
			this->tabPage1->Controls->Add(this->label1);
			this->tabPage1->Controls->Add(this->textBox1);
			this->tabPage1->Controls->Add(this->label2);
			this->tabPage1->Controls->Add(this->textBox2);
			this->tabPage1->Controls->Add(this->label3);
			this->tabPage1->Controls->Add(this->textBox3);
			this->tabPage1->Controls->Add(this->label4);
			this->tabPage1->Controls->Add(this->textBox4);
			this->tabPage1->Controls->Add(this->label5);
			this->tabPage1->Controls->Add(this->textBox5);
			this->tabPage1->Controls->Add(this->label6);
			this->tabPage1->Controls->Add(this->textBox6);
			this->tabPage1->Controls->Add(this->label7);
			this->tabPage1->Controls->Add(this->textBox7);
			this->tabPage1->Controls->Add(this->button1);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(1332, 674);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Входные данные";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->dataGridView3);
			this->tabPage2->Controls->Add(this->dataGridView1);
			this->tabPage2->Controls->Add(this->label33);
			this->tabPage2->Controls->Add(this->label20);
			this->tabPage2->Controls->Add(this->dataGridView2);
			this->tabPage2->Controls->Add(this->label21);
			this->tabPage2->Controls->Add(this->label22);
			this->tabPage2->Controls->Add(this->label23);
			this->tabPage2->Controls->Add(this->label24);
			this->tabPage2->Controls->Add(this->label25);
			this->tabPage2->Controls->Add(this->label26);
			this->tabPage2->Controls->Add(this->label27);
			this->tabPage2->Controls->Add(this->label30);
			this->tabPage2->Controls->Add(this->label28);
			this->tabPage2->Controls->Add(this->label29);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(1332, 674);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Таблица";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// tabPage5
			// 
			this->tabPage5->Controls->Add(this->textBox8);
			this->tabPage5->Controls->Add(this->textBox19);
			this->tabPage5->Controls->Add(this->label8);
			this->tabPage5->Controls->Add(this->label19);
			this->tabPage5->Controls->Add(this->label9);
			this->tabPage5->Controls->Add(this->textBox18);
			this->tabPage5->Controls->Add(this->textBox9);
			this->tabPage5->Controls->Add(this->label18);
			this->tabPage5->Controls->Add(this->textBox10);
			this->tabPage5->Controls->Add(this->textBox17);
			this->tabPage5->Controls->Add(this->label10);
			this->tabPage5->Controls->Add(this->label17);
			this->tabPage5->Controls->Add(this->label11);
			this->tabPage5->Controls->Add(this->textBox15);
			this->tabPage5->Controls->Add(this->textBox11);
			this->tabPage5->Controls->Add(this->label15);
			this->tabPage5->Controls->Add(this->label12);
			this->tabPage5->Controls->Add(this->textBox16);
			this->tabPage5->Controls->Add(this->textBox12);
			this->tabPage5->Controls->Add(this->label16);
			this->tabPage5->Controls->Add(this->label13);
			this->tabPage5->Controls->Add(this->textBox14);
			this->tabPage5->Controls->Add(this->textBox13);
			this->tabPage5->Controls->Add(this->label14);
			this->tabPage5->Location = System::Drawing::Point(4, 22);
			this->tabPage5->Name = L"tabPage5";
			this->tabPage5->Size = System::Drawing::Size(1332, 674);
			this->tabPage5->TabIndex = 4;
			this->tabPage5->Text = L"Выходные данные";
			this->tabPage5->UseVisualStyleBackColor = true;
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->chart1);
			this->tabPage3->Controls->Add(this->chart3);
			this->tabPage3->Controls->Add(this->chart);
			this->tabPage3->Location = System::Drawing::Point(4, 22);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Size = System::Drawing::Size(1332, 674);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Графики";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// tabPage4
			// 
			this->tabPage4->Controls->Add(this->chart2);
			this->tabPage4->Location = System::Drawing::Point(4, 22);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Size = System::Drawing::Size(1332, 674);
			this->tabPage4->TabIndex = 3;
			this->tabPage4->Text = L"Фазовый портрет";
			this->tabPage4->UseVisualStyleBackColor = true;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1357, 718);
			this->Controls->Add(this->tabControl1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->EndInit();
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->tabPage5->ResumeLayout(false);
			this->tabPage5->PerformLayout();
			this->tabPage3->ResumeLayout(false);
			this->tabPage4->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private:
		//входные данные
		double a;//левая граница отрезка 
		double b;//правая граница
		double U0;//начальные условия на левой границе
		double h0;//начальный шаг
		int Nmax;//максимально допустимое число шагов
		double Egr;//контроль выхода на правую границу(как минимум такое)
		double E;//контроль локальной погрешности(как минимум такое)

		//выходные данные
		double* xn;//аргумент на каждом шаге
		double* vn;//численное решение на каждом шаге
		double* v2n;//чис.реш. с половинным шагом
		double* OLP;//оценка локальной погрешности
		double* hn;//шаг
		int* C1;//счёткик деления шага
		int C1SUM;//количество делений шага
		int* C2;//счётчик удвоения шага
		int C2SUM;//количество удвоений шага
		double* Un;//истинное решение (для тестовой задачи)
		double* delta;//глобальная погрешность
		int i;//счётчик итераций

		//максимальные значения
		double X_OLPMAX;
		double OLPmax;
		double X_hMAX;
		double hmax;
		double X_hMIN;
		double hmin;
		double X_DELTAMAX;
		double DELTAMAX;
		System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e)
		{
		}
		//счёт с постоянным шагом
		System::Void button1_Click(System::Object^ sender, System::EventArgs^ e)
		{
			textBox10->Text = "";
			textBox19->Text = "";
			textBox11->Text = "";
			textBox12->Text = "";
			textBox13->Text = "";
			textBox14->Text = "";
			textBox16->Text = "";
			textBox15->Text = "";
			a = Convert::ToDouble(textBox1->Text);
			b = Convert::ToDouble(textBox2->Text);
			U0 = Convert::ToDouble(textBox3->Text);
			h0 = Convert::ToDouble(textBox4->Text);
			Nmax = Convert::ToInt32(textBox5->Text);
			Egr = Convert::ToDouble(textBox6->Text);
			E = Convert::ToDouble(textBox7->Text);
			xn = new double[Nmax + 1];
			xn[0] = a;
			vn = new double[Nmax + 1];
			vn[0] = U0;
			if (radioButton1->Checked == true)
			{
				double* Un = new double[Nmax + 1];
				Un[0] = U0;
				double* delta = new double[Nmax + 1];
				delta[0] = 0;
				if (b - a != 0 && h0 > 0 && Nmax >= 1)
				{
					i = 0;
					if ((b - a) / h0 < Nmax)
					{
						while (i < (b - a) / h0)
						{
							i++;
							xn[i] = xn[i - 1] + h0;
							vn[i] = sledshag(vn[i - 1], h0, k1(xn[i - 1], vn[i - 1]), k2(xn[i - 1], vn[i - 1], h0, k1(xn[i - 1], vn[i - 1])), k3(xn[i - 1], vn[i - 1], h0, k2(xn[i - 1], vn[i - 1], h0, k1(xn[i - 1], vn[i - 1]))), k4(xn[i - 1], vn[i - 1], h0, k3(xn[i - 1], vn[i - 1], h0, k2(xn[i - 1], vn[i - 1], h0, k1(xn[i - 1], vn[i - 1])))));
							Un[i] = istinnoeResh(C(xn[0], U0), xn[i]);
							delta[i] = abs(Un[i] - vn[i]);
						}
					}
					else
					{
						while (i < Nmax)
						{
							i++;
							xn[i] = xn[i - 1] + h0;
							vn[i] = sledshag(vn[i - 1], h0, k1(xn[i - 1], vn[i - 1]), k2(xn[i - 1], vn[i - 1], h0, k1(xn[i - 1], vn[i - 1])), k3(xn[i - 1], vn[i - 1], h0, k2(xn[i - 1], vn[i - 1], h0, k1(xn[i - 1], vn[i - 1]))), k4(xn[i - 1], vn[i - 1], h0, k3(xn[i - 1], vn[i - 1], h0, k2(xn[i - 1], vn[i - 1], h0, k1(xn[i - 1], vn[i - 1])))));
							Un[i] = istinnoeResh(C(xn[0], U0), xn[i]);
							delta[i] = abs(Un[i] - vn[i]);
						}
					}
					DELTAMAX = delta[0];
					for (int j = 1; j <= i; j++)
					{
						if (delta[j] > DELTAMAX)
						{
							DELTAMAX = delta[j];
							X_DELTAMAX = xn[j];
						}
					}
					textBox8->Text = Convert::ToString(i);
					textBox9->Text = Convert::ToString(b - xn[i]);
					textBox17->Text = Convert::ToString(DELTAMAX);
					textBox18->Text = Convert::ToString(X_DELTAMAX);
					while (dataGridView1->Rows->Count != 0 && dataGridView1->Columns->Count != 0)
					{
						dataGridView1->Rows->RemoveAt(0);
						dataGridView1->Columns->RemoveAt(0);
					}
					for (int j = 0; j < 11; j++)
					{
						DataGridViewColumn^ column1 = gcnew DataGridViewColumn();
						DataGridViewCell^ cell = gcnew DataGridViewTextBoxCell();
						column1->CellTemplate = cell;
						dataGridView1->Columns->Add(column1);
						column1 = dataGridView1->Columns[j];
						if (j == 0 || j == 7 || j == 8)
						{
							column1->Width = 30;
						}
						else
						{
							column1->Width = 153, 75;
						}
					}
					for (int j = 0; j < i; j++)
					{
						DataGridViewRow^ row1 = gcnew DataGridViewRow();
						row1->CreateCells(dataGridView1);
						dataGridView1->Rows->Add(row1);
						row1 = dataGridView1->Rows[j];
						row1->Height = 25;
					}
					for (int j = 0; j < 11; j++)
					{
						for (int k = 0; k < i; k++)
						{
							if (j == 0)
							{
								dataGridView1->Rows[k]->Cells[0]->Value = k + 1;
							}
							if (j == 1)
							{
								dataGridView1->Rows[k]->Cells[1]->Value = xn[k + 1];
							}
							if (j == 2)
							{
								dataGridView1->Rows[k]->Cells[2]->Value = vn[k + 1];
							}
							if (j == 6)
							{
								dataGridView1->Rows[k]->Cells[6]->Value = xn[k + 1] - xn[k];
							}
							if (j == 9)
							{
								dataGridView1->Rows[k]->Cells[9]->Value = Un[k + 1];
							}
							if (j == 10)
							{
								dataGridView1->Rows[k]->Cells[10]->Value = delta[k + 1];
							}
							dataGridView1->Rows[k]->Cells[j]->ReadOnly = true;
						}
					}
					chart->Series[0]->Points->Clear();
					for (int j = 0; j <= i; j++)
					{
						chart->Series[0]->Points->AddXY(xn[j], Un[j]);
					}
					chart->Series[1]->Points->Clear();
					for (int j = 0; j <= i; j++)
					{
						chart->Series[1]->Points->AddXY(xn[j], vn[j]);
					}
					chart->ChartAreas[0]->AxisX->Minimum = a;
					chart->ChartAreas[0]->AxisX->Maximum = b;
					chart->ChartAreas[0]->AxisX->MajorGrid->Interval = h0;
					chart->ChartAreas[0]->AxisY->MajorGrid->Interval = abs(vn[1] - U0);
					chart->ChartAreas[0]->AxisX->MajorGrid->LineColor = System::Drawing::SystemColors::ControlDarkDark;
					chart->ChartAreas[0]->AxisY->MajorGrid->LineColor = System::Drawing::SystemColors::ControlDarkDark;
					chart->BackColor = System::Drawing::Color::MistyRose;
				}
			}
			if (radioButton2->Checked == true)
			{
				if (b - a != 0 && h0 > 0 && Nmax >= 1)
				{
					i = 0;
					if ((b - a) / h0 < Nmax)
					{
						while (i < (b - a) / h0)
						{
							i++;
							xn[i] = xn[i - 1] + h0;
							vn[i] = sledshag(vn[i - 1], h0, k11(xn[i - 1], vn[i - 1]), k21(xn[i - 1], vn[i - 1], h0, k11(xn[i - 1], vn[i - 1])), k31(xn[i - 1], vn[i - 1], h0, k21(xn[i - 1], vn[i - 1], h0, k11(xn[i - 1], vn[i - 1]))), k41(xn[i - 1], vn[i - 1], h0, k31(xn[i - 1], vn[i - 1], h0, k21(xn[i - 1], vn[i - 1], h0, k11(xn[i - 1], vn[i - 1])))));
						}
					}
					else
					{
						while (i < Nmax)
						{
							i++;
							xn[i] = xn[i - 1] + h0;
							vn[i] = sledshag(vn[i - 1], h0, k11(xn[i - 1], vn[i - 1]), k21(xn[i - 1], vn[i - 1], h0, k11(xn[i - 1], vn[i - 1])), k31(xn[i - 1], vn[i - 1], h0, k21(xn[i - 1], vn[i - 1], h0, k11(xn[i - 1], vn[i - 1]))), k41(xn[i - 1], vn[i - 1], h0, k31(xn[i - 1], vn[i - 1], h0, k21(xn[i - 1], vn[i - 1], h0, k11(xn[i - 1], vn[i - 1])))));
						}
					}
					textBox8->Text = Convert::ToString(i);
					textBox9->Text = Convert::ToString(b - xn[i]);
					while (dataGridView2->Rows->Count != 0 && dataGridView2->Columns->Count != 0)
					{
						dataGridView2->Rows->RemoveAt(0);
						dataGridView2->Columns->RemoveAt(0);
					}
					for (int j = 0; j < 9; j++)
					{
						DataGridViewColumn^ column1 = gcnew DataGridViewColumn();
						DataGridViewCell^ cell = gcnew DataGridViewTextBoxCell();
						column1->CellTemplate = cell;
						dataGridView2->Columns->Add(column1);
						column1 = dataGridView2->Columns[j];
						if (j == 0 || j == 7 || j == 8)
						{
							column1->Width = 30;
						}
						else
						{
							column1->Width = 153, 75;
						}
					}
					for (int j = 0; j < i; j++)
					{
						DataGridViewRow^ row1 = gcnew DataGridViewRow();
						row1->CreateCells(dataGridView2);
						dataGridView2->Rows->Add(row1);
						row1 = dataGridView2->Rows[j];
						row1->Height = 25;
					}
					for (int j = 0; j < 9; j++)
					{
						for (int k = 0; k < i; k++)
						{
							if (j == 0)
							{
								dataGridView2->Rows[k]->Cells[0]->Value = k + 1;
							}
							if (j == 1)
							{
								dataGridView2->Rows[k]->Cells[1]->Value = xn[k + 1];
							}
							if (j == 2)
							{
								dataGridView2->Rows[k]->Cells[2]->Value = vn[k + 1];
							}
							if (j == 6)
							{
								dataGridView2->Rows[k]->Cells[6]->Value = xn[k + 1] - xn[k];
							}
							dataGridView2->Rows[k]->Cells[j]->ReadOnly = true;
						}
					}
					chart3->Series[0]->Points->Clear();
					for (int j = 0; j <= i; j++)
					{
						chart3->Series[0]->Points->AddXY(xn[j], vn[j]);
					}
					chart3->ChartAreas[0]->AxisX->Minimum = a;
					chart3->ChartAreas[0]->AxisX->Maximum = b;
					chart3->ChartAreas[0]->AxisX->MajorGrid->Interval = h0;
					chart3->ChartAreas[0]->AxisY->MajorGrid->Interval = abs(vn[1] - U0);
					chart3->ChartAreas[0]->AxisX->MajorGrid->LineColor = System::Drawing::SystemColors::ControlDarkDark;
					chart3->ChartAreas[0]->AxisY->MajorGrid->LineColor = System::Drawing::SystemColors::ControlDarkDark;
					chart3->BackColor = System::Drawing::Color::MistyRose;
				}
			}
			if (radioButton3->Checked == true)
			{
				double U20 = Convert::ToDouble(textBox20->Text);
				double* U2n = new double[Nmax + 1];
				U2n[0] = U20;
				if (b - a != 0 && h0 > 0 && Nmax >= 1)
				{
					i = 0;
					if ((b - a) / h0 < Nmax)
					{
						while (i < (b - a) / h0)
						{
							i++;
							xn[i] = xn[i - 1] + h0;
							vn[i] = sledshag(vn[i - 1], h0, k1U(xn[i - 1], vn[i - 1], a), k2U(xn[i - 1], vn[i - 1], h0, k1U(xn[i - 1], vn[i - 1], a), a), k3U(xn[i - 1], vn[i - 1], h0, k2U(xn[i - 1], vn[i - 1], h0, k1U(xn[i - 1], vn[i - 1], a), a), a), k4U(xn[i - 1], vn[i - 1], h0, k3U(xn[i - 1], vn[i - 1], h0, k2U(xn[i - 1], vn[i - 1], h0, k1U(xn[i - 1], vn[i - 1], a), a), a), a));
							U2n[i] = sledshag(U2n[i - 1], h0, k1U2(xn[i - 1], U2n[i - 1], a), k2U2(xn[i - 1], U2n[i - 1], h0, k1U2(xn[i - 1], U2n[i - 1], a), a), k3U2(xn[i - 1], U2n[i - 1], h0, k2U2(xn[i - 1], U2n[i - 1], h0, k1U2(xn[i - 1], U2n[i - 1], a), a), a), k4U2(xn[i - 1], U2n[i - 1], h0, k3U2(xn[i - 1], U2n[i - 1], h0, k2U2(xn[i - 1], U2n[i - 1], h0, k1U2(xn[i - 1], U2n[i - 1], a), a), a), a));
						}
					}
					else
					{
						while (i < Nmax)
						{
							i++;
							xn[i] = xn[i - 1] + h0;
							vn[i] = sledshag(vn[i - 1], h0, k1U(xn[i - 1], vn[i - 1], a), k2U(xn[i - 1], vn[i - 1], h0, k1U(xn[i - 1], vn[i - 1], a), a), k3U(xn[i - 1], vn[i - 1], h0, k2U(xn[i - 1], vn[i - 1], h0, k1U(xn[i - 1], vn[i - 1], a), a), a), k4U(xn[i - 1], vn[i - 1], h0, k3U(xn[i - 1], vn[i - 1], h0, k2U(xn[i - 1], vn[i - 1], h0, k1U(xn[i - 1], vn[i - 1], a), a), a), a));
							U2n[i] = sledshag(U2n[i - 1], h0, k1U2(xn[i - 1], U2n[i - 1], a), k2U2(xn[i - 1], U2n[i - 1], h0, k1U2(xn[i - 1], U2n[i - 1], a), a), k3U2(xn[i - 1], U2n[i - 1], h0, k2U2(xn[i - 1], U2n[i - 1], h0, k1U2(xn[i - 1], U2n[i - 1], a), a), a), k4U2(xn[i - 1], U2n[i - 1], h0, k3U2(xn[i - 1], U2n[i - 1], h0, k2U2(xn[i - 1], U2n[i - 1], h0, k1U2(xn[i - 1], U2n[i - 1], a), a), a), a));
						}
					}
					textBox8->Text = Convert::ToString(i);
					textBox9->Text = Convert::ToString(b - xn[i]);
					while (dataGridView3->Rows->Count != 0 && dataGridView3->Columns->Count != 0)
					{
						dataGridView3->Rows->RemoveAt(0);
						dataGridView3->Columns->RemoveAt(0);
					}
					for (int j = 0; j < 10; j++)
					{
						DataGridViewColumn^ column1 = gcnew DataGridViewColumn();
						DataGridViewCell^ cell = gcnew DataGridViewTextBoxCell();
						column1->CellTemplate = cell;
						dataGridView3->Columns->Add(column1);
						column1 = dataGridView3->Columns[j];
						if (j == 0 || j == 7 || j == 8)
						{
							column1->Width = 30;
						}
						else
						{
							column1->Width = 153, 75;
						}
					}
					for (int j = 0; j < i; j++)
					{
						DataGridViewRow^ row1 = gcnew DataGridViewRow();
						row1->CreateCells(dataGridView3);
						dataGridView3->Rows->Add(row1);
						row1 = dataGridView3->Rows[j];
						row1->Height = 25;
					}
					for (int j = 0; j < 10; j++)
					{
						for (int k = 0; k < i; k++)
						{
							if (j == 0)
							{
								dataGridView3->Rows[k]->Cells[0]->Value = k + 1;
							}
							if (j == 1)
							{
								dataGridView3->Rows[k]->Cells[1]->Value = xn[k + 1];
							}
							if (j == 2)
							{
								dataGridView3->Rows[k]->Cells[2]->Value = vn[k + 1];
							}
							if (j == 6)
							{
								dataGridView3->Rows[k]->Cells[6]->Value = xn[k + 1] - xn[k];
							}
							if (j == 9)
							{
								dataGridView3->Rows[k]->Cells[9]->Value = U2n[k + 1];
							}
							dataGridView3->Rows[k]->Cells[j]->ReadOnly = true;
						}
					}
					chart3->Series[0]->Points->Clear();
					for (int j = 0; j <= i; j++)
					{
						chart3->Series[0]->Points->AddXY(xn[j], vn[j]);
					}
					chart3->ChartAreas[0]->AxisX->Minimum = a;
					chart3->ChartAreas[0]->AxisX->Maximum = b;
					chart3->ChartAreas[0]->AxisX->MajorGrid->Interval = h0;
					chart3->ChartAreas[0]->AxisY->MajorGrid->Interval = abs(vn[1] - U0);
					chart3->ChartAreas[0]->AxisX->MajorGrid->LineColor = System::Drawing::SystemColors::ControlDarkDark;
					chart3->ChartAreas[0]->AxisY->MajorGrid->LineColor = System::Drawing::SystemColors::ControlDarkDark;
					chart3->BackColor = System::Drawing::Color::MistyRose;
					chart1->Series[0]->Points->Clear();
					for (int j = 0; j <= i; j++)
					{
						chart1->Series[0]->Points->AddXY(xn[j], U2n[j]);
					}
					chart1->ChartAreas[0]->AxisX->Minimum = a;
					chart1->ChartAreas[0]->AxisX->Maximum = b;
					chart1->ChartAreas[0]->AxisX->MajorGrid->Interval = h0;
					chart1->ChartAreas[0]->AxisY->MajorGrid->Interval = abs(U2n[1] - U20);
					chart1->ChartAreas[0]->AxisX->MajorGrid->LineColor = System::Drawing::SystemColors::ControlDarkDark;
					chart1->ChartAreas[0]->AxisY->MajorGrid->LineColor = System::Drawing::SystemColors::ControlDarkDark;
					chart1->BackColor = System::Drawing::Color::MistyRose;
					chart2->Series[0]->Points->Clear();
					for (int j = 0; j <= i; j++)
					{
						chart2->Series[0]->Points->AddXY(vn[j], U2n[j]);
					}
					chart2->ChartAreas[0]->AxisX->Minimum = vn[i];
					chart2->ChartAreas[0]->AxisX->Maximum = vn[0];
					chart2->ChartAreas[0]->AxisY->Minimum = U2n[i];
					chart2->ChartAreas[0]->AxisY->Maximum = U2n[0];
					chart2->ChartAreas[0]->AxisX->MajorGrid->LineColor = System::Drawing::SystemColors::ControlDarkDark;
					chart2->ChartAreas[0]->AxisY->MajorGrid->LineColor = System::Drawing::SystemColors::ControlDarkDark;
					chart2->BackColor = System::Drawing::Color::MistyRose;
					delete[] U2n;
				}
			}
			delete[] xn;
			delete[] vn;
			delete[] Un;
			delete[] delta;
		}
		//счёт с учётом локальной погрешности
		System::Void button2_Click(System::Object^ sender, System::EventArgs^ e)
		{
			a = Convert::ToDouble(textBox1->Text);
			b = Convert::ToDouble(textBox2->Text);
			U0 = Convert::ToDouble(textBox3->Text);
			h0 = Convert::ToDouble(textBox4->Text);
			Nmax = Convert::ToInt32(textBox5->Text);
			Egr = Convert::ToDouble(textBox6->Text);
			E = Convert::ToDouble(textBox7->Text);
			xn = new double[Nmax + 1];
			xn[0] = a;
			vn = new double[Nmax + 1];
			vn[0] = U0;
			v2n = new double[Nmax + 1];
			v2n[0] = U0;
			OLP = new double[Nmax + 1];
			OLP[0] = 0;
			hn = new double[Nmax + 1];
			hn[0] = h0;
			C1 = new int[Nmax + 1];
			for (int i = 0; i < Nmax + 1; i++)
			{
				C1[i] = 0;
			}
			C2 = new int[Nmax + 1];
			for (int i = 0; i < Nmax + 1; i++)
			{
				C2[i] = 0;
			}
			if (b - a != 0 && h0 > 0 && Nmax >= 1)
			{
				if (radioButton1->Checked == true)
				{
					double* Un = new double[Nmax + 1];
					Un[0] = U0;
					double* delta = new double[Nmax + 1];
					delta[0] = 0;
					i = 0;
					C1SUM = 0;
					C2SUM = 0;
					while (xn[i] <= b - Egr && i < Nmax)
					{
						if (xn[i] + hn[i] > b)
						{
							break;
						}
						i++;
						xn[i] = xn[i - 1] + hn[i - 1];
						vn[i] = sledshag(vn[i - 1], hn[i - 1], k1(xn[i - 1], vn[i - 1]), k2(xn[i - 1], vn[i - 1], hn[i - 1], k1(xn[i - 1], vn[i - 1])), k3(xn[i - 1], vn[i - 1], hn[i - 1], k2(xn[i - 1], vn[i - 1], hn[i - 1], k1(xn[i - 1], vn[i - 1]))), k4(xn[i - 1], vn[i - 1], hn[i - 1], k3(xn[i - 1], vn[i - 1], hn[i - 1], k2(xn[i - 1], vn[i - 1], hn[i - 1], k1(xn[i - 1], vn[i - 1])))));
						v2n[i] = sledshag(vn[i - 1], hn[i - 1] / 2, k1(xn[i - 1], vn[i - 1]), k2(xn[i - 1], vn[i - 1], hn[i - 1] / 2, k1(xn[i - 1], vn[i - 1])), k3(xn[i - 1], vn[i - 1], hn[i - 1] / 2, k2(xn[i - 1], vn[i - 1], hn[i - 1] / 2, k1(xn[i - 1], vn[i - 1]))), k4(xn[i - 1], vn[i - 1], hn[i - 1] / 2, k3(xn[i - 1], vn[i - 1], hn[i - 1] / 2, k2(xn[i - 1], vn[i - 1], hn[i - 1] / 2, k1(xn[i - 1], vn[i - 1])))));
						v2n[i] = sledshag(v2n[i], hn[i - 1] / 2, k1(xn[i - 1] + (hn[i - 1] / 2), v2n[i]), k2(xn[i - 1] + (hn[i - 1] / 2), v2n[i], hn[i - 1] / 2, k1(xn[i - 1] + (hn[i - 1] / 2), v2n[i])), k3(xn[i - 1] + (hn[i - 1] / 2), v2n[i], hn[i - 1] / 2, k2(xn[i - 1] + (hn[i - 1] / 2), v2n[i], hn[i - 1] / 2, k1(xn[i - 1] + (hn[i - 1] / 2), v2n[i]))), k4(xn[i - 1] + (hn[i - 1] / 2), v2n[i], hn[i - 1] / 2, k3(xn[i - 1] + (hn[i - 1] / 2), v2n[i], hn[i - 1] / 2, k2(xn[i - 1] + (hn[i - 1] / 2), v2n[i], hn[i - 1] / 2, k1(xn[i - 1] + (hn[i - 1] / 2), v2n[i])))));
						OLP[i] = ocenkapogreshnosti(vn[i], v2n[i], 4);
						if (abs(OLP[i]) >= E / pow(2, 5) && abs(OLP[i]) < E)
						{
							hn[i] = hn[i - 1];
							Un[i] = istinnoeResh(C(xn[0], U0), xn[i]);
							delta[i] = abs(Un[i] - vn[i]);
						}
						if (abs(OLP[i]) < E / pow(2, 5))
						{
							hn[i] = 2 * hn[i - 1];
							Un[i] = istinnoeResh(C(xn[0], U0), xn[i]);
							delta[i] = abs(Un[i] - vn[i]);
							C2[i + 1]++;
						}
						else
						{
							while (abs(OLP[i]) > E)
							{
								hn[i - 1] = hn[i - 1] / 2;
								C1[i]++;
								xn[i] = xn[i - 1] + hn[i - 1];
								vn[i] = sledshag(vn[i - 1], hn[i - 1], k1(xn[i - 1], vn[i - 1]), k2(xn[i - 1], vn[i - 1], hn[i - 1], k1(xn[i - 1], vn[i - 1])), k3(xn[i - 1], vn[i - 1], hn[i - 1], k2(xn[i - 1], vn[i - 1], hn[i - 1], k1(xn[i - 1], vn[i - 1]))), k4(xn[i - 1], vn[i - 1], hn[i - 1], k3(xn[i - 1], vn[i - 1], hn[i - 1], k2(xn[i - 1], vn[i - 1], hn[i - 1], k1(xn[i - 1], vn[i - 1])))));
								v2n[i] = sledshag(vn[i - 1], hn[i - 1] / 2, k1(xn[i - 1], vn[i - 1]), k2(xn[i - 1], vn[i - 1], hn[i - 1] / 2, k1(xn[i - 1], vn[i - 1])), k3(xn[i - 1], vn[i - 1], hn[i - 1] / 2, k2(xn[i - 1], vn[i - 1], hn[i - 1] / 2, k1(xn[i - 1], vn[i - 1]))), k4(xn[i - 1], vn[i - 1], hn[i - 1] / 2, k3(xn[i - 1], vn[i - 1], hn[i - 1] / 2, k2(xn[i - 1], vn[i - 1], hn[i - 1] / 2, k1(xn[i - 1], vn[i - 1])))));
								v2n[i] = sledshag(v2n[i], hn[i - 1] / 2, k1(xn[i - 1] + (hn[i - 1] / 2), v2n[i]), k2(xn[i - 1] + (hn[i - 1] / 2), v2n[i], hn[i - 1] / 2, k1(xn[i - 1] + (hn[i - 1] / 2), v2n[i])), k3(xn[i - 1] + (hn[i - 1] / 2), v2n[i], hn[i - 1] / 2, k2(xn[i - 1] + (hn[i - 1] / 2), v2n[i], hn[i - 1] / 2, k1(xn[i - 1] + (hn[i - 1] / 2), v2n[i]))), k4(xn[i - 1] + (hn[i - 1] / 2), v2n[i], hn[i - 1] / 2, k3(xn[i - 1] + (hn[i - 1] / 2), v2n[i], hn[i - 1] / 2, k2(xn[i - 1] + (hn[i - 1] / 2), v2n[i], hn[i - 1] / 2, k1(xn[i - 1] + (hn[i - 1] / 2), v2n[i])))));
								OLP[i] = ocenkapogreshnosti(vn[i], v2n[i], 4);
							}
							if (abs(OLP[i]) >= E / pow(2, 5) && abs(OLP[i]) < E)
							{
								hn[i] = hn[i - 1];
								Un[i] = istinnoeResh(C(xn[0], U0), xn[i]);
								delta[i] = abs(Un[i] - vn[i]);
							}
							if (abs(OLP[i]) < E / pow(2, 5))
							{
								hn[i] = 2 * hn[i - 1];
								Un[i] = istinnoeResh(C(xn[0], U0), xn[i]);
								delta[i] = abs(Un[i] - vn[i]);
								C2[i + 1]++;
							}
						}
					}
					OLPmax = OLP[0];
					for (int j = 1; j <= i; j++)
					{
						if (OLP[j] > OLPmax)
						{
							OLPmax = OLP[j];
							X_OLPMAX = xn[j];
						}
					}
					hmax = xn[1] - xn[0];
					X_hMAX = xn[1];
					for (int j = 1; j <= i; j++)
					{
						if (abs(xn[j] - xn[j - 1]) > hmax)
						{
							hmax = abs(xn[j] - xn[j - 1]);
							X_hMAX = xn[j];
						}
					}
					hmin = xn[1] - xn[0];
					X_hMIN = xn[1];
					for (int j = 1; j <= i; j++)
					{
						if (abs(xn[j] - xn[j - 1]) < hmin)
						{
							hmin = abs(xn[j] - xn[j - 1]);
							X_hMIN = xn[j];
						}
					}
					DELTAMAX = delta[0];
					for (int j = 1; j <= i; j++)
					{
						if (delta[j] > DELTAMAX)
						{
							DELTAMAX = delta[j];
							X_DELTAMAX = xn[j];
						}
					}
					for (int j = 1; j <= i; j++)
					{
						C1SUM += C1[j];
						C2SUM += C2[j];
					}
					textBox8->Text = Convert::ToString(i);
					textBox9->Text = Convert::ToString(b - xn[i]);
					textBox10->Text = Convert::ToString(OLPmax);
					textBox19->Text = Convert::ToString(X_OLPMAX);
					textBox11->Text = Convert::ToString(C1SUM);
					textBox12->Text = Convert::ToString(C2SUM);
					textBox13->Text = Convert::ToString(hmax);
					textBox14->Text = Convert::ToString(X_hMAX);
					textBox16->Text = Convert::ToString(hmin);
					textBox15->Text = Convert::ToString(X_hMIN);
					textBox17->Text = Convert::ToString(DELTAMAX);
					textBox18->Text = Convert::ToString(X_DELTAMAX);
					while (dataGridView1->Rows->Count != 0 && dataGridView1->Columns->Count != 0)
					{
						dataGridView1->Rows->RemoveAt(0);
						dataGridView1->Columns->RemoveAt(0);
					}
					for (int j = 0; j <= 10; j++)
					{
						DataGridViewColumn^ column1 = gcnew DataGridViewColumn();
						DataGridViewCell^ cell = gcnew DataGridViewTextBoxCell();
						column1->CellTemplate = cell;
						dataGridView1->Columns->Add(column1);
						column1 = dataGridView1->Columns[j];
						if (j == 0 || j == 7 || j == 8)
						{
							column1->Width = 30;
						}
						else
						{
							column1->Width = 153, 75;
						}
					}
					for (int j = 0; j < i; j++)
					{
						DataGridViewRow^ row1 = gcnew DataGridViewRow();
						row1->CreateCells(dataGridView1);
						dataGridView1->Rows->Add(row1);
						row1 = dataGridView1->Rows[j];
						row1->Height = 25;
					}
					for (int j = 0; j < 11; j++)
					{
						for (int k = 0; k < i; k++)
						{
							if (j == 0)
							{
								dataGridView1->Rows[k]->Cells[0]->Value = k + 1;
							}
							if (j == 1)
							{
								dataGridView1->Rows[k]->Cells[1]->Value = xn[k + 1];
							}
							if (j == 2)
							{
								dataGridView1->Rows[k]->Cells[2]->Value = vn[k + 1];
							}
							if (j == 3)
							{
								dataGridView1->Rows[k]->Cells[3]->Value = v2n[k + 1];
							}
							if (j == 4)
							{
								dataGridView1->Rows[k]->Cells[4]->Value = vn[k + 1] - v2n[k + 1];
							}
							if (j == 5)
							{
								dataGridView1->Rows[k]->Cells[5]->Value = OLP[k + 1];
							}
							if (j == 6)
							{
								dataGridView1->Rows[k]->Cells[6]->Value = xn[k + 1] - xn[k];
							}
							if (j == 7)
							{
								dataGridView1->Rows[k]->Cells[7]->Value = C1[k + 1];
							}
							if (j == 8)
							{
								dataGridView1->Rows[k]->Cells[8]->Value = C2[k + 1];
							}
							if (j == 9)
							{
								dataGridView1->Rows[k]->Cells[9]->Value = Un[k + 1];
							}
							if (j == 10)
							{
								dataGridView1->Rows[k]->Cells[10]->Value = delta[k + 1];
							}
							dataGridView1->Rows[k]->Cells[j]->ReadOnly = true;
						}
					}
					chart->Series[0]->Points->Clear();
					for (int j = 0; j <= i; j++)
					{
						chart->Series[0]->Points->AddXY(xn[j], Un[j]);
					}
					chart->Series[1]->Points->Clear();
					for (int j = 0; j <= i; j++)
					{
						chart->Series[1]->Points->AddXY(xn[j], vn[j]);
					}
					chart->ChartAreas[0]->AxisX->Minimum = a;
					chart->ChartAreas[0]->AxisX->Maximum = b;
					chart->ChartAreas[0]->AxisX->MajorGrid->Interval = hmax;
					chart->ChartAreas[0]->AxisY->MajorGrid->Interval = vn[1] - U0;
					chart->ChartAreas[0]->AxisX->MajorGrid->LineColor = System::Drawing::SystemColors::ControlDarkDark;
					chart->ChartAreas[0]->AxisY->MajorGrid->LineColor = System::Drawing::SystemColors::ControlDarkDark;
					chart->BackColor = System::Drawing::Color::MistyRose;
				}
				if (radioButton2->Checked == true)
				{
					i = 0;
					C1SUM = 0;
					C2SUM = 0;
					while (xn[i] <= b - Egr && i < Nmax)
					{
						if (xn[i] + hn[i] > b)
						{
							break;
						}
						i++;
						xn[i] = xn[i - 1] + hn[i - 1];
						vn[i] = sledshag(vn[i - 1], hn[i - 1], k11(xn[i - 1], vn[i - 1]), k21(xn[i - 1], vn[i - 1], hn[i - 1], k11(xn[i - 1], vn[i - 1])), k31(xn[i - 1], vn[i - 1], hn[i - 1], k21(xn[i - 1], vn[i - 1], hn[i - 1], k11(xn[i - 1], vn[i - 1]))), k41(xn[i - 1], vn[i - 1], hn[i - 1], k31(xn[i - 1], vn[i - 1], hn[i - 1], k21(xn[i - 1], vn[i - 1], hn[i - 1], k11(xn[i - 1], vn[i - 1])))));
						v2n[i] = sledshag(vn[i - 1], hn[i - 1] / 2, k11(xn[i - 1], vn[i - 1]), k21(xn[i - 1], vn[i - 1], hn[i - 1] / 2, k11(xn[i - 1], vn[i - 1])), k31(xn[i - 1], vn[i - 1], hn[i - 1] / 2, k21(xn[i - 1], vn[i - 1], hn[i - 1] / 2, k11(xn[i - 1], vn[i - 1]))), k41(xn[i - 1], vn[i - 1], hn[i - 1] / 2, k31(xn[i - 1], vn[i - 1], hn[i - 1] / 2, k21(xn[i - 1], vn[i - 1], hn[i - 1] / 2, k11(xn[i - 1], vn[i - 1])))));
						v2n[i] = sledshag(v2n[i], hn[i - 1] / 2, k11(xn[i - 1] + (hn[i - 1] / 2), v2n[i]), k21(xn[i - 1] + (hn[i - 1] / 2), v2n[i], hn[i - 1] / 2, k11(xn[i - 1] + (hn[i - 1] / 2), v2n[i])), k31(xn[i - 1] + (hn[i - 1] / 2), v2n[i], hn[i - 1] / 2, k21(xn[i - 1] + (hn[i - 1] / 2), v2n[i], hn[i - 1] / 2, k11(xn[i - 1] + (hn[i - 1] / 2), v2n[i]))), k41(xn[i - 1] + (hn[i - 1] / 2), v2n[i], hn[i - 1] / 2, k31(xn[i - 1] + (hn[i - 1] / 2), v2n[i], hn[i - 1] / 2, k21(xn[i - 1] + (hn[i - 1] / 2), v2n[i], hn[i - 1] / 2, k11(xn[i - 1] + (hn[i - 1] / 2), v2n[i])))));
						OLP[i] = ocenkapogreshnosti(vn[i], v2n[i], 4);
						if (abs(OLP[i]) >= E / pow(2, 5) && abs(OLP[i]) < E)
						{
							hn[i] = hn[i - 1];
						}
						if (abs(OLP[i]) < E / pow(2, 5))
						{
							hn[i] = 2 * hn[i - 1];
							C2[i + 1]++;
						}
						else
						{
							while (abs(OLP[i]) > E)
							{
								hn[i - 1] = hn[i - 1] / 2;
								C1[i]++;
								xn[i] = xn[i - 1] + hn[i - 1];
								vn[i] = sledshag(vn[i - 1], hn[i - 1], k11(xn[i - 1], vn[i - 1]), k21(xn[i - 1], vn[i - 1], hn[i - 1], k11(xn[i - 1], vn[i - 1])), k31(xn[i - 1], vn[i - 1], hn[i - 1], k21(xn[i - 1], vn[i - 1], hn[i - 1], k11(xn[i - 1], vn[i - 1]))), k41(xn[i - 1], vn[i - 1], hn[i - 1], k31(xn[i - 1], vn[i - 1], hn[i - 1], k21(xn[i - 1], vn[i - 1], hn[i - 1], k11(xn[i - 1], vn[i - 1])))));
								v2n[i] = sledshag(vn[i - 1], hn[i - 1] / 2, k11(xn[i - 1], vn[i - 1]), k21(xn[i - 1], vn[i - 1], hn[i - 1] / 2, k11(xn[i - 1], vn[i - 1])), k31(xn[i - 1], vn[i - 1], hn[i - 1] / 2, k21(xn[i - 1], vn[i - 1], hn[i - 1] / 2, k11(xn[i - 1], vn[i - 1]))), k41(xn[i - 1], vn[i - 1], hn[i - 1] / 2, k31(xn[i - 1], vn[i - 1], hn[i - 1] / 2, k21(xn[i - 1], vn[i - 1], hn[i - 1] / 2, k11(xn[i - 1], vn[i - 1])))));
								v2n[i] = sledshag(v2n[i], hn[i - 1] / 2, k11(xn[i - 1] + (hn[i - 1] / 2), v2n[i]), k21(xn[i - 1] + (hn[i - 1] / 2), v2n[i], hn[i - 1] / 2, k11(xn[i - 1] + (hn[i - 1] / 2), v2n[i])), k31(xn[i - 1] + (hn[i - 1] / 2), v2n[i], hn[i - 1] / 2, k21(xn[i - 1] + (hn[i - 1] / 2), v2n[i], hn[i - 1] / 2, k11(xn[i - 1] + (hn[i - 1] / 2), v2n[i]))), k41(xn[i - 1] + (hn[i - 1] / 2), v2n[i], hn[i - 1] / 2, k31(xn[i - 1] + (hn[i - 1] / 2), v2n[i], hn[i - 1] / 2, k21(xn[i - 1] + (hn[i - 1] / 2), v2n[i], hn[i - 1] / 2, k11(xn[i - 1] + (hn[i - 1] / 2), v2n[i])))));
								OLP[i] = ocenkapogreshnosti(vn[i], v2n[i], 4);
							}
							if (abs(OLP[i]) >= E / pow(2, 5) && abs(OLP[i]) < E)
							{
								hn[i] = hn[i - 1];
							}
							if (abs(OLP[i]) < E / pow(2, 5))
							{
								hn[i] = 2 * hn[i - 1];
								C2[i + 1]++;
							}
						}
					}
					OLPmax = OLP[0];
					for (int j = 1; j <= i; j++)
					{
						if (OLP[j] > OLPmax)
						{
							OLPmax = OLP[j];
							X_OLPMAX = xn[j];
						}
					}
					hmax = xn[1] - xn[0];
					X_hMAX = xn[1];
					for (int j = 1; j <= i; j++)
					{
						if (abs(xn[j] - xn[j - 1]) > hmax)
						{
							hmax = abs(xn[j] - xn[j - 1]);
							X_hMAX = xn[j];
						}
					}
					hmin = xn[1] - xn[0];
					X_hMIN = xn[1];
					for (int j = 1; j <= i; j++)
					{
						if (abs(xn[j] - xn[j - 1]) < hmin)
						{
							hmin = abs(xn[j] - xn[j - 1]);
							X_hMIN = xn[j];
						}
					}
					for (int j = 1; j <= i; j++)
					{
						C1SUM += C1[j];
						C2SUM += C2[j];
					}
					textBox8->Text = Convert::ToString(i);
					textBox9->Text = Convert::ToString(b - xn[i]);
					textBox10->Text = Convert::ToString(OLPmax);
					textBox19->Text = Convert::ToString(X_OLPMAX);
					textBox11->Text = Convert::ToString(C1SUM);
					textBox12->Text = Convert::ToString(C2SUM);
					textBox13->Text = Convert::ToString(hmax);
					textBox14->Text = Convert::ToString(X_hMAX);
					textBox16->Text = Convert::ToString(hmin);
					textBox15->Text = Convert::ToString(X_hMIN);
					while (dataGridView2->Rows->Count != 0 && dataGridView2->Columns->Count != 0)
					{
						dataGridView2->Rows->RemoveAt(0);
						dataGridView2->Columns->RemoveAt(0);
					}
					for (int j = 0; j < 9; j++)
					{
						DataGridViewColumn^ column1 = gcnew DataGridViewColumn();
						DataGridViewCell^ cell = gcnew DataGridViewTextBoxCell();
						column1->CellTemplate = cell;
						dataGridView2->Columns->Add(column1);
						column1 = dataGridView2->Columns[j];
						if (j == 0 || j == 7 || j == 8)
						{
							column1->Width = 30;
						}
						else
						{
							column1->Width = 153, 75;
						}
					}
					for (int j = 0; j < i; j++)
					{
						DataGridViewRow^ row1 = gcnew DataGridViewRow();
						row1->CreateCells(dataGridView2);
						dataGridView2->Rows->Add(row1);
						row1 = dataGridView2->Rows[j];
						row1->Height = 25;
					}
					for (int j = 0; j < 9; j++)
					{
						for (int k = 0; k < i; k++)
						{
							if (j == 0)
							{
								dataGridView2->Rows[k]->Cells[0]->Value = k + 1;
							}
							if (j == 1)
							{
								dataGridView2->Rows[k]->Cells[1]->Value = xn[k + 1];
							}
							if (j == 2)
							{
								dataGridView2->Rows[k]->Cells[2]->Value = vn[k + 1];
							}
							if (j == 3)
							{
								dataGridView2->Rows[k]->Cells[3]->Value = v2n[k + 1];
							}
							if (j == 4)
							{
								dataGridView2->Rows[k]->Cells[4]->Value = vn[k + 1] - v2n[k + 1];
							}
							if (j == 5)
							{
								dataGridView2->Rows[k]->Cells[5]->Value = OLP[k + 1];
							}
							if (j == 6)
							{
								dataGridView2->Rows[k]->Cells[6]->Value = xn[k + 1] - xn[k];
							}
							if (j == 7)
							{
								dataGridView2->Rows[k]->Cells[7]->Value = C1[k + 1];
							}
							if (j == 8)
							{
								dataGridView2->Rows[k]->Cells[8]->Value = C2[k + 1];
							}
							dataGridView2->Rows[k]->Cells[j]->ReadOnly = true;
						}
					}
					chart3->Series[0]->Points->Clear();
					for (int j = 0; j <= i; j++)
					{
						chart3->Series[0]->Points->AddXY(xn[j], vn[j]);
					}
					chart3->ChartAreas[0]->AxisX->Minimum = a;
					chart3->ChartAreas[0]->AxisX->Maximum = b;
					chart3->ChartAreas[0]->AxisX->MajorGrid->Interval = h0;
					chart3->ChartAreas[0]->AxisY->MajorGrid->Interval = abs(vn[1] - U0);
					chart3->ChartAreas[0]->AxisX->MajorGrid->LineColor = System::Drawing::SystemColors::ControlDarkDark;
					chart3->ChartAreas[0]->AxisY->MajorGrid->LineColor = System::Drawing::SystemColors::ControlDarkDark;
					chart3->BackColor = System::Drawing::Color::MistyRose;
				}
				if (radioButton3->Checked == true)
				{
					double* x2n = new double[Nmax + 1];
					x2n[0] = a;
					double* h2n = new double[Nmax + 1];
					h2n[0] = h0;
					double U20 = Convert::ToDouble(textBox20->Text);
					double* U2n = new double[Nmax + 1];
					U2n[0] = U20;
					double* U22n = new double[Nmax + 1];
					U22n[0] = U20;
					double* OLPU2 = new double[Nmax + 1];
					OLPU2[0] = 0;
		        	i = 0;
					C1SUM = 0;
					C2SUM = 0;
					while (xn[i] <= b - Egr && i < Nmax)
					{
						if (xn[i] + hn[i] > b)
						{
							break;
						}
						i++;
						xn[i] = xn[i - 1] + hn[i - 1];
						x2n[i] = x2n[i - 1] + h2n[i - 1];
						vn[i] = sledshag(vn[i - 1], hn[i - 1], k1U(xn[i - 1], vn[i - 1], a), k2U(xn[i - 1], vn[i - 1], hn[i - 1], k1U(xn[i - 1], vn[i - 1], a), a), k3U(xn[i - 1], vn[i - 1], hn[i - 1], k2U(xn[i - 1], vn[i - 1], hn[i - 1], k1U(xn[i - 1], vn[i - 1], a), a), a), k4U(xn[i - 1], vn[i - 1], hn[i - 1], k3U(xn[i - 1], vn[i - 1], hn[i - 1], k2U(xn[i - 1], vn[i - 1], hn[i - 1], k1U(xn[i - 1], vn[i - 1], a), a), a), a));
						U2n[i] = sledshag(U2n[i - 1], h2n[i - 1], k1U2(x2n[i - 1], U2n[i - 1], a), k2U2(x2n[i - 1], U2n[i - 1], h2n[i - 1], k1U2(x2n[i - 1], U2n[i - 1], a), a), k3U2(x2n[i - 1], U2n[i - 1], h2n[i - 1], k2U2(x2n[i - 1], U2n[i - 1], h2n[i - 1], k1U2(x2n[i - 1], U2n[i - 1], a), a), a), k4U2(x2n[i - 1], U2n[i - 1], h2n[i - 1], k3U2(x2n[i - 1], U2n[i - 1], h2n[i - 1], k2U2(x2n[i - 1], U2n[i - 1], h2n[i - 1], k1U2(x2n[i - 1], U2n[i - 1], a), a), a), a));
						v2n[i] = sledshag(vn[i - 1], hn[i - 1] / 2, k1U(xn[i - 1], vn[i - 1], a), k2U(xn[i - 1], vn[i - 1], hn[i - 1] / 2, k1U(xn[i - 1], vn[i - 1], a), a), k3U(xn[i - 1], vn[i - 1], hn[i - 1] / 2, k2U(xn[i - 1], vn[i - 1], hn[i - 1] / 2, k1U(xn[i - 1], vn[i - 1], a), a), a), k4U(xn[i - 1], vn[i - 1], hn[i - 1] / 2, k3U(xn[i - 1], vn[i - 1], hn[i - 1] / 2, k2U(xn[i - 1], vn[i - 1], hn[i - 1] / 2, k1U(xn[i - 1], vn[i - 1], a), a), a), a));
						v2n[i] = sledshag(v2n[i], hn[i - 1] / 2, k1U(xn[i - 1] + (hn[i - 1] / 2), v2n[i], a), k2U(xn[i - 1] + (hn[i - 1] / 2), v2n[i], hn[i - 1] / 2, k1U(xn[i - 1] + (hn[i - 1] / 2), v2n[i], a), a), k3U(xn[i - 1] + (hn[i - 1] / 2), v2n[i], hn[i - 1] / 2, k2U(xn[i - 1] + (hn[i - 1] / 2), v2n[i], hn[i - 1] / 2, k1U(xn[i - 1] + (hn[i - 1] / 2), v2n[i], a), a), a), k4U(xn[i - 1] + (hn[i - 1] / 2), v2n[i], hn[i - 1] / 2, k3U(xn[i - 1] + (hn[i - 1] / 2), v2n[i], hn[i - 1] / 2, k2U(xn[i - 1] + (hn[i - 1] / 2), v2n[i], hn[i - 1] / 2, k1U(xn[i - 1] + (hn[i - 1] / 2), v2n[i], a), a), a), a));
						U22n[i] = sledshag(U2n[i - 1], h2n[i - 1] / 2, k1U2(x2n[i - 1], U2n[i - 1], a), k2U2(xn[i - 1], U2n[i - 1], h2n[i - 1] / 2, k1U2(x2n[i - 1], U2n[i - 1], a), a), k3U2(x2n[i - 1], U2n[i - 1], h2n[i - 1] / 2, k2U2(x2n[i - 1], U2n[i - 1], h2n[i - 1] / 2, k1U2(x2n[i - 1], U2n[i - 1], a), a), a), k4U2(x2n[i - 1], U2n[i - 1], h2n[i - 1] / 2, k3U2(x2n[i - 1], U2n[i - 1], h2n[i - 1] / 2, k2U2(x2n[i - 1], U2n[i - 1], h2n[i - 1] / 2, k1U2(x2n[i - 1], U2n[i - 1], a), a), a), a));
						U22n[i] = sledshag(U22n[i], h2n[i - 1] / 2, k1U2(x2n[i - 1] + (h2n[i - 1] / 2), U22n[i], a), k2U2(x2n[i - 1] + (h2n[i - 1] / 2), U22n[i], h2n[i - 1] / 2, k1U2(x2n[i - 1] + (h2n[i - 1] / 2), U22n[i], a), a), k3U2(x2n[i - 1] + (h2n[i - 1] / 2), U22n[i], h2n[i - 1] / 2, k2U2(x2n[i - 1] + (h2n[i - 1] / 2), U22n[i], h2n[i - 1] / 2, k1U2(x2n[i - 1] + (h2n[i - 1] / 2), U22n[i], a), a), a), k4U2(x2n[i - 1] + (h2n[i - 1] / 2), U22n[i], h2n[i - 1] / 2, k3U2(x2n[i - 1] + (h2n[i - 1] / 2), U22n[i], h2n[i - 1] / 2, k2U2(x2n[i - 1] + (h2n[i - 1] / 2), U22n[i], h2n[i - 1] / 2, k1U2(x2n[i - 1] + (h2n[i - 1] / 2), U22n[i], a), a), a), a));
						OLP[i] = ocenkapogreshnosti(vn[i], v2n[i], 4);
						OLPU2[i] = ocenkapogreshnosti(U2n[i], U22n[i], 4);
						if (abs(OLP[i]) >= E / pow(2, 5) && abs(OLP[i]) < E)
						{
							hn[i] = hn[i - 1];
						}
						if (abs(OLP[i]) < E / pow(2, 5))
						{
							hn[i] = 2 * hn[i - 1];
							C2[i + 1]++;
						}
						else
						{
							while (abs(OLP[i]) > E)
							{
								hn[i - 1] = hn[i - 1] / 2;
								C1[i]++;
								xn[i] = xn[i - 1] + hn[i - 1];
								vn[i] = sledshag(vn[i - 1], hn[i - 1], k1U(xn[i - 1], vn[i - 1], a), k2U(xn[i - 1], vn[i - 1], hn[i - 1], k1U(xn[i - 1], vn[i - 1], a), a), k3U(xn[i - 1], vn[i - 1], hn[i - 1], k2U(xn[i - 1], vn[i - 1], hn[i - 1], k1U(xn[i - 1], vn[i - 1], a), a), a), k4U(xn[i - 1], vn[i - 1], hn[i - 1], k3U(xn[i - 1], vn[i - 1], hn[i - 1], k2U(xn[i - 1], vn[i - 1], hn[i - 1], k1U(xn[i - 1], vn[i - 1], a), a), a), a));
								v2n[i] = sledshag(vn[i - 1], hn[i - 1] / 2, k1U(xn[i - 1], vn[i - 1], a), k2U(xn[i - 1], vn[i - 1], hn[i - 1] / 2, k1U(xn[i - 1], vn[i - 1], a), a), k3U(xn[i - 1], vn[i - 1], hn[i - 1] / 2, k2U(xn[i - 1], vn[i - 1], hn[i - 1] / 2, k1U(xn[i - 1], vn[i - 1], a), a), a), k4U(xn[i - 1], vn[i - 1], hn[i - 1] / 2, k3U(xn[i - 1], vn[i - 1], hn[i - 1] / 2, k2U(xn[i - 1], vn[i - 1], hn[i - 1] / 2, k1U(xn[i - 1], vn[i - 1], a), a), a), a));
								v2n[i] = sledshag(v2n[i], hn[i - 1] / 2, k1U(xn[i - 1] + (hn[i - 1] / 2), v2n[i], a), k2U(xn[i - 1] + (hn[i - 1] / 2), v2n[i], hn[i - 1] / 2, k1U(xn[i - 1] + (hn[i - 1] / 2), v2n[i], a), a), k3U(xn[i - 1] + (hn[i - 1] / 2), v2n[i], hn[i - 1] / 2, k2U(xn[i - 1] + (hn[i - 1] / 2), v2n[i], hn[i - 1] / 2, k1U(xn[i - 1] + (hn[i - 1] / 2), v2n[i], a), a), a), k4U(xn[i - 1] + (hn[i - 1] / 2), v2n[i], hn[i - 1] / 2, k3U(xn[i - 1] + (hn[i - 1] / 2), v2n[i], hn[i - 1] / 2, k2U(xn[i - 1] + (hn[i - 1] / 2), v2n[i], hn[i - 1] / 2, k1U(xn[i - 1] + (hn[i - 1] / 2), v2n[i], a), a), a), a));
								OLP[i] = ocenkapogreshnosti(vn[i], v2n[i], 4);
							}
							if (abs(OLP[i]) >= E / pow(2, 5) && abs(OLP[i]) < E)
							{
								hn[i] = hn[i - 1];
							}
							if (abs(OLP[i]) < E / pow(2, 5))
							{
								hn[i] = 2 * hn[i - 1];
								C2[i + 1]++;
							}
						}
						if (abs(OLPU2[i]) >= E / pow(2, 5) && abs(OLPU2[i]) < E)
						{
							h2n[i] = h2n[i - 1];
						}
						if (abs(OLPU2[i]) < E / pow(2, 5))
						{
							h2n[i] = 2 * h2n[i - 1];
						}
						else
						{
							while (abs(OLPU2[i]) > E)
							{
								h2n[i - 1] = h2n[i - 1] / 2;
								x2n[i] = x2n[i - 1] + h2n[i - 1];
								U2n[i] = sledshag(U2n[i - 1], h2n[i - 1], k1U2(x2n[i - 1], U2n[i - 1], a), k2U2(x2n[i - 1], U2n[i - 1], h2n[i - 1], k1U2(x2n[i - 1], U2n[i - 1], a), a), k3U2(x2n[i - 1], U2n[i - 1], h2n[i - 1], k2U2(x2n[i - 1], U2n[i - 1], h2n[i - 1], k1U2(x2n[i - 1], U2n[i - 1], a), a), a), k4U2(x2n[i - 1], U2n[i - 1], h2n[i - 1], k3U2(x2n[i - 1], U2n[i - 1], h2n[i - 1], k2U2(x2n[i - 1], U2n[i - 1], h2n[i - 1], k1U2(x2n[i - 1], U2n[i - 1], a), a), a), a));
								U22n[i] = sledshag(U2n[i - 1], h2n[i - 1] / 2, k1U2(x2n[i - 1], U2n[i - 1], a), k2U2(xn[i - 1], U2n[i - 1], h2n[i - 1] / 2, k1U2(x2n[i - 1], U2n[i - 1], a), a), k3U2(x2n[i - 1], U2n[i - 1], h2n[i - 1] / 2, k2U2(x2n[i - 1], U2n[i - 1], h2n[i - 1] / 2, k1U2(x2n[i - 1], U2n[i - 1], a), a), a), k4U2(x2n[i - 1], U2n[i - 1], h2n[i - 1] / 2, k3U2(x2n[i - 1], U2n[i - 1], h2n[i - 1] / 2, k2U2(x2n[i - 1], U2n[i - 1], h2n[i - 1] / 2, k1U2(x2n[i - 1], U2n[i - 1], a), a), a), a));
								U22n[i] = sledshag(U22n[i], h2n[i - 1] / 2, k1U2(x2n[i - 1] + (h2n[i - 1] / 2), U22n[i], a), k2U2(x2n[i - 1] + (h2n[i - 1] / 2), U22n[i], h2n[i - 1] / 2, k1U2(x2n[i - 1] + (h2n[i - 1] / 2), U22n[i], a), a), k3U2(x2n[i - 1] + (h2n[i - 1] / 2), U22n[i], h2n[i - 1] / 2, k2U2(x2n[i - 1] + (h2n[i - 1] / 2), U22n[i], h2n[i - 1] / 2, k1U2(x2n[i - 1] + (h2n[i - 1] / 2), U22n[i], a), a), a), k4U2(x2n[i - 1] + (h2n[i - 1] / 2), U22n[i], h2n[i - 1] / 2, k3U2(x2n[i - 1] + (h2n[i - 1] / 2), U22n[i], h2n[i - 1] / 2, k2U2(x2n[i - 1] + (h2n[i - 1] / 2), U22n[i], h2n[i - 1] / 2, k1U2(x2n[i - 1] + (h2n[i - 1] / 2), U22n[i], a), a), a), a));
								OLPU2[i] = ocenkapogreshnosti(U2n[i], U22n[i], 4);
							}
							if (abs(OLPU2[i]) >= E / pow(2, 5) && abs(OLPU2[i]) < E)
							{
								h2n[i] = h2n[i - 1];
							}
							if (abs(OLPU2[i]) < E / pow(2, 5))
							{
								h2n[i] = 2 * h2n[i - 1];
							}
						}
					}
					OLPmax = OLP[0];
					for (int j = 1; j <= i; j++)
					{
						if (OLP[j] > OLPmax)
						{
							OLPmax = OLP[j];
							X_OLPMAX = xn[j];
						}
					}
					hmax = xn[1] - xn[0];
					X_hMAX = xn[1];
					for (int j = 1; j <= i; j++)
					{
						if (abs(xn[j] - xn[j - 1]) > hmax)
						{
							hmax = abs(xn[j] - xn[j - 1]);
							X_hMAX = xn[j];
						}
					}
					hmin = xn[1] - xn[0];
					X_hMIN = xn[1];
					for (int j = 1; j <= i; j++)
					{
						if (abs(xn[j] - xn[j - 1]) < hmin)
						{
							hmin = abs(xn[j] - xn[j - 1]);
							X_hMIN = xn[j];
						}
					}
					for (int j = 1; j <= i; j++)
					{
						C1SUM += C1[j];
						C2SUM += C2[j];
					}
					textBox8->Text = Convert::ToString(i);
					textBox9->Text = Convert::ToString(b - xn[i]);
					textBox10->Text = Convert::ToString(OLPmax);
					textBox19->Text = Convert::ToString(X_OLPMAX);
					textBox11->Text = Convert::ToString(C1SUM);
					textBox12->Text = Convert::ToString(C2SUM);
					textBox13->Text = Convert::ToString(hmax);
					textBox14->Text = Convert::ToString(X_hMAX);
					textBox16->Text = Convert::ToString(hmin);
					textBox15->Text = Convert::ToString(X_hMIN);
					while (dataGridView3->Rows->Count != 0 && dataGridView3->Columns->Count != 0)
					{
						dataGridView3->Rows->RemoveAt(0);
						dataGridView3->Columns->RemoveAt(0);
					}
					for (int j = 0; j < 10; j++)
					{
						DataGridViewColumn^ column1 = gcnew DataGridViewColumn();
						DataGridViewCell^ cell = gcnew DataGridViewTextBoxCell();
						column1->CellTemplate = cell;
						dataGridView3->Columns->Add(column1);
						column1 = dataGridView3->Columns[j];
						if (j == 0 || j == 7 || j == 8)
						{
							column1->Width = 30;
						}
						else
						{
							column1->Width = 153, 75;
						}
					}
					for (int j = 0; j < i; j++)
					{
						DataGridViewRow^ row1 = gcnew DataGridViewRow();
						row1->CreateCells(dataGridView3);
						dataGridView3->Rows->Add(row1);
						row1 = dataGridView3->Rows[j];
						row1->Height = 25;
					}
					for (int j = 0; j < 10; j++)
					{
						for (int k = 0; k < i; k++)
						{
							if (j == 0)
							{
								dataGridView3->Rows[k]->Cells[0]->Value = k + 1;
							}
							if (j == 1)
							{
								dataGridView3->Rows[k]->Cells[1]->Value = xn[k + 1];
							}
							if (j == 2)
							{
								dataGridView3->Rows[k]->Cells[2]->Value = vn[k + 1];
							}
							if (j == 3)
							{
								dataGridView3->Rows[k]->Cells[3]->Value = v2n[k + 1];
							}
							if (j == 4)
							{
								dataGridView3->Rows[k]->Cells[4]->Value = vn[k + 1] - v2n[k + 1];
							}
							if (j == 5)
							{
								dataGridView3->Rows[k]->Cells[5]->Value = OLP[k + 1];
							}
							if (j == 6)
							{
								dataGridView3->Rows[k]->Cells[6]->Value = xn[k + 1] - xn[k];
							}
							if (j == 7)
							{
								dataGridView3->Rows[k]->Cells[7]->Value = C1[k + 1];
							}
							if (j == 8)
							{
								dataGridView3->Rows[k]->Cells[8]->Value = C2[k + 1];
							}
							if (j == 9)
							{
								dataGridView3->Rows[k]->Cells[9]->Value = U2n[k + 1];
							}
							dataGridView3->Rows[k]->Cells[j]->ReadOnly = true;
						}
					}
					chart3->Series[0]->Points->Clear();
					for (int j = 0; j <= i; j++)
					{
						chart3->Series[0]->Points->AddXY(xn[j], vn[j]);
					}
					chart3->ChartAreas[0]->AxisX->Minimum = a;
					chart3->ChartAreas[0]->AxisX->Maximum = b;
					chart3->ChartAreas[0]->AxisX->MajorGrid->Interval = h0;
					chart3->ChartAreas[0]->AxisY->MajorGrid->Interval = abs(vn[1] - U0);
					chart3->ChartAreas[0]->AxisX->MajorGrid->LineColor = System::Drawing::SystemColors::ControlDarkDark;
					chart3->ChartAreas[0]->AxisY->MajorGrid->LineColor = System::Drawing::SystemColors::ControlDarkDark;
					chart3->BackColor = System::Drawing::Color::MistyRose;
					chart1->Series[0]->Points->Clear();
					for (int j = 0; j <= i; j++)
					{
						chart1->Series[0]->Points->AddXY(xn[j], U2n[j]);
					}
					chart1->ChartAreas[0]->AxisX->Minimum = a;
					chart1->ChartAreas[0]->AxisX->Maximum = b;
					chart1->ChartAreas[0]->AxisX->MajorGrid->Interval = h0;
					chart1->ChartAreas[0]->AxisY->MajorGrid->Interval = abs(U2n[1] - U20);
					chart1->ChartAreas[0]->AxisX->MajorGrid->LineColor = System::Drawing::SystemColors::ControlDarkDark;
					chart1->ChartAreas[0]->AxisY->MajorGrid->LineColor = System::Drawing::SystemColors::ControlDarkDark;
					chart1->BackColor = System::Drawing::Color::MistyRose;
					chart2->Series[0]->Points->Clear();
					for (int j = 0; j <= i; j++)
					{
						chart2->Series[0]->Points->AddXY(vn[j], U2n[j]);
					}
					chart2->ChartAreas[0]->AxisX->Minimum = vn[i];
					chart2->ChartAreas[0]->AxisX->Maximum = vn[0];
					chart2->ChartAreas[0]->AxisY->Minimum = U2n[i];
					chart2->ChartAreas[0]->AxisY->Maximum = U2n[0];
					chart2->ChartAreas[0]->AxisX->MajorGrid->LineColor = System::Drawing::SystemColors::ControlDarkDark;
					chart2->ChartAreas[0]->AxisY->MajorGrid->LineColor = System::Drawing::SystemColors::ControlDarkDark;
					chart2->BackColor = System::Drawing::Color::MistyRose;
					delete[] x2n;
					delete[] h2n;
					delete[] U2n;
					delete[] U22n;
					delete[] OLPU2;
				}
			}
			delete[] xn;
			delete[] vn;
			delete[] v2n;
			delete[] OLP;
			delete[] hn;
			delete[] C1;
			delete[] C2;
			delete[] Un;
			delete[] delta;
		}
		System::Void radioButton1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) 
		{
			textBox1->Text = Convert::ToString(-10);
			textBox2->Text = Convert::ToString(-9);
			chart->Series[0]->Points->Clear();
			chart->Series[1]->Points->Clear();
			chart->BackColor = System::Drawing::Color::Transparent;
			while (dataGridView1->Rows->Count != 0 && dataGridView1->Columns->Count != 0)
			{
				dataGridView1->Rows->RemoveAt(0);
				dataGridView1->Columns->RemoveAt(0);
			}
			textBox8->Text = "";
			textBox9->Text = "";
			textBox10->Text = "";
			textBox19->Text = "";
			textBox11->Text = "";
			textBox12->Text = "";
			textBox13->Text = "";
			textBox14->Text = "";
			textBox16->Text = "";
			textBox15->Text = "";
			textBox17->Text = "";
			textBox18->Text = "";
			if (radioButton1->Checked == true)
			{
				chart->Visible = 1;
				label30->Visible = 1;
				label29->Visible = 1;
				label28->Visible = 1;
				label27->Visible = 1;
				label26->Visible = 1;
				label25->Visible = 1;
				label24->Visible = 1;
				label23->Visible = 1;
				label22->Visible = 1;
				label21->Visible = 1;
				label20->Visible = 1;
				dataGridView1->Visible = 1;
				chart->Enabled = 1;
				label30->Enabled = 1;
				label29->Enabled = 1;
				label28->Enabled = 1;
				label27->Enabled = 1;
				label26->Enabled = 1;
				label25->Enabled = 1;
				label24->Enabled = 1;
				label23->Enabled = 1;
				label22->Enabled = 1;
				label21->Enabled = 1;
				label20->Enabled = 1;
				dataGridView1->Enabled = 1;
			}
			if (radioButton1->Checked == false)
			{
				chart->Visible = 0;
				label30->Visible = 0;
				label29->Visible = 0;
				label28->Visible = 0;
				label27->Visible = 0;
				label26->Visible = 0;
				label25->Visible = 0;
				label24->Visible = 0;
				label23->Visible = 0;
				label22->Visible = 0;
				label21->Visible = 0;
				label20->Visible = 0;
				dataGridView1->Visible = 0;
				chart->Enabled = 0;
				label30->Enabled = 0;
				label29->Enabled = 0;
				label28->Enabled = 0;
				label27->Enabled = 0;
				label26->Enabled = 0;
				label25->Enabled = 0;
				label24->Enabled = 0;
				label23->Enabled = 0;
				label22->Enabled = 0;
				label21->Enabled = 0;
				label20->Enabled = 0;
				dataGridView1->Enabled = 0;
			}
		}
		System::Void radioButton2_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
		{
			textBox1->Text = Convert::ToString(-10);
			textBox2->Text = Convert::ToString(-9);
			chart3->Series[0]->Points->Clear();
			chart3->BackColor = System::Drawing::Color::Transparent;
			chart1->Series[0]->Points->Clear();
			chart1->BackColor = System::Drawing::Color::Transparent;
			while (dataGridView2->Rows->Count != 0 && dataGridView2->Columns->Count != 0)
			{
				dataGridView2->Rows->RemoveAt(0);
				dataGridView2->Columns->RemoveAt(0);
			}
			textBox8->Text = "";
			textBox9->Text = "";
			textBox10->Text = "";
			textBox19->Text = "";
			textBox11->Text = "";
			textBox12->Text = "";
			textBox13->Text = "";
			textBox14->Text = "";
			textBox16->Text = "";
			textBox15->Text = "";
			textBox17->Text = "";
			textBox18->Text = "";
			if (radioButton2->Checked == true)
			{
				chart3->Visible = 1;
				label30->Visible = 0;
				label29->Visible = 0;
				label28->Visible = 1;
				label27->Visible = 1;
				label26->Visible = 1;
				label25->Visible = 1;
				label24->Visible = 1;
				label23->Visible = 1;
				label22->Visible = 1;
				label21->Visible = 1;
				label20->Visible = 1;
				dataGridView2->Visible = 1;
				chart3->Enabled = 1;
				label30->Enabled = 0;
				label29->Enabled = 0;
				label28->Enabled = 1;
				label27->Enabled = 1;
				label26->Enabled = 1;
				label25->Enabled = 1;
				label24->Enabled = 1;
				label23->Enabled = 1;
				label22->Enabled = 1;
				label21->Enabled = 1;
				label20->Enabled = 1;
				dataGridView2->Enabled = 1;
			}
			if (radioButton2->Checked == false)
			{
				chart3->Visible = 0;
				label30->Visible = 0;
				label29->Visible = 0;
				label28->Visible = 0;
				label27->Visible = 0;
				label26->Visible = 0;
				label25->Visible = 0;
				label24->Visible = 0;
				label23->Visible = 0;
				label22->Visible = 0;
				label21->Visible = 0;
				label20->Visible = 0;
				dataGridView2->Visible = 0;
				chart3->Enabled = 0;
				label30->Enabled = 0;
				label29->Enabled = 0;
				label28->Enabled = 0;
				label27->Enabled = 0;
				label26->Enabled = 0;
				label25->Enabled = 0;
				label24->Enabled = 0;
				label23->Enabled = 0;
				label22->Enabled = 0;
				label21->Enabled = 0;
				label20->Enabled = 0;
				dataGridView2->Enabled = 0;
			}
		}
		System::Void radioButton3_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
		{
			textBox1->Text = Convert::ToString(1);
			textBox2->Text = Convert::ToString(4);
			chart3->Series[0]->Points->Clear();
			chart3->BackColor = System::Drawing::Color::Transparent;
			chart2->Series[0]->Points->Clear();
			chart2->BackColor = System::Drawing::Color::Transparent;
			chart1->Series[0]->Points->Clear();
			chart1->BackColor = System::Drawing::Color::Transparent;
			while (dataGridView3->Rows->Count != 0 && dataGridView3->Columns->Count != 0)
			{
				dataGridView3->Rows->RemoveAt(0);
				dataGridView3->Columns->RemoveAt(0);
			}
			textBox8->Text = "";
			textBox9->Text = "";
			textBox10->Text = "";
			textBox19->Text = "";
			textBox11->Text = "";
			textBox12->Text = "";
			textBox13->Text = "";
			textBox14->Text = "";
			textBox16->Text = "";
			textBox15->Text = "";
			textBox17->Text = "";
			textBox18->Text = "";
			if (radioButton3->Checked == true)
			{
				chart3->Visible = 1;
				chart2->Visible = 1;
				chart1->Visible = 1;
				label33->Visible = 1;
				label30->Visible = 0;
				label29->Visible = 0;
				label28->Visible = 1;
				label27->Visible = 1;
				label26->Visible = 1;
				label25->Visible = 1;
				label24->Visible = 1;
				label23->Visible = 1;
				label22->Visible = 1;
				label21->Visible = 1;
				label20->Visible = 1;
				dataGridView3->Visible = 1;
				chart3->Enabled = 1;
				chart2->Enabled = 1;
				chart1->Enabled = 1;
				label31->Enabled = 1;
				textBox20->Enabled = 1;
				label33->Enabled = 1;
				label30->Enabled = 0;
				label29->Enabled = 0;
				label28->Enabled = 1;
				label27->Enabled = 1;
				label26->Enabled = 1;
				label25->Enabled = 1;
				label24->Enabled = 1;
				label23->Enabled = 1;
				label22->Enabled = 1;
				label21->Enabled = 1;
				label20->Enabled = 1;
				dataGridView3->Enabled = 1;
			}
			if (radioButton3->Checked == false)
			{
				chart3->Visible = 0;
				chart2->Visible = 0;
				chart1->Visible = 0;
				label33->Visible = 0;
				label30->Visible = 0;
				label29->Visible = 0;
				label28->Visible = 0;
				label27->Visible = 0;
				label26->Visible = 0;
				label25->Visible = 0;
				label24->Visible = 0;
				label23->Visible = 0;
				label22->Visible = 0;
				label21->Visible = 0;
				label20->Visible = 0;
				dataGridView3->Visible = 0;
				chart3->Enabled = 0;
				chart2->Enabled = 0;
				chart1->Enabled = 0;
				label31->Enabled = 0;
				textBox20->Enabled = 0;
				label33->Enabled = 0;
				label30->Enabled = 0;
				label29->Enabled = 0;
				label28->Enabled = 0;
				label27->Enabled = 0;
				label26->Enabled = 0;
				label25->Enabled = 0;
				label24->Enabled = 0;
				label23->Enabled = 0;
				label22->Enabled = 0;
				label21->Enabled = 0;
				label20->Enabled = 0;
				dataGridView3->Enabled = 0;
			}
		}
};
}
