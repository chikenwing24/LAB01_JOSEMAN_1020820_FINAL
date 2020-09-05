#pragma once
#include <vector>

namespace Lab1JOSEMAN1020820 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace System::Diagnostics;
	using namespace System::Threading;
	/// <summary>
	/// Resumen de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ btnsuma;
	private: System::Windows::Forms::TextBox^ txtnum2;

	private: System::Windows::Forms::TextBox^ txtnum1;


	private: System::Windows::Forms::LinkLabel^ lblresult;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ num1I;
	private: System::Windows::Forms::TextBox^ Num2I;
	private: System::Windows::Forms::LinkLabel^ labl2;

	private: System::Windows::Forms::Button^ btnI;
	private: System::Windows::Forms::Label^ label7;





	private: System::Windows::Forms::Label^ label9;

	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::TextBox^ Dimensiones;







	private: System::Windows::Forms::Label^ label10;


	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::DataGridView^ dataGridView2;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::TextBox^ Dimensiones2;
	private: System::Windows::Forms::DataGridView^ dataGridView3;
	private: System::Windows::Forms::DataGridView^ dataGridView4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::LinkLabel^ linkLabel1;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::LinkLabel^ linkLabel2;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::LinkLabel^ linkLabel3;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::LinkLabel^ linkLabel4;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::LinkLabel^ linkLabel5;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::LinkLabel^ linkLabel6;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::ComboBox^ comboBox3;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::ComboBox^ comboBox4;
	private: System::Windows::Forms::Label^ label23;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::Label^ label24;
	private: System::Windows::Forms::Label^ label25;
private: System::Windows::Forms::Button^ button1;
private: System::Windows::Forms::Button^ button2;
private: System::Windows::Forms::Label^ label26;
private: System::Windows::Forms::LinkLabel^ linkLabel7;
private: System::Windows::Forms::Label^ label27;
private: System::Windows::Forms::LinkLabel^ linkLabel8;
private: System::Windows::Forms::TabControl^ tabControl1;
private: System::Windows::Forms::TabPage^ tabPage1;
private: System::Windows::Forms::TabPage^ tabPage2;
private: System::Windows::Forms::TabPage^ tabPage3;
private: System::Windows::Forms::TabPage^ tabPage4;
private: System::Windows::Forms::Label^ label28;
private: System::Windows::Forms::RichTextBox^ richTextBox2;
private: System::Windows::Forms::RichTextBox^ richTextBox1;
private: System::Windows::Forms::Button^ button8;
private: System::Windows::Forms::Button^ button7;

























	protected:

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->btnsuma = (gcnew System::Windows::Forms::Button());
			this->txtnum2 = (gcnew System::Windows::Forms::TextBox());
			this->txtnum1 = (gcnew System::Windows::Forms::TextBox());
			this->lblresult = (gcnew System::Windows::Forms::LinkLabel());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->num1I = (gcnew System::Windows::Forms::TextBox());
			this->Num2I = (gcnew System::Windows::Forms::TextBox());
			this->labl2 = (gcnew System::Windows::Forms::LinkLabel());
			this->btnI = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->Dimensiones = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->Dimensiones2 = (gcnew System::Windows::Forms::TextBox());
			this->dataGridView3 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridView4 = (gcnew System::Windows::Forms::DataGridView());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->linkLabel2 = (gcnew System::Windows::Forms::LinkLabel());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->linkLabel3 = (gcnew System::Windows::Forms::LinkLabel());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->linkLabel4 = (gcnew System::Windows::Forms::LinkLabel());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->linkLabel5 = (gcnew System::Windows::Forms::LinkLabel());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->linkLabel6 = (gcnew System::Windows::Forms::LinkLabel());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->comboBox4 = (gcnew System::Windows::Forms::ComboBox());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->linkLabel7 = (gcnew System::Windows::Forms::LinkLabel());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->linkLabel8 = (gcnew System::Windows::Forms::LinkLabel());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->richTextBox2 = (gcnew System::Windows::Forms::RichTextBox());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView4))->BeginInit();
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->tabPage3->SuspendLayout();
			this->tabPage4->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::Window;
			this->label1->Location = System::Drawing::Point(279, 44);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(171, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Multiplicación por sumas-recursivo \r\n";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(230, 84);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(53, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Número 1";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(230, 116);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(53, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Número 2";
			// 
			// btnsuma
			// 
			this->btnsuma->Location = System::Drawing::Point(282, 183);
			this->btnsuma->Name = L"btnsuma";
			this->btnsuma->Size = System::Drawing::Size(113, 23);
			this->btnsuma->TabIndex = 3;
			this->btnsuma->Text = L"Mostrar Resultado";
			this->btnsuma->UseVisualStyleBackColor = true;
			this->btnsuma->Click += gcnew System::EventHandler(this, &MyForm::btnsuma_Click);
			// 
			// txtnum2
			// 
			this->txtnum2->Location = System::Drawing::Point(317, 116);
			this->txtnum2->Name = L"txtnum2";
			this->txtnum2->Size = System::Drawing::Size(100, 20);
			this->txtnum2->TabIndex = 4;
			// 
			// txtnum1
			// 
			this->txtnum1->Location = System::Drawing::Point(317, 81);
			this->txtnum1->Name = L"txtnum1";
			this->txtnum1->Size = System::Drawing::Size(100, 20);
			this->txtnum1->TabIndex = 5;
			// 
			// lblresult
			// 
			this->lblresult->AutoSize = true;
			this->lblresult->Location = System::Drawing::Point(314, 139);
			this->lblresult->Name = L"lblresult";
			this->lblresult->Size = System::Drawing::Size(55, 13);
			this->lblresult->TabIndex = 6;
			this->lblresult->TabStop = true;
			this->lblresult->Text = L"Resultado";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(456, 44);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(162, 13);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Multiplicación por sumas-iterativo";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(428, 83);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(53, 13);
			this->label5->TabIndex = 8;
			this->label5->Text = L"Número 1";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(428, 116);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(53, 13);
			this->label6->TabIndex = 9;
			this->label6->Text = L"Número 2";
			// 
			// num1I
			// 
			this->num1I->Location = System::Drawing::Point(502, 84);
			this->num1I->Name = L"num1I";
			this->num1I->Size = System::Drawing::Size(100, 20);
			this->num1I->TabIndex = 10;
			// 
			// Num2I
			// 
			this->Num2I->Location = System::Drawing::Point(502, 115);
			this->Num2I->Name = L"Num2I";
			this->Num2I->Size = System::Drawing::Size(100, 20);
			this->Num2I->TabIndex = 11;
			// 
			// labl2
			// 
			this->labl2->AutoSize = true;
			this->labl2->Location = System::Drawing::Point(525, 139);
			this->labl2->Name = L"labl2";
			this->labl2->Size = System::Drawing::Size(55, 13);
			this->labl2->TabIndex = 12;
			this->labl2->TabStop = true;
			this->labl2->Text = L"Resultado";
			// 
			// btnI
			// 
			this->btnI->Location = System::Drawing::Point(484, 183);
			this->btnI->Name = L"btnI";
			this->btnI->Size = System::Drawing::Size(122, 23);
			this->btnI->TabIndex = 13;
			this->btnI->Text = L"Mostrar Resultado";
			this->btnI->UseVisualStyleBackColor = true;
			this->btnI->Click += gcnew System::EventHandler(this, &MyForm::btnI_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(154, 18);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(165, 26);
			this->label7->TabIndex = 14;
			this->label7->Text = L"Palabra Palíndroma-Recursividad\r\nSolo lee la primera columna";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(155, 20);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(272, 26);
			this->label9->TabIndex = 20;
			this->label9->Text = L"Matriz Determinante - Recursividad\r\nMuestra la matriz en fila pero realiza calcul"
				L"o correcto n*n";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(266, 290);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(139, 23);
			this->button3->TabIndex = 22;
			this->button3->Text = L"Calcular Determinante";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// Dimensiones
			// 
			this->Dimensiones->Location = System::Drawing::Point(288, 65);
			this->Dimensiones->Name = L"Dimensiones";
			this->Dimensiones->Size = System::Drawing::Size(100, 20);
			this->Dimensiones->TabIndex = 28;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(201, 68);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(77, 13);
			this->label10->TabIndex = 30;
			this->label10->Text = L"Filas-Columnas";
			// 
			// textBox1
			// 
			this->textBox1->Enabled = false;
			this->textBox1->Location = System::Drawing::Point(288, 247);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 32;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(-313, 137);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(61, 13);
			this->label11->TabIndex = 33;
			this->label11->Text = L"Respuesta ";
			this->label11->Click += gcnew System::EventHandler(this, &MyForm::label11_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(196, 91);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(240, 150);
			this->dataGridView1->TabIndex = 34;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView1_CellContentClick);
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(469, 20);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(148, 26);
			this->label12->TabIndex = 35;
			this->label12->Text = L"Matriz Determinante - Iterativa\r\nMatriz hasta 4*4";
			this->label12->Click += gcnew System::EventHandler(this, &MyForm::label12_Click);
			// 
			// dataGridView2
			// 
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Location = System::Drawing::Point(442, 91);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->Size = System::Drawing::Size(240, 150);
			this->dataGridView2->TabIndex = 36;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(439, 250);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(61, 13);
			this->label13->TabIndex = 37;
			this->label13->Text = L"Respuesta ";
			// 
			// textBox2
			// 
			this->textBox2->Enabled = false;
			this->textBox2->Location = System::Drawing::Point(517, 246);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 38;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(517, 290);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(126, 23);
			this->button4->TabIndex = 39;
			this->button4->Text = L"Calcular Determinante";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(430, 68);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(77, 13);
			this->label14->TabIndex = 40;
			this->label14->Text = L"Filas-Columnas";
			// 
			// Dimensiones2
			// 
			this->Dimensiones2->Location = System::Drawing::Point(507, 64);
			this->Dimensiones2->Name = L"Dimensiones2";
			this->Dimensiones2->Size = System::Drawing::Size(100, 20);
			this->Dimensiones2->TabIndex = 41;
			this->Dimensiones2->TextChanged += gcnew System::EventHandler(this, &MyForm::Dimensiones2_TextChanged);
			// 
			// dataGridView3
			// 
			this->dataGridView3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView3->Location = System::Drawing::Point(115, 76);
			this->dataGridView3->Name = L"dataGridView3";
			this->dataGridView3->Size = System::Drawing::Size(165, 112);
			this->dataGridView3->TabIndex = 42;
			// 
			// dataGridView4
			// 
			this->dataGridView4->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView4->Location = System::Drawing::Point(449, 73);
			this->dataGridView4->Name = L"dataGridView4";
			this->dataGridView4->Size = System::Drawing::Size(191, 112);
			this->dataGridView4->TabIndex = 43;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(314, 47);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(121, 20);
			this->textBox3->TabIndex = 45;
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(251, 47);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(57, 23);
			this->button5->TabIndex = 46;
			this->button5->Text = L"Importar";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(441, 47);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(60, 23);
			this->button6->TabIndex = 47;
			this->button6->Text = L"Importar";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(508, 47);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(116, 20);
			this->textBox4->TabIndex = 48;
			// 
			// linkLabel1
			// 
			this->linkLabel1->AutoSize = true;
			this->linkLabel1->Location = System::Drawing::Point(314, 167);
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->Size = System::Drawing::Size(30, 13);
			this->linkLabel1->TabIndex = 49;
			this->linkLabel1->TabStop = true;
			this->linkLabel1->Text = L"Time";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(243, 167);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(61, 13);
			this->label8->TabIndex = 50;
			this->label8->Text = L"StopWatch\r\n";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(224, 272);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(61, 13);
			this->label15->TabIndex = 51;
			this->label15->Text = L"StopWatch";
			// 
			// linkLabel2
			// 
			this->linkLabel2->AutoSize = true;
			this->linkLabel2->Location = System::Drawing::Point(306, 272);
			this->linkLabel2->Name = L"linkLabel2";
			this->linkLabel2->Size = System::Drawing::Size(30, 13);
			this->linkLabel2->TabIndex = 52;
			this->linkLabel2->TabStop = true;
			this->linkLabel2->Text = L"Time";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(428, 164);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(61, 13);
			this->label16->TabIndex = 53;
			this->label16->Text = L"StopWatch";
			// 
			// linkLabel3
			// 
			this->linkLabel3->AutoSize = true;
			this->linkLabel3->Location = System::Drawing::Point(516, 164);
			this->linkLabel3->Name = L"linkLabel3";
			this->linkLabel3->Size = System::Drawing::Size(30, 13);
			this->linkLabel3->TabIndex = 54;
			this->linkLabel3->TabStop = true;
			this->linkLabel3->Text = L"Time";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(264, 199);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(64, 13);
			this->label17->TabIndex = 55;
			this->label17->Text = L"StopWatch ";
			// 
			// linkLabel4
			// 
			this->linkLabel4->AutoSize = true;
			this->linkLabel4->Location = System::Drawing::Point(332, 199);
			this->linkLabel4->Name = L"linkLabel4";
			this->linkLabel4->Size = System::Drawing::Size(30, 13);
			this->linkLabel4->TabIndex = 56;
			this->linkLabel4->TabStop = true;
			this->linkLabel4->Text = L"Time";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(446, 199);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(61, 13);
			this->label18->TabIndex = 57;
			this->label18->Text = L"StopWatch";
			// 
			// linkLabel5
			// 
			this->linkLabel5->AutoSize = true;
			this->linkLabel5->Location = System::Drawing::Point(520, 199);
			this->linkLabel5->Name = L"linkLabel5";
			this->linkLabel5->Size = System::Drawing::Size(30, 13);
			this->linkLabel5->TabIndex = 58;
			this->linkLabel5->TabStop = true;
			this->linkLabel5->Text = L"Time";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(458, 272);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(61, 13);
			this->label19->TabIndex = 59;
			this->label19->Text = L"StopWatch";
			// 
			// linkLabel6
			// 
			this->linkLabel6->AutoSize = true;
			this->linkLabel6->Location = System::Drawing::Point(532, 272);
			this->linkLabel6->Name = L"linkLabel6";
			this->linkLabel6->Size = System::Drawing::Size(30, 13);
			this->linkLabel6->TabIndex = 60;
			this->linkLabel6->TabStop = true;
			this->linkLabel6->Text = L"Time";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(134, 70);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(100, 20);
			this->textBox5->TabIndex = 61;
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(81, 70);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(47, 13);
			this->label20->TabIndex = 62;
			this->label20->Text = L"Número ";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(8) {
				L"Base 2 ", L"Base 3", L"Base 4", L"Base 5", L"Base 6 ",
					L"Base 7 ", L"Base 8 ", L"Base 9 "
			});
			this->comboBox1->Location = System::Drawing::Point(253, 70);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 21);
			this->comboBox1->TabIndex = 63;
			this->comboBox1->Text = L"Base";
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox1_SelectedIndexChanged);
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(67, 113);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(59, 13);
			this->label21->TabIndex = 64;
			this->label21->Text = L"conversión";
			// 
			// textBox6
			// 
			this->textBox6->Enabled = false;
			this->textBox6->Location = System::Drawing::Point(134, 106);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(100, 20);
			this->textBox6->TabIndex = 65;
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(8) {
				L"Base 2 ", L"Base 3", L"Base 4", L"Base 5", L"Base 6 ",
					L"Base 7 ", L"Base 8 ", L"Base 9 "
			});
			this->comboBox2->Location = System::Drawing::Point(253, 106);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(121, 21);
			this->comboBox2->TabIndex = 66;
			this->comboBox2->Text = L"Base";
			// 
			// comboBox3
			// 
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Items->AddRange(gcnew cli::array< System::Object^  >(8) {
				L"Base 2 ", L"Base 3", L"Base 4", L"Base 5", L"Base 6 ",
					L"Base 7 ", L"Base 8 ", L"Base 9 "
			});
			this->comboBox3->Location = System::Drawing::Point(577, 105);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(121, 21);
			this->comboBox3->TabIndex = 72;
			this->comboBox3->Text = L"Base";
			// 
			// textBox7
			// 
			this->textBox7->Enabled = false;
			this->textBox7->Location = System::Drawing::Point(458, 105);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(100, 20);
			this->textBox7->TabIndex = 71;
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Location = System::Drawing::Point(391, 112);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(59, 13);
			this->label22->TabIndex = 70;
			this->label22->Text = L"conversión";
			// 
			// comboBox4
			// 
			this->comboBox4->FormattingEnabled = true;
			this->comboBox4->Items->AddRange(gcnew cli::array< System::Object^  >(8) {
				L"Base 2 ", L"Base 3", L"Base 4", L"Base 5", L"Base 6 ",
					L"Base 7 ", L"Base 8 ", L"Base 9 "
			});
			this->comboBox4->Location = System::Drawing::Point(577, 69);
			this->comboBox4->Name = L"comboBox4";
			this->comboBox4->Size = System::Drawing::Size(121, 21);
			this->comboBox4->TabIndex = 69;
			this->comboBox4->Text = L"Base";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Location = System::Drawing::Point(405, 69);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(47, 13);
			this->label23->TabIndex = 68;
			this->label23->Text = L"Número ";
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(458, 69);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(100, 20);
			this->textBox8->TabIndex = 67;
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Location = System::Drawing::Point(503, 39);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(149, 13);
			this->label24->TabIndex = 73;
			this->label24->Text = L"Cambio de base - recursividad\r\n";
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Location = System::Drawing::Point(180, 39);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(129, 13);
			this->label25->TabIndex = 74;
			this->label25->Text = L"Cambio de base - iterativo";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(201, 168);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 75;
			this->button1->Text = L"Convertir";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click_1);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(533, 168);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 76;
			this->button2->Text = L"Convertir\r\n";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Location = System::Drawing::Point(127, 143);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(64, 13);
			this->label26->TabIndex = 77;
			this->label26->Text = L"Stop Watch";
			// 
			// linkLabel7
			// 
			this->linkLabel7->AutoSize = true;
			this->linkLabel7->Location = System::Drawing::Point(211, 143);
			this->linkLabel7->Name = L"linkLabel7";
			this->linkLabel7->Size = System::Drawing::Size(30, 13);
			this->linkLabel7->TabIndex = 78;
			this->linkLabel7->TabStop = true;
			this->linkLabel7->Text = L"Time";
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Location = System::Drawing::Point(455, 143);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(64, 13);
			this->label27->TabIndex = 79;
			this->label27->Text = L"Stop Watch";
			// 
			// linkLabel8
			// 
			this->linkLabel8->AutoSize = true;
			this->linkLabel8->Location = System::Drawing::Point(544, 143);
			this->linkLabel8->Name = L"linkLabel8";
			this->linkLabel8->Size = System::Drawing::Size(30, 13);
			this->linkLabel8->TabIndex = 80;
			this->linkLabel8->TabStop = true;
			this->linkLabel8->Text = L"Time";
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Controls->Add(this->tabPage4);
			this->tabControl1->Location = System::Drawing::Point(2, 3);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(1021, 411);
			this->tabControl1->TabIndex = 81;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->Num2I);
			this->tabPage1->Controls->Add(this->label1);
			this->tabPage1->Controls->Add(this->label2);
			this->tabPage1->Controls->Add(this->label3);
			this->tabPage1->Controls->Add(this->btnsuma);
			this->tabPage1->Controls->Add(this->txtnum2);
			this->tabPage1->Controls->Add(this->txtnum1);
			this->tabPage1->Controls->Add(this->lblresult);
			this->tabPage1->Controls->Add(this->label4);
			this->tabPage1->Controls->Add(this->label5);
			this->tabPage1->Controls->Add(this->label6);
			this->tabPage1->Controls->Add(this->num1I);
			this->tabPage1->Controls->Add(this->labl2);
			this->tabPage1->Controls->Add(this->btnI);
			this->tabPage1->Controls->Add(this->linkLabel1);
			this->tabPage1->Controls->Add(this->label8);
			this->tabPage1->Controls->Add(this->label16);
			this->tabPage1->Controls->Add(this->linkLabel3);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(1013, 385);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Multiplicación ";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->label28);
			this->tabPage2->Controls->Add(this->richTextBox2);
			this->tabPage2->Controls->Add(this->richTextBox1);
			this->tabPage2->Controls->Add(this->button8);
			this->tabPage2->Controls->Add(this->button7);
			this->tabPage2->Controls->Add(this->dataGridView4);
			this->tabPage2->Controls->Add(this->label7);
			this->tabPage2->Controls->Add(this->dataGridView3);
			this->tabPage2->Controls->Add(this->textBox3);
			this->tabPage2->Controls->Add(this->button5);
			this->tabPage2->Controls->Add(this->button6);
			this->tabPage2->Controls->Add(this->textBox4);
			this->tabPage2->Controls->Add(this->label17);
			this->tabPage2->Controls->Add(this->linkLabel4);
			this->tabPage2->Controls->Add(this->label18);
			this->tabPage2->Controls->Add(this->linkLabel5);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(1013, 385);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Palindroma";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Location = System::Drawing::Point(438, 18);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(141, 26);
			this->label28->TabIndex = 63;
			this->label28->Text = L"Palabra Palíndroma-Iterativo\r\nCalculo Incorrecto";
			this->label28->Click += gcnew System::EventHandler(this, &MyForm::label28_Click);
			// 
			// richTextBox2
			// 
			this->richTextBox2->Location = System::Drawing::Point(646, 76);
			this->richTextBox2->Name = L"richTextBox2";
			this->richTextBox2->Size = System::Drawing::Size(144, 112);
			this->richTextBox2->TabIndex = 62;
			this->richTextBox2->Text = L"";
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(293, 76);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(136, 112);
			this->richTextBox1->TabIndex = 61;
			this->richTextBox1->Text = L"";
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(525, 230);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(75, 23);
			this->button8->TabIndex = 60;
			this->button8->Text = L"Palindroma";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(299, 230);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(75, 23);
			this->button7->TabIndex = 59;
			this->button7->Text = L"Palindroma";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->dataGridView2);
			this->tabPage3->Controls->Add(this->label9);
			this->tabPage3->Controls->Add(this->button3);
			this->tabPage3->Controls->Add(this->Dimensiones);
			this->tabPage3->Controls->Add(this->label10);
			this->tabPage3->Controls->Add(this->textBox1);
			this->tabPage3->Controls->Add(this->label11);
			this->tabPage3->Controls->Add(this->dataGridView1);
			this->tabPage3->Controls->Add(this->label12);
			this->tabPage3->Controls->Add(this->label13);
			this->tabPage3->Controls->Add(this->textBox2);
			this->tabPage3->Controls->Add(this->button4);
			this->tabPage3->Controls->Add(this->label14);
			this->tabPage3->Controls->Add(this->Dimensiones2);
			this->tabPage3->Controls->Add(this->label15);
			this->tabPage3->Controls->Add(this->linkLabel2);
			this->tabPage3->Controls->Add(this->label19);
			this->tabPage3->Controls->Add(this->linkLabel6);
			this->tabPage3->Location = System::Drawing::Point(4, 22);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(1013, 385);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Determinante";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// tabPage4
			// 
			this->tabPage4->Controls->Add(this->textBox8);
			this->tabPage4->Controls->Add(this->linkLabel8);
			this->tabPage4->Controls->Add(this->textBox5);
			this->tabPage4->Controls->Add(this->label27);
			this->tabPage4->Controls->Add(this->label20);
			this->tabPage4->Controls->Add(this->linkLabel7);
			this->tabPage4->Controls->Add(this->comboBox1);
			this->tabPage4->Controls->Add(this->label26);
			this->tabPage4->Controls->Add(this->label21);
			this->tabPage4->Controls->Add(this->button2);
			this->tabPage4->Controls->Add(this->textBox6);
			this->tabPage4->Controls->Add(this->button1);
			this->tabPage4->Controls->Add(this->comboBox2);
			this->tabPage4->Controls->Add(this->label25);
			this->tabPage4->Controls->Add(this->label23);
			this->tabPage4->Controls->Add(this->label24);
			this->tabPage4->Controls->Add(this->comboBox4);
			this->tabPage4->Controls->Add(this->comboBox3);
			this->tabPage4->Controls->Add(this->label22);
			this->tabPage4->Controls->Add(this->textBox7);
			this->tabPage4->Location = System::Drawing::Point(4, 22);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Padding = System::Windows::Forms::Padding(3);
			this->tabPage4->Size = System::Drawing::Size(1013, 385);
			this->tabPage4->TabIndex = 3;
			this->tabPage4->Text = L"Cambio Base";
			this->tabPage4->UseVisualStyleBackColor = true;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->ClientSize = System::Drawing::Size(1050, 471);
			this->Controls->Add(this->tabControl1);
			this->ForeColor = System::Drawing::SystemColors::ControlText;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView4))->EndInit();
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->tabPage3->ResumeLayout(false);
			this->tabPage3->PerformLayout();
			this->tabPage4->ResumeLayout(false);
			this->tabPage4->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void btnsuma_Click(System::Object^ sender, System::EventArgs^ e) {
	
		/*==================================================
		Multiplicación por sumas recursividad
		====================================================*/
		Stopwatch^ Tiempo = Stopwatch::StartNew();
		Tiempo->Start();
		try {
			int num1 = Convert::ToInt32(txtnum1->Text);
		 int num2 = Convert::ToInt32(txtnum2->Text);
			
			if (num1 < 0 && num2>0) {
				lblresult->Text = "" + multipliacionPorSuma(num1, num2);

			}
			if (num1 < 0 && 0>num2) {
				lblresult->Text ="" + multipliacionPorSuma(num1, num2) *-1;

			}
			else if (num2 < 0 && num1>0) {
				lblresult->Text = "" + (multipliacionPorSuma(num1, num2)) * -1;

			}
			else {
				lblresult->Text = "" + multipliacionPorSuma(num1, num2);

			}
		
		}
		catch(FormatException^ e){
			MessageBox::Show("Error detectado" + e->Message, "Formato incorrecto", MessageBoxButtons::OK, MessageBoxIcon::Error);

		}
		catch (OverflowException^ e) {
			MessageBox::Show("Error detectado" + e->Message, "Overflow exception", MessageBoxButtons::OK, MessageBoxIcon::Error);

		}
		catch(Exception^ e)
		{
			MessageBox::Show("Error detectado"+ e->Message, "operación multiplicación", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		Tiempo->Stop();

		linkLabel1->Text = "" + Tiempo->ElapsedMilliseconds;
	}
		   int multipliacionPorSuma(int num1,int num2) {
			   try{
			   if (num2==0) {
				   return 0;
			   }
			   if (num2>0) {
				   return num1 + multipliacionPorSuma(num1, num2 - 1);

			   }
			   if (num2 < 0) {
				   return num1 + multipliacionPorSuma(num1, -num2-1);

			   }
			   }
			  
			   catch(Exception^ e){
				   MessageBox::Show("Error detectado" + e->Message, "operación multiplicación", MessageBoxButtons::OK, MessageBoxIcon::Error);

			   }
		   }
private: System::Void btnI_Click(System::Object^ sender, System::EventArgs^ e) {
	/*========================================
	Multiplicación por suma iterativo
	===========================================*/
	Stopwatch^ Tiempo = Stopwatch::StartNew();
	Tiempo->Start();

	try{
	int num1, num2;
	 num1 = Convert::ToInt32(num1I->Text);
	 num2 = Convert::ToInt32(Num2I->Text);
	int resultado = 0;
	while (num2 !=0) {
		resultado += num1;
		num2--;
	}
	labl2->Text = "" + resultado;

	}
	catch (FormatException^ e) {
		MessageBox::Show("Error detectado" + e->Message, "Formato incorrecto", MessageBoxButtons::OK, MessageBoxIcon::Error);

	}
	
	catch (Exception^ e)
	{
		MessageBox::Show("Error detectado" + e->Message, "operación multiplicación", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	Tiempo->Stop();

	linkLabel3->Text = "" + Tiempo->ElapsedMilliseconds;

}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

}
	 
	 
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		/*=============================================
		Generar matriz con números random
		================================================*/
		Stopwatch^ sw = Stopwatch::StartNew();
		sw->Start();
		try{
			Random^ rnd = gcnew Random();
			int dimension = Convert::ToInt32(Dimensiones->Text);
			if(dimension>1){
			int** arreglo = new int*[dimension];
			for (int i = 0; i < dimension; i++) {
				arreglo[i] = new int[dimension];

			}
			DataTable^ table = gcnew DataTable();
			table->Columns->Add("Matriz");
			for (int i = 0; i < dimension; i++)
			{
			
				for (int j = 0; j < dimension; j++)
				{
					arreglo[i][j] = rand()%9;
					table->Rows->Add(arreglo[i][j]);
				}
			}
			dataGridView1->DataSource = table;
			textBox1-> Text = "" + matrizDeterminante(arreglo, dimension);

			}
			else {
				MessageBox::Show("Número Incorrecto, Ingresa un número mayor o igual a 2"
					, "Número Negativo"
					, MessageBoxButtons::OK
					, MessageBoxIcon::Exclamation);

			}
		}
		catch (Exception^ e)
		{
			MessageBox::Show("Error detectado" + e->Message, "Obtener determinante de la matriz", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		sw->Stop();

		linkLabel2->Text = "" + sw->ElapsedMilliseconds;
}
private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void MatrizResult_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label11_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
	   
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	/*=============================================
	Generar matriz con números random
	================================================*/
	
	Stopwatch^ sw = Stopwatch::StartNew();
	sw->Start();
	
	try {
		Random^ rnd = gcnew Random();
		int dimension = Convert::ToInt32(Dimensiones2->Text);
		if(dimension>1){
		int** arreglo = new int* [dimension];
		for (int i = 0; i < dimension; i++) {
			arreglo[i] = new int[dimension];

		}
		DataTable^ table = gcnew DataTable();
		table->Columns->Add("Matriz");
		for (int i = 0; i < dimension; i++)
		{

			for (int j = 0; j < dimension; j++)
			{
				arreglo[i][j] = rand() % 9;
				table->Rows->Add(arreglo[i][j]);
			}
		}
		dataGridView2->DataSource = table;
		textBox2->Text = "" + matrizDeterminante2(arreglo, dimension);
		}
		else {
			MessageBox::Show("Número Incorrecto, Ingresa un número mayor o igual a 2"
				, "Número Negativo"
				, MessageBoxButtons::OK
				, MessageBoxIcon::Exclamation);

		}

	}
	catch (Exception^ e)
	{
		MessageBox::Show("Error detectado" + e->Message, "Obtener determinante de la matriz", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	sw->Stop();

	linkLabel6->Text = "" + sw->ElapsedMilliseconds;
}

	   /*==================================================================
			 Calculo de determinante de una matriz recursividad n*n
			 ===================================================================*/

	   double matrizDeterminante(int** MatrizOriginal, int dimensionFilaColumna)
	   {
		  
		   double determinante = 0;
		   if (dimensionFilaColumna == 2) {
			   determinante = MatrizOriginal[0][0] * MatrizOriginal[1][1] - MatrizOriginal[0][1] * MatrizOriginal[1][0];
		   }
		   int** matTemporal;
		   matTemporal = new int* [dimensionFilaColumna - 1];
		   for (int i = 0; i < dimensionFilaColumna; i++)
		   {
			   matTemporal[i] = new int[dimensionFilaColumna - 1];
		   }
		   int coeficiente = 0, x = 0, filas = 0, columnas = 0;
		   for (int y = 0; y != dimensionFilaColumna; y++)
		   {
			   for (int i = 0; i < dimensionFilaColumna; i++)
			   {
				   for (int j = 0; j < dimensionFilaColumna; j++)
				   {
					   if (i == x && j == y)
					   {
						   coeficiente = MatrizOriginal[i][j];
						   int esp = i + j;
						   coeficiente = pow(-1, esp) * coeficiente;
						   filas--;
					   }
					   if (i != x && j != y)
					   {
						   matTemporal[filas][columnas] = MatrizOriginal[i][j];
						   columnas++;
					   }
				   }
				   columnas = 0;
				   filas++;
			   }
			   filas = 0;
			   if (dimensionFilaColumna > 3)
			   {
				   determinante = determinante + coeficiente * matrizDeterminante(matTemporal, (dimensionFilaColumna - 1));
			   }
			  
			   if(dimensionFilaColumna == 3)
			   {
				   determinante = determinante + coeficiente * (matTemporal[0][0] * matTemporal[1][1] - matTemporal[0][1] * matTemporal[1][0]);
			   }
		   }
		   return determinante;
	   }
	   /*==================================================================
	   Calculo de determinante de una matriz iterativo
	   ===================================================================*/
	   double matrizDeterminante2(int** MatrizOriginal, int dimensionFilaColumna)
	   {
		   double determinante = 0;
		   if (dimensionFilaColumna == 2) {
			   determinante = MatrizOriginal[0][0] * MatrizOriginal[1][1] - MatrizOriginal[0][1] * MatrizOriginal[1][0];
		   }

		   int** matTemporal;
		   matTemporal = new int* [dimensionFilaColumna - 1];
		   for (int i = 0; i < dimensionFilaColumna; i++)
		   {
			   matTemporal[i] = new int[dimensionFilaColumna - 1];
		   }
		   int coeficiente = 0, x = 0, filas = 0, columna = 0;
		 /*=================================Sin terminar forma iterativa===========================*/
		   for (int y = 0; y != dimensionFilaColumna; y++)
		   {
			   for (int i = 0; i < dimensionFilaColumna; i++)
			   {
				   for (int j = 0; j < dimensionFilaColumna; j++)
				   {
					   if (i == x && j == y)
					   {
						   coeficiente = MatrizOriginal[i][j];
						   int esp = i + j;
						   coeficiente = pow(-1, esp) * coeficiente;
						   filas--;
					   }
					   if (i != x && j != y)
					   {
						   matTemporal[filas][columna] = MatrizOriginal[i][j];
						   columna++;
					   }
				   }
				   columna = 0;
				   filas++;
			   }
			   filas = 0;
			  
			   if (dimensionFilaColumna >=3)
			   {
				   determinante = determinante + coeficiente * (matTemporal[0][0] * matTemporal[1][1] - matTemporal[0][1] * matTemporal[1][0]);

			   }

		   }
		   return determinante;
	   }
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {

	/*=================================================================
	Palabra Palindroma generar tabla (ejemplo enviado por el ingeniero)
	===================================================================*/
	Stopwatch^ sw = Stopwatch::StartNew();
	sw->Start();
	openFileDialog1->Filter = "Archivos separados por coma(txt) | *.txt";
openFileDialog1->FileName = "";

if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
	textBox3->Text = openFileDialog1->FileName;
	array<String^>^ archivoPalabras = File::ReadAllLines(openFileDialog1->FileName);
	
	if (archivoPalabras->Length>0) {
		array<String^>^ archivoColumna = archivoPalabras[0]->Split(',');
		
		if (archivoColumna->Length > 0) {
			int cantidadColumnas = archivoColumna->Length;

			for (int i = 0; i < cantidadColumnas; i++) {
				DataGridViewColumn^ nuevaColumna = gcnew DataGridViewColumn();
				nuevaColumna->Width = 50;
				DataGridViewCell^ cellTemplate = gcnew DataGridViewTextBoxCell();
				nuevaColumna->CellTemplate = cellTemplate;
				dataGridView3->Columns->Add(nuevaColumna);
			}
			for (int i = 0; i < archivoPalabras->Length;i++) {
				dataGridView3->Rows->Add();

		}
			int contadorPalabras = 0;
			for (int i = 0; i < archivoPalabras->Length; i++) {
				array<String^>^ fila = archivoPalabras[i]->Split(',');
				int j = 0;

				while ((j < cantidadColumnas) && (j < fila->Length)) {
					dataGridView3->Rows[i]->Cells[j]->Value = fila[j];
					
				System::String^ Palabras = dataGridView3->Rows[i]->Cells[j]->Value->ToString();
				int longitud = Palabras->Length;
				
				j++;
				if (ValidarPalabraPalindrome(Palabras, 0, longitud - 1)) {
					contadorPalabras++;
				}

				}

			}
			richTextBox1->Text = "hay: " + contadorPalabras + " palabras palindromas";

		}

	}

}
else {
	MessageBox::Show("No se seleccionó ningún archivo"
		, "Archivo no seleccionado"
		, MessageBoxButtons::OK
		, MessageBoxIcon::Exclamation);
}

sw->Stop();

linkLabel4->Text = "" + sw->ElapsedMilliseconds;
}/*==============================================================
 Validar palabra palindrome Recursividad
 ===================================================================*/

	   bool ValidarPalabraPalindrome(System::String^ palabras, int inicial, int final) {
		   if (inicial >= final) {
			   return true;
		 }
		   if (palabras[inicial] != palabras[final]) {
			   return false;
		   }
		   return ValidarPalabraPalindrome(palabras, inicial+1, final-1);
}
	 
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	/*===============================================
	Palabra Palindroma generar tabla (ejemplo enviado por el ingeniero)
	================================================*/
	Stopwatch^ sw = Stopwatch::StartNew();
	sw->Start();
	openFileDialog1->Filter = "Archivos separados por coma(txt) | *.txt";
	openFileDialog1->FileName = "";
	try{
		if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			textBox4->Text = openFileDialog1->FileName;
			array<String^>^ archivoPalabras = File::ReadAllLines(openFileDialog1->FileName);

			if (archivoPalabras->Length > 0) {
				array<String^>^ archivoColumna = archivoPalabras[0]->Split(',');

				if (archivoColumna->Length > 0) {
					int cantidadColumnas = archivoColumna->Length;

					for (int i = 0; i < cantidadColumnas; i++) {
						DataGridViewColumn^ nuevaColumna = gcnew DataGridViewColumn();
						nuevaColumna->Width = 50;
						DataGridViewCell^ cellTemplate = gcnew DataGridViewTextBoxCell();
						nuevaColumna->CellTemplate = cellTemplate;
						dataGridView4->Columns->Add(nuevaColumna);
					}
					for (int i = 0; i < archivoPalabras->Length;i++) {
						dataGridView4->Rows->Add();

					}
					int contadorPalabras = 0;
					for (int i = 0; i < archivoPalabras->Length; i++) {
						array<String^>^ fila = archivoPalabras[i]->Split(',');
						int j = 0;

						while ((j < cantidadColumnas) && (j < fila->Length)) {
							dataGridView4->Rows[i]->Cells[j]->Value = fila[j];

							System::String^ Palabras = dataGridView4->Rows[i]->Cells[j]->Value->ToString();
							int longitud = Palabras->Length;
							
							if (ValidarPalabraPalindromeIterativo(Palabras)) {
								contadorPalabras++;
							}
							j++;
							

						}

					}
					richTextBox2->Text = "hay: " + (contadorPalabras)  + " palabras palindromas";

				}

			}

		}
	else {
		MessageBox::Show("No se seleccionó ningún archivo"
			, "Archivo no seleccionado"
			, MessageBoxButtons::OK
			, MessageBoxIcon::Exclamation);
	}
		sw->Stop();

		linkLabel5->Text = "" + sw->ElapsedMilliseconds;
	}
	catch (Exception^ e)
	{
		MessageBox::Show("Error detectado" + e->Message, "Archivo.txt", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}

}
	   /*============================================
	 Validar Palabra Palindrome iterativo
	   ==================================================*/
	   bool ValidarPalabraPalindromeIterativo(System::String^ palabras)
	   {
		   int inicial, final = palabras->Length - 1;

		   while (inicial < final)
		   {
			   if (palabras[inicial] != palabras[final]) {
				   return false;
			   }
			   inicial++;
			   final--;
		   }

		   return true;
	   }

private: System::Void Dimensiones2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}	/*=============================================
	Convertir todas las bases a base decimal - iterativo
	================================================*/
	   int ConvertirBinarioADecimal(int n) {
		   int Numero = 0, i = 0, mod;
		   while (n!=0) {
			   mod = n % 10;
			   n /= 10;
			   Numero += mod * pow(2, i);
			   ++i;
		   }
		   return Numero;
	}
	   
	   	   int ConvertirADecimal(int n) {
		   int Numero = 0, i = 0, mod;
		   while (n!=0) {
			   mod = n % 10;
			   n /= 10;
			   Numero += mod * pow(3, i);
			   ++i;
		   }
		   return Numero;
	}
		   int ConvertirADecimal2(int n) {
			   int Numero = 0, i = 0, mod;
			   while (n != 0) {
				   mod = n % 10;
				   n /= 10;
				   Numero += mod * pow(4, i);
				   ++i;
			   }
			   return Numero;
		   }
		  
		   int ConvertirADecimal3(int n) {
			   int Numero = 0, i = 0, mod;
			   while (n != 0) {
				   mod = n % 10;
				   n /= 10;
				   Numero += mod * pow(5, i);
				   ++i;
			   }
			   return Numero;
		   }

		   int ConvertirADecimal4(int n) {
			   int Numero = 0, i = 0, mod;
			   while (n != 0) {
				   mod = n % 10;
				   n /= 10;
				   Numero += mod * pow(6, i);
				   ++i;
			   }
			   return Numero;
		   }
		   int ConvertirADecimal5(int n) {
			   int Numero = 0, i = 0, mod;
			   while (n != 0) {
				   mod = n % 10;
				   n /= 10;
				   Numero += mod * pow(7, i);
				   ++i;
			   }
			   return Numero;
		   }

		   int ConvertirADecimal6(int n) {
			   int Numero = 0, i = 0, mod;
			   while (n != 0) {
				   mod = n % 10;
				   n /= 10;
				   Numero += mod * pow(8, i);
				   ++i;
			   }
			   return Numero;
		   }

		   int ConvertirADecimal7(int n) {
			   int Numero = 0, i = 0, mod;
			   while (n != 0) {
				   mod = n % 10;
				   n /= 10;
				   Numero += mod * pow(9, i);
				   ++i;
			   }
			   return Numero;
		   }

		   /*=============================================
	Convertir base decimal a todas las bases - Iterativo
	================================================*/

	   int CambioBase(int base, int n) {

		   int num1 = 0, i = 0, cociente = n, mod = 0; 
		   while (cociente != 0) {

			   mod = cociente % base;
			   cociente = cociente / base;

			   num1 = pow(10, i) * mod + num1;
			   i++;
		   }

		   return num1;
	   }
	   int CambioBaseRecursivoADecimal(int a, int b) {
		   if (a==0) {
			   return 0;
		  }
		   if (a==1) {
			   return (int)pow(2, b);
		   }
		   return a % 10 * (int)pow(2, b) + CambioBaseRecursivoADecimal(a / 10, b + 1);

	   }
	   /*=========================================
	   Convertir base decimal a todas las bases - Recursivo
	   ==========================================*/
	   int convertirRecursivo(int num, int base) {
		   if (num == 0 || base == 10) {
			   return num;
		   }
		   return (num % base) + 10 * convertirRecursivo(num/base, base);
	}
	
	   void extraerDigitos(int num){
		   int i, digito, numero = num;
		   while (num>0) {
			   digito = num % 10;
			   if (RangoNumeros(0, 1, digito)) {
				 
				   num = num / 10;
			  }
			   else {
				   MessageBox::Show("Ingrese solo digitos 0 y 1"
					   , "Archivo no seleccionado"
					   , MessageBoxButtons::OK
					   , MessageBoxIcon::Exclamation);
				   num = 0;
			   }
			  
		   }
		   if (digito == 0 || digito == 1) {
			   textBox6->Text = "" + numero;

		   }
	   }
	   void extraerDigitosBase4Mismo(int num) {
		   int i, digito, numero = num;
		   while (num > 0) {
			   digito = num % 10;
			   if (RangoNumeros(0, 3, digito)) {

				   num = num / 10;
			   }
			   else {
				   MessageBox::Show("Ingrese solo digitos 0 y 1"
					   , "Archivo no seleccionado"
					   , MessageBoxButtons::OK
					   , MessageBoxIcon::Exclamation);
				   num = 0;
			   }

		   }
		   if (digito == 0 || digito == 1 || digito == 2 || digito == 3) {
			   textBox6->Text = "" + numero;

		   }
	   }
	   void extraerDigitosBase3Mismo(int num) {
		   int i, digito, numero = num;
		   while (num > 0) {
			   digito = num % 10;
			   if (RangoNumeros(0, 2, digito)) {

				   num = num / 10;
			   }
			   else {
				   MessageBox::Show("Ingrese solo digitos 0 y 1"
					   , "Archivo no seleccionado"
					   , MessageBoxButtons::OK
					   , MessageBoxIcon::Exclamation);
				   num = 0;
			   }

		   }
		   if (digito == 0 || digito == 1 || digito == 2) {
			   textBox6->Text = "" + numero;

		   }
	   }
	   void extraerDigitosBases4(int num) {
		   int i, digito, numero = num;
		   while (num > 0) {
			   digito = num % 10;
			   if (RangoNumeros(0, 3, digito)) {

				   num = num / 10;
			   }
			   else {
				   MessageBox::Show("Ingrese solo digitos 0, 1, 2 y 3"
					   , "Archivo no seleccionado"
					   , MessageBoxButtons::OK
					   , MessageBoxIcon::Exclamation);
				   num = 0;
			   }

		   }
		   if (digito == 0 || digito == 1 || digito == 2 || digito == 3) {

			   ImprimirMetodosBases4(numero, comboBox2->SelectedIndex + 2);

		   }
	   }
	   /*=========================================================================================================
		Impresión de número ya validado que el usuario no ingrese números ajenos a su base correspondiente
	===========================================================================================================*/
	   void ImprimirMetodosBases(int n, int base) {
		   int numBinarioADecimal = ConvertirBinarioADecimal(n);
		   textBox6->Text = "" + CambioBase(base, numBinarioADecimal);
	   }
	   void ImprimirMetodosBases3(int n, int base) {
		   int numBinarioADecimal = ConvertirADecimal(n);
		   textBox6->Text = "" + CambioBase(base, numBinarioADecimal);
	   }
	   void ImprimirMetodosBases4(int n, int base) {
		   int numBinarioADecimal = ConvertirADecimal2(n);
		   textBox6->Text = "" + CambioBase(base, numBinarioADecimal);
	   }
	   void ImprimirMetodosBases5(int n, int base) {
		   int numBinarioADecimal = ConvertirADecimal3(n);
		   textBox6->Text = "" + CambioBase(base, numBinarioADecimal);
	   }
	   void ImprimirMetodosBases6(int n, int base) {
		   int numBinarioADecimal = ConvertirADecimal4(n);
		   textBox6->Text = "" + CambioBase(base, numBinarioADecimal);
	   }
	   void ImprimirMetodosBases7(int n, int base) {
		   int numBinarioADecimal = ConvertirADecimal5(n);
		   textBox6->Text = "" + CambioBase(base, numBinarioADecimal);
	   }
	   void ImprimirMetodosBases8(int n, int base) {
		   int numBinarioADecimal = ConvertirADecimal6(n);
		   textBox6->Text = "" + CambioBase(base, numBinarioADecimal);
	   }
	   void ImprimirMetodosBases9(int n, int base) {
		   int numBinarioADecimal = ConvertirADecimal7(n);
		   textBox6->Text = "" + CambioBase(base, numBinarioADecimal);
	   }
	   void ImprimirMetodosBases2Recursivo(int n, int base) {
		   int numBinarioADecimal = CambioBaseRecursivoADecimal(n, 0);
		   textBox7->Text = "" +convertirRecursivo(numBinarioADecimal, base);
	   }
	   void ImprimirMetodosBases3Recursivo(int n, int base) {
		   int numBinarioADecimal = ConvertirADecimal(n);
		   textBox7->Text = "" + convertirRecursivo(numBinarioADecimal, base);
	   }
	   void ImprimirMetodosBases4Recursivo(int n, int base) {
		   int numBinarioADecimal = ConvertirADecimal2(n);
		   textBox7->Text = "" + convertirRecursivo(numBinarioADecimal, base);
	   }
	   void ImprimirMetodosBases5Recursivo(int n, int base) {
		   int numBinarioADecimal = ConvertirADecimal3(n);
		   textBox7->Text = "" + convertirRecursivo(numBinarioADecimal, base);
	   }
	   void ImprimirMetodosBases6Recursivo(int n, int base) {
		   int numBinarioADecimal = ConvertirADecimal4(n);
		   textBox7->Text = "" + convertirRecursivo(numBinarioADecimal, base);
	   }
	   void ImprimirMetodosBases7Recursivo(int n, int base) {
		   int numBinarioADecimal = ConvertirADecimal5(n);
		   textBox7->Text = "" + convertirRecursivo(numBinarioADecimal, base);
	   }
	   void ImprimirMetodosBases8Recursivo(int n, int base) {
		   int numBinarioADecimal = ConvertirADecimal6(n);
		   textBox7->Text = "" + convertirRecursivo(numBinarioADecimal, base);
	   }
	   void ImprimirMetodosBases9Recursivo(int n, int base) {
		   int numBinarioADecimal = ConvertirADecimal7(n);
		   textBox7->Text = "" + convertirRecursivo(numBinarioADecimal, base);
	   }


	   /*=========================================================================================================
	   Validaciones para cada una de las bases, para que el usuario ingrese los números correspondientes a la base 
	   ===========================================================================================================*/

	   void extraerDigitos2(int num) {
		   int i, digito, numero = num;
		   while (num > 0) {

			   digito = num % 10;
			   if (RangoNumeros(0, 1, digito)) {
				  
				   num = num / 10;
			   }
			   else {
				   MessageBox::Show("Ingrese solo digitos 0 y 1"
					   , "Archivo no seleccionado"
					   , MessageBoxButtons::OK
					   , MessageBoxIcon::Exclamation);
				   num = 0;
			   }

		   }
		   if (digito==0 || digito== 1) {
			   
			   ImprimirMetodosBases(numero, comboBox2->SelectedIndex+2);
			   
		   }

	   }

	   void extraerDigitos3(int num) {
		   int i, digito, numero = num;
		   while (num > 0) {

			   digito = num % 10;
			   if (RangoNumeros(0, 2, digito)) {

				   num = num / 10;
			   }
			   else {
				   MessageBox::Show("Ingrese solo digitos 0, 1 y 2"
					   , "Archivo no seleccionado"
					   , MessageBoxButtons::OK
					   , MessageBoxIcon::Exclamation);
				   num = 0;
			   }

		   }
		   if (digito == 0 || digito == 1 || digito == 2) {

			   ImprimirMetodosBases3(numero, comboBox2->SelectedIndex + 2);
		   }

	   }
	   void extraerDigitos5Mismo(int num) {
		   int i, digito, numero = num;
		   while (num > 0) {

			   digito = num % 10;
			   if (RangoNumeros(0, 4, digito)) {

				   num = num / 10;
			   }
			   else {
				   MessageBox::Show("Ingrese solo digitos 0, 1, 2, 3, y 4"
					   , "Archivo no seleccionado"
					   , MessageBoxButtons::OK
					   , MessageBoxIcon::Exclamation);
				   num = 0;
			   }

		   }
		   if (digito == 0 || digito == 1 || digito == 2 || digito == 3 || digito == 4) {

			   textBox6->Text = "" + numero;
		   }

	   }
	   void extraerDigitos6Mismo(int num) {
		   int i, digito, numero = num;
		   while (num > 0) {

			   digito = num % 10;
			   if (RangoNumeros(0, 5, digito)) {

				   num = num / 10;
			   }
			   else {
				   MessageBox::Show("Ingrese solo digitos 0, 1, 2, 3, 4 y 5"
					   , "Archivo no seleccionado"
					   , MessageBoxButtons::OK
					   , MessageBoxIcon::Exclamation);
				   num = 0;
			   }

		   }
		   if (digito == 0 || digito == 1 || digito == 2 || digito == 3 || digito == 4 || digito == 5) {

			   textBox6->Text = "" + numero;
		   }

	   }
	   void extraerDigitos2MismoRecursivo(int num) {
		   int i, digito, numero = num;
		   while (num > 0) {

			   digito = num % 10;
			   if (RangoNumeros(0, 1, digito)) {

				   num = num / 10;
			   }
			   else {
				   MessageBox::Show("Ingrese solo digitos 0 y 1"
					   , "Archivo no seleccionado"
					   , MessageBoxButtons::OK
					   , MessageBoxIcon::Exclamation);
				   num = 0;
			   }

		   }
		   if (digito == 0 || digito == 1) {

			   textBox7->Text = "" + numero;
		   }

	   }
	   void extraerDigitos3MismoRecursivo(int num) {
		   int i, digito, numero = num;
		   while (num > 0) {

			   digito = num % 10;
			   if (RangoNumeros(0, 1, digito)) {

				   num = num / 10;
			   }
			   else {
				   MessageBox::Show("Ingrese solo digitos 0, 1, 2 y 3"
					   , "Archivo no seleccionado"
					   , MessageBoxButtons::OK
					   , MessageBoxIcon::Exclamation);
				   num = 0;
			   }

		   }
		   if (digito == 0 || digito == 1 || digito == 2) {

			   textBox7->Text = "" + numero;
		   }

	   }
	   void extraerDigitos4MismoRecursivo(int num) {
		   int i, digito, numero = num;
		   while (num > 0) {

			   digito = num % 10;
			   if (RangoNumeros(0, 3, digito)) {

				   num = num / 10;
			   }
			   else {
				   MessageBox::Show("Ingrese solo digitos 0, 1, 2 y 3"
					   , "Archivo no seleccionado"
					   , MessageBoxButtons::OK
					   , MessageBoxIcon::Exclamation);
				   num = 0;
			   }

		   }
		   if (digito == 0 || digito == 1 || digito == 2 || digito == 3) {

			   textBox7->Text = "" + numero;
		   }

	   }
	   void extraerDigitos5MismoRecursivo(int num) {
		   int i, digito, numero = num;
		   while (num > 0) {

			   digito = num % 10;
			   if (RangoNumeros(0, 4, digito)) {

				   num = num / 10;
			   }
			   else {
				   MessageBox::Show("Ingrese solo digitos 0, 1, 2, 3 y 4"
					   , "Archivo no seleccionado"
					   , MessageBoxButtons::OK
					   , MessageBoxIcon::Exclamation);
				   num = 0;
			   }

		   }
		   if (digito == 0 || digito == 1 || digito == 2 || digito == 3) {

			   textBox7->Text = "" + numero;
		   }

	   }
	   void extraerDigitos6MismoRecursivo(int num) {
		   int i, digito, numero = num;
		   while (num > 0) {

			   digito = num % 10;
			   if (RangoNumeros(0, 5, digito)) {

				   num = num / 10;
			   }
			   else {
				   MessageBox::Show("Ingrese solo digitos 0, 1, 2, 3, 4 y 5"
					   , "Archivo no seleccionado"
					   , MessageBoxButtons::OK
					   , MessageBoxIcon::Exclamation);
				   num = 0;
			   }

		   }
		   if (digito == 0 || digito == 1 || digito == 2 || digito == 3 || digito == 4 || digito == 5) {

			   textBox7->Text = "" + numero;
		   }

	   }
	  
	   void extraerDigitos7MismoRecursivo(int num) {
		   int i, digito, numero = num;
		   while (num > 0) {

			   digito = num % 10;
			   if (RangoNumeros(0, 6, digito)) {

				   num = num / 10;
			   }
			   else {
				   MessageBox::Show("Ingrese solo digitos 0, 1, 2, 3, 4, 5 y 6"
					   , "Archivo no seleccionado"
					   , MessageBoxButtons::OK
					   , MessageBoxIcon::Exclamation);
				   num = 0;
			   }

		   }
		   if (digito == 0 || digito == 1 || digito == 2 || digito == 3 || digito == 4 || digito == 5 || digito == 6) {

			   textBox7->Text = "" + numero;
		   }

	   }
	   void extraerDigitos8MismoRecursivo(int num) {
		   int i, digito, numero = num;
		   while (num > 0) {

			   digito = num % 10;
			   if (RangoNumeros(0, 7, digito)) {

				   num = num / 10;
			   }
			   else {
				   MessageBox::Show("Ingrese solo digitos 0, 1, 2, 3, 4, 5, 6 y 7"
					   , "Archivo no seleccionado"
					   , MessageBoxButtons::OK
					   , MessageBoxIcon::Exclamation);
				   num = 0;
			   }

		   }
		   if (digito == 0 || digito == 1 || digito == 2 || digito == 3 || digito == 4 || digito == 5 || digito == 6 || digito == 7) {

			   textBox7->Text = "" + numero;
		   }

	   }
	   void extraerDigitos9MismoRecursivo(int num) {
		   int i, digito, numero = num;
		   while (num > 0) {

			   digito = num % 10;
			   if (RangoNumeros(0, 7, digito)) {

				   num = num / 10;
			   }
			   else {
				   MessageBox::Show("Ingrese solo digitos 0, 1, 2, 3, 4, 5, 6, 7 y 8"
					   , "Archivo no seleccionado"
					   , MessageBoxButtons::OK
					   , MessageBoxIcon::Exclamation);
				   num = 0;
			   }

		   }
		   if (digito == 0 || digito == 1 || digito == 2 || digito == 3 || digito == 4 || digito == 5 || digito == 6 || digito == 7 || digito == 8) {

			   textBox7->Text = "" + numero;
		   }

	   }
	   void extraerDigitos7Mismo(int num) {
		   int i, digito, numero = num;
		   while (num > 0) {

			   digito = num % 10;
			   if (RangoNumeros(0, 6, digito)) {

				   num = num / 10;
			   }
			   else {
				   MessageBox::Show("Ingrese solo digitos 0, 1, 2, 3, 4 , 5 y 6"
					   , "Archivo no seleccionado"
					   , MessageBoxButtons::OK
					   , MessageBoxIcon::Exclamation);
				   num = 0;
			   }

		   }
		   if (digito == 0 || digito == 1 || digito == 2 || digito == 3 || digito == 4 || digito == 5 || digito == 6) {

			   textBox6->Text = "" + numero;
		   }

	   }
	   void extraerDigitos8Mismo(int num) {
		   int i, digito, numero = num;
		   while (num > 0) {

			   digito = num % 10;
			   if (RangoNumeros(0, 7, digito)) {

				   num = num / 10;
			   }
			   else {
				   MessageBox::Show("Ingrese solo digitos 0, 1, 2, 3, 4 , 5, 6 y 7"
					   , "Archivo no seleccionado"
					   , MessageBoxButtons::OK
					   , MessageBoxIcon::Exclamation);
				   num = 0;
			   }

		   }
		   if (digito == 0 || digito == 1 || digito == 2 || digito == 3 || digito == 4 || digito == 5 || digito == 6 || digito == 7) {

			   textBox6->Text = "" + numero;
		   }


	   }
	   void extraerDigitos9Mismo(int num) {
		   int i, digito, numero = num;
		   while (num > 0) {

			   digito = num % 10;
			   if (RangoNumeros(0, 8, digito)) {

				   num = num / 10;
			   }
			   else {
				   MessageBox::Show("Ingrese solo digitos 0, 1, 2, 3, 4 , 5, 6, 7 y 8"
					   , "Archivo no seleccionado"
					   , MessageBoxButtons::OK
					   , MessageBoxIcon::Exclamation);
				   num = 0;
			   }

		   }
		   if (digito == 0 || digito == 1 || digito == 2 || digito == 3 || digito == 4 || digito == 5 || digito == 6 || digito == 7 || digito == 8) {

			   textBox6->Text = "" + numero;
		   }


	   }
	   void extraerDigitos6(int num) {
		   int i, digito, numero = num;
		   while (num > 0) {

			   digito = num % 10;
			   if (RangoNumeros(0, 5, digito)) {

				   num = num / 10;
			   }
			   else {
				   MessageBox::Show("Ingrese solo digitos 0, 1, 2, 3, 4 y 5"
					   , "Archivo no seleccionado"
					   , MessageBoxButtons::OK
					   , MessageBoxIcon::Exclamation);
				   num = 0;
			   }

		   }
		   if (digito == 0 || digito == 1 || digito == 2 || digito == 3 || digito == 4 || digito == 5) {

			   ImprimirMetodosBases6(numero, comboBox2->SelectedIndex + 2);
		   }

	   }
	   
	   void extraerDigitos5(int num) {
		   int i, digito, numero = num;
		   while (num > 0) {

			   digito = num % 10;
			   if (RangoNumeros(0, 4, digito)) {

				   num = num / 10;
			   }
			   else {
				   MessageBox::Show("Ingrese solo digitos 0, 1, 2, 3 y 4"
					   , "Archivo no seleccionado"
					   , MessageBoxButtons::OK
					   , MessageBoxIcon::Exclamation);
				   num = 0;
			   }

		   }
		   if (digito == 0 || digito == 1 || digito == 2 || digito == 3 || digito == 4) {

			   ImprimirMetodosBases5(numero, comboBox2->SelectedIndex + 2);
		   }

	   }
	   void extraerDigitos2Recursivo(int num) {
		   int i, digito, numero = num;
		   while (num > 0) {

			   digito = num % 10;
			   if (RangoNumeros(0, 1, digito)) {

				   num = num / 10;
			   }
			   else {
				   MessageBox::Show("Ingrese solo digitos 0 y 1"
					   , "Archivo no seleccionado"
					   , MessageBoxButtons::OK
					   , MessageBoxIcon::Exclamation);
				   num = 0;
			   }

		   }
		   if (digito == 0 || digito == 1 ) {

			  ImprimirMetodosBases2Recursivo(numero, comboBox3->SelectedIndex +2);
		   }

	   }
	   void extraerDigitos3Recursivo(int num) {
		   int i, digito, numero = num;
		   while (num > 0) {

			   digito = num % 10;
			   if (RangoNumeros(0, 2, digito)) {

				   num = num / 10;
			   }
			   else {
				   MessageBox::Show("Ingrese solo digitos 0, 1 y 2"
					   , "Archivo no seleccionado"
					   , MessageBoxButtons::OK
					   , MessageBoxIcon::Exclamation);
				   num = 0;
			   }

		   }
		   if (digito == 0 || digito == 1 || digito == 2) {

			   ImprimirMetodosBases3Recursivo(numero, comboBox3->SelectedIndex + 2);
		   }

	   }
	   void extraerDigitos4Recursivo(int num) {
		   int i, digito, numero = num;
		   while (num > 0) {

			   digito = num % 10;
			   if (RangoNumeros(0, 3, digito)) {

				   num = num / 10;
			   }
			   else {
				   MessageBox::Show("Ingrese solo digitos 0, 1, 2 y 3"
					   , "Archivo no seleccionado"
					   , MessageBoxButtons::OK
					   , MessageBoxIcon::Exclamation);
				   num = 0;
			   }

		   }
		   if (digito == 0 || digito == 1 || digito == 2 || digito == 3) {

			   ImprimirMetodosBases3Recursivo(numero, comboBox3->SelectedIndex + 2);
		   }

	   }
	   void extraerDigitos5Recursivo(int num) {
		   int i, digito, numero = num;
		   while (num > 0) {

			   digito = num % 10;
			   if (RangoNumeros(0, 4, digito)) {

				   num = num / 10;
			   }
			   else {
				   MessageBox::Show("Ingrese solo digitos 0, 1, 2, 3 y 4"
					   , "Archivo no seleccionado"
					   , MessageBoxButtons::OK
					   , MessageBoxIcon::Exclamation);
				   num = 0;
			   }

		   }
		   if (digito == 0 || digito == 1 || digito == 2 || digito == 3 || digito == 4) {

			   ImprimirMetodosBases5Recursivo(numero, comboBox3->SelectedIndex + 2);
		   }

	   }
	   void extraerDigitos6Recursivo(int num) {
		   int i, digito, numero = num;
		   while (num > 0) {

			   digito = num % 10;
			   if (RangoNumeros(0, 5, digito)) {

				   num = num / 10;
			   }
			   else {
				   MessageBox::Show("Ingrese solo digitos 0, 1, 2, 3, 4 y 5"
					   , "Archivo no seleccionado"
					   , MessageBoxButtons::OK
					   , MessageBoxIcon::Exclamation);
				   num = 0;
			   }

		   }
		   if (digito == 0 || digito == 1 || digito == 2 || digito == 3 || digito == 4 || digito == 5) {

			   ImprimirMetodosBases5Recursivo(numero, comboBox3->SelectedIndex + 2);
		   }

	   }
	   void extraerDigitos7Recursivo(int num) {
		   int i, digito, numero = num;
		   while (num > 0) {

			   digito = num % 10;
			   if (RangoNumeros(0, 6, digito)) {

				   num = num / 10;
			   }
			   else {
				   MessageBox::Show("Ingrese solo digitos 0, 1, 2, 3, 4, 5 y 6"
					   , "Archivo no seleccionado"
					   , MessageBoxButtons::OK
					   , MessageBoxIcon::Exclamation);
				   num = 0;
			   }

		   }
		   if (digito == 0 || digito == 1 || digito == 2 || digito == 3 || digito == 4 || digito == 5 || digito == 6) {

			   ImprimirMetodosBases7Recursivo(numero, comboBox3->SelectedIndex + 2);
		   }

	   }
	 
	   void extraerDigitos8Recursivo(int num) {
		   int i, digito, numero = num;
		   while (num > 0) {

			   digito = num % 10;
			   if (RangoNumeros(0, 7, digito)) {

				   num = num / 10;
			   }
			   else {
				   MessageBox::Show("Ingrese solo digitos 0, 1, 2, 3, 4, 5, 6 y 7"
					   , "Archivo no seleccionado"
					   , MessageBoxButtons::OK
					   , MessageBoxIcon::Exclamation);
				   num = 0;
			   }

		   }
		   if (digito == 0 || digito == 1 || digito == 2 || digito == 3 || digito == 4 || digito == 5 || digito == 6 || digito == 7) {

			   ImprimirMetodosBases8Recursivo(numero, comboBox3->SelectedIndex + 2);
		   }

	   }
	   void extraerDigitos9Recursivo(int num) {
		   int i, digito, numero = num;
		   while (num > 0) {

			   digito = num % 10;
			   if (RangoNumeros(0, 8, digito)) {

				   num = num / 10;
			   }
			   else {
				   MessageBox::Show("Ingrese solo digitos 0, 1, 2, 3, 4, 5, 6. 7 y 8"
					   , "Archivo no seleccionado"
					   , MessageBoxButtons::OK
					   , MessageBoxIcon::Exclamation);
				   num = 0;
			   }

		   }
		   if (digito == 0 || digito == 1 || digito == 2 || digito == 3 || digito == 4 || digito == 5 || digito == 6 || digito == 7|| digito == 8) {

			   ImprimirMetodosBases9Recursivo(numero, comboBox3->SelectedIndex + 2);
		   }

	   }
	   void extraerDigitos7(int num) {
		   int i, digito, numero = num;
		   while (num > 0) {

			   digito = num % 10;
			   if (RangoNumeros(0, 6, digito)) {

				   num = num / 10;
			   }
			   else {
				   MessageBox::Show("Ingrese solo digitos 0, 1, 2, 3, 4, 5 y 6 "
					   , "Archivo no seleccionado"
					   , MessageBoxButtons::OK
					   , MessageBoxIcon::Exclamation);
				   num = 0;
			   }

		   }
		   if (digito == 0 || digito == 1 || digito == 2 || digito == 3 || digito == 4 || digito == 5 || digito == 6) {

			   ImprimirMetodosBases7(numero, comboBox2->SelectedIndex + 2);
		   }

	   }
	   void extraerDigitos8(int num) {
		   int i, digito, numero = num;
		   while (num > 0) {

			   digito = num % 10;
			   if (RangoNumeros(0, 7, digito)) {

				   num = num / 10;
			   }
			   else {
				   MessageBox::Show("Ingrese solo digitos 0, 1, 2, 3, 4, 5, 6 y 7 "
					   , "Archivo no seleccionado"
					   , MessageBoxButtons::OK
					   , MessageBoxIcon::Exclamation);
				   num = 0;
			   }

		   }
		   if (digito == 0 || digito == 1 || digito == 2 || digito == 3 || digito == 4 || digito == 5 || digito == 6 || digito == 7) {

			   ImprimirMetodosBases8(numero, comboBox2->SelectedIndex + 2);
		   }

	   }
	   void extraerDigitos9(int num) {
		   int i, digito, numero = num;
		   while (num > 0) {

			   digito = num % 10;
			   if (RangoNumeros(0, 8, digito)) {

				   num = num / 10;
			   }
			   else {
				   MessageBox::Show("Ingrese solo digitos 0, 1, 2, 3, 4, 5, 6, 7 y 8 "
					   , "Archivo no seleccionado"
					   , MessageBoxButtons::OK
					   , MessageBoxIcon::Exclamation);
				   num = 0;
			   }

		   }
		   if (digito == 0 || digito == 1 || digito == 2 || digito == 3 || digito == 4 || digito == 5 || digito == 6 || digito == 7 || digito == 8) {

			   ImprimirMetodosBases9(numero, comboBox2->SelectedIndex + 2);
		   }

	   }
	   bool RangoNumeros(int rangoInicial, int rangoFinal, int num) {
		   return ((num - rangoFinal) * (num - rangoInicial) <= 0);
	   }
private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	/*=============================================
	ComboBox para seleccionar todas las conversiones posibles
================================================*/
	Stopwatch^ sw = Stopwatch::StartNew();
	sw->Start();
	try{
		int n = Convert::ToInt32(textBox5->Text);
		
	int numeroIngresadoPorUsuario = comboBox1->SelectedIndex;
	int conversionDeNumero = comboBox2->SelectedIndex;
	if(n>0){
			if (numeroIngresadoPorUsuario == 0 && conversionDeNumero == 0) {
				extraerDigitos(n);

			}
			if (numeroIngresadoPorUsuario == 0 && conversionDeNumero == 1) {
				extraerDigitos2(n);


			}
			if (numeroIngresadoPorUsuario == 0 && conversionDeNumero == 2) {
				extraerDigitos2(n);

			}
			if (numeroIngresadoPorUsuario == 0 && conversionDeNumero == 3) {
				extraerDigitos2(n);

			}
			if (numeroIngresadoPorUsuario == 0 && conversionDeNumero == 4) {
				extraerDigitos2(n);


			}
			if (numeroIngresadoPorUsuario == 0 && conversionDeNumero == 5) {
				extraerDigitos2(n);

			}
			if (numeroIngresadoPorUsuario == 0 && conversionDeNumero == 6) {
				extraerDigitos2(n);
			}
			if (numeroIngresadoPorUsuario == 0 && conversionDeNumero == 7) {
				extraerDigitos2(n);


			}
			if (numeroIngresadoPorUsuario == 1 && conversionDeNumero == 1) {

				extraerDigitosBase3Mismo(n);

			}
			if (numeroIngresadoPorUsuario == 1 && conversionDeNumero == 0) {
				extraerDigitos3(n);

			}
			if (numeroIngresadoPorUsuario == 1 && conversionDeNumero == 2) {
				extraerDigitos3(n);
			}
			if (numeroIngresadoPorUsuario == 1 && conversionDeNumero == 3) {
				extraerDigitos3(n);
			}
			if (numeroIngresadoPorUsuario == 1 && conversionDeNumero == 4) {
				extraerDigitos3(n);
			}
			if (numeroIngresadoPorUsuario == 1 && conversionDeNumero == 5) {
				extraerDigitos3(n);
			}
			if (numeroIngresadoPorUsuario == 1 && conversionDeNumero == 6) {
				extraerDigitos3(n);
			}
			if (numeroIngresadoPorUsuario == 1 && conversionDeNumero == 7) {
				extraerDigitos3(n);
			}
			if (numeroIngresadoPorUsuario == 2 && conversionDeNumero == 2) {

				extraerDigitosBase4Mismo(n);

			}
			if (numeroIngresadoPorUsuario == 2 && conversionDeNumero == 0) {
				extraerDigitosBases4(n);
			}
			if (numeroIngresadoPorUsuario == 2 && conversionDeNumero == 1) {
				extraerDigitosBases4(n);
			}
			if (numeroIngresadoPorUsuario == 2 && conversionDeNumero == 3) {
				extraerDigitosBases4(n);
			}
			if (numeroIngresadoPorUsuario == 2 && conversionDeNumero == 4) {
				extraerDigitosBases4(n);
			}
			if (numeroIngresadoPorUsuario == 2 && conversionDeNumero == 5) {
				extraerDigitosBases4(n);
			}
			if (numeroIngresadoPorUsuario == 2 && conversionDeNumero == 6) {
				extraerDigitosBases4(n);
			}
			if (numeroIngresadoPorUsuario == 2 && conversionDeNumero == 7) {
				extraerDigitosBases4(n);
			}
			if (numeroIngresadoPorUsuario == 3 && conversionDeNumero == 3) {

				extraerDigitos5Mismo(n);

			}
			if (numeroIngresadoPorUsuario == 3 && conversionDeNumero == 0) {
				extraerDigitos5(n);
			}
			if (numeroIngresadoPorUsuario == 3 && conversionDeNumero == 1) {
				extraerDigitos5(n);
			}
			if (numeroIngresadoPorUsuario == 3 && conversionDeNumero == 2) {
				extraerDigitos5(n);
			}
			if (numeroIngresadoPorUsuario == 3 && conversionDeNumero == 4) {
				extraerDigitos5(n);
			}
			if (numeroIngresadoPorUsuario == 3 && conversionDeNumero == 5) {
				extraerDigitos5(n);
			}
			if (numeroIngresadoPorUsuario == 3 && conversionDeNumero == 6) {
				extraerDigitos5(n);
			}
			if (numeroIngresadoPorUsuario == 3 && conversionDeNumero == 7) {
				extraerDigitos5(n);
			}
			if (numeroIngresadoPorUsuario == 4 && conversionDeNumero == 4) {

				extraerDigitos6Mismo(n);

			}
			if (numeroIngresadoPorUsuario == 4 && conversionDeNumero == 0) {
				extraerDigitos6(n);
			}
			if (numeroIngresadoPorUsuario == 4 && conversionDeNumero == 1) {
				extraerDigitos6(n);
			}
			if (numeroIngresadoPorUsuario == 4 && conversionDeNumero == 2) {
				extraerDigitos6(n);
			}
			if (numeroIngresadoPorUsuario == 4 && conversionDeNumero == 3) {
				extraerDigitos6(n);
			}
			if (numeroIngresadoPorUsuario == 4 && conversionDeNumero == 5) {
				extraerDigitos6(n);
			}
			if (numeroIngresadoPorUsuario == 4 && conversionDeNumero == 6) {
				extraerDigitos6(n);
			}
			if (numeroIngresadoPorUsuario == 4 && conversionDeNumero == 7) {
				extraerDigitos6(n);
			}
			if (numeroIngresadoPorUsuario == 5 && conversionDeNumero == 5) {

				extraerDigitos7Mismo(n);

			}
			if (numeroIngresadoPorUsuario == 5 && conversionDeNumero == 0) {
				extraerDigitos7(n);
			}
			if (numeroIngresadoPorUsuario == 5 && conversionDeNumero == 1) {
				extraerDigitos7(n);
			}
			if (numeroIngresadoPorUsuario == 5 && conversionDeNumero == 2) {
				extraerDigitos7(n);
			}
			if (numeroIngresadoPorUsuario == 5 && conversionDeNumero == 3) {
				extraerDigitos7(n);
			}
			if (numeroIngresadoPorUsuario == 5 && conversionDeNumero == 4) {
				extraerDigitos7(n);
			}
			if (numeroIngresadoPorUsuario == 5 && conversionDeNumero == 6) {
				extraerDigitos7(n);
			}
			if (numeroIngresadoPorUsuario == 5 && conversionDeNumero == 7) {
				extraerDigitos7(n);
			}
			if (numeroIngresadoPorUsuario == 6 && conversionDeNumero == 6) {

				extraerDigitos8Mismo(n);

			}
			if (numeroIngresadoPorUsuario == 6 && conversionDeNumero == 0) {
				extraerDigitos8(n);
			}
			if (numeroIngresadoPorUsuario == 6 && conversionDeNumero == 1) {
				extraerDigitos8(n);
			}
			if (numeroIngresadoPorUsuario == 6 && conversionDeNumero == 2) {
				extraerDigitos8(n);
			}
			if (numeroIngresadoPorUsuario == 6 && conversionDeNumero == 3) {
				extraerDigitos8(n);
			}
			if (numeroIngresadoPorUsuario == 6 && conversionDeNumero == 4) {
				extraerDigitos8(n);
			}
			if (numeroIngresadoPorUsuario == 6 && conversionDeNumero == 5) {
				extraerDigitos8(n);
			}
			if (numeroIngresadoPorUsuario == 6 && conversionDeNumero == 7) {
				extraerDigitos8(n);
			}
			if (numeroIngresadoPorUsuario == 7 && conversionDeNumero == 7) {

				extraerDigitos9Mismo(n);

			}
	
			if (numeroIngresadoPorUsuario == 7 && conversionDeNumero == 0) {
				extraerDigitos9(n);
			}
			if (numeroIngresadoPorUsuario == 7 && conversionDeNumero == 1) {
				extraerDigitos9(n);
			}
			if (numeroIngresadoPorUsuario == 7 && conversionDeNumero == 2) {
				extraerDigitos9(n);
			}
			if (numeroIngresadoPorUsuario == 7 && conversionDeNumero == 3) {
				extraerDigitos9(n);
			}
			if (numeroIngresadoPorUsuario == 7 && conversionDeNumero == 4) {
				extraerDigitos9(n);
			}
			if (numeroIngresadoPorUsuario == 7 && conversionDeNumero == 5) {
				extraerDigitos9(n);
			}
			if (numeroIngresadoPorUsuario == 7 && conversionDeNumero == 6) {
				extraerDigitos9(n);
			}
	}
	else {
	MessageBox::Show("Seleccione un número mayor o igual a 0"
		, "Número no aceptado"
		, MessageBoxButtons::OK
		, MessageBoxIcon::Exclamation);
}
	
	}
	catch (Exception^ e)
	{
		MessageBox::Show("Error detectado" + e->Message, "Ingreso de número incorrecto", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	sw->Stop();

	linkLabel7->Text = "" + sw->ElapsedMilliseconds;

}

private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	Stopwatch^ Tiempo = Stopwatch::StartNew();
	Tiempo->Start();
	try{
		int n = Convert::ToInt32(textBox8->Text);
	int numeroIngresadoPorUsuario = comboBox4->SelectedIndex;
	int conversionDeNumero = comboBox3->SelectedIndex;
	if(n>0){
		if (numeroIngresadoPorUsuario == 0 && conversionDeNumero == 0) {
			extraerDigitos2MismoRecursivo(n);
		}
			if (numeroIngresadoPorUsuario == 0 && conversionDeNumero == 1) {
				extraerDigitos2Recursivo(n);
			}
			if (numeroIngresadoPorUsuario == 0 && conversionDeNumero == 2) {
				extraerDigitos2Recursivo(n);
			}
			if (numeroIngresadoPorUsuario == 0 && conversionDeNumero == 3) {
				extraerDigitos2Recursivo(n);

			}
			if (numeroIngresadoPorUsuario == 0 && conversionDeNumero == 4) {
				extraerDigitos2Recursivo(n);

			}
			if (numeroIngresadoPorUsuario == 0 && conversionDeNumero == 5) {
				extraerDigitos2Recursivo(n);
			}
			if (numeroIngresadoPorUsuario == 0 && conversionDeNumero == 6) {
				extraerDigitos2Recursivo(n);

			}
			if (numeroIngresadoPorUsuario == 0 && conversionDeNumero == 7) {
				extraerDigitos2Recursivo(n);
			}
		
			if (numeroIngresadoPorUsuario == 1 && conversionDeNumero == 0) {
				extraerDigitos3Recursivo(n);
			}
			if (numeroIngresadoPorUsuario == 1 && conversionDeNumero == 1) {
				extraerDigitos3MismoRecursivo(n);
			}
			if (numeroIngresadoPorUsuario == 1 && conversionDeNumero == 2) {
				extraerDigitos3Recursivo(n);
			}
			if (numeroIngresadoPorUsuario == 1 && conversionDeNumero == 3) {
				extraerDigitos3Recursivo(n);
			}
			if (numeroIngresadoPorUsuario == 1 && conversionDeNumero == 4) {
				extraerDigitos3Recursivo(n);
			}
			if (numeroIngresadoPorUsuario == 1 && conversionDeNumero == 5) {
				extraerDigitos3Recursivo(n);
			}
			if (numeroIngresadoPorUsuario == 1 && conversionDeNumero == 6) {
				extraerDigitos3Recursivo(n);
			}
			if (numeroIngresadoPorUsuario == 1 && conversionDeNumero == 7) {
				extraerDigitos3Recursivo(n);
			}
			
			if (numeroIngresadoPorUsuario == 2 && conversionDeNumero == 0) {
				extraerDigitos4Recursivo(n);
			}
			if (numeroIngresadoPorUsuario == 2 && conversionDeNumero == 1) {
				extraerDigitos4Recursivo(n);
			}
			if (numeroIngresadoPorUsuario == 2 && conversionDeNumero == 2) {
				extraerDigitos4MismoRecursivo(n);
			}
			if (numeroIngresadoPorUsuario == 2 && conversionDeNumero == 3) {
				extraerDigitos4Recursivo(n);
			}
			if (numeroIngresadoPorUsuario == 2 && conversionDeNumero == 4) {
				extraerDigitos4Recursivo(n);
			}
			if (numeroIngresadoPorUsuario == 2 && conversionDeNumero == 5) {
				extraerDigitos4Recursivo(n);
			}
			if (numeroIngresadoPorUsuario == 2 && conversionDeNumero == 6) {
				extraerDigitos4Recursivo(n);
			}
			if (numeroIngresadoPorUsuario == 2 && conversionDeNumero == 7) {
				extraerDigitos4Recursivo(n);
			}
			
			if (numeroIngresadoPorUsuario == 3 && conversionDeNumero == 0) {
				extraerDigitos5Recursivo(n);
			}
			if (numeroIngresadoPorUsuario == 3 && conversionDeNumero == 1) {
				extraerDigitos5Recursivo(n);
			}
			if (numeroIngresadoPorUsuario == 3 && conversionDeNumero == 2) {
				extraerDigitos5Recursivo(n);
			}
			if (numeroIngresadoPorUsuario == 3 && conversionDeNumero == 3) {
				extraerDigitos5MismoRecursivo(n);
			}
			if (numeroIngresadoPorUsuario == 3 && conversionDeNumero == 4) {
				extraerDigitos5Recursivo(n);
			}
			if (numeroIngresadoPorUsuario == 3 && conversionDeNumero == 5) {
				extraerDigitos5Recursivo(n);
			}
			if (numeroIngresadoPorUsuario == 3 && conversionDeNumero == 6) {
				extraerDigitos5Recursivo(n);
			}
			if (numeroIngresadoPorUsuario == 3 && conversionDeNumero == 7) {
				extraerDigitos5Recursivo(n);
			}
			
			if (numeroIngresadoPorUsuario == 4 && conversionDeNumero == 0) {
				extraerDigitos6Recursivo(n);
			}
			if (numeroIngresadoPorUsuario == 4 && conversionDeNumero == 1) {
				extraerDigitos6Recursivo(n);
			}
			if (numeroIngresadoPorUsuario == 4 && conversionDeNumero == 2) {
				extraerDigitos6Recursivo(n);
			}
			if (numeroIngresadoPorUsuario == 4 && conversionDeNumero == 3) {
				extraerDigitos6Recursivo(n);
			}
			if (numeroIngresadoPorUsuario == 4 && conversionDeNumero == 4) {
				extraerDigitos6MismoRecursivo(n);
			}
			if (numeroIngresadoPorUsuario == 4 && conversionDeNumero == 5) {
				extraerDigitos6Recursivo(n);
			}
			if (numeroIngresadoPorUsuario == 4 && conversionDeNumero == 6) {
				extraerDigitos6Recursivo(n);
			}
			if (numeroIngresadoPorUsuario == 4 && conversionDeNumero == 7) {
				extraerDigitos6Recursivo(n);
			}
			
			if (numeroIngresadoPorUsuario == 5 && conversionDeNumero == 0) {
				extraerDigitos7Recursivo(n);
			}
			if (numeroIngresadoPorUsuario == 5 && conversionDeNumero == 1) {
				extraerDigitos7Recursivo(n);
			}
			if (numeroIngresadoPorUsuario == 5 && conversionDeNumero == 2) {
				extraerDigitos7Recursivo(n);
			}
			if (numeroIngresadoPorUsuario == 5 && conversionDeNumero == 3) {
				extraerDigitos7Recursivo(n);
			}
			if (numeroIngresadoPorUsuario == 5 && conversionDeNumero == 4) {
				extraerDigitos7Recursivo(n);
			}
			if (numeroIngresadoPorUsuario == 5 && conversionDeNumero == 5) {
				extraerDigitos7MismoRecursivo(n);
			}
			if (numeroIngresadoPorUsuario == 5 && conversionDeNumero == 6) {
				extraerDigitos7Recursivo(n);
			}
			if (numeroIngresadoPorUsuario == 5 && conversionDeNumero == 7) {
				extraerDigitos7Recursivo(n);
			}
		
			if (numeroIngresadoPorUsuario == 6 && conversionDeNumero == 0) {
				extraerDigitos8Recursivo(n);
			}
			if (numeroIngresadoPorUsuario == 6 && conversionDeNumero == 1) {
				extraerDigitos8Recursivo(n);
			}
			if (numeroIngresadoPorUsuario == 6 && conversionDeNumero == 2) {
				extraerDigitos8Recursivo(n);
			}
			if (numeroIngresadoPorUsuario == 6 && conversionDeNumero == 3) {
				extraerDigitos8Recursivo(n);
			}
			if (numeroIngresadoPorUsuario == 6 && conversionDeNumero == 4) {
				extraerDigitos8Recursivo(n);
			}
			if (numeroIngresadoPorUsuario == 6 && conversionDeNumero == 5) {
				extraerDigitos8Recursivo(n);
			}
			if (numeroIngresadoPorUsuario == 6 && conversionDeNumero == 6) {
				extraerDigitos8MismoRecursivo(n);
			}
			if (numeroIngresadoPorUsuario == 6 && conversionDeNumero == 7) {
				extraerDigitos8Recursivo(n);
			}
			
			if (numeroIngresadoPorUsuario == 7 && conversionDeNumero == 0) {
				extraerDigitos9Recursivo(n);
			}
			if (numeroIngresadoPorUsuario == 7 && conversionDeNumero == 1) {
				extraerDigitos9Recursivo(n);
			}
			if (numeroIngresadoPorUsuario == 7 && conversionDeNumero == 2) {
				extraerDigitos9Recursivo(n);
			}
			if (numeroIngresadoPorUsuario == 7 && conversionDeNumero == 3) {
				extraerDigitos9Recursivo(n);
			}
			if (numeroIngresadoPorUsuario == 7 && conversionDeNumero == 4) {
				extraerDigitos9Recursivo(n);
			}
			if (numeroIngresadoPorUsuario == 7 && conversionDeNumero == 5) {
				extraerDigitos9Recursivo(n);
			}
			if (numeroIngresadoPorUsuario == 7 && conversionDeNumero == 6) {
				extraerDigitos9Recursivo(n);
			}
			if (numeroIngresadoPorUsuario == 7 && conversionDeNumero == 7) {

				extraerDigitos9MismoRecursivo(n);

			}
			
			Tiempo->Stop();
			linkLabel8->Text = ""+ Tiempo->ElapsedMilliseconds;
}
else {
MessageBox::Show("Seleccione un número mayor o igual a 0"
	, "Número no aceptado"
	, MessageBoxButtons::OK
	, MessageBoxIcon::Exclamation);
}
	}
	catch (Exception^ e)
	{
		MessageBox::Show("Error detectado" + e->Message, "Conversión del número ingresado por el usuario", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {

	
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label28_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label12_Click(System::Object^ sender, System::EventArgs^ e) {
}
};

}
