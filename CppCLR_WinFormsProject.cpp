#include "pch.h"
using namespace System;

// int main(array<System::String ^> ^args)
// {
//    return 0;
// }

#include "MenuPrincipal.h"
using namespace System::Windows::Forms;

[STAThread]
int main()
{
  Application::EnableVisualStyles();
  Application::SetCompatibleTextRenderingDefault(false);
  StudyHub::MenuPrincipal^ MenuPrincipalInstance = StudyHub::MenuPrincipal::getInstance();
  Application::Run(MenuPrincipalInstance);
  return 0;
}