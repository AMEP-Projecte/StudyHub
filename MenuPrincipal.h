#pragma once


namespace StudyHub {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de MenuPrincipal
	/// </summary>
	public ref class MenuPrincipal : public System::Windows::Forms::Form
	{
	public:
		MenuPrincipal(void)
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
		~MenuPrincipal()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ studyHyb;
	private: System::Windows::Forms::Label^ menuPrincipal;


	private: System::Windows::Forms::Panel^ panelMenu;
	private: System::Windows::Forms::Panel^ PanelLogo;
	private: System::Windows::Forms::Button^ ButtonMenu;
	private: System::Windows::Forms::Panel^ panelTitle;
	private: System::Windows::Forms::Label^ LabelTitle;
	private: System::Windows::Forms::Button^ ButtonCloseForm;
	private: System::Windows::Forms::Panel^ PanelContainer;
	private: System::Windows::Forms::Button^ ButtonMinimized;

	private: System::Windows::Forms::Button^ ButtonMaximized;
	private: System::Windows::Forms::Button^ ButtonMenuEstudiant;
	private: System::Windows::Forms::Button^ ButtonMenuGrups;
	private: System::Windows::Forms::Button^ ButtonMenuAdmin;
	private: System::Windows::Forms::Button^ ButtonMenuProveidors;
	private: System::Windows::Forms::Button^ buttonMenuSessions;







	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MenuPrincipal::typeid));
			this->studyHyb = (gcnew System::Windows::Forms::Label());
			this->panelMenu = (gcnew System::Windows::Forms::Panel());
			this->buttonMenuSessions = (gcnew System::Windows::Forms::Button());
			this->ButtonMenuAdmin = (gcnew System::Windows::Forms::Button());
			this->ButtonMenuProveidors = (gcnew System::Windows::Forms::Button());
			this->ButtonMenuGrups = (gcnew System::Windows::Forms::Button());
			this->ButtonMenuEstudiant = (gcnew System::Windows::Forms::Button());
			this->ButtonMenu = (gcnew System::Windows::Forms::Button());
			this->PanelLogo = (gcnew System::Windows::Forms::Panel());
			this->panelTitle = (gcnew System::Windows::Forms::Panel());
			this->ButtonMinimized = (gcnew System::Windows::Forms::Button());
			this->ButtonMaximized = (gcnew System::Windows::Forms::Button());
			this->ButtonCloseForm = (gcnew System::Windows::Forms::Button());
			this->LabelTitle = (gcnew System::Windows::Forms::Label());
			this->PanelContainer = (gcnew System::Windows::Forms::Panel());
			this->panelMenu->SuspendLayout();
			this->PanelLogo->SuspendLayout();
			this->panelTitle->SuspendLayout();
			this->SuspendLayout();
			// 
			// studyHyb
			// 
			this->studyHyb->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->studyHyb->AutoSize = true;
			this->studyHyb->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 24, System::Drawing::FontStyle::Bold));
			this->studyHyb->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->studyHyb->Location = System::Drawing::Point(11, 13);
			this->studyHyb->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->studyHyb->Name = L"studyHyb";
			this->studyHyb->Size = System::Drawing::Size(178, 42);
			this->studyHyb->TabIndex = 0;
			this->studyHyb->Text = L"StudyHub";
			this->studyHyb->Click += gcnew System::EventHandler(this, &MenuPrincipal::label1_Click);
			// 
			// panelMenu
			// 
			this->panelMenu->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->panelMenu->Controls->Add(this->buttonMenuSessions);
			this->panelMenu->Controls->Add(this->ButtonMenuAdmin);
			this->panelMenu->Controls->Add(this->ButtonMenuProveidors);
			this->panelMenu->Controls->Add(this->ButtonMenuGrups);
			this->panelMenu->Controls->Add(this->ButtonMenuEstudiant);
			this->panelMenu->Controls->Add(this->ButtonMenu);
			this->panelMenu->Controls->Add(this->PanelLogo);
			this->panelMenu->Dock = System::Windows::Forms::DockStyle::Left;
			this->panelMenu->Location = System::Drawing::Point(0, 0);
			this->panelMenu->Name = L"panelMenu";
			this->panelMenu->Size = System::Drawing::Size(220, 395);
			this->panelMenu->TabIndex = 5;
			// 
			// buttonMenuSessions
			// 
			this->buttonMenuSessions->Dock = System::Windows::Forms::DockStyle::Top;
			this->buttonMenuSessions->FlatAppearance->BorderSize = 0;
			this->buttonMenuSessions->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonMenuSessions->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 12, System::Drawing::FontStyle::Bold));
			this->buttonMenuSessions->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->buttonMenuSessions->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"buttonMenuSessions.Image")));
			this->buttonMenuSessions->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->buttonMenuSessions->Location = System::Drawing::Point(0, 390);
			this->buttonMenuSessions->Name = L"buttonMenuSessions";
			this->buttonMenuSessions->Padding = System::Windows::Forms::Padding(3, 0, 0, 0);
			this->buttonMenuSessions->Size = System::Drawing::Size(220, 64);
			this->buttonMenuSessions->TabIndex = 12;
			this->buttonMenuSessions->Text = L" Menu Sessions";
			this->buttonMenuSessions->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->buttonMenuSessions->UseVisualStyleBackColor = true;
			this->buttonMenuSessions->Click += gcnew System::EventHandler(this, &MenuPrincipal::buttonMenuSessions_Click);
			// 
			// ButtonMenuAdmin
			// 
			this->ButtonMenuAdmin->Dock = System::Windows::Forms::DockStyle::Top;
			this->ButtonMenuAdmin->FlatAppearance->BorderSize = 0;
			this->ButtonMenuAdmin->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->ButtonMenuAdmin->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 12, System::Drawing::FontStyle::Bold));
			this->ButtonMenuAdmin->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->ButtonMenuAdmin->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ButtonMenuAdmin.Image")));
			this->ButtonMenuAdmin->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->ButtonMenuAdmin->Location = System::Drawing::Point(0, 326);
			this->ButtonMenuAdmin->Name = L"ButtonMenuAdmin";
			this->ButtonMenuAdmin->Padding = System::Windows::Forms::Padding(3, 0, 0, 0);
			this->ButtonMenuAdmin->Size = System::Drawing::Size(220, 64);
			this->ButtonMenuAdmin->TabIndex = 11;
			this->ButtonMenuAdmin->Text = L"      Men\u00fa Administrador";
			this->ButtonMenuAdmin->UseVisualStyleBackColor = true;
			this->ButtonMenuAdmin->Click += gcnew System::EventHandler(this, &MenuPrincipal::ButtonMenuAdmin_Click);
			// 
			// ButtonMenuProveidors
			// 
			this->ButtonMenuProveidors->Dock = System::Windows::Forms::DockStyle::Top;
			this->ButtonMenuProveidors->FlatAppearance->BorderSize = 0;
			this->ButtonMenuProveidors->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->ButtonMenuProveidors->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 12, System::Drawing::FontStyle::Bold));
			this->ButtonMenuProveidors->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->ButtonMenuProveidors->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ButtonMenuProveidors.Image")));
			this->ButtonMenuProveidors->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->ButtonMenuProveidors->Location = System::Drawing::Point(0, 262);
			this->ButtonMenuProveidors->Name = L"ButtonMenuProveidors";
			this->ButtonMenuProveidors->Padding = System::Windows::Forms::Padding(3, 0, 0, 0);
			this->ButtonMenuProveidors->Size = System::Drawing::Size(220, 64);
			this->ButtonMenuProveidors->TabIndex = 10;
			this->ButtonMenuProveidors->Text = L" Men\u00fa Proveidors";
			this->ButtonMenuProveidors->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->ButtonMenuProveidors->UseVisualStyleBackColor = true;
			this->ButtonMenuProveidors->Click += gcnew System::EventHandler(this, &MenuPrincipal::ButtonMenuProveidors_Click);
			// 
			// ButtonMenuGrups
			// 
			this->ButtonMenuGrups->Dock = System::Windows::Forms::DockStyle::Top;
			this->ButtonMenuGrups->FlatAppearance->BorderSize = 0;
			this->ButtonMenuGrups->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->ButtonMenuGrups->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 12, System::Drawing::FontStyle::Bold));
			this->ButtonMenuGrups->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->ButtonMenuGrups->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ButtonMenuGrups.Image")));
			this->ButtonMenuGrups->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->ButtonMenuGrups->Location = System::Drawing::Point(0, 198);
			this->ButtonMenuGrups->Name = L"ButtonMenuGrups";
			this->ButtonMenuGrups->Padding = System::Windows::Forms::Padding(3, 0, 0, 0);
			this->ButtonMenuGrups->Size = System::Drawing::Size(220, 64);
			this->ButtonMenuGrups->TabIndex = 9;
			this->ButtonMenuGrups->Text = L" Men\u00fa Grups";
			this->ButtonMenuGrups->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->ButtonMenuGrups->UseVisualStyleBackColor = true;
			this->ButtonMenuGrups->Click += gcnew System::EventHandler(this, &MenuPrincipal::ButtonMenuGrups_Click);
			// 
			// ButtonMenuEstudiant
			// 
			this->ButtonMenuEstudiant->Dock = System::Windows::Forms::DockStyle::Top;
			this->ButtonMenuEstudiant->FlatAppearance->BorderSize = 0;
			this->ButtonMenuEstudiant->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->ButtonMenuEstudiant->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 12, System::Drawing::FontStyle::Bold));
			this->ButtonMenuEstudiant->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->ButtonMenuEstudiant->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ButtonMenuEstudiant.Image")));
			this->ButtonMenuEstudiant->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->ButtonMenuEstudiant->Location = System::Drawing::Point(0, 134);
			this->ButtonMenuEstudiant->Name = L"ButtonMenuEstudiant";
			this->ButtonMenuEstudiant->Padding = System::Windows::Forms::Padding(3, 0, 0, 0);
			this->ButtonMenuEstudiant->Size = System::Drawing::Size(220, 64);
			this->ButtonMenuEstudiant->TabIndex = 8;
			this->ButtonMenuEstudiant->Text = L" Men\u00fa Estudiant";
			this->ButtonMenuEstudiant->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->ButtonMenuEstudiant->UseVisualStyleBackColor = true;
			this->ButtonMenuEstudiant->Click += gcnew System::EventHandler(this, &MenuPrincipal::ButtonMenuEstudiant_Click);
			// 
			// ButtonMenu
			// 
			this->ButtonMenu->Dock = System::Windows::Forms::DockStyle::Top;
			this->ButtonMenu->FlatAppearance->BorderSize = 0;
			this->ButtonMenu->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->ButtonMenu->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 12, System::Drawing::FontStyle::Bold));
			this->ButtonMenu->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->ButtonMenu->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ButtonMenu.Image")));
			this->ButtonMenu->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->ButtonMenu->Location = System::Drawing::Point(0, 70);
			this->ButtonMenu->Name = L"ButtonMenu";
			this->ButtonMenu->Padding = System::Windows::Forms::Padding(3, 0, 0, 0);
			this->ButtonMenu->Size = System::Drawing::Size(220, 64);
			this->ButtonMenu->TabIndex = 7;
			this->ButtonMenu->Text = L" Men\u00fa Principal";
			this->ButtonMenu->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->ButtonMenu->UseVisualStyleBackColor = true;
			this->ButtonMenu->Click += gcnew System::EventHandler(this, &MenuPrincipal::buttonMenu);
			// 
			// PanelLogo
			// 
			this->PanelLogo->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->PanelLogo->Controls->Add(this->studyHyb);
			this->PanelLogo->Dock = System::Windows::Forms::DockStyle::Top;
			this->PanelLogo->Location = System::Drawing::Point(0, 0);
			this->PanelLogo->Name = L"PanelLogo";
			this->PanelLogo->Size = System::Drawing::Size(220, 70);
			this->PanelLogo->TabIndex = 6;
			this->PanelLogo->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MenuPrincipal::PanelLogo_Paint);
			// 
			// panelTitle
			// 
			this->panelTitle->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->panelTitle->Controls->Add(this->ButtonMinimized);
			this->panelTitle->Controls->Add(this->ButtonMaximized);
			this->panelTitle->Controls->Add(this->ButtonCloseForm);
			this->panelTitle->Controls->Add(this->LabelTitle);
			this->panelTitle->Dock = System::Windows::Forms::DockStyle::Top;
			this->panelTitle->Location = System::Drawing::Point(220, 0);
			this->panelTitle->Name = L"panelTitle";
			this->panelTitle->Size = System::Drawing::Size(617, 70);
			this->panelTitle->TabIndex = 6;
			this->panelTitle->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MenuPrincipal::panelTitle_Paint);
			// 
			// ButtonMinimized
			// 
			this->ButtonMinimized->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->ButtonMinimized->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->ButtonMinimized->Dock = System::Windows::Forms::DockStyle::Right;
			this->ButtonMinimized->FlatAppearance->BorderSize = 0;
			this->ButtonMinimized->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->ButtonMinimized->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ButtonMinimized.Image")));
			this->ButtonMinimized->Location = System::Drawing::Point(479, 0);
			this->ButtonMinimized->Name = L"ButtonMinimized";
			this->ButtonMinimized->Size = System::Drawing::Size(46, 70);
			this->ButtonMinimized->TabIndex = 3;
			this->ButtonMinimized->UseVisualStyleBackColor = false;
			this->ButtonMinimized->Click += gcnew System::EventHandler(this, &MenuPrincipal::ButtonMinimized_Click);
			// 
			// ButtonMaximized
			// 
			this->ButtonMaximized->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->ButtonMaximized->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->ButtonMaximized->Dock = System::Windows::Forms::DockStyle::Right;
			this->ButtonMaximized->FlatAppearance->BorderSize = 0;
			this->ButtonMaximized->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->ButtonMaximized->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ButtonMaximized.Image")));
			this->ButtonMaximized->Location = System::Drawing::Point(525, 0);
			this->ButtonMaximized->Name = L"ButtonMaximized";
			this->ButtonMaximized->Size = System::Drawing::Size(46, 70);
			this->ButtonMaximized->TabIndex = 2;
			this->ButtonMaximized->UseVisualStyleBackColor = false;
			this->ButtonMaximized->Click += gcnew System::EventHandler(this, &MenuPrincipal::ButtonMaximized_Click);
			// 
			// ButtonCloseForm
			// 
			this->ButtonCloseForm->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->ButtonCloseForm->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->ButtonCloseForm->Dock = System::Windows::Forms::DockStyle::Right;
			this->ButtonCloseForm->FlatAppearance->BorderSize = 0;
			this->ButtonCloseForm->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->ButtonCloseForm->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ButtonCloseForm.Image")));
			this->ButtonCloseForm->Location = System::Drawing::Point(571, 0);
			this->ButtonCloseForm->Name = L"ButtonCloseForm";
			this->ButtonCloseForm->Size = System::Drawing::Size(46, 70);
			this->ButtonCloseForm->TabIndex = 1;
			this->ButtonCloseForm->UseVisualStyleBackColor = false;
			this->ButtonCloseForm->Click += gcnew System::EventHandler(this, &MenuPrincipal::ButtonCloseForm_Click);
			// 
			// LabelTitle
			// 
			this->LabelTitle->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->LabelTitle->AutoSize = true;
			this->LabelTitle->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 26, System::Drawing::FontStyle::Bold));
			this->LabelTitle->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->LabelTitle->Location = System::Drawing::Point(236, 10);
			this->LabelTitle->Name = L"LabelTitle";
			this->LabelTitle->Size = System::Drawing::Size(133, 46);
			this->LabelTitle->TabIndex = 0;
			this->LabelTitle->Text = L"MEN\u00da";
			this->LabelTitle->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// PanelContainer
			// 
			this->PanelContainer->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->PanelContainer->Dock = System::Windows::Forms::DockStyle::Fill;
			this->PanelContainer->ForeColor = System::Drawing::Color::Black;
			this->PanelContainer->Location = System::Drawing::Point(220, 70);
			this->PanelContainer->Name = L"PanelContainer";
			this->PanelContainer->Size = System::Drawing::Size(617, 325);
			this->PanelContainer->TabIndex = 7;
			this->PanelContainer->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MenuPrincipal::PanelContainer_Paint);
			// 
			// MenuPrincipal
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->ClientSize = System::Drawing::Size(837, 395);
			this->Controls->Add(this->PanelContainer);
			this->Controls->Add(this->panelTitle);
			this->Controls->Add(this->panelMenu);
			this->ForeColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"MenuPrincipal";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MenuPrincipal";
			this->Load += gcnew System::EventHandler(this, &MenuPrincipal::MenuPrincipal_Load);
			this->panelMenu->ResumeLayout(false);
			this->PanelLogo->ResumeLayout(false);
			this->PanelLogo->PerformLayout();
			this->panelTitle->ResumeLayout(false);
			this->panelTitle->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	}


