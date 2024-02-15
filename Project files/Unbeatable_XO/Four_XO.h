#pragma once

namespace UnbeatableXO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Four_XO
	/// </summary>
	public ref class Four_XO : public System::Windows::Forms::Form
	{
	public:
		Four_XO(void)
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
		~Four_XO()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label5;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		String^ current_symbol = "X";
		int n_moves = 0;
		int rows = 6, columns = 7;
		String^ player1;
		String^ player2;
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
	private: System::Windows::Forms::Button^ button27;
	private: System::Windows::Forms::Button^ button28;
	private: System::Windows::Forms::Button^ button29;
	private: System::Windows::Forms::Button^ button30;
	private: System::Windows::Forms::Button^ button31;
	private: System::Windows::Forms::Button^ button32;
	private: System::Windows::Forms::Button^ button33;
	private: System::Windows::Forms::Button^ button34;
	private: System::Windows::Forms::Button^ button35;
	private: System::Windows::Forms::Button^ button36;
	private: System::Windows::Forms::Button^ button37;
	private: System::Windows::Forms::Button^ button38;
	private: System::Windows::Forms::Button^ button39;
	private: System::Windows::Forms::Button^ button40;
	private: System::Windows::Forms::Button^ button41;
	private: System::Windows::Forms::Button^ button42;
	private: System::Windows::Forms::Button^ button43;
		   System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		int index(int i, int j) {
			return (i * 7) + j + 1;
		}
		bool is_winner() {
			Button^ button1;
			Button^ button2;
			Button^ button3;
			Button^ button4;
			for (int i = 0; i < rows; i++) {
				for (int j = 0; j < columns - 3; j++) {
					int idx1 = index(i, j);
					int idx2 = index(i, j + 1);
					int idx3 = index(i, j + 2);
					int idx4 = index(i, j + 3);
					button1 = dynamic_cast<Button^>(Controls["button" + idx1]);
					button2 = dynamic_cast<Button^>(Controls["button" + idx2]);
					button3 = dynamic_cast<Button^>(Controls["button" + idx3]);
					button4 = dynamic_cast<Button^>(Controls["button" + idx4]);
					if (button1->Text != "" && button1->Text == button2->Text
						&& button2->Text == button3->Text
						&& button3->Text == button4->Text) {
						button1->BackColor = System::Drawing::SystemColors::AppWorkspace;
						button2->BackColor = System::Drawing::SystemColors::AppWorkspace;
						button3->BackColor = System::Drawing::SystemColors::AppWorkspace;
						button4->BackColor = System::Drawing::SystemColors::AppWorkspace;
						return true;
					}
				}
			}
			for (int i = 0; i < rows - 3; i++) {
				for (int j = 0; j < columns; j++) {
					int idx1 = index(i, j);
					int idx2 = index(i+1, j);
					int idx3 = index(i+2, j);
					int idx4 = index(i+3, j);
					button1 = dynamic_cast<Button^>(Controls["button" + idx1]);
					button2 = dynamic_cast<Button^>(Controls["button" + idx2]);
					button3 = dynamic_cast<Button^>(Controls["button" + idx3]);
					button4 = dynamic_cast<Button^>(Controls["button" + idx4]);
					if (button1->Text != "" && button1->Text == button2->Text
						&& button2->Text == button3->Text
						&& button3->Text == button4->Text) {
						button1->BackColor = System::Drawing::SystemColors::AppWorkspace;
						button2->BackColor = System::Drawing::SystemColors::AppWorkspace;
						button3->BackColor = System::Drawing::SystemColors::AppWorkspace;
						button4->BackColor = System::Drawing::SystemColors::AppWorkspace;
						return true;
					}
				}
			}
			for (int i = 0; i < rows - 3; i++) {
				for (int j = 0; j < columns-3; j++) {
					int idx1 = index(i, j);
					int idx2 = index(i + 1, j+1);
					int idx3 = index(i + 2, j+2);
					int idx4 = index(i + 3, j+3);
					button1 = dynamic_cast<Button^>(Controls["button" + idx1]);
					button2 = dynamic_cast<Button^>(Controls["button" + idx2]);
					button3 = dynamic_cast<Button^>(Controls["button" + idx3]);
					button4 = dynamic_cast<Button^>(Controls["button" + idx4]);
					if (button1->Text != "" && button1->Text == button2->Text
						&& button2->Text == button3->Text
						&& button3->Text == button4->Text) {
						button1->BackColor = System::Drawing::SystemColors::AppWorkspace;
						button2->BackColor = System::Drawing::SystemColors::AppWorkspace;
						button3->BackColor = System::Drawing::SystemColors::AppWorkspace;
						button4->BackColor = System::Drawing::SystemColors::AppWorkspace;
						return true;
					}
				}
			}
			for (int i = 0; i < rows - 3; i++) {
				for (int j = 3; j < columns; j++) {
					int idx1 = index(i, j);
					int idx2 = index(i + 1, j - 1);
					int idx3 = index(i + 2, j - 2);
					int idx4 = index(i + 3, j - 3);
					button1 = dynamic_cast<Button^>(Controls["button" + idx1]);
					button2 = dynamic_cast<Button^>(Controls["button" + idx2]);
					button3 = dynamic_cast<Button^>(Controls["button" + idx3]);
					button4 = dynamic_cast<Button^>(Controls["button" + idx4]);
					if (button1->Text != "" && button1->Text == button2->Text
						&& button2->Text == button3->Text
						&& button3->Text == button4->Text) {
						button1->BackColor = System::Drawing::SystemColors::AppWorkspace;
						button2->BackColor = System::Drawing::SystemColors::AppWorkspace;
						button3->BackColor = System::Drawing::SystemColors::AppWorkspace;
						button4->BackColor = System::Drawing::SystemColors::AppWorkspace;
						return true;
					}
				}
			}
			return false;
		}
		bool is_draw() {
		   return n_moves == 42 && !is_winner();
		}
		void after_click() {
			n_moves++;
			label5->Text = Convert::ToString(n_moves);
			if (is_winner()) {
				if (current_symbol == "X")
					MessageBox::Show(player1 + " WON!!!", "Winner!");
				else
					MessageBox::Show(player2 + " WON!!!", "Winner!");
				Disable();
				return;
			}
			if (is_draw()) {
				MessageBox::Show("DRAW!!!", "Draw!");
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
			for (int i = 1; i <= 42; i++) {
			   if (Controls["button" + i]->Text == "")
				   Controls["button" + i]->Enabled = false;
			}
		}
		void Reset() {
		   for (int i = 1; i <= 42; i++) {
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
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
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
			this->button27 = (gcnew System::Windows::Forms::Button());
			this->button28 = (gcnew System::Windows::Forms::Button());
			this->button29 = (gcnew System::Windows::Forms::Button());
			this->button30 = (gcnew System::Windows::Forms::Button());
			this->button31 = (gcnew System::Windows::Forms::Button());
			this->button32 = (gcnew System::Windows::Forms::Button());
			this->button33 = (gcnew System::Windows::Forms::Button());
			this->button34 = (gcnew System::Windows::Forms::Button());
			this->button35 = (gcnew System::Windows::Forms::Button());
			this->button36 = (gcnew System::Windows::Forms::Button());
			this->button37 = (gcnew System::Windows::Forms::Button());
			this->button38 = (gcnew System::Windows::Forms::Button());
			this->button39 = (gcnew System::Windows::Forms::Button());
			this->button40 = (gcnew System::Windows::Forms::Button());
			this->button41 = (gcnew System::Windows::Forms::Button());
			this->button42 = (gcnew System::Windows::Forms::Button());
			this->button43 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::Control;
			this->label1->Font = (gcnew System::Drawing::Font(L"Tw Cen MT Condensed Extra Bold", 19.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(480, 49);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(196, 39);
			this->label1->TabIndex = 9;
			this->label1->Text = L"It is your turn ";
			// 
			// label2
			// 
			this->label2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::SystemColors::Control;
			this->label2->Font = (gcnew System::Drawing::Font(L"Tw Cen MT Condensed Extra Bold", 19.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(660, 49);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(114, 39);
			this->label2->TabIndex = 10;
			this->label2->Text = L"Player1";
			// 
			// label3
			// 
			this->label3->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::SystemColors::Control;
			this->label3->Font = (gcnew System::Drawing::Font(L"Tw Cen MT Condensed Extra Bold", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(27, 23);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(307, 48);
			this->label3->TabIndex = 11;
			this->label3->Text = L"Number of moves: ";
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
			this->label5->Size = System::Drawing::Size(20, 48);
			this->label5->TabIndex = 13;
			this->label5->Text = L"\r\n";
			// 
			// button1
			// 
			this->button1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button1->BackColor = System::Drawing::SystemColors::Control;
			this->button1->Font = (gcnew System::Drawing::Font(L"Tw Cen MT Condensed Extra Bold", 16.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(337, 112);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(79, 81);
			this->button1->TabIndex = 14;
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Four_XO::button1_Click);
			// 
			// button2
			// 
			this->button2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button2->BackColor = System::Drawing::SystemColors::Control;
			this->button2->Font = (gcnew System::Drawing::Font(L"Tw Cen MT Condensed Extra Bold", 16.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(422, 112);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(79, 81);
			this->button2->TabIndex = 15;
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Four_XO::button2_Click);
			// 
			// button3
			// 
			this->button3->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button3->BackColor = System::Drawing::SystemColors::Control;
			this->button3->Font = (gcnew System::Drawing::Font(L"Tw Cen MT Condensed Extra Bold", 16.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(507, 112);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(79, 81);
			this->button3->TabIndex = 16;
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Four_XO::button3_Click);
			// 
			// button4
			// 
			this->button4->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button4->BackColor = System::Drawing::SystemColors::Control;
			this->button4->Font = (gcnew System::Drawing::Font(L"Tw Cen MT Condensed Extra Bold", 16.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(592, 112);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(79, 81);
			this->button4->TabIndex = 17;
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &Four_XO::button4_Click);
			// 
			// button5
			// 
			this->button5->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button5->BackColor = System::Drawing::SystemColors::Control;
			this->button5->Font = (gcnew System::Drawing::Font(L"Tw Cen MT Condensed Extra Bold", 16.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(677, 112);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(79, 81);
			this->button5->TabIndex = 18;
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &Four_XO::button5_Click);
			// 
			// button6
			// 
			this->button6->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button6->BackColor = System::Drawing::SystemColors::Control;
			this->button6->Font = (gcnew System::Drawing::Font(L"Tw Cen MT Condensed Extra Bold", 16.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button6->Location = System::Drawing::Point(762, 112);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(79, 81);
			this->button6->TabIndex = 19;
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &Four_XO::button6_Click);
			// 
			// button7
			// 
			this->button7->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button7->BackColor = System::Drawing::SystemColors::Control;
			this->button7->Font = (gcnew System::Drawing::Font(L"Tw Cen MT Condensed Extra Bold", 16.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button7->Location = System::Drawing::Point(847, 112);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(79, 81);
			this->button7->TabIndex = 20;
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &Four_XO::button7_Click);
			// 
			// button8
			// 
			this->button8->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button8->BackColor = System::Drawing::SystemColors::Control;
			this->button8->Font = (gcnew System::Drawing::Font(L"Tw Cen MT Condensed Extra Bold", 16.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button8->Location = System::Drawing::Point(337, 199);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(79, 81);
			this->button8->TabIndex = 27;
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &Four_XO::button1_Click);
			// 
			// button9
			// 
			this->button9->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button9->BackColor = System::Drawing::SystemColors::Control;
			this->button9->Font = (gcnew System::Drawing::Font(L"Tw Cen MT Condensed Extra Bold", 16.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button9->Location = System::Drawing::Point(422, 199);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(79, 81);
			this->button9->TabIndex = 26;
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &Four_XO::button2_Click);
			// 
			// button10
			// 
			this->button10->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button10->BackColor = System::Drawing::SystemColors::Control;
			this->button10->Font = (gcnew System::Drawing::Font(L"Tw Cen MT Condensed Extra Bold", 16.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button10->Location = System::Drawing::Point(507, 199);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(79, 81);
			this->button10->TabIndex = 25;
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &Four_XO::button3_Click);
			// 
			// button11
			// 
			this->button11->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button11->BackColor = System::Drawing::SystemColors::Control;
			this->button11->Font = (gcnew System::Drawing::Font(L"Tw Cen MT Condensed Extra Bold", 16.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button11->Location = System::Drawing::Point(592, 199);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(79, 81);
			this->button11->TabIndex = 24;
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &Four_XO::button4_Click);
			// 
			// button12
			// 
			this->button12->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button12->BackColor = System::Drawing::SystemColors::Control;
			this->button12->Font = (gcnew System::Drawing::Font(L"Tw Cen MT Condensed Extra Bold", 16.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button12->Location = System::Drawing::Point(677, 199);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(79, 81);
			this->button12->TabIndex = 23;
			this->button12->UseVisualStyleBackColor = false;
			this->button12->Click += gcnew System::EventHandler(this, &Four_XO::button5_Click);
			// 
			// button13
			// 
			this->button13->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button13->BackColor = System::Drawing::SystemColors::Control;
			this->button13->Font = (gcnew System::Drawing::Font(L"Tw Cen MT Condensed Extra Bold", 16.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button13->Location = System::Drawing::Point(762, 199);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(79, 81);
			this->button13->TabIndex = 22;
			this->button13->UseVisualStyleBackColor = false;
			this->button13->Click += gcnew System::EventHandler(this, &Four_XO::button6_Click);
			// 
			// button14
			// 
			this->button14->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button14->BackColor = System::Drawing::SystemColors::Control;
			this->button14->Font = (gcnew System::Drawing::Font(L"Tw Cen MT Condensed Extra Bold", 16.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button14->Location = System::Drawing::Point(847, 199);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(79, 81);
			this->button14->TabIndex = 21;
			this->button14->UseVisualStyleBackColor = false;
			this->button14->Click += gcnew System::EventHandler(this, &Four_XO::button7_Click);
			// 
			// button15
			// 
			this->button15->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button15->BackColor = System::Drawing::SystemColors::Control;
			this->button15->Font = (gcnew System::Drawing::Font(L"Tw Cen MT Condensed Extra Bold", 16.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button15->Location = System::Drawing::Point(337, 286);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(79, 81);
			this->button15->TabIndex = 34;
			this->button15->UseVisualStyleBackColor = false;
			this->button15->Click += gcnew System::EventHandler(this, &Four_XO::button1_Click);
			// 
			// button16
			// 
			this->button16->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button16->BackColor = System::Drawing::SystemColors::Control;
			this->button16->Font = (gcnew System::Drawing::Font(L"Tw Cen MT Condensed Extra Bold", 16.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button16->Location = System::Drawing::Point(422, 286);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(79, 81);
			this->button16->TabIndex = 33;
			this->button16->UseVisualStyleBackColor = false;
			this->button16->Click += gcnew System::EventHandler(this, &Four_XO::button2_Click);
			// 
			// button17
			// 
			this->button17->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button17->BackColor = System::Drawing::SystemColors::Control;
			this->button17->Font = (gcnew System::Drawing::Font(L"Tw Cen MT Condensed Extra Bold", 16.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button17->Location = System::Drawing::Point(507, 286);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(79, 81);
			this->button17->TabIndex = 32;
			this->button17->UseVisualStyleBackColor = false;
			this->button17->Click += gcnew System::EventHandler(this, &Four_XO::button3_Click);
			// 
			// button18
			// 
			this->button18->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button18->BackColor = System::Drawing::SystemColors::Control;
			this->button18->Font = (gcnew System::Drawing::Font(L"Tw Cen MT Condensed Extra Bold", 16.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button18->Location = System::Drawing::Point(592, 286);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(79, 81);
			this->button18->TabIndex = 31;
			this->button18->UseVisualStyleBackColor = false;
			this->button18->Click += gcnew System::EventHandler(this, &Four_XO::button4_Click);
			// 
			// button19
			// 
			this->button19->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button19->BackColor = System::Drawing::SystemColors::Control;
			this->button19->Font = (gcnew System::Drawing::Font(L"Tw Cen MT Condensed Extra Bold", 16.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button19->Location = System::Drawing::Point(677, 286);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(79, 81);
			this->button19->TabIndex = 30;
			this->button19->UseVisualStyleBackColor = false;
			this->button19->Click += gcnew System::EventHandler(this, &Four_XO::button5_Click);
			// 
			// button20
			// 
			this->button20->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button20->BackColor = System::Drawing::SystemColors::Control;
			this->button20->Font = (gcnew System::Drawing::Font(L"Tw Cen MT Condensed Extra Bold", 16.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button20->Location = System::Drawing::Point(762, 286);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(79, 81);
			this->button20->TabIndex = 29;
			this->button20->UseVisualStyleBackColor = false;
			this->button20->Click += gcnew System::EventHandler(this, &Four_XO::button6_Click);
			// 
			// button21
			// 
			this->button21->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button21->BackColor = System::Drawing::SystemColors::Control;
			this->button21->Font = (gcnew System::Drawing::Font(L"Tw Cen MT Condensed Extra Bold", 16.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button21->Location = System::Drawing::Point(847, 286);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(79, 81);
			this->button21->TabIndex = 28;
			this->button21->UseVisualStyleBackColor = false;
			this->button21->Click += gcnew System::EventHandler(this, &Four_XO::button7_Click);
			// 
			// button22
			// 
			this->button22->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button22->BackColor = System::Drawing::SystemColors::Control;
			this->button22->Font = (gcnew System::Drawing::Font(L"Tw Cen MT Condensed Extra Bold", 16.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button22->Location = System::Drawing::Point(337, 373);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(79, 81);
			this->button22->TabIndex = 41;
			this->button22->UseVisualStyleBackColor = false;
			this->button22->Click += gcnew System::EventHandler(this, &Four_XO::button1_Click);
			// 
			// button23
			// 
			this->button23->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button23->BackColor = System::Drawing::SystemColors::Control;
			this->button23->Font = (gcnew System::Drawing::Font(L"Tw Cen MT Condensed Extra Bold", 16.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button23->Location = System::Drawing::Point(422, 373);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(79, 81);
			this->button23->TabIndex = 40;
			this->button23->UseVisualStyleBackColor = false;
			this->button23->Click += gcnew System::EventHandler(this, &Four_XO::button2_Click);
			// 
			// button24
			// 
			this->button24->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button24->BackColor = System::Drawing::SystemColors::Control;
			this->button24->Font = (gcnew System::Drawing::Font(L"Tw Cen MT Condensed Extra Bold", 16.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button24->Location = System::Drawing::Point(507, 373);
			this->button24->Name = L"button24";
			this->button24->Size = System::Drawing::Size(79, 81);
			this->button24->TabIndex = 39;
			this->button24->UseVisualStyleBackColor = false;
			this->button24->Click += gcnew System::EventHandler(this, &Four_XO::button3_Click);
			// 
			// button25
			// 
			this->button25->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button25->BackColor = System::Drawing::SystemColors::Control;
			this->button25->Font = (gcnew System::Drawing::Font(L"Tw Cen MT Condensed Extra Bold", 16.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button25->Location = System::Drawing::Point(592, 373);
			this->button25->Name = L"button25";
			this->button25->Size = System::Drawing::Size(79, 81);
			this->button25->TabIndex = 38;
			this->button25->UseVisualStyleBackColor = false;
			this->button25->Click += gcnew System::EventHandler(this, &Four_XO::button4_Click);
			// 
			// button26
			// 
			this->button26->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button26->BackColor = System::Drawing::SystemColors::Control;
			this->button26->Font = (gcnew System::Drawing::Font(L"Tw Cen MT Condensed Extra Bold", 16.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button26->Location = System::Drawing::Point(677, 373);
			this->button26->Name = L"button26";
			this->button26->Size = System::Drawing::Size(79, 81);
			this->button26->TabIndex = 37;
			this->button26->UseVisualStyleBackColor = false;
			this->button26->Click += gcnew System::EventHandler(this, &Four_XO::button5_Click);
			// 
			// button27
			// 
			this->button27->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button27->BackColor = System::Drawing::SystemColors::Control;
			this->button27->Font = (gcnew System::Drawing::Font(L"Tw Cen MT Condensed Extra Bold", 16.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button27->Location = System::Drawing::Point(762, 373);
			this->button27->Name = L"button27";
			this->button27->Size = System::Drawing::Size(79, 81);
			this->button27->TabIndex = 36;
			this->button27->UseVisualStyleBackColor = false;
			this->button27->Click += gcnew System::EventHandler(this, &Four_XO::button6_Click);
			// 
			// button28
			// 
			this->button28->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button28->BackColor = System::Drawing::SystemColors::Control;
			this->button28->Font = (gcnew System::Drawing::Font(L"Tw Cen MT Condensed Extra Bold", 16.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button28->Location = System::Drawing::Point(847, 373);
			this->button28->Name = L"button28";
			this->button28->Size = System::Drawing::Size(79, 81);
			this->button28->TabIndex = 35;
			this->button28->UseVisualStyleBackColor = false;
			this->button28->Click += gcnew System::EventHandler(this, &Four_XO::button7_Click);
			// 
			// button29
			// 
			this->button29->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button29->BackColor = System::Drawing::SystemColors::Control;
			this->button29->Font = (gcnew System::Drawing::Font(L"Tw Cen MT Condensed Extra Bold", 16.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button29->Location = System::Drawing::Point(337, 460);
			this->button29->Name = L"button29";
			this->button29->Size = System::Drawing::Size(79, 81);
			this->button29->TabIndex = 48;
			this->button29->UseVisualStyleBackColor = false;
			this->button29->Click += gcnew System::EventHandler(this, &Four_XO::button1_Click);
			// 
			// button30
			// 
			this->button30->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button30->BackColor = System::Drawing::SystemColors::Control;
			this->button30->Font = (gcnew System::Drawing::Font(L"Tw Cen MT Condensed Extra Bold", 16.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button30->Location = System::Drawing::Point(422, 460);
			this->button30->Name = L"button30";
			this->button30->Size = System::Drawing::Size(79, 81);
			this->button30->TabIndex = 47;
			this->button30->UseVisualStyleBackColor = false;
			this->button30->Click += gcnew System::EventHandler(this, &Four_XO::button2_Click);
			// 
			// button31
			// 
			this->button31->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button31->BackColor = System::Drawing::SystemColors::Control;
			this->button31->Font = (gcnew System::Drawing::Font(L"Tw Cen MT Condensed Extra Bold", 16.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button31->Location = System::Drawing::Point(507, 460);
			this->button31->Name = L"button31";
			this->button31->Size = System::Drawing::Size(79, 81);
			this->button31->TabIndex = 46;
			this->button31->UseVisualStyleBackColor = false;
			this->button31->Click += gcnew System::EventHandler(this, &Four_XO::button3_Click);
			// 
			// button32
			// 
			this->button32->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button32->BackColor = System::Drawing::SystemColors::Control;
			this->button32->Font = (gcnew System::Drawing::Font(L"Tw Cen MT Condensed Extra Bold", 16.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button32->Location = System::Drawing::Point(592, 460);
			this->button32->Name = L"button32";
			this->button32->Size = System::Drawing::Size(79, 81);
			this->button32->TabIndex = 45;
			this->button32->UseVisualStyleBackColor = false;
			this->button32->Click += gcnew System::EventHandler(this, &Four_XO::button4_Click);
			// 
			// button33
			// 
			this->button33->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button33->BackColor = System::Drawing::SystemColors::Control;
			this->button33->Font = (gcnew System::Drawing::Font(L"Tw Cen MT Condensed Extra Bold", 16.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button33->Location = System::Drawing::Point(677, 460);
			this->button33->Name = L"button33";
			this->button33->Size = System::Drawing::Size(79, 81);
			this->button33->TabIndex = 44;
			this->button33->UseVisualStyleBackColor = false;
			this->button33->Click += gcnew System::EventHandler(this, &Four_XO::button5_Click);
			// 
			// button34
			// 
			this->button34->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button34->BackColor = System::Drawing::SystemColors::Control;
			this->button34->Font = (gcnew System::Drawing::Font(L"Tw Cen MT Condensed Extra Bold", 16.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button34->Location = System::Drawing::Point(762, 460);
			this->button34->Name = L"button34";
			this->button34->Size = System::Drawing::Size(79, 81);
			this->button34->TabIndex = 43;
			this->button34->UseVisualStyleBackColor = false;
			this->button34->Click += gcnew System::EventHandler(this, &Four_XO::button6_Click);
			// 
			// button35
			// 
			this->button35->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button35->BackColor = System::Drawing::SystemColors::Control;
			this->button35->Font = (gcnew System::Drawing::Font(L"Tw Cen MT Condensed Extra Bold", 16.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button35->Location = System::Drawing::Point(847, 460);
			this->button35->Name = L"button35";
			this->button35->Size = System::Drawing::Size(79, 81);
			this->button35->TabIndex = 42;
			this->button35->UseVisualStyleBackColor = false;
			this->button35->Click += gcnew System::EventHandler(this, &Four_XO::button7_Click);
			// 
			// button36
			// 
			this->button36->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button36->BackColor = System::Drawing::SystemColors::Control;
			this->button36->Font = (gcnew System::Drawing::Font(L"Tw Cen MT Condensed Extra Bold", 16.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button36->Location = System::Drawing::Point(337, 547);
			this->button36->Name = L"button36";
			this->button36->Size = System::Drawing::Size(79, 81);
			this->button36->TabIndex = 55;
			this->button36->UseVisualStyleBackColor = false;
			this->button36->Click += gcnew System::EventHandler(this, &Four_XO::button1_Click);
			// 
			// button37
			// 
			this->button37->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button37->BackColor = System::Drawing::SystemColors::Control;
			this->button37->Font = (gcnew System::Drawing::Font(L"Tw Cen MT Condensed Extra Bold", 16.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button37->Location = System::Drawing::Point(422, 547);
			this->button37->Name = L"button37";
			this->button37->Size = System::Drawing::Size(79, 81);
			this->button37->TabIndex = 54;
			this->button37->UseVisualStyleBackColor = false;
			this->button37->Click += gcnew System::EventHandler(this, &Four_XO::button2_Click);
			// 
			// button38
			// 
			this->button38->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button38->BackColor = System::Drawing::SystemColors::Control;
			this->button38->Font = (gcnew System::Drawing::Font(L"Tw Cen MT Condensed Extra Bold", 16.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button38->Location = System::Drawing::Point(507, 547);
			this->button38->Name = L"button38";
			this->button38->Size = System::Drawing::Size(79, 81);
			this->button38->TabIndex = 53;
			this->button38->UseVisualStyleBackColor = false;
			this->button38->Click += gcnew System::EventHandler(this, &Four_XO::button3_Click);
			// 
			// button39
			// 
			this->button39->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button39->BackColor = System::Drawing::SystemColors::Control;
			this->button39->Font = (gcnew System::Drawing::Font(L"Tw Cen MT Condensed Extra Bold", 16.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button39->Location = System::Drawing::Point(592, 547);
			this->button39->Name = L"button39";
			this->button39->Size = System::Drawing::Size(79, 81);
			this->button39->TabIndex = 52;
			this->button39->UseVisualStyleBackColor = false;
			this->button39->Click += gcnew System::EventHandler(this, &Four_XO::button4_Click);
			// 
			// button40
			// 
			this->button40->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button40->BackColor = System::Drawing::SystemColors::Control;
			this->button40->Font = (gcnew System::Drawing::Font(L"Tw Cen MT Condensed Extra Bold", 16.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button40->Location = System::Drawing::Point(677, 547);
			this->button40->Name = L"button40";
			this->button40->Size = System::Drawing::Size(79, 81);
			this->button40->TabIndex = 51;
			this->button40->UseVisualStyleBackColor = false;
			this->button40->Click += gcnew System::EventHandler(this, &Four_XO::button5_Click);
			// 
			// button41
			// 
			this->button41->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button41->BackColor = System::Drawing::SystemColors::Control;
			this->button41->Font = (gcnew System::Drawing::Font(L"Tw Cen MT Condensed Extra Bold", 16.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button41->Location = System::Drawing::Point(762, 547);
			this->button41->Name = L"button41";
			this->button41->Size = System::Drawing::Size(79, 81);
			this->button41->TabIndex = 50;
			this->button41->UseVisualStyleBackColor = false;
			this->button41->Click += gcnew System::EventHandler(this, &Four_XO::button6_Click);
			// 
			// button42
			// 
			this->button42->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button42->BackColor = System::Drawing::SystemColors::Control;
			this->button42->Font = (gcnew System::Drawing::Font(L"Tw Cen MT Condensed Extra Bold", 16.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button42->Location = System::Drawing::Point(847, 547);
			this->button42->Name = L"button42";
			this->button42->Size = System::Drawing::Size(79, 81);
			this->button42->TabIndex = 49;
			this->button42->UseVisualStyleBackColor = false;
			this->button42->Click += gcnew System::EventHandler(this, &Four_XO::button7_Click);
			// 
			// button43
			// 
			this->button43->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button43->Font = (gcnew System::Drawing::Font(L"Tw Cen MT Condensed Extra Bold", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button43->Location = System::Drawing::Point(507, 651);
			this->button43->Name = L"button43";
			this->button43->Size = System::Drawing::Size(248, 42);
			this->button43->TabIndex = 56;
			this->button43->Text = L"Reset";
			this->button43->UseVisualStyleBackColor = true;
			this->button43->Click += gcnew System::EventHandler(this, &Four_XO::button43_Click);
			// 
			// Four_XO
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::HotTrack;
			this->ClientSize = System::Drawing::Size(1250, 713);
			this->Controls->Add(this->button43);
			this->Controls->Add(this->button36);
			this->Controls->Add(this->button37);
			this->Controls->Add(this->button38);
			this->Controls->Add(this->button39);
			this->Controls->Add(this->button40);
			this->Controls->Add(this->button41);
			this->Controls->Add(this->button42);
			this->Controls->Add(this->button29);
			this->Controls->Add(this->button30);
			this->Controls->Add(this->button31);
			this->Controls->Add(this->button32);
			this->Controls->Add(this->button33);
			this->Controls->Add(this->button34);
			this->Controls->Add(this->button35);
			this->Controls->Add(this->button22);
			this->Controls->Add(this->button23);
			this->Controls->Add(this->button24);
			this->Controls->Add(this->button25);
			this->Controls->Add(this->button26);
			this->Controls->Add(this->button27);
			this->Controls->Add(this->button28);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->button18);
			this->Controls->Add(this->button19);
			this->Controls->Add(this->button20);
			this->Controls->Add(this->button21);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"Four_XO";
			this->Text = L"Four_XO";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		for (int i = 36; i >= 1; i -= 7) {
			if (Controls["button" + i]->Text == "") {
				Controls["button" + i]->Text = current_symbol;
				after_click();
				break;
			}
		}
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		for (int i = 37; i >= 2; i -= 7) {
			if (Controls["button" + i]->Text == "") {
				Controls["button" + i]->Text = current_symbol;
				after_click();
				break;
			}
		}
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		for (int i = 38; i >= 3; i -= 7) {
			if (Controls["button" + i]->Text == "") {
				Controls["button" + i]->Text = current_symbol;
				after_click();
				break;
			}
		}
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		for (int i = 39; i >= 4; i -= 7) {
			if (Controls["button" + i]->Text == "") {
				Controls["button" + i]->Text = current_symbol;
				after_click();
				break;
			}
		}
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		for (int i = 40; i >= 5; i -= 7) {
			if (Controls["button" + i]->Text == "") {
				Controls["button" + i]->Text = current_symbol;
				after_click();
				break;
			}
		}
	}
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
		for (int i = 41; i >= 6; i -= 7) {
			if (Controls["button" + i]->Text == "") {
				Controls["button" + i]->Text = current_symbol;
				after_click();
				break;
			}
		}
	}
	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
		for (int i = 42; i >= 7; i -= 7) {
			if (Controls["button" + i]->Text == "") {
				Controls["button" + i]->Text = current_symbol;
				after_click();
				break;
			}
		}
	}
	private: System::Void button43_Click(System::Object^ sender, System::EventArgs^ e) {
		Reset();
	}
};
}
