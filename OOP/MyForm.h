#pragma once
#include "Product.h"
#include"Customer.h"
#include"DB.h"
#include "Admin.h"
#include "Billing.h"

namespace OOP {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		billing^ Bill;
		DatabaseOperations^ Crud;
		//Product^ P;
		cli::array<Product^>^ Prod;
		cli::array<Cust^>^ C;
		
	private: System::Windows::Forms::TextBox^ wght;
	public:

	public:
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ name;

	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ cost;

	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::TextBox^ qty;

	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ Search;

	private: System::Windows::Forms::Label^ Delete;

	private: System::Windows::Forms::Label^ Updateqty;
	private: System::Windows::Forms::Label^ displayall;


	private: System::Windows::Forms::Label^ Addprod;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridView^ dataGridView2;
	private: System::Windows::Forms::Label^ proceedtobill;


	private: System::Windows::Forms::Label^ Addtocart;
	private: System::Windows::Forms::Label^ updatecart;


	private: System::Windows::Forms::Label^ deletefromcart;

	private: System::Windows::Forms::TextBox^ selQty;



	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::TextBox^ selWeight;

	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::TextBox^ selProd;

	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::TextBox^ cusname;

	private: System::Windows::Forms::Label^ cname;
	private: System::Windows::Forms::TextBox^ PhoneNo;


	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ exitbtn;
	private: System::Windows::Forms::Label^ exitbtn2;
	private: System::Windows::Forms::Label^ exitbtn3;

