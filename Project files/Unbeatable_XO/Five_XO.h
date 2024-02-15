#pragma once

namespace UnbeatableXO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Five_XO
	/// </summary>
	public ref class Five_XO : public System::Windows::Forms::Form
	{
	public:
		Five_XO(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			current_symbol = "X";
			label2->Text = player1;
			label5->Text = Convert::ToString(n_moves);
		}
		void set_players(String^ p1, String^ p2) {
			player1 = p1;
			player2 = p2;
			label2->Text = player1;
		}
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Five_XO()
		{
			if (components)
			{
				delete components;
			}
		}

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		String^ current_symbol = "X";
		int n_moves = 0;
		int rows = 5, columns = 5;
		String^ player1;
		String^ player2;
		int x_cnt = 0, o_cnt = 0;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::Button^ button17;
	private: System::Windows::Forms::Button^ button18;
	private: System::Windows::Forms::Button^ button19;
	private: System::Windows::Forms::Button^ button20;
	private: System::Windows::Forms::Button^ button21;
	private: System::Windows::Forms::Button^ button22;
	private: System::Windows::Forms::Button^ button23;
	private: System::Windows::Forms::Button^ button24;
	private: System::Windows::Forms::Button^ button25;
	private: System::Windows::Forms::Button^ button26;

		   System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		int index(int i, int j) {
			return (i * 5) + j + 1;
		}
		void caluculate() {
			Button^ button1;
			Button^ button2;
			Button^ button3;
			x_cnt = 0, o_cnt = 0;
			for (int i = 0; i < rows; i++) {
				for (int j = 0; j < columns - 2; j++) {
					int idx1 = index(i, j);
					int idx2 = index(i, j + 1);
					int idx3 = index(i, j + 2);
					button1 = dynamic_cast<Button^>(Controls["button" + idx1]);
					button2 = dynamic_cast<Button^>(Controls["button" + idx2]);
					button3 = dynamic_cast<Button^>(Controls["button" + idx3]);
					if (button1->Text != "" && button1->Text == button2->Text
						&& button2->Text == button3->Text) {
						if (button1->Text == "X") {
							button1->BackColor = System::Drawing::Color::Red;
							button2->BackColor = System::Drawing::Color::Red;
							button3->BackColor = System::Drawing::Color::Red;
							x_cnt++;
						}
						else if (button1->Text == "O") {
							button1->BackColor = System::Drawing::Color::Cyan;
							button2->BackColor = System::Drawing::Color::Cyan;
							button3->BackColor = System::Drawing::Color::Cyan;
							o_cnt++;
						}
					}
				}
			}
			for (int i = 0; i < rows - 2; i++) {
				for (int j = 0; j < columns; j++) {
					int idx1 = index(i, j);
					int idx2 = index(i + 1, j);
					int idx3 = index(i + 2, j);
					button1 = dynamic_cast<Button^>(Controls["button" + idx1]);
					button2 = dynamic_cast<Button^>(Controls["button" + idx2]);
					button3 = dynamic_cast<Button^>(Controls["button" + idx3]);
					if (button1->Text != "" && button1->Text == button2->Text
						&& button2->Text == button3->Text) {
						if (button1->Text == "X") {
							button1->BackColor = System::Drawing::Color::Red;
							button2->BackColor = System::Drawing::Color::Red;
							button3->BackColor = System::Drawing::Color::Red;
							x_cnt++;
						}
						else if (button1->Text == "O") {
							button1->BackColor = System::Drawing::Color::Cyan;
							button2->BackColor = System::Drawing::Color::Cyan;
							button3->BackColor = System::Drawing::Color::Cyan;
							o_cnt++;
						}
					}
				}
			}
			for (int i = 0; i < rows - 2; i++) {
				for (int j = 0; j < columns - 2; j++) {
					int idx1 = index(i, j);
					int idx2 = index(i + 1, j + 1);
					int idx3 = index(i + 2, j + 2);
					button1 = dynamic_cast<Button^>(Controls["button" + idx1]);
					button2 = dynamic_cast<Button^>(Controls["button" + idx2]);
					button3 = dynamic_cast<Button^>(Controls["button" + idx3]);
					if (button1->Text != "" && button1->Text == button2->Text
						&& button2->Text == button3->Text) {
						if (button1->Text == "X") {
							button1->BackColor = System::Drawing::Color::Red;
							button2->BackColor = System::Drawing::Color::Red;
							button3->BackColor = System::Drawing::Color::Red;
							x_cnt++;
						}
						else if (button1->Text == "O") {
							button1->BackColor = System::Drawing::Color::Cyan;
							button2->BackColor = System::Drawing::Color::Cyan;
							button3->BackColor = System::Drawing::Color::Cyan;
							o_cnt++;
						}
					}
				}
			}
			for (int i = 0; i < rows - 2; i++) {
				for (int j = 2; j < columns; j++) {
					int idx1 = index(i, j);
					int idx2 = index(i + 1, j - 1);
					int idx3 = index(i + 2, j - 2);
					button1 = dynamic_cast<Button^>(Controls["button" + idx1]);
					button2 = dynamic_cast<Button^>(Controls["button" + idx2]);
					button3 = dynamic_cast<Button^>(Controls["button" + idx3]);
					if (button1->Text != "" && button1->Text == button2->Text
						&& button2->Text == button3->Text) {
						if (button1->Text == "X") {
							button1->BackColor = System::Drawing::Color::Red;
							button2->BackColor = System::Drawing::Color::Red;
							button3->BackColor = System::Drawing::Color::Red;
							x_cnt++;
						}
						else if (button1->Text == "O") {
							button1->BackColor = System::Drawing::Color::Cyan;
							button2->BackColor = System::Drawing::Color::Cyan;
							button3->BackColor = System::Drawing::Color::Cyan;
							o_cnt++;
						}
					}
				}
			}
		}
		bool is_winner() {
			if (game_over()) {
				caluculate();
				if (x_cnt > o_cnt) {
					MessageBox::Show(player1 + " WON!!!", "Winner!");
					return true;
				}
				else if(o_cnt > x_cnt) {
					MessageBox::Show(player2 + " WON!!!", "Winner!");
					return true;
				}
				return false;
			}
			return false;
		}
		bool is_draw() {
			if (game_over() && !is_winner()) {
				MessageBox::Show("DRAW!!!", "Draw!");
				return true;
			}
			return false;
		}
		bool game_over() {
			return n_moves >= 24;
		}
		void after_click() {
			n_moves++;
			label5->Text = Convert::ToString(n_moves);
			if (is_winner()) {
				Disable();
				return;
			}
			if (is_draw()) {
				Disable();
				return;
			}
			if (current_symbol == "X") {
				label2->Text = player2;
				current_symbol = "O";
			}
			else {
				label2->Text = player1;
				current_symbol = "X";
			}
		}
		void Disable() {
			for (int i = 1; i <= 25; i++) {
				if (Controls["button" + i]->Text == "")
					Controls["button" + i]->Enabled = false;
			}
		}
		void Reset() {
			for (int i = 1; i <= 25; i++) {
				Controls["button" + i]->Enabled = true;
				Controls["button" + i]->Text = "";
				Controls["button" + i]->BackColor = System::Drawing::SystemColors::Control;
			}
			n_moves = 0;
			current_symbol = "X";
			label2->Text = player1;
			label5->Text = Convert::ToString(n_moves);
		}
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->button24 = (gcnew System::Windows::Forms::Button());
			this->button25 = (gcnew System::Windows::Forms::Button());
			this->button26 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::Control;
			this->label1->Font = (gcnew System::Drawing::Font(L"Tw Cen MT Condensed Extra Bold", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(27, 23);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(297, 48);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Number of moves:";
			// 
			// label3
			// 
			this->label3->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::SystemColors::Control;
			this->label3->Font = (gcnew System::Drawing::Font(L"Tw Cen MT Condensed Extra Bold", 19.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(479, 95);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(196, 39);
			this->label3->TabIndex = 1;
			this->label3->Text = L"It is your turn ";
			// 
			// label5
			// 
			this->label5->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::SystemColors::Control;
			this->label5->Font = (gcnew System::Drawing::Font(L"Tw Cen MT Condensed Extra Bold", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(317, 23);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(0, 48);
			this->label5->TabIndex = 2;
			// 
			// label2
			// 
			this->label2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::SystemColors::Control;
			this->label2->Font = (gcnew System::Drawing::Font(L"Tw Cen MT Condensed Extra Bold", 19.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(657, 95);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(114, 39);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Player1";
			// 
			// button1
			// 
			this->button1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button1->Font = (gcnew System::Drawing::Font(L"Tw Cen MT Condensed Extra Bold", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(392, 160);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(88, 80);
			this->button1->TabIndex = 4;
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Five_XO::button_Click);
			// 
			// button2
			// 
			this->button2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button2->Font = (gcnew System::Drawing::Font(L"Tw Cen MT Condensed Extra Bold", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(486, 160);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(88, 80);
			this->button2->TabIndex = 5;
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Five_XO::button_Click);
			// 
			// button3
			// 
			this->button3->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button3->Font = (gcnew System::Drawing::Font(L"Tw Cen MT Condensed Extra Bold", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(580, 160);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(88, 80);
			this->button3->TabIndex = 6;
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Five_XO::button_Click);
			// 
			// button4
			// 
			this->button4->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button4->Font = (gcnew System::Drawing::Font(L"Tw Cen MT Condensed Extra Bold", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(674, 160);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(88, 80);
			this->button4->TabIndex = 7;
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Five_XO::button_Click);
			// 
			// button5
			// 
			this->button5->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button5->Font = (gcnew System::Drawing::Font(L"Tw Cen MT Condensed Extra Bold", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(768, 160);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(88, 80);
			this->button5->TabIndex = 8;
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Five_XO::button_Click);
			// 
			// button6
			// 
			this->button6->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button6->Font = (gcnew System::Drawing::Font(L"Tw Cen MT Condensed Extra Bold", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->Location = System::Drawing::Point(392, 246);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(88, 80);
			this->button6->TabIndex = 9;
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Five_XO::button_Click);
			// 
			// button7
			// 
			this->button7->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button7->Font = (gcnew System::Drawing::Font(L"Tw Cen MT Condensed Extra Bold", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->Location = System::Drawing::Point(486, 246);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(88, 80);
			this->button7->TabIndex = 10;
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &Five_XO::button_Click);
			// 
			// button8
			// 
			this->button8->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button8->Font = (gcnew System::Drawing::Font(L"Tw Cen MT Condensed Extra Bold", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->Location = System::Drawing::Point(580, 246);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(88, 80);
			this->button8->TabIndex = 11;
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &Five_XO::button_Click);
			// 
			// button9
			// 
			this->button9->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button9->Font = (gcnew System::Drawing::Font(L"Tw Cen MT Condensed Extra Bold", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button9->Location = System::Drawing::Point(674, 246);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(88, 80);
			this->button9->TabIndex = 12;
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &Five_XO::button_Click);
			// 
			// button10
			// 
			this->button10->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button10->Font = (gcnew System::Drawing::Font(L"Tw Cen MT Condensed Extra Bold", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button10->Location = System::Drawing::Point(768, 246);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(88, 80);
			this->button10->TabIndex = 13;
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &Five_XO::button_Click);
			// 
			// button11
			// 
			this->button11->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button11->Font = (gcnew System::Drawing::Font(L"Tw Cen MT Condensed Extra Bold", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button11->Location = System::Drawing::Point(392, 332);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(88, 80);
			this->button11->TabIndex = 14;
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &Five_XO::button_Click);
			// 
			// button12
			// 
			this->button12->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button12->Font = (gcnew System::Drawing::Font(L"Tw Cen MT Condensed Extra Bold", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button12->Location = System::Drawing::Point(486, 332);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(88, 80);
			this->button12->TabIndex = 15;
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &Five_XO::button_Click);
			// 
			// button13
			// 
			this->button13->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button13->Font = (gcnew System::Drawing::Font(L"Tw Cen MT Condensed Extra Bold", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button13->Location = System::Drawing::Point(580, 332);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(88, 80);
			this->button13->TabIndex = 16;
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &Five_XO::button_Click);
			// 
			// button14
			// 
			this->button14->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button14->Font = (gcnew System::Drawing::Font(L"Tw Cen MT Condensed Extra Bold", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button14->Location = System::Drawing::Point(674, 332);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(88, 80);
			this->button14->TabIndex = 17;
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &Five_XO::button_Click);
			// 
			// button15
			// 
			this->button15->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button15->Font = (gcnew System::Drawing::Font(L"Tw Cen MT Condensed Extra Bold", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button15->Location = System::Drawing::Point(768, 332);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(88, 80);
			this->button15->TabIndex = 18;
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Click += gcnew System::EventHandler(this, &Five_XO::button_Click);
			// 
			// button16
			// 
			this->button16->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button16->Font = (gcnew System::Drawing::Font(L"Tw Cen MT Condensed Extra Bold", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button16->Location = System::Drawing::Point(392, 418);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(88, 80);
			this->button16->TabIndex = 19;
			this->button16->UseVisualStyleBackColor = true;
			this->button16->Click += gcnew System::EventHandler(this, &Five_XO::button_Click);
			// 
			// button17
			// 
			this->button17->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button17->Font = (gcnew System::Drawing::Font(L"Tw Cen MT Condensed Extra Bold", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button17->Location = System::Drawing::Point(486, 418);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(88, 80);
			this->button17->TabIndex = 20;
			this->button17->UseVisualStyleBackColor = true;
			this->button17->Click += gcnew System::EventHandler(this, &Five_XO::button_Click);
			// 
			// button18
			// 
			this->button18->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button18->Font = (gcnew System::Drawing::Font(L"Tw Cen MT Condensed Extra Bold", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button18->Location = System::Drawing::Point(580, 418);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(88, 80);
			this->button18->TabIndex = 21;
			this->button18->UseVisualStyleBackColor = true;
			this->button18->Click += gcnew System::EventHandler(this, &Five_XO::button_Click);
			// 
			// button19
			// 
			this->button19->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button19->Font = (gcnew System::Drawing::Font(L"Tw Cen MT Condensed Extra Bold", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button19->Location = System::Drawing::Point(674, 420);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(88, 80);
			this->button19->TabIndex = 22;
			this->button19->UseVisualStyleBackColor = true;
			this->button19->Click += gcnew System::EventHandler(this, &Five_XO::button_Click);
			// 
			// button20
			// 
			this->button20->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button20->Font = (gcnew System::Drawing::Font(L"Tw Cen MT Condensed Extra Bold", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button20->Location = System::Drawing::Point(768, 420);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(88, 80);
			this->button20->TabIndex = 23;
			this->button20->UseVisualStyleBackColor = true;
			this->button20->Click += gcnew System::EventHandler(this, &Five_XO::button_Click);
			// 
			// button21
			// 
			this->button21->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button21->Font = (gcnew System::Drawing::Font(L"Tw Cen MT Condensed Extra Bold", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button21->Location = System::Drawing::Point(392, 504);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(88, 80);
			this->button21->TabIndex = 24;
			this->button21->UseVisualStyleBackColor = true;
			this->button21->Click += gcnew System::EventHandler(this, &Five_XO::button_Click);
			// 
			// button22
			// 
			this->button22->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button22->Font = (gcnew System::Drawing::Font(L"Tw Cen MT Condensed Extra Bold", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button22->Location = System::Drawing::Point(486, 504);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(88, 80);
			this->button22->TabIndex = 25;
			this->button22->UseVisualStyleBackColor = true;
			this->button22->Click += gcnew System::EventHandler(this, &Five_XO::button_Click);
			// 
			// button23
			// 
			this->button23->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button23->Font = (gcnew System::Drawing::Font(L"Tw Cen MT Condensed Extra Bold", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button23->Location = System::Drawing::Point(580, 504);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(88, 80);
			this->button23->TabIndex = 26;
			this->button23->UseVisualStyleBackColor = true;
			this->button23->Click += gcnew System::EventHandler(this, &Five_XO::button_Click);
			// 
			// button24
			// 
			this->button24->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button24->Font = (gcnew System::Drawing::Font(L"Tw Cen MT Condensed Extra Bold", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button24->Location = System::Drawing::Point(674, 506);
			this->button24->Name = L"button24";
			this->button24->Size = System::Drawing::Size(88, 80);
			this->button24->TabIndex = 27;
			this->button24->UseVisualStyleBackColor = true;
			this->button24->Click += gcnew System::EventHandler(this, &Five_XO::button_Click);
			// 
			// button25
			// 
			this->button25->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button25->Font = (gcnew System::Drawing::Font(L"Tw Cen MT Condensed Extra Bold", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button25->Location = System::Drawing::Point(768, 506);
			this->button25->Name = L"button25";
			this->button25->Size = System::Drawing::Size(88, 80);
			this->button25->TabIndex = 28;
			this->button25->UseVisualStyleBackColor = true;
			this->button25->Click += gcnew System::EventHandler(this, &Five_XO::button_Click);
			// 
			// button26
			// 
			this->button26->Font = (gcnew System::Drawing::Font(L"Tw Cen MT Condensed Extra Bold", 19.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button26->Location = System::Drawing::Point(500, 622);
			this->button26->Name = L"button26";
			this->button26->Size = System::Drawing::Size(253, 47);
			this->button26->TabIndex = 29;
			this->button26->Text = L"Reset";
			this->button26->UseVisualStyleBackColor = true;
			this->button26->Click += gcnew System::EventHandler(this, &Five_XO::button26_Click);
			// 
			// Five_XO
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->ClientSize = System::Drawing::Size(1256, 714);
			this->Controls->Add(this->button26);
			this->Controls->Add(this->button25);
			this->Controls->Add(this->button24);
			this->Controls->Add(this->button23);
			this->Controls->Add(this->button22);
			this->Controls->Add(this->button21);
			this->Controls->Add(this->button20);
			this->Controls->Add(this->button19);
			this->Controls->Add(this->button18);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label1);
			this->Name = L"Five_XO";
			this->Text = L"Five_XO";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		private: System::Void button_Click(System::Object^ sender, System::EventArgs^ e) {
			Button^ clicked = dynamic_cast<Button^>(sender);
			if (clicked->Text == "") {
				clicked->Text = current_symbol;
				after_click();
			}
		}
	private: System::Void button26_Click(System::Object^ sender, System::EventArgs^ e) {
		Reset();
	}
};
}
