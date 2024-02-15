#pragma once
namespace UnbeatableXO {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Three_XO
	/// </summary>
	public ref class Three_XO : public System::Windows::Forms::Form
	{
	public:
		Three_XO(void)
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
		~Three_XO()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Label^ label1;
	public: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;

	private: System::Windows::Forms::Label^ label5;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		String^ current_symbol = "X";
		int n_moves = 0;
		String^ player1;
		String^ player2;
	private: System::Windows::Forms::Button^ button10;
		   System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		bool is_winner() {
			if (button1->Text != "" && button1->Text == button2->Text && button2->Text == button3->Text) {
				this->button1->BackColor = System::Drawing::SystemColors::ActiveBorder;
				this->button2->BackColor = System::Drawing::SystemColors::ActiveBorder;
				this->button3->BackColor = System::Drawing::SystemColors::ActiveBorder;
				return true;
			}
			if (button4->Text != "" && button4->Text == button5->Text && button5->Text == button6->Text) {
				this->button4->BackColor = System::Drawing::SystemColors::ActiveBorder;
				this->button5->BackColor = System::Drawing::SystemColors::ActiveBorder;
				this->button6->BackColor = System::Drawing::SystemColors::ActiveBorder;
				return true;
			}
			if (button7->Text != "" && button7->Text == button8->Text && button8->Text == button9->Text) {
				this->button7->BackColor = System::Drawing::SystemColors::ActiveBorder;
				this->button8->BackColor = System::Drawing::SystemColors::ActiveBorder;
				this->button9->BackColor = System::Drawing::SystemColors::ActiveBorder;
				return true;
			}
			if (button1->Text != "" && button1->Text == button4->Text && button4->Text == button7->Text) {
				this->button1->BackColor = System::Drawing::SystemColors::ActiveBorder;
				this->button4->BackColor = System::Drawing::SystemColors::ActiveBorder;
				this->button7->BackColor = System::Drawing::SystemColors::ActiveBorder;
				return true;
			}
			if (button2->Text != "" && button2->Text == button5->Text && button5->Text == button8->Text) {
				this->button2->BackColor = System::Drawing::SystemColors::ActiveBorder;
				this->button5->BackColor = System::Drawing::SystemColors::ActiveBorder;
				this->button8->BackColor = System::Drawing::SystemColors::ActiveBorder;
				return true;
			}
			if (button3->Text != "" && button3->Text == button6->Text && button6->Text == button9->Text) {
				this->button3->BackColor = System::Drawing::SystemColors::ActiveBorder;
				this->button6->BackColor = System::Drawing::SystemColors::ActiveBorder;
				this->button9->BackColor = System::Drawing::SystemColors::ActiveBorder;
				return true;
			}
			if (button1->Text != "" && button1->Text == button5->Text && button5->Text == button9->Text) {
				this->button1->BackColor = System::Drawing::SystemColors::ActiveBorder;
				this->button5->BackColor = System::Drawing::SystemColors::ActiveBorder;
				this->button9->BackColor = System::Drawing::SystemColors::ActiveBorder;
				return true;
			}
			if (button3->Text != "" && button3->Text == button5->Text && button5->Text == button7->Text) {
				this->button3->BackColor = System::Drawing::SystemColors::ActiveBorder;
				this->button5->BackColor = System::Drawing::SystemColors::ActiveBorder;
				this->button7->BackColor = System::Drawing::SystemColors::ActiveBorder;
				return true;
			}

			return false;
		}
		bool is_draw() {
			return n_moves == 9 && !is_winner();
		}
		void Disable() {
			for (int i = 1; i <= 9; i++) {
				if (Controls["button" + i]->Text == "")
					Controls["button" + i]->Enabled = false;
			}
		}
		void Reset() {
			for (int i = 1; i <= 9; i++) {
				Controls["button" + i]->Enabled = true;
				Controls["button" + i]->Text = "";
				Controls["button" + i]->BackColor = System::Drawing::SystemColors::Control;
			}
			n_moves = 0;
			current_symbol = "X";
			label2->Text = player1;
			label5->Text = Convert::ToString(n_moves);
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
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button1->BackColor = System::Drawing::SystemColors::Control;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Font = (gcnew System::Drawing::Font(L"Tw Cen MT Condensed Extra Bold", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button1->Location = System::Drawing::Point(449, 187);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(116, 113);
			this->button1->TabIndex = 0;
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Three_XO::button_Click);
			// 
			// button2
			// 
			this->button2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button2->BackColor = System::Drawing::SystemColors::Control;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button2->Font = (gcnew System::Drawing::Font(L"Tw Cen MT Condensed Extra Bold", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(571, 187);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(116, 113);
			this->button2->TabIndex = 1;
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Three_XO::button_Click);
			// 
			// button3
			// 
			this->button3->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button3->BackColor = System::Drawing::SystemColors::Control;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button3->Font = (gcnew System::Drawing::Font(L"Tw Cen MT Condensed Extra Bold", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(693, 187);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(116, 113);
			this->button3->TabIndex = 2;
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Three_XO::button_Click);
			// 
			// button4
			// 
			this->button4->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button4->BackColor = System::Drawing::SystemColors::Control;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button4->Font = (gcnew System::Drawing::Font(L"Tw Cen MT Condensed Extra Bold", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(449, 306);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(116, 113);
			this->button4->TabIndex = 3;
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &Three_XO::button_Click);
			// 
			// button5
			// 
			this->button5->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button5->BackColor = System::Drawing::SystemColors::Control;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button5->Font = (gcnew System::Drawing::Font(L"Tw Cen MT Condensed Extra Bold", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(571, 306);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(116, 113);
			this->button5->TabIndex = 4;
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &Three_XO::button_Click);
			// 
			// button6
			// 
			this->button6->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button6->BackColor = System::Drawing::SystemColors::Control;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button6->Font = (gcnew System::Drawing::Font(L"Tw Cen MT Condensed Extra Bold", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->Location = System::Drawing::Point(693, 306);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(116, 113);
			this->button6->TabIndex = 5;
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &Three_XO::button_Click);
			// 
			// button7
			// 
			this->button7->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button7->BackColor = System::Drawing::SystemColors::Control;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button7->Font = (gcnew System::Drawing::Font(L"Tw Cen MT Condensed Extra Bold", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->Location = System::Drawing::Point(449, 425);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(116, 113);
			this->button7->TabIndex = 6;
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &Three_XO::button_Click);
			// 
			// button8
			// 
			this->button8->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button8->BackColor = System::Drawing::SystemColors::Control;
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button8->Font = (gcnew System::Drawing::Font(L"Tw Cen MT Condensed Extra Bold", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->Location = System::Drawing::Point(571, 425);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(116, 113);
			this->button8->TabIndex = 7;
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &Three_XO::button_Click);
			// 
			// button9
			// 
			this->button9->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button9->BackColor = System::Drawing::SystemColors::Control;
			this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button9->Font = (gcnew System::Drawing::Font(L"Tw Cen MT Condensed Extra Bold", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button9->Location = System::Drawing::Point(693, 425);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(116, 113);
			this->button9->TabIndex = 8;
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &Three_XO::button_Click);
			// 
			// label1
			// 
			this->label1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::Control;
			this->label1->Font = (gcnew System::Drawing::Font(L"Tw Cen MT Condensed Extra Bold", 19.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(491, 117);
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
			this->label2->Location = System::Drawing::Point(666, 117);
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
			this->label3->Location = System::Drawing::Point(26, 22);
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
			this->label5->Location = System::Drawing::Point(316, 22);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(20, 48);
			this->label5->TabIndex = 13;
			this->label5->Text = L"\r\n";
			// 
			// button10
			// 
			this->button10->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button10->BackColor = System::Drawing::SystemColors::Control;
			this->button10->Font = (gcnew System::Drawing::Font(L"Tw Cen MT Condensed Extra Bold", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button10->Location = System::Drawing::Point(542, 572);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(169, 60);
			this->button10->TabIndex = 14;
			this->button10->Text = L"Reset";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &Three_XO::button10_Click);
			// 
			// Three_XO
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->ClientSize = System::Drawing::Size(1256, 723);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"Three_XO";
			this->Text = L"Three_XO";
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
		private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
			Reset();
		}
};
}