private: 
	bool dragging;
	Point offset;
	static MenuPrincipal^ InistanceMenuPrincipal = nullptr;

public: static MenuPrincipal^ getInstance();
	
// Abre i cierra Forms en el Panel
public: System::Void AbrirFormularioEnPanel(Form^ formHijo);

// Abrir SubMenu:
public: System::Void AbrirSubFormularioEnPanel(Form^ formHijo);

//Hacer Visible (Para Estudiantes):
public: System::Void HacerVisible();

//Hacer Visible (Para Provedores):
public: System::Void HacerVisibleProvedor();

//Hacer Visible (Para Admin):
public: System::Void HacerVisibleAdmin();

//IniMenuPrincipal:
private: System::Void FormPrincipal_Load();

public: System::Void HacerInivisible_Load();

// Arrastrar la pestaña
private: System::Void MenuPrincipal_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);

private: System::Void MenuPrincipal_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);

private: System::Void MenuPrincipal_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);

private: System::Void sortir_Click(System::Object^ sender, System::EventArgs^ e);

private: System::Void MenuPrincipal_Load(System::Object^ sender, System::EventArgs^ e);

private: System::Void buttonMenu(System::Object^ sender, System::EventArgs^ e);

private: System::Void PanelContainer_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
 }
private: System::Void ButtonCloseForm_Click(System::Object^ sender, System::EventArgs^ e);

private: System::Void ButtonMaximized_Click(System::Object^ sender, System::EventArgs^ e);

private: System::Void ButtonMinimized_Click(System::Object^ sender, System::EventArgs^ e);

private: System::Void ButtonMenuEstudiant_Click(System::Object^ sender, System::EventArgs^ e);

private: System::Void ButtonMenuGrups_Click(System::Object^ sender, System::EventArgs^ e);

private: System::Void panelTitle_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e);

private: System::Void ButtonMenuProveidors_Click(System::Object^ sender, System::EventArgs^ e);

private: System::Void ButtonMenuAdmin_Click(System::Object^ sender, System::EventArgs^ e);

private: System::Void PanelLogo_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void buttonMenuSessions_Click(System::Object^ sender, System::EventArgs^ e);

};
}
