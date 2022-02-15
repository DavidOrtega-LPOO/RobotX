#include "frmInicio.h"

using namespace System;
using namespace System::Windows::Forms;
using namespace RobotXView;

[STAThreadAttribute]
void main(array <String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	frmInicio ventana;
	Application::Run(% ventana);
}