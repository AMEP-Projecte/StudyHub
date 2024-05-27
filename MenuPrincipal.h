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


	private: System::Windows::Forms::Button^ buttonMenuSessions;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ buttonGestioEspais;
	private: System::Windows::Forms::Button^ buttonGestioEstudiants;
	private: System::Windows::Forms::Button^ buttonGestioProveidors;








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
			this->buttonGestioEspais = (gcnew System::Windows::Forms::Button());
			this->buttonMenuSessions = (gcnew System::Windows::Forms::Button());
			this->ButtonMenuGrups = (gcnew System::Windows::Forms::Button());
			this->ButtonMenuEstudiant = (gcnew System::Windows::Forms::Button());
			this->ButtonMenu = (gcnew System::Windows::Forms::Button());
			this->PanelLogo = (gcnew System::Windows::Forms::Panel());
			this->panelTitle = (gcnew System::Windows::Forms::Panel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->ButtonMinimized = (gcnew System::Windows::Forms::Button());
			this->ButtonMaximized = (gcnew System::Windows::Forms::Button());
			this->ButtonCloseForm = (gcnew System::Windows::Forms::Button());
			this->LabelTitle = (gcnew System::Windows::Forms::Label());
			this->PanelContainer = (gcnew System::Windows::Forms::Panel());
			this->buttonGestioProveidors = (gcnew System::Windows::Forms::Button());
			this->buttonGestioEstudiants = (gcnew System::Windows::Forms::Button());
			this->panelMenu->SuspendLayout();
			this->PanelLogo->SuspendLayout();
			this->panelTitle->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
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
			this->studyHyb->Location = System::Drawing::Point(15, 16);
			this->studyHyb->Name = L"studyHyb";
			this->studyHyb->Size = System::Drawing::Size(225, 52);
			this->studyHyb->TabIndex = 0;
			this->studyHyb->Text = L"StudyHub";
			this->studyHyb->Click += gcnew System::EventHandler(this, &MenuPrincipal::label1_Click);
			// 
			// panelMenu
			// 
			this->panelMenu->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->panelMenu->Controls->Add(this->buttonGestioEstudiants);
			this->panelMenu->Controls->Add(this->buttonGestioProveidors);
			this->panelMenu->Controls->Add(this->buttonGestioEspais);
			this->panelMenu->Controls->Add(this->buttonMenuSessions);
			this->panelMenu->Controls->Add(this->ButtonMenuGrups);
			this->panelMenu->Controls->Add(this->ButtonMenuEstudiant);
			this->panelMenu->Controls->Add(this->ButtonMenu);
			this->panelMenu->Controls->Add(this->PanelLogo);
			this->panelMenu->Dock = System::Windows::Forms::DockStyle::Left;
			this->panelMenu->Location = System::Drawing::Point(0, 0);
			this->panelMenu->Margin = System::Windows::Forms::Padding(4);
			this->panelMenu->Name = L"panelMenu";
			this->panelMenu->Size = System::Drawing::Size(293, 486);
			this->panelMenu->TabIndex = 5;
			// 
			// buttonGestioEspais
			// 
			this->buttonGestioEspais->Dock = System::Windows::Forms::DockStyle::Top;
			this->buttonGestioEspais->FlatAppearance->BorderSize = 0;
			this->buttonGestioEspais->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonGestioEspais->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 12, System::Drawing::FontStyle::Bold));
			this->buttonGestioEspais->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->buttonGestioEspais->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"buttonGestioEspais.Image")));
			this->buttonGestioEspais->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->buttonGestioEspais->Location = System::Drawing::Point(0, 500);
			this->buttonGestioEspais->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->buttonGestioEspais->Name = L"buttonGestioEspais";
			this->buttonGestioEspais->Padding = System::Windows::Forms::Padding(4, 0, 0, 0);
			this->buttonGestioEspais->Size = System::Drawing::Size(330, 98);
			this->buttonGestioEspais->TabIndex = 13;
			this->buttonGestioEspais->Text = L"Gestio Espais";
			this->buttonGestioEspais->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->buttonGestioEspais->UseVisualStyleBackColor = true;
			this->buttonGestioEspais->Click += gcnew System::EventHandler(this, &MenuPrincipal::buttonGestioEspais_Click);
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
			this->buttonMenuSessions->Location = System::Drawing::Point(0, 481);
			this->buttonMenuSessions->Margin = System::Windows::Forms::Padding(4);
			this->buttonMenuSessions->Name = L"buttonMenuSessions";
			this->buttonMenuSessions->Padding = System::Windows::Forms::Padding(4, 0, 0, 0);
			this->buttonMenuSessions->Size = System::Drawing::Size(293, 79);
			this->buttonMenuSessions->TabIndex = 12;
			this->buttonMenuSessions->Text = L"Gestio Sessions";
			this->buttonMenuSessions->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->buttonMenuSessions->UseVisualStyleBackColor = true;
			this->buttonMenuSessions->Click += gcnew System::EventHandler(this, &MenuPrincipal::buttonMenuSessions_Click);
			// 
			// ButtonMenuAdmin
			// 
			/*this->ButtonMenuAdmin->Dock = System::Windows::Forms::DockStyle::Top;
			this->ButtonMenuAdmin->FlatAppearance->BorderSize = 0;
			this->ButtonMenuAdmin->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->ButtonMenuAdmin->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 12, System::Drawing::FontStyle::Bold));
			this->ButtonMenuAdmin->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->ButtonMenuAdmin->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ButtonMenuAdmin.Image")));
			this->ButtonMenuAdmin->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->ButtonMenuAdmin->Location = System::Drawing::Point(0, 402);
			this->ButtonMenuAdmin->Margin = System::Windows::Forms::Padding(4);
			this->ButtonMenuAdmin->Name = L"ButtonMenuAdmin";
			this->ButtonMenuAdmin->Padding = System::Windows::Forms::Padding(4, 0, 0, 0);
			this->ButtonMenuAdmin->Size = System::Drawing::Size(293, 79);
			this->ButtonMenuAdmin->TabIndex = 11;
			this->ButtonMenuAdmin->Text = L"      Menú Administrador";
			this->ButtonMenuAdmin->UseVisualStyleBackColor = true;
			this->ButtonMenuAdmin->Click += gcnew System::EventHandler(this, &MenuPrincipal::ButtonMenuAdmin_Click);*/
			// 
			// ButtonMenuProveidors
			// 
			/*this->ButtonMenuProveidors->Dock = System::Windows::Forms::DockStyle::Top;
			this->ButtonMenuProveidors->FlatAppearance->BorderSize = 0;
			this->ButtonMenuProveidors->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->ButtonMenuProveidors->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 12, System::Drawing::FontStyle::Bold));
			this->ButtonMenuProveidors->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->ButtonMenuProveidors->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ButtonMenuProveidors.Image")));
			this->ButtonMenuProveidors->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->ButtonMenuProveidors->Location = System::Drawing::Point(0, 323);
			this->ButtonMenuProveidors->Margin = System::Windows::Forms::Padding(4);
			this->ButtonMenuProveidors->Name = L"ButtonMenuProveidors";
			this->ButtonMenuProveidors->Padding = System::Windows::Forms::Padding(4, 0, 0, 0);
			this->ButtonMenuProveidors->Size = System::Drawing::Size(293, 79);
			this->ButtonMenuProveidors->TabIndex = 10;
			this->ButtonMenuProveidors->Text = L" Menú Proveidors";
			this->ButtonMenuProveidors->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->ButtonMenuProveidors->UseVisualStyleBackColor = true;
			this->ButtonMenuProveidors->Click += gcnew System::EventHandler(this, &MenuPrincipal::ButtonMenuProveidors_Click);*/
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
			this->ButtonMenuGrups->Location = System::Drawing::Point(0, 244);
			this->ButtonMenuGrups->Margin = System::Windows::Forms::Padding(4);
			this->ButtonMenuGrups->Name = L"ButtonMenuGrups";
			this->ButtonMenuGrups->Padding = System::Windows::Forms::Padding(4, 0, 0, 0);
			this->ButtonMenuGrups->Size = System::Drawing::Size(293, 79);
			this->ButtonMenuGrups->TabIndex = 9;
			this->ButtonMenuGrups->Text = L" Menú Grups";
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
			this->ButtonMenuEstudiant->Location = System::Drawing::Point(0, 165);
			this->ButtonMenuEstudiant->Margin = System::Windows::Forms::Padding(4);
			this->ButtonMenuEstudiant->Name = L"ButtonMenuEstudiant";
			this->ButtonMenuEstudiant->Padding = System::Windows::Forms::Padding(4, 0, 0, 0);
			this->ButtonMenuEstudiant->Size = System::Drawing::Size(293, 79);
			this->ButtonMenuEstudiant->TabIndex = 8;
			this->ButtonMenuEstudiant->Text = L" Menú Estudiant";
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
			this->ButtonMenu->Location = System::Drawing::Point(0, 86);
			this->ButtonMenu->Margin = System::Windows::Forms::Padding(4);
			this->ButtonMenu->Name = L"ButtonMenu";
			this->ButtonMenu->Padding = System::Windows::Forms::Padding(4, 0, 0, 0);
			this->ButtonMenu->Size = System::Drawing::Size(293, 79);
			this->ButtonMenu->TabIndex = 7;
			this->ButtonMenu->Text = L" Menú Principal";
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
			this->PanelLogo->Margin = System::Windows::Forms::Padding(4);
			this->PanelLogo->Name = L"PanelLogo";
			this->PanelLogo->Size = System::Drawing::Size(293, 86);
			this->PanelLogo->TabIndex = 6;
			this->PanelLogo->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MenuPrincipal::PanelLogo_Paint);
			// 
			// panelTitle
			// 
			this->panelTitle->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->panelTitle->Controls->Add(this->pictureBox1);
			this->panelTitle->Controls->Add(this->ButtonMinimized);
			this->panelTitle->Controls->Add(this->ButtonMaximized);
			this->panelTitle->Controls->Add(this->ButtonCloseForm);
			this->panelTitle->Controls->Add(this->LabelTitle);
			this->panelTitle->Dock = System::Windows::Forms::DockStyle::Top;
			this->panelTitle->Location = System::Drawing::Point(293, 0);
			this->panelTitle->Margin = System::Windows::Forms::Padding(4);
			this->panelTitle->Name = L"panelTitle";
			this->panelTitle->Size = System::Drawing::Size(823, 86);
			this->panelTitle->TabIndex = 6;
			this->panelTitle->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MenuPrincipal::panelTitle_Paint);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(0, 18);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(77, 68);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 4;
			this->pictureBox1->TabStop = false;
			// 
			// ButtonMinimized
			// 
			this->ButtonMinimized->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->ButtonMinimized->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->ButtonMinimized->Dock = System::Windows::Forms::DockStyle::Right;
			this->ButtonMinimized->FlatAppearance->BorderSize = 0;
			this->ButtonMinimized->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->ButtonMinimized->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ButtonMinimized.Image")));
			this->ButtonMinimized->Location = System::Drawing::Point(640, 0);
			this->ButtonMinimized->Margin = System::Windows::Forms::Padding(4);
			this->ButtonMinimized->Name = L"ButtonMinimized";
			this->ButtonMinimized->Size = System::Drawing::Size(61, 86);
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
			this->ButtonMaximized->Location = System::Drawing::Point(701, 0);
			this->ButtonMaximized->Margin = System::Windows::Forms::Padding(4);
			this->ButtonMaximized->Name = L"ButtonMaximized";
			this->ButtonMaximized->Size = System::Drawing::Size(61, 86);
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
			this->ButtonCloseForm->Location = System::Drawing::Point(762, 0);
			this->ButtonCloseForm->Margin = System::Windows::Forms::Padding(4);
			this->ButtonCloseForm->Name = L"ButtonCloseForm";
			this->ButtonCloseForm->Size = System::Drawing::Size(61, 86);
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
			this->LabelTitle->Location = System::Drawing::Point(315, 12);
			this->LabelTitle->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->LabelTitle->Name = L"LabelTitle";
			this->LabelTitle->Size = System::Drawing::Size(166, 58);
			this->LabelTitle->TabIndex = 0;
			this->LabelTitle->Text = L"MENÚ";
			this->LabelTitle->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// PanelContainer
			// 
			this->PanelContainer->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->PanelContainer->Dock = System::Windows::Forms::DockStyle::Fill;
			this->PanelContainer->ForeColor = System::Drawing::Color::Black;
			this->PanelContainer->Location = System::Drawing::Point(293, 86);
			this->PanelContainer->Margin = System::Windows::Forms::Padding(4);
			this->PanelContainer->Name = L"PanelContainer";
			this->PanelContainer->Size = System::Drawing::Size(823, 400);
			this->PanelContainer->TabIndex = 7;
			this->PanelContainer->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MenuPrincipal::PanelContainer_Paint);
			// 
			// buttonGestioProveidors
			// 
			this->buttonGestioProveidors->Dock = System::Windows::Forms::DockStyle::Top;
			this->buttonGestioProveidors->FlatAppearance->BorderSize = 0;
			this->buttonGestioProveidors->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonGestioProveidors->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 12, System::Drawing::FontStyle::Bold));
			this->buttonGestioProveidors->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->buttonGestioProveidors->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"buttonGestioProveidors.Image")));
			this->buttonGestioProveidors->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->buttonGestioProveidors->Location = System::Drawing::Point(0, 598);
			this->buttonGestioProveidors->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->buttonGestioProveidors->Name = L"buttonGestioProveidors";
			this->buttonGestioProveidors->Padding = System::Windows::Forms::Padding(4, 0, 0, 0);
			this->buttonGestioProveidors->Size = System::Drawing::Size(330, 98);
			this->buttonGestioProveidors->TabIndex = 14;
			this->buttonGestioProveidors->Text = L"Gestio Proveidors";
			this->buttonGestioProveidors->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->buttonGestioProveidors->UseVisualStyleBackColor = true;
			this->buttonGestioProveidors->Click += gcnew System::EventHandler(this, &MenuPrincipal::buttonGestioProveidors_Click);
			// 
			// buttonGestioEstudiants
			// 
			this->buttonGestioEstudiants->Dock = System::Windows::Forms::DockStyle::Top;
			this->buttonGestioEstudiants->FlatAppearance->BorderSize = 0;
			this->buttonGestioEstudiants->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonGestioEstudiants->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 12, System::Drawing::FontStyle::Bold));
			this->buttonGestioEstudiants->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->buttonGestioEstudiants->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"buttonGestioEstudiants.Image")));
			this->buttonGestioEstudiants->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->buttonGestioEstudiants->Location = System::Drawing::Point(0, 696);
			this->buttonGestioEstudiants->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->buttonGestioEstudiants->Name = L"buttonGestioEstudiants";
			this->buttonGestioEstudiants->Padding = System::Windows::Forms::Padding(4, 0, 0, 0);
			this->buttonGestioEstudiants->Size = System::Drawing::Size(330, 98);
			this->buttonGestioEstudiants->TabIndex = 15;
			this->buttonGestioEstudiants->Text = L"Gestio Estudiants";
			this->buttonGestioEstudiants->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->buttonGestioEstudiants->UseVisualStyleBackColor = true;
			// 
			// MenuPrincipal
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->ClientSize = System::Drawing::Size(1116, 486);
			this->Controls->Add(this->PanelContainer);
			this->Controls->Add(this->panelTitle);
			this->Controls->Add(this->panelMenu);
			this->ForeColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"MenuPrincipal";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MenuPrincipal";
			this->Load += gcnew System::EventHandler(this, &MenuPrincipal::MenuPrincipal_Load);
			this->panelMenu->ResumeLayout(false);
			this->PanelLogo->ResumeLayout(false);
			this->PanelLogo->PerformLayout();
			this->panelTitle->ResumeLayout(false);
			this->panelTitle->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
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
// Abrir SubMenu Sin Aplicar Cambios:
public: System::Void AbrirSubFormularioEnPanelOriginal(Form^ formHijo);

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

private: System::Void PanelLogo_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void buttonMenuSessions_Click(System::Object^ sender, System::EventArgs^ e);

private: System::Void buttonGestioEspais_Click(System::Object^ sender, System::EventArgs^ e);

private: System::Void buttonGestioProveidors_Click(System::Object^ sender, System::EventArgs^ e);

private: System::Void buttonGestioEstudiants_Click(System::Object^ sender, System::EventArgs^ e);
};
}