	private: System::Windows::Forms::TabPage^ Billing;
	private: System::Windows::Forms::Panel^ panel6;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::PictureBox^ pictureBox6;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::TextBox^ PayAmount;
	private: System::Windows::Forms::Label^ Generatebill;
	private: System::Windows::Forms::Label^ Exit;
	private: System::Windows::Forms::Panel^ panel7;
	private: System::Windows::Forms::TextBox^ billSlip;
	private: System::Windows::Forms::TabPage^ Details;
	private: System::Windows::Forms::Button^ DisplayDetails;
	private: System::Windows::Forms::Panel^ panel8;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::PictureBox^ pictureBox7;
	private: System::Windows::Forms::DataGridView^ dataGridView3;











		  
		   admin^ Admin1;
	public: MyForm(void)
		{
		
		    Crud = gcnew DatabaseOperations();
			//P = gcnew Product();
			Prod = gcnew cli::array<Product^>(100);
			C = gcnew cli::array<Cust^>(100);
			Admin1 = gcnew admin();
			Bill = gcnew billing();
			

			InitializeComponent();

			
			//
			//TODO: Add the constructor code here
			//
			dataGridView1->Columns->Clear();
			dataGridView1->Columns->Add("c1", "Name");
			dataGridView1->Columns->Add("c2", "prodID");
			dataGridView1->Columns->Add("c3", "Weight");
			dataGridView1->Columns->Add("c4", "Quantity");
			dataGridView1->Columns->Add("c5", "Price");


			dataGridView2->Columns->Clear();
			dataGridView2->Columns->Add("c1", "Customer Name");
			dataGridView2->Columns->Add("c2", "phone No.");
			dataGridView2->Columns->Add("c3", "Product");
			dataGridView2->Columns->Add("c4", "Weight");
			dataGridView2->Columns->Add("c5", "Quantity");

			dataGridView3->Columns->Clear();
			dataGridView3->Columns->Add("c1", "Bil No.");
			dataGridView3->Columns->Add("c2", "Customer Name");
			dataGridView3->Columns->Add("c3", "Phone No.");
			dataGridView3->Columns->Add("c4", "Product");
			dataGridView3->Columns->Add("c5", "Weight");
			dataGridView3->Columns->Add("c6", "Quantity");
			
			
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^ tabcontrol1;
	private: System::Windows::Forms::TabPage^ Welcome;
	protected:

	protected:

	protected:

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
private: System::Windows::Forms::TabPage^ Login;






	private: System::Windows::Forms::TabPage^ Admin;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ Customer;
	private: System::Windows::Forms::Button^ Adminbutton;
	private: System::Windows::Forms::TabPage^ customertab;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::Label^ Adminpass;

	private: System::Windows::Forms::Label^ Adminname;
	private: System::Windows::Forms::TextBox^ password;

	private: System::Windows::Forms::TextBox^ username;

	private: System::Windows::Forms::Label^ loginbutton;
	private: System::Windows::Forms::Label^ customerinventory;
	private: System::Windows::Forms::Label^ productinventory;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TabPage^ products;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::PictureBox^ pictureBox5;












	protected:










	protected:
	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->tabcontrol1 = (gcnew System::Windows::Forms::TabControl());
			this->Welcome = (gcnew System::Windows::Forms::TabPage());
			this->Adminbutton = (gcnew System::Windows::Forms::Button());
			this->Customer = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->Login = (gcnew System::Windows::Forms::TabPage());
			this->exitbtn = (gcnew System::Windows::Forms::Label());
			this->loginbutton = (gcnew System::Windows::Forms::Label());
			this->password = (gcnew System::Windows::Forms::TextBox());
			this->username = (gcnew System::Windows::Forms::TextBox());
			this->Adminpass = (gcnew System::Windows::Forms::Label());
			this->Adminname = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->Admin = (gcnew System::Windows::Forms::TabPage());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->customerinventory = (gcnew System::Windows::Forms::Label());
			this->productinventory = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->products = (gcnew System::Windows::Forms::TabPage());
			this->exitbtn3 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Search = (gcnew System::Windows::Forms::Label());
			this->Delete = (gcnew System::Windows::Forms::Label());
			this->Updateqty = (gcnew System::Windows::Forms::Label());
			this->displayall = (gcnew System::Windows::Forms::Label());
			this->Addprod = (gcnew System::Windows::Forms::Label());
			this->cost = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->qty = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->wght = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->name = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->customertab = (gcnew System::Windows::Forms::TabPage());
			this->exitbtn2 = (gcnew System::Windows::Forms::Label());
			this->cusname = (gcnew System::Windows::Forms::TextBox());
			this->cname = (gcnew System::Windows::Forms::Label());
			this->PhoneNo = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->proceedtobill = (gcnew System::Windows::Forms::Label());
			this->Addtocart = (gcnew System::Windows::Forms::Label());
			this->updatecart = (gcnew System::Windows::Forms::Label());
			this->deletefromcart = (gcnew System::Windows::Forms::Label());
			this->selQty = (gcnew System::Windows::Forms::TextBox());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->selWeight = (gcnew System::Windows::Forms::TextBox());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->selProd = (gcnew System::Windows::Forms::TextBox());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->Billing = (gcnew System::Windows::Forms::TabPage());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->billSlip = (gcnew System::Windows::Forms::TextBox());
			this->Exit = (gcnew System::Windows::Forms::Label());
			this->Generatebill = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->PayAmount = (gcnew System::Windows::Forms::TextBox());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->Details = (gcnew System::Windows::Forms::TabPage());
			this->dataGridView3 = (gcnew System::Windows::Forms::DataGridView());
			this->DisplayDetails = (gcnew System::Windows::Forms::Button());
			this->panel8 = (gcnew System::Windows::Forms::Panel());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->tabcontrol1->SuspendLayout();
			this->Welcome->SuspendLayout();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->Login->SuspendLayout();
			this->panel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->Admin->SuspendLayout();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->products->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->panel5->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			this->customertab->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->panel4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			this->Billing->SuspendLayout();
			this->panel7->SuspendLayout();
			this->panel6->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			this->Details->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->BeginInit();
			this->panel8->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			this->SuspendLayout();
			// 
			// tabcontrol1
			// 
			this->tabcontrol1->Controls->Add(this->Welcome);
			this->tabcontrol1->Controls->Add(this->Login);
			this->tabcontrol1->Controls->Add(this->Admin);
			this->tabcontrol1->Controls->Add(this->products);
			this->tabcontrol1->Controls->Add(this->customertab);
			this->tabcontrol1->Controls->Add(this->Billing);
			this->tabcontrol1->Controls->Add(this->Details);
			this->tabcontrol1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tabcontrol1->Location = System::Drawing::Point(0, 0);
			this->tabcontrol1->Name = L"tabcontrol1";
			this->tabcontrol1->SelectedIndex = 0;
			this->tabcontrol1->Size = System::Drawing::Size(1144, 708);
			this->tabcontrol1->TabIndex = 1;
			// 
			// Welcome
			// 
			this->Welcome->BackColor = System::Drawing::Color::Aquamarine;
			this->Welcome->Controls->Add(this->Adminbutton);
			this->Welcome->Controls->Add(this->Customer);
			this->Welcome->Controls->Add(this->label3);
			this->Welcome->Controls->Add(this->panel1);
			this->Welcome->Location = System::Drawing::Point(4, 25);
			this->Welcome->Name = L"Welcome";
			this->Welcome->Padding = System::Windows::Forms::Padding(3);
			this->Welcome->Size = System::Drawing::Size(1136, 679);
			this->Welcome->TabIndex = 0;
			this->Welcome->Text = L"Welcome";
			// 
			// Adminbutton
			// 
			this->Adminbutton->BackColor = System::Drawing::Color::Teal;
			this->Adminbutton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Adminbutton->Font = (gcnew System::Drawing::Font(L"Century", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Adminbutton->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->Adminbutton->Location = System::Drawing::Point(335, 345);
			this->Adminbutton->Name = L"Adminbutton";
			this->Adminbutton->Size = System::Drawing::Size(202, 62);
			this->Adminbutton->TabIndex = 5;
			this->Adminbutton->Text = L"Admin";
			this->Adminbutton->UseVisualStyleBackColor = false;
			this->Adminbutton->Click += gcnew System::EventHandler(this, &MyForm::Adminbutton_Click);
			// 
			// Customer
			// 
			this->Customer->BackColor = System::Drawing::Color::Teal;
			this->Customer->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Customer->Font = (gcnew System::Drawing::Font(L"Century", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Customer->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->Customer->Location = System::Drawing::Point(555, 345);
			this->Customer->Name = L"Customer";
			this->Customer->Size = System::Drawing::Size(241, 62);
			this->Customer->TabIndex = 4;
			this->Customer->Text = L"Customer";
			this->Customer->UseVisualStyleBackColor = false;
			this->Customer->Click += gcnew System::EventHandler(this, &MyForm::Customer_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Teal;
			this->label3->Font = (gcnew System::Drawing::Font(L"Century", 28.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(191, 261);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(719, 55);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Welcome To MAJU Supermart";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::MidnightBlue;
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->pictureBox2);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->Location = System::Drawing::Point(3, 3);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1130, 63);
			this->panel1->TabIndex = 1;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label2->Location = System::Drawing::Point(62, 11);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(248, 37);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Maju Supermart";
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(3, 5);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(53, 50);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox2->TabIndex = 0;
			this->pictureBox2->TabStop = false;
			// 
			// Login
			// 
			this->Login->BackColor = System::Drawing::Color::Aquamarine;
			this->Login->Controls->Add(this->exitbtn);
			this->Login->Controls->Add(this->loginbutton);
			this->Login->Controls->Add(this->password);
			this->Login->Controls->Add(this->username);
			this->Login->Controls->Add(this->Adminpass);
			this->Login->Controls->Add(this->Adminname);
			this->Login->Controls->Add(this->panel3);
			this->Login->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->Login->Location = System::Drawing::Point(4, 25);
			this->Login->Name = L"Login";
			this->Login->Padding = System::Windows::Forms::Padding(3);
			this->Login->Size = System::Drawing::Size(1136, 679);
			this->Login->TabIndex = 1;
			this->Login->Text = L"Login";
			// 
			// exitbtn
			// 
			this->exitbtn->BackColor = System::Drawing::Color::Teal;
			this->exitbtn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->exitbtn->Font = (gcnew System::Drawing::Font(L"Century", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->exitbtn->ForeColor = System::Drawing::Color::White;
			this->exitbtn->Location = System::Drawing::Point(561, 460);
			this->exitbtn->Name = L"exitbtn";
			this->exitbtn->Size = System::Drawing::Size(133, 43);
			this->exitbtn->TabIndex = 9;
			this->exitbtn->Text = L"Exit";
			this->exitbtn->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->exitbtn->Click += gcnew System::EventHandler(this, &MyForm::exitbtn_Click);
			// 
			// loginbutton
			// 
			this->loginbutton->BackColor = System::Drawing::Color::Teal;
			this->loginbutton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->loginbutton->Font = (gcnew System::Drawing::Font(L"Century", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->loginbutton->ForeColor = System::Drawing::Color::White;
			this->loginbutton->Location = System::Drawing::Point(415, 460);
			this->loginbutton->Name = L"loginbutton";
			this->loginbutton->Size = System::Drawing::Size(133, 43);
			this->loginbutton->TabIndex = 8;
			this->loginbutton->Text = L"Login ";
			this->loginbutton->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->loginbutton->Click += gcnew System::EventHandler(this, &MyForm::loginbutton_Click);
			// 
			// password
			// 
			this->password->Location = System::Drawing::Point(420, 401);
			this->password->Multiline = true;
			this->password->Name = L"password";
			this->password->PasswordChar = '*';
			this->password->Size = System::Drawing::Size(269, 37);
			this->password->TabIndex = 6;
			// 
			// username
			// 
			this->username->Location = System::Drawing::Point(421, 264);
			this->username->Multiline = true;
			this->username->Name = L"username";
			this->username->Size = System::Drawing::Size(269, 35);
			this->username->TabIndex = 5;
			// 
			// Adminpass
			// 
			this->Adminpass->BackColor = System::Drawing::Color::Teal;
			this->Adminpass->Font = (gcnew System::Drawing::Font(L"Century", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Adminpass->ForeColor = System::Drawing::Color::White;
			this->Adminpass->Location = System::Drawing::Point(422, 325);
			this->Adminpass->Name = L"Adminpass";
			this->Adminpass->Size = System::Drawing::Size(267, 48);
			this->Adminpass->TabIndex = 4;
			this->Adminpass->Text = L"Admin Password";
			this->Adminpass->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Adminname
			// 
			this->Adminname->BackColor = System::Drawing::Color::Teal;
			this->Adminname->Font = (gcnew System::Drawing::Font(L"Century", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Adminname->ForeColor = System::Drawing::Color::White;
			this->Adminname->Location = System::Drawing::Point(422, 195);
			this->Adminname->Name = L"Adminname";
			this->Adminname->Size = System::Drawing::Size(268, 45);
			this->Adminname->TabIndex = 3;
			this->Adminname->Text = L"Admin Name ";
			this->Adminname->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::MidnightBlue;
			this->panel3->Controls->Add(this->label4);
			this->panel3->Controls->Add(this->pictureBox3);
			this->panel3->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel3->Location = System::Drawing::Point(3, 3);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(1130, 63);
			this->panel3->TabIndex = 2;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label4->Location = System::Drawing::Point(62, 11);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(248, 37);
			this->label4->TabIndex = 1;
			this->label4->Text = L"Maju Supermart";
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(3, 5);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(53, 50);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox3->TabIndex = 0;
			this->pictureBox3->TabStop = false;
			// 
			// Admin
			// 
			this->Admin->BackColor = System::Drawing::Color::Aquamarine;
			this->Admin->Controls->Add(this->label6);
			this->Admin->Controls->Add(this->customerinventory);
			this->Admin->Controls->Add(this->productinventory);
			this->Admin->Controls->Add(this->panel2);
			this->Admin->Location = System::Drawing::Point(4, 25);
			this->Admin->Name = L"Admin";
			this->Admin->Size = System::Drawing::Size(1136, 679);
			this->Admin->TabIndex = 2;
			this->Admin->Text = L"Admin";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Teal;
			this->label6->Font = (gcnew System::Drawing::Font(L"Century", 28.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::White;
			this->label6->Location = System::Drawing::Point(218, 246);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(608, 55);
			this->label6->TabIndex = 11;
			this->label6->Text = L"Welcome To Admin Panel";
			this->label6->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// customerinventory
			// 
			this->customerinventory->BackColor = System::Drawing::Color::Teal;
			this->customerinventory->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->customerinventory->Cursor = System::Windows::Forms::Cursors::Hand;
			this->customerinventory->Font = (gcnew System::Drawing::Font(L"Century", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->customerinventory->ForeColor = System::Drawing::Color::White;
			this->customerinventory->Location = System::Drawing::Point(536, 322);
			this->customerinventory->Name = L"customerinventory";
			this->customerinventory->Size = System::Drawing::Size(381, 56);
			this->customerinventory->TabIndex = 10;
			this->customerinventory->Text = L"Customer Inventory";
			this->customerinventory->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->customerinventory->Click += gcnew System::EventHandler(this, &MyForm::customerinventory_Click);
			// 
			// productinventory
			// 
			this->productinventory->BackColor = System::Drawing::Color::Teal;
			this->productinventory->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->productinventory->Cursor = System::Windows::Forms::Cursors::Hand;
			this->productinventory->Font = (gcnew System::Drawing::Font(L"Century", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->productinventory->ForeColor = System::Drawing::Color::White;
			this->productinventory->Location = System::Drawing::Point(164, 322);
			this->productinventory->Name = L"productinventory";
			this->productinventory->Size = System::Drawing::Size(342, 56);
			this->productinventory->TabIndex = 9;
			this->productinventory->Text = L"Product Inventory";
			this->productinventory->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->productinventory->Click += gcnew System::EventHandler(this, &MyForm::productinventory_Click);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::MidnightBlue;
			this->panel2->Controls->Add(this->label1);
			this->panel2->Controls->Add(this->pictureBox1);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel2->Location = System::Drawing::Point(0, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(1136, 63);
			this->panel2->TabIndex = 2;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label1->Location = System::Drawing::Point(62, 11);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(248, 37);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Maju Supermart";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(3, 5);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(53, 50);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// products
			// 
			this->products->BackColor = System::Drawing::Color::Aquamarine;
			this->products->Controls->Add(this->exitbtn3);
			this->products->Controls->Add(this->dataGridView1);
			this->products->Controls->Add(this->Search);
			this->products->Controls->Add(this->Delete);
			this->products->Controls->Add(this->Updateqty);
			this->products->Controls->Add(this->displayall);
			this->products->Controls->Add(this->Addprod);
			this->products->Controls->Add(this->cost);
			this->products->Controls->Add(this->label11);
			this->products->Controls->Add(this->qty);
			this->products->Controls->Add(this->label10);
			this->products->Controls->Add(this->wght);
			this->products->Controls->Add(this->label9);
			this->products->Controls->Add(this->name);
			this->products->Controls->Add(this->label8);
			this->products->Controls->Add(this->panel5);
			this->products->Location = System::Drawing::Point(4, 25);
			this->products->Name = L"products";
			this->products->Size = System::Drawing::Size(1136, 679);
			this->products->TabIndex = 4;
			this->products->Text = L"Products ";
			// 
			// exitbtn3
			// 
			this->exitbtn3->BackColor = System::Drawing::Color::Teal;
			this->exitbtn3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->exitbtn3->Font = (gcnew System::Drawing::Font(L"Century", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->exitbtn3->ForeColor = System::Drawing::Color::White;
			this->exitbtn3->Location = System::Drawing::Point(885, 570);
			this->exitbtn3->Name = L"exitbtn3";
			this->exitbtn3->Size = System::Drawing::Size(133, 43);
			this->exitbtn3->TabIndex = 39;
			this->exitbtn3->Text = L"Exit";
			this->exitbtn3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->exitbtn3->Click += gcnew System::EventHandler(this, &MyForm::exitbtn3_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->BackgroundColor = System::Drawing::Color::Aquamarine;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Cursor = System::Windows::Forms::Cursors::Default;
			this->dataGridView1->GridColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->dataGridView1->Location = System::Drawing::Point(14, 181);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(739, 469);
			this->dataGridView1->TabIndex = 19;
			// 
			// Search
			// 
			this->Search->BackColor = System::Drawing::Color::Teal;
			this->Search->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Search->Font = (gcnew System::Drawing::Font(L"Century", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Search->ForeColor = System::Drawing::Color::White;
			this->Search->Location = System::Drawing::Point(794, 465);
			this->Search->Name = L"Search";
			this->Search->Size = System::Drawing::Size(327, 43);
			this->Search->TabIndex = 18;
			this->Search->Text = L"Search";
			this->Search->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->Search->Click += gcnew System::EventHandler(this, &MyForm::Search_Click);
			// 
			// Delete
			// 
			this->Delete->BackColor = System::Drawing::Color::Teal;
			this->Delete->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Delete->Font = (gcnew System::Drawing::Font(L"Century", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Delete->ForeColor = System::Drawing::Color::White;
			this->Delete->Location = System::Drawing::Point(794, 395);
			this->Delete->Name = L"Delete";
			this->Delete->Size = System::Drawing::Size(327, 43);
			this->Delete->TabIndex = 17;
			this->Delete->Text = L"Delete";
			this->Delete->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->Delete->Click += gcnew System::EventHandler(this, &MyForm::Delete_Click);
			// 
			// Updateqty
			// 
			this->Updateqty->BackColor = System::Drawing::Color::Teal;
			this->Updateqty->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Updateqty->Font = (gcnew System::Drawing::Font(L"Century", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Updateqty->ForeColor = System::Drawing::Color::White;
			this->Updateqty->Location = System::Drawing::Point(794, 171);
			this->Updateqty->Name = L"Updateqty";
			this->Updateqty->Size = System::Drawing::Size(327, 43);
			this->Updateqty->TabIndex = 16;
			this->Updateqty->Text = L"Update Quantity";
			this->Updateqty->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->Updateqty->Click += gcnew System::EventHandler(this, &MyForm::Updateqty_Click);
			// 
			// displayall
			// 
			this->displayall->BackColor = System::Drawing::Color::Teal;
			this->displayall->Cursor = System::Windows::Forms::Cursors::Hand;
			this->displayall->Font = (gcnew System::Drawing::Font(L"Century", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->displayall->ForeColor = System::Drawing::Color::White;
			this->displayall->Location = System::Drawing::Point(793, 324);
			this->displayall->Name = L"displayall";
			this->displayall->Size = System::Drawing::Size(327, 43);
			this->displayall->TabIndex = 15;
			this->displayall->Text = L"Display All";
			this->displayall->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->displayall->Click += gcnew System::EventHandler(this, &MyForm::displayall_Click);
			// 
			// Addprod
			// 
			this->Addprod->BackColor = System::Drawing::Color::Teal;
			this->Addprod->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Addprod->Font = (gcnew System::Drawing::Font(L"Century", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Addprod->ForeColor = System::Drawing::Color::White;
			this->Addprod->Location = System::Drawing::Point(794, 245);
			this->Addprod->Name = L"Addprod";
			this->Addprod->Size = System::Drawing::Size(327, 43);
			this->Addprod->TabIndex = 14;
			this->Addprod->Text = L"Add Product";
			this->Addprod->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->Addprod->Click += gcnew System::EventHandler(this, &MyForm::Addprod_Click);
			// 
			// cost
			// 
			this->cost->Location = System::Drawing::Point(852, 115);
			this->cost->Multiline = true;
			this->cost->Name = L"cost";
			this->cost->Size = System::Drawing::Size(269, 35);
			this->cost->TabIndex = 13;
			// 
			// label11
			// 
			this->label11->BackColor = System::Drawing::Color::Teal;
			this->label11->Font = (gcnew System::Drawing::Font(L"Century", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->ForeColor = System::Drawing::Color::White;
			this->label11->Location = System::Drawing::Point(851, 66);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(268, 45);
			this->label11->TabIndex = 12;
			this->label11->Text = L"Price";
			this->label11->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// qty
			// 
			this->qty->Location = System::Drawing::Point(575, 115);
			this->qty->Multiline = true;
			this->qty->Name = L"qty";
			this->qty->Size = System::Drawing::Size(269, 35);
			this->qty->TabIndex = 11;
			// 
			// label10
			// 
			this->label10->BackColor = System::Drawing::Color::Teal;
			this->label10->Font = (gcnew System::Drawing::Font(L"Century", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::Color::White;
			this->label10->Location = System::Drawing::Point(574, 66);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(268, 45);
			this->label10->TabIndex = 10;
			this->label10->Text = L"Quantity";
			this->label10->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// wght
			// 
			this->wght->Location = System::Drawing::Point(298, 114);
			this->wght->Multiline = true;
			this->wght->Name = L"wght";
			this->wght->Size = System::Drawing::Size(269, 35);
			this->wght->TabIndex = 9;
			// 
			// label9
			// 
			this->label9->BackColor = System::Drawing::Color::Teal;
			this->label9->Font = (gcnew System::Drawing::Font(L"Century", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::White;
			this->label9->Location = System::Drawing::Point(298, 66);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(268, 45);
			this->label9->TabIndex = 8;
			this->label9->Text = L"Weight";
			this->label9->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// name
			// 
			this->name->Location = System::Drawing::Point(8, 114);
			this->name->Multiline = true;
			this->name->Name = L"name";
			this->name->Size = System::Drawing::Size(269, 35);
			this->name->TabIndex = 7;
			// 
			// label8
			// 
			this->label8->BackColor = System::Drawing::Color::Teal;
			this->label8->Font = (gcnew System::Drawing::Font(L"Century", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::White;
			this->label8->Location = System::Drawing::Point(8, 66);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(268, 45);
			this->label8->TabIndex = 6;
			this->label8->Text = L"ProductName";
			this->label8->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::Color::MidnightBlue;
			this->panel5->Controls->Add(this->label7);
			this->panel5->Controls->Add(this->pictureBox5);
			this->panel5->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel5->Location = System::Drawing::Point(0, 0);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(1136, 63);
			this->panel5->TabIndex = 4;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Century Gothic", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label7->Location = System::Drawing::Point(62, 11);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(248, 37);
			this->label7->TabIndex = 1;
			this->label7->Text = L"Maju Supermart";
			// 
			// pictureBox5
			// 
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(3, 5);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(53, 50);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox5->TabIndex = 0;
			this->pictureBox5->TabStop = false;
			// 
			// customertab
			// 
			this->customertab->BackColor = System::Drawing::Color::Aquamarine;
			this->customertab->Controls->Add(this->exitbtn2);
			this->customertab->Controls->Add(this->cusname);
			this->customertab->Controls->Add(this->cname);
			this->customertab->Controls->Add(this->PhoneNo);
			this->customertab->Controls->Add(this->label12);
			this->customertab->Controls->Add(this->dataGridView2);
			this->customertab->Controls->Add(this->proceedtobill);
			this->customertab->Controls->Add(this->Addtocart);
			this->customertab->Controls->Add(this->updatecart);
			this->customertab->Controls->Add(this->deletefromcart);
			this->customertab->Controls->Add(this->selQty);
			this->customertab->Controls->Add(this->label18);
			this->customertab->Controls->Add(this->selWeight);
			this->customertab->Controls->Add(this->label19);
			this->customertab->Controls->Add(this->selProd);
			this->customertab->Controls->Add(this->label20);
			this->customertab->Controls->Add(this->panel4);
			this->customertab->Location = System::Drawing::Point(4, 25);
			this->customertab->Name = L"customertab";
			this->customertab->Size = System::Drawing::Size(1136, 679);
			this->customertab->TabIndex = 3;
			this->customertab->Text = L"Customer";
			// 
			// exitbtn2
			// 
			this->exitbtn2->BackColor = System::Drawing::Color::Teal;
			this->exitbtn2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->exitbtn2->Font = (gcnew System::Drawing::Font(L"Century", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->exitbtn2->ForeColor = System::Drawing::Color::White;
			this->exitbtn2->Location = System::Drawing::Point(891, 580);
			this->exitbtn2->Name = L"exitbtn2";
			this->exitbtn2->Size = System::Drawing::Size(133, 43);
			this->exitbtn2->TabIndex = 38;
			this->exitbtn2->Text = L"Exit";
			this->exitbtn2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->exitbtn2->Click += gcnew System::EventHandler(this, &MyForm::exitbtn2_Click);
			// 
			// cusname
			// 
			this->cusname->Location = System::Drawing::Point(809, 115);
			this->cusname->Multiline = true;
			this->cusname->Name = L"cusname";
			this->cusname->Size = System::Drawing::Size(324, 35);
			this->cusname->TabIndex = 37;
			// 
			// cname
			// 
			this->cname->BackColor = System::Drawing::Color::Teal;
			this->cname->Font = (gcnew System::Drawing::Font(L"Century", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cname->ForeColor = System::Drawing::Color::White;
			this->cname->Location = System::Drawing::Point(809, 66);
			this->cname->Name = L"cname";
			this->cname->Size = System::Drawing::Size(324, 45);
			this->cname->TabIndex = 36;
			this->cname->Text = L"Customer Name";
			this->cname->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// PhoneNo
			// 
			this->PhoneNo->Location = System::Drawing::Point(809, 224);
			this->PhoneNo->Multiline = true;
			this->PhoneNo->Name = L"PhoneNo";
			this->PhoneNo->Size = System::Drawing::Size(324, 35);
			this->PhoneNo->TabIndex = 35;
			// 
			// label12
			// 
			this->label12->BackColor = System::Drawing::Color::Teal;
			this->label12->Font = (gcnew System::Drawing::Font(L"Century", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->ForeColor = System::Drawing::Color::White;
			this->label12->Location = System::Drawing::Point(809, 164);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(324, 45);
			this->label12->TabIndex = 34;
			this->label12->Text = L"Phone NO.";
			this->label12->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// dataGridView2
			// 
			this->dataGridView2->BackgroundColor = System::Drawing::Color::Aquamarine;
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Cursor = System::Windows::Forms::Cursors::Default;
			this->dataGridView2->GridColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->dataGridView2->Location = System::Drawing::Point(14, 181);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->RowHeadersWidth = 51;
			this->dataGridView2->RowTemplate->Height = 24;
			this->dataGridView2->Size = System::Drawing::Size(739, 469);
			this->dataGridView2->TabIndex = 33;
			// 
			// proceedtobill
			// 
			this->proceedtobill->BackColor = System::Drawing::Color::Teal;
			this->proceedtobill->Cursor = System::Windows::Forms::Cursors::Hand;
			this->proceedtobill->Font = (gcnew System::Drawing::Font(L"Century", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->proceedtobill->ForeColor = System::Drawing::Color::White;
			this->proceedtobill->Location = System::Drawing::Point(809, 478);
			this->proceedtobill->Name = L"proceedtobill";
			this->proceedtobill->Size = System::Drawing::Size(327, 43);
			this->proceedtobill->TabIndex = 31;
			this->proceedtobill->Text = L"Proceed To Bill";
			this->proceedtobill->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->proceedtobill->Click += gcnew System::EventHandler(this, &MyForm::proceedtobill_Click);
			// 
			// Addtocart
			// 
			this->Addtocart->BackColor = System::Drawing::Color::Teal;
			this->Addtocart->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Addtocart->Font = (gcnew System::Drawing::Font(L"Century", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Addtocart->ForeColor = System::Drawing::Color::White;
			this->Addtocart->Location = System::Drawing::Point(809, 276);
			this->Addtocart->Name = L"Addtocart";
			this->Addtocart->Size = System::Drawing::Size(327, 43);
			this->Addtocart->TabIndex = 30;
			this->Addtocart->Text = L"Add To Cart";
			this->Addtocart->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->Addtocart->Click += gcnew System::EventHandler(this, &MyForm::Addtocart_Click);
			// 
			// updatecart
			// 
			this->updatecart->BackColor = System::Drawing::Color::Teal;
			this->updatecart->Cursor = System::Windows::Forms::Cursors::Hand;
			this->updatecart->Font = (gcnew System::Drawing::Font(L"Century", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->updatecart->ForeColor = System::Drawing::Color::White;
			this->updatecart->Location = System::Drawing::Point(809, 410);
			this->updatecart->Name = L"updatecart";
			this->updatecart->Size = System::Drawing::Size(327, 43);
			this->updatecart->TabIndex = 29;
			this->updatecart->Text = L"Update Cart";
			this->updatecart->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->updatecart->Click += gcnew System::EventHandler(this, &MyForm::updatecart_Click);
			// 
			// deletefromcart
			// 
			this->deletefromcart->BackColor = System::Drawing::Color::Teal;
			this->deletefromcart->Cursor = System::Windows::Forms::Cursors::Hand;
			this->deletefromcart->Font = (gcnew System::Drawing::Font(L"Century", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->deletefromcart->ForeColor = System::Drawing::Color::White;
			this->deletefromcart->Location = System::Drawing::Point(809, 341);
			this->deletefromcart->Name = L"deletefromcart";
			this->deletefromcart->Size = System::Drawing::Size(327, 43);
			this->deletefromcart->TabIndex = 28;
			this->deletefromcart->Text = L"Delete From Cart";
			this->deletefromcart->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->deletefromcart->Click += gcnew System::EventHandler(this, &MyForm::deletefromcart_Click);
			// 
			// selQty
			// 
			this->selQty->Location = System::Drawing::Point(548, 115);
			this->selQty->Multiline = true;
			this->selQty->Name = L"selQty";
			this->selQty->Size = System::Drawing::Size(250, 35);
			this->selQty->TabIndex = 25;
			// 
			// label18
			// 
			this->label18->BackColor = System::Drawing::Color::Teal;
			this->label18->Font = (gcnew System::Drawing::Font(L"Century", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label18->ForeColor = System::Drawing::Color::White;
			this->label18->Location = System::Drawing::Point(549, 66);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(249, 45);
			this->label18->TabIndex = 24;
			this->label18->Text = L"Quantity";
			this->label18->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// selWeight
			// 
			this->selWeight->Location = System::Drawing::Point(277, 115);
			this->selWeight->Multiline = true;
			this->selWeight->Name = L"selWeight";
			this->selWeight->Size = System::Drawing::Size(254, 35);
			this->selWeight->TabIndex = 23;
			// 
			// label19
			// 
			this->label19->BackColor = System::Drawing::Color::Teal;
			this->label19->Font = (gcnew System::Drawing::Font(L"Century", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label19->ForeColor = System::Drawing::Color::White;
			this->label19->Location = System::Drawing::Point(278, 66);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(253, 45);
			this->label19->TabIndex = 22;
			this->label19->Text = L"Weight";
			this->label19->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// selProd
			// 
			this->selProd->Location = System::Drawing::Point(8, 114);
			this->selProd->Multiline = true;
			this->selProd->Name = L"selProd";
			this->selProd->Size = System::Drawing::Size(255, 35);
			this->selProd->TabIndex = 21;
			// 
			// label20
			// 
			this->label20->BackColor = System::Drawing::Color::Teal;
			this->label20->Font = (gcnew System::Drawing::Font(L"Century", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label20->ForeColor = System::Drawing::Color::White;
			this->label20->Location = System::Drawing::Point(8, 66);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(255, 45);
			this->label20->TabIndex = 20;
			this->label20->Text = L"ProductName";
			this->label20->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::MidnightBlue;
			this->panel4->Controls->Add(this->label5);
			this->panel4->Controls->Add(this->pictureBox4);
			this->panel4->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel4->Location = System::Drawing::Point(0, 0);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(1136, 63);
			this->panel4->TabIndex = 3;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Century Gothic", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label5->Location = System::Drawing::Point(62, 11);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(248, 37);
			this->label5->TabIndex = 1;
			this->label5->Text = L"Maju Supermart";
			// 
			// pictureBox4
			// 
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(3, 5);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(53, 50);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox4->TabIndex = 0;
			this->pictureBox4->TabStop = false;
			// 
			// Billing
			// 
			this->Billing->BackColor = System::Drawing::Color::Aquamarine;
			this->Billing->Controls->Add(this->panel7);
			this->Billing->Controls->Add(this->Exit);
			this->Billing->Controls->Add(this->Generatebill);
			this->Billing->Controls->Add(this->label14);
			this->Billing->Controls->Add(this->PayAmount);
			this->Billing->Controls->Add(this->panel6);
			this->Billing->ForeColor = System::Drawing::Color::White;
			this->Billing->Location = System::Drawing::Point(4, 25);
			this->Billing->Name = L"Billing";
			this->Billing->Size = System::Drawing::Size(1136, 679);
			this->Billing->TabIndex = 5;
			this->Billing->Text = L"Billing";
			// 
			// panel7
			// 
			this->panel7->Controls->Add(this->billSlip);
			this->panel7->Location = System::Drawing::Point(275, 69);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(853, 592);
			this->panel7->TabIndex = 28;
			// 
			// billSlip
			// 
			this->billSlip->BackColor = System::Drawing::Color::Aquamarine;
			this->billSlip->Dock = System::Windows::Forms::DockStyle::Fill;
			this->billSlip->Font = (gcnew System::Drawing::Font(L"Century", 28.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->billSlip->Location = System::Drawing::Point(0, 0);
			this->billSlip->Multiline = true;
			this->billSlip->Name = L"billSlip";
			this->billSlip->Size = System::Drawing::Size(853, 592);
			this->billSlip->TabIndex = 0;
			// 
			// Exit
			// 
			this->Exit->BackColor = System::Drawing::Color::Teal;
			this->Exit->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Exit->Font = (gcnew System::Drawing::Font(L"Century", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
			this->Exit->ForeColor = System::Drawing::Color::White;
			this->Exit->Location = System::Drawing::Point(3, 618);
			this->Exit->Name = L"Exit";
			this->Exit->Size = System::Drawing::Size(255, 43);
			this->Exit->TabIndex = 27;
			this->Exit->Text = L"Exit";
			this->Exit->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->Exit->Click += gcnew System::EventHandler(this, &MyForm::Exit_Click);
			// 
			// Generatebill
			// 
			this->Generatebill->BackColor = System::Drawing::Color::Teal;
			this->Generatebill->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Generatebill->Font = (gcnew System::Drawing::Font(L"Century", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Generatebill->ForeColor = System::Drawing::Color::White;
			this->Generatebill->Location = System::Drawing::Point(2, 164);
			this->Generatebill->Name = L"Generatebill";
			this->Generatebill->Size = System::Drawing::Size(255, 43);
			this->Generatebill->TabIndex = 26;
			this->Generatebill->Text = L"Generate Bill";
			this->Generatebill->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->Generatebill->Click += gcnew System::EventHandler(this, &MyForm::Generatebill_Click);
			// 
			// label14
			// 
			this->label14->BackColor = System::Drawing::Color::Teal;
			this->label14->Font = (gcnew System::Drawing::Font(L"Century", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->ForeColor = System::Drawing::Color::White;
			this->label14->Location = System::Drawing::Point(2, 66);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(255, 45);
			this->label14->TabIndex = 25;
			this->label14->Text = L"Enter Amount";
			this->label14->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// PayAmount
			// 
			this->PayAmount->Location = System::Drawing::Point(3, 119);
			this->PayAmount->Multiline = true;
			this->PayAmount->Name = L"PayAmount";
			this->PayAmount->Size = System::Drawing::Size(254, 35);
			this->PayAmount->TabIndex = 24;
			// 
			// panel6
			// 
			this->panel6->BackColor = System::Drawing::Color::MidnightBlue;
			this->panel6->Controls->Add(this->label13);
			this->panel6->Controls->Add(this->pictureBox6);
			this->panel6->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel6->Location = System::Drawing::Point(0, 0);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(1136, 63);
			this->panel6->TabIndex = 3;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Century Gothic", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label13->Location = System::Drawing::Point(62, 11);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(248, 37);
			this->label13->TabIndex = 1;
			this->label13->Text = L"Maju Supermart";
			// 
			// pictureBox6
			// 
			this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.Image")));
			this->pictureBox6->Location = System::Drawing::Point(3, 5);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(53, 50);
			this->pictureBox6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox6->TabIndex = 0;
			this->pictureBox6->TabStop = false;
			// 
			// Details
			// 
			this->Details->BackColor = System::Drawing::Color::Aquamarine;
			this->Details->Controls->Add(this->dataGridView3);
			this->Details->Controls->Add(this->DisplayDetails);
			this->Details->Controls->Add(this->panel8);
			this->Details->Location = System::Drawing::Point(4, 25);
			this->Details->Name = L"Details";
			this->Details->Size = System::Drawing::Size(1136, 679);
			this->Details->TabIndex = 6;
			this->Details->Text = L"Details";
			// 
			// dataGridView3
			// 
			this->dataGridView3->BackgroundColor = System::Drawing::Color::Aquamarine;
			this->dataGridView3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView3->GridColor = System::Drawing::Color::White;
			this->dataGridView3->Location = System::Drawing::Point(123, 156);
			this->dataGridView3->Name = L"dataGridView3";
			this->dataGridView3->RowHeadersWidth = 51;
			this->dataGridView3->RowTemplate->Height = 24;
			this->dataGridView3->Size = System::Drawing::Size(873, 515);
			this->dataGridView3->TabIndex = 5;
			// 
			// DisplayDetails
			// 
			this->DisplayDetails->BackColor = System::Drawing::Color::Teal;
			this->DisplayDetails->Font = (gcnew System::Drawing::Font(L"Century", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DisplayDetails->ForeColor = System::Drawing::Color::White;
			this->DisplayDetails->Location = System::Drawing::Point(416, 81);
			this->DisplayDetails->Name = L"DisplayDetails";
			this->DisplayDetails->Size = System::Drawing::Size(261, 59);
			this->DisplayDetails->TabIndex = 4;
			this->DisplayDetails->Text = L"Display Details";
			this->DisplayDetails->UseVisualStyleBackColor = false;
			this->DisplayDetails->Click += gcnew System::EventHandler(this, &MyForm::DisplayDetails_Click);
			// 
			// panel8
			// 
			this->panel8->BackColor = System::Drawing::Color::MidnightBlue;
			this->panel8->Controls->Add(this->label15);
			this->panel8->Controls->Add(this->pictureBox7);
			this->panel8->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel8->Location = System::Drawing::Point(0, 0);
			this->panel8->Name = L"panel8";
			this->panel8->Size = System::Drawing::Size(1136, 63);
			this->panel8->TabIndex = 3;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Century Gothic", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label15->Location = System::Drawing::Point(62, 11);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(248, 37);
			this->label15->TabIndex = 1;
			this->label15->Text = L"Maju Supermart";
			// 
			// pictureBox7
			// 
			this->pictureBox7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.Image")));
			this->pictureBox7->Location = System::Drawing::Point(3, 5);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(53, 50);
			this->pictureBox7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox7->TabIndex = 0;
			this->pictureBox7->TabStop = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(1144, 708);
			this->Controls->Add(this->tabcontrol1);
			this->ForeColor = System::Drawing::SystemColors::AppWorkspace;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MAJU";
			this->tabcontrol1->ResumeLayout(false);
			this->Welcome->ResumeLayout(false);
			this->Welcome->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->Login->ResumeLayout(false);
			this->Login->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->Admin->ResumeLayout(false);
			this->Admin->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->products->ResumeLayout(false);
			this->products->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			this->customertab->ResumeLayout(false);
			this->customertab->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			this->Billing->ResumeLayout(false);
			this->Billing->PerformLayout();
			this->panel7->ResumeLayout(false);
			this->panel7->PerformLayout();
			this->panel6->ResumeLayout(false);
			this->panel6->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			this->Details->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->EndInit();
			this->panel8->ResumeLayout(false);
			this->panel8->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void infotext_Click(System::Object^ sender, System::EventArgs^ e) {
	}

private: System::Void Customer_Click(System::Object^ sender, System::EventArgs^ e) {
	tabcontrol1->TabPages->Remove(Welcome);
	tabcontrol1->TabPages->Remove(Admin);
	tabcontrol1->TabPages->Remove(Login);
	tabcontrol1->TabPages->Remove(products);
	

}
private: System::Void Adminbutton_Click(System::Object^ sender, System::EventArgs^ e) {
	tabcontrol1->TabPages->Remove(Welcome);
}


private: System::Void loginbutton_Click(System::Object^ sender, System::EventArgs^ e) {
	if (username->Text == Admin1->GetAdminID() && password->Text == Admin1->GetPass()) {
		tabcontrol1->TabPages->Remove(Login);
	}
}
private: System::Void productinventory_Click(System::Object^ sender, System::EventArgs^ e) {
	tabcontrol1->TabPages->Remove(Admin);
}
private: System::Void customerinventory_Click(System::Object^ sender, System::EventArgs^ e) {
	tabcontrol1->TabPages->Remove(Admin);
	
}

private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
	   int^ ID;
	   int^ ProdID = 10000;
private: System::Void Addprod_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ file = "C:\\Users\\samiu\\Desktop\\";
	ProdID = *ProdID + 1;
	dataGridView1->Rows->Add(name->Text, ProdID, wght->Text, qty->Text, cost->Text);
	
	Crud->insert(file + "products.txt", name->Text + "," + ProdID + "," + wght->Text + "," + qty->Text + "," + cost->Text);

}
private: System::Void displayall_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ file = "C:\\Users\\samiu\\Desktop\\";

	Prod = mapper::map_product(Crud->read(file + "products.txt"));
	dataGridView1->Rows->Clear();
	for (int i = 0; i < Prod->Length; i++)
	{
		dataGridView1->Rows->Add(Prod[i]->PName, Prod[i]->GetPID(), Prod[i]->weight, Prod[i]->Quantity, Prod[i]->price);
	}
}
private: System::Void Updateqty_Click(System::Object^ sender, System::EventArgs^ e) {

	String^ file = "C:\\Users\\samiu\\Desktop\\";

	//dataGridView1->Rows->Remove(name->Text, ProdID, wght->Text, qty->Text, cost->Text);
	ID = *ProdID - 1;
	Crud->update(file + "products.txt", name->Text, wght->Text, 0, name->Text + ",", "," + wght->Text + "," + qty->Text + "," + cost->Text);

	Prod = mapper::map_product(Crud->read(file + "products.txt"));
	dataGridView1->Rows->Clear();
	for (int i = 0; i < Prod->Length; i++)
	{
		dataGridView1->Rows->Add(Prod[i]->PName, Prod[i]->GetPID(), Prod[i]->weight, Prod[i]->Quantity, Prod[i]->price);
	}

}
private: System::Void Delete_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ file = "C:\\Users\\samiu\\Desktop\\";
	Crud->discard(file + "products.txt", name->Text, wght->Text, 0);

	Prod = mapper::map_product(Crud->read(file + "products.txt"));

	dataGridView1->Rows->Clear();
	for (int i = 0; i < Prod->Length; i++)
	{
		dataGridView1->Rows->Add(Prod[i]->PName, Prod[i]->GetPID(), Prod[i]->weight, Prod[i]->Quantity, Prod[i]->price);
	}
}
private: System::Void Search_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ file = "C:\\Users\\samiu\\Desktop\\";

	Prod = mapper::map_product(Crud->search(file + "products.txt", name->Text, 0));
	dataGridView1->Rows->Clear();
	for (int i = 0; i < Prod->Length; i++)
	{
		dataGridView1->Rows->Add(Prod[i]->PName, Prod[i]->GetPID(), Prod[i]->weight, Prod[i]->Quantity, Prod[i]->price);
	}
}

private: System::Void Addtocart_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ file = "C:\\Users\\samiu\\Desktop\\";

	Prod = mapper::map_product(Crud->search(file + "products.txt", selProd->Text, 0));
	int^ rem;
	int^ cost;
	bool prodFound = false;
	if (!String::IsNullOrEmpty(cusname->Text) && !String::IsNullOrEmpty(PhoneNo->Text))
	{
		for (int i = 0; i < Prod->Length; i++) {
			if ((Prod[i]->PName == selProd->Text) && (Prod[i]->weight == Int32::Parse(selWeight->Text)))
			{
				prodFound = true;
				rem = Prod[i]->Quantity - Int32::Parse(selQty->Text);
				if (*rem >= 0)
				{
					cost = Prod[i]->price;


					String^ insertData = cusname->Text + "," + PhoneNo->Text + "," + selProd->Text + "," + selWeight->Text + "," + selQty->Text;

					Crud->insert(file + "Customers.txt", insertData);
					Crud->update(file + "products.txt", selProd->Text, selWeight->Text, 0, selProd->Text + ",", "," + selWeight->Text + "," + rem + "," + cost);
					dataGridView2->Rows->Add(cusname->Text, PhoneNo->Text, selProd->Text, selWeight->Text, selQty->Text);

				}
				else {
					// Product has insufficient quantity
					MessageBox::Show("Insufficient quantity of " + selProd->Text + " with weight " + selWeight->Text);
				}
			}

		}

	}
}
private: System::Void deletefromcart_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ file = "C:\\Users\\samiu\\Desktop\\";
	bool prodFound = false;
	int^ rem;
	//int^ cost;
	int^ PrevQty, cost; // Declare cost if it's not declared elsewhere
	if (!String::IsNullOrEmpty(cusname->Text) && !String::IsNullOrEmpty(PhoneNo->Text))
	{
		C = mapper::map_customer(Crud->search(file + "Customers.txt", selProd->Text, 2));
		for (int i = 0; i < C->Length; i++)
		{
			if ((C[i]->P[i]->PName == selProd->Text) && (C[i]->P[i]->weight == Int32::Parse(selWeight->Text)))
			{
				PrevQty = C[i]->P[i]->Quantity;
				break;
			}
		}


		//Cust::updateCart(file + "Customers.txt", selProd->Text, selWeight->Text, 2, CName->Text + "," + phoneNo->Text, "," + selProd->Text + "," + selWeight->Text + "," + selQty->Text);
		Cust::DeleteFromCart(file + "Customers.txt", selProd->Text, selWeight->Text, Convert::ToInt32(PrevQty), 2);
		C = mapper::map_customer(Crud->read(file + "Customers.txt"));
		dataGridView2->Rows->Clear();
		for (int i = 0; i < C->Length; i++) {
			if (C[i]->P != nullptr && C[i]->P->Length > 0) {
				int total = C[i]->P[i]->Quantity * C[i]->P[i]->price;
				dataGridView2->Rows->Add(C[i]->GetName(), C[i]->GetPhoneNo(), C[i]->P[i]->PName, C[i]->P[i]->weight, C[i]->P[i]->Quantity);
			}
		}
		for (int i = 0; i < Prod->Length; i++) {
			if ((Prod[i]->PName == selProd->Text) && (Prod[i]->weight == Int32::Parse(selWeight->Text)))
			{
				prodFound = true;
				rem = Prod[i]->Quantity + Int32::Parse(selQty->Text);
				if (*rem >= 0)
				{
					cost = Prod[i]->price;
					//Crud->insert(file + "Customers.txt", CName->Text + "," + phoneNo->Text + "," + selProd->Text + "," + selWeight->Text + "," + selQty->Text);
					Crud->update(file + "products.txt", selProd->Text, selWeight->Text, 0, selProd->Text + ",", "," + selWeight->Text + "," + rem + "," + cost);


				}
			}

		}
	}
}
private: System::Void updatecart_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ file = "C:\\Users\\samiu\\Desktop\\";
	bool prodFound = false;
	int^ rem;
	//int^ cost;
	int^ PrevQty, cost; // Declare cost if it's not declared elsewhere
	if (!String::IsNullOrEmpty(cusname->Text) && !String::IsNullOrEmpty(PhoneNo->Text))
	{
		int total = 1;
		C = mapper::map_customer(Crud->search(file + "Customers.txt", selProd->Text, 2));
		for (int i = 0; i < C->Length; i++)
		{
			if ((C[i]->P[i]->PName == selProd->Text) && (C[i]->P[i]->weight == Int32::Parse(selWeight->Text)))
			{
				PrevQty = C[i]->P[i]->Quantity;

				total = C[i]->P[i]->price * Int32::Parse(selQty->Text);
				Cust::updateCart(file + "Customers.txt", selProd->Text, selWeight->Text, 2, cusname->Text + "," + PhoneNo->Text, "," + selProd->Text + "," + selWeight->Text + "," + selQty->Text + "," + Convert::ToString(total));
				break;
			}
		}



		//	Cust::DeleteFromCart(file + "Customers.txt", selProd->Text, selWeight->Text, Convert::ToInt32(PrevQty), 2);
		C = mapper::map_customer(Crud->read(file + "Customers.txt"));
		dataGridView2->Rows->Clear();
		for (int i = 0; i < C->Length; i++) {
			for (int j = 0; j < C[j]->P->Length; j++) {
				if (C[i]->P != nullptr && C[i]->P->Length > 0) {
					total = C[i]->P[j]->price * C[i]->P[j]->Quantity;

					dataGridView2->Rows->Add(C[i]->GetName(), Convert::ToString(C[i]->GetPhoneNo()), C[i]->P[j]->PName, Convert::ToString(C[i]->P[j]->weight), Convert::ToString(C[i]->P[j]->Quantity), total);


					break;
				}
			}
		}
		//Cust::DeleteFromCart(file + "Customers.txt", selProd->Text, selWeight->Text, Convert::ToInt32(PrevQty), 2);
		for (int i = 0; i < Prod->Length; i++) {
			if ((Prod[i]->PName == selProd->Text) && (Prod[i]->weight == Int32::Parse(selWeight->Text)))
			{
				prodFound = true;
				rem = Prod[i]->Quantity - Int32::Parse(selQty->Text);
				if (*rem >= 0)
				{
					cost = Prod[i]->price;
					//Crud->insert(file + "Customers.txt", CName->Text + "," + phoneNo->Text + "," + selProd->Text + "," + selWeight->Text + "," + selQty->Text);
					Crud->update(file + "products.txt", selProd->Text, selWeight->Text, 0, selProd->Text + ",", "," + selWeight->Text + "," + rem + "," + cost);


				}
			}

		}

	}

}
private: System::Void proceedtobill_Click(System::Object^ sender, System::EventArgs^ e) {
	tabcontrol1->TabPages->Remove(customertab);

}
private: System::Void exitbtn_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();

}
private: System::Void exitbtn2_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();

}
private: System::Void exitbtn3_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
}
private: System::Void Generatebill_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ file = "C:\\Users\\samiu\\Desktop\\";
	cli::array<Cust^>^ C = mapper::map_customer(Crud->read(file + "Customers.txt"));
	cli::array<Product^>^ Prod = mapper::map_product(Crud->read(file + "Products.txt"));
	String^ billText = Convert::ToString(Bill->GetID()) + "\r\n";
	billText += "Customer Name: " + cusname->Text + "\r\n";
	billText += "Products:\r\n";

	float billAmount = Bill->CalBill(Crud->read(file + "products.txt"), Crud->read(file + "Customers.txt"));

	if (billAmount <= 5000) {
		for (int i = 0; i < C->Length; i++) {
			if (C[i] != nullptr && C[i]->P != nullptr) {
				for (int j = 0; j < C[i]->P->Length; j++) {
					billText += Prod[i]->GetPID() + " " + C[i]->P[j]->PName + "  " + Bill->SubTotal[i] + "\r\n";
					break;
				}
			}
		}

		billText += "Total Amount: " + Convert::ToString(billAmount) + "\r\n"; // No discount

		if (Convert::ToInt32(PayAmount->Text) > billAmount) {
			float refundAmount = Convert::ToInt32(PayAmount->Text) - billAmount;
			MessageBox::Show("Your Refund Amount: " + Convert::ToString(refundAmount) + "\r\n" + "HAPPY SHOPPING");
		}
		else {
			MessageBox::Show("Insufficient Amount. Please re-enter the amount in the TextBox.");
		}
	}
	else {

		for (int i = 0; i < C->Length; i++) {
			if (C[i] != nullptr && C[i]->P != nullptr) {
				for (int j = 0; j < C[i]->P->Length; j++) {
					billText += Prod[i]->GetPID() + "  " + C[i]->P[j]->PName + "  " + Bill->SubTotal[i] + " " + C[i]->P[i]->Quantity + "\r\n";
					break;
				}
			}
		}

		float discountedAmount = Bill->getAmount(0.1); // Apply 10% discount
		billText += "Total Amount after Discount: " + Convert::ToString(discountedAmount) + "\r\n"; // Display discounted amount

		if (Convert::ToInt32(PayAmount->Text) > discountedAmount) {
			float refundAmount = Convert::ToInt32(PayAmount->Text) - discountedAmount;
			MessageBox::Show("Your Refund Amount: " + Convert::ToString(refundAmount) + "\r\n" + "HAPPY SHOPPING");
		}
		else {
			MessageBox::Show("Insufficient Amount. Please re-enter the amount in the TextBox.");
		}
	}

	billSlip->Text = billText;
	// Read customer data from file
	










}
private: System::Void Exit_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
}
private: System::Void DisplayDetails_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ file = "C:\\Users\\samiu\\Desktop\\";
	cli::array<String^>^ customer = Crud->read(file + "Customers.txt");

	// Insert customer data into CustomersInventory.txt
	int count = 0;
	for (int i = 0; i < customer->Length; i++) {

		cli::array<String^>^ var = customer[i]->Split(',');
		if (var->Length >= 5) {
			//if (var[0] + var[1] + var[2] + var[3] + var[4] == customer[i] && count == 0)
				// Insert each customer's data into CustomersInventory.txt
			//	count++;
			Crud->insert(file + "CustomersInventory.txt", Convert::ToString(Bill->GetID()) + "," + customer[i]);
		}
		else {
			count = 0;
		}

	}
	cli::array<String^>^ inventory = Crud->read(file + "CustomersInventory.txt");

	for (int i = 0; i < (inventory->Length) / 2; i++) {
		cli::array<String^>^ var = inventory[i]->Split(',');
		if (var->Length >= 6) {
			dataGridView3->Rows->Add(var[0], var[1], var[2], var[3], var[4], var[5]);
		}
	}
	//String^ filepath = file + "Customers.txt";
	//File::Delete(filepath);


}

};
}
