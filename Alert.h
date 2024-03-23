#pragma once


using namespace System;
using namespace System::Windows::Forms;

ref class Alert
{
public:
    static void ShowException(String^ message)
    {
        // Convertir el mensaje de System::String a std::string
       

        // Mostrar una ventana de mensaje con el mensaje de la excepción
        MessageBox::Show(gcnew String(message), "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
    }
    static void EstudiantNoTrobat()
    {
        String^ message = "Estudiant no trobat.";
        MessageBox::Show(message, "Alerta", MessageBoxButtons::OK, MessageBoxIcon::Warning);
    }
    static void GrupNoTrobat()
    {
        String^ message = "Grup no trobat.";
        MessageBox::Show(message, "Alerta", MessageBoxButtons::OK, MessageBoxIcon::Warning);
    }
    static void UsuariNoTrobat()
    {
        String^ message = "Usuari no trobat.";
        MessageBox::Show(message, "Alerta", MessageBoxButtons::OK, MessageBoxIcon::Warning);
    }
};