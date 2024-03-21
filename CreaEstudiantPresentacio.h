#pragma once

namespace StudyHub {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for CreaEstudiantPresentacio
	/// </summary>
	public ref class CreaEstudiantPresentacio : public System::Windows::Forms::Form
	{
	public:
		CreaEstudiantPresentacio(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~CreaEstudiantPresentacio()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(85, 75);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(127, 16);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Crea Perfil Estudiant";
			// 
			// CreaEstudiantPresentacio
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(879, 703);
			this->Controls->Add(this->label1);
			this->Name = L"CreaEstudiantPresentacio";
			this->Text = L"CreaEstudiantPresentacio";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
