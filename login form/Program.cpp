
#include "MyloginForm.h"
#include "MainForm.h"

using namespace System;
using namespace System::Windows::Forms;

void main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Loginformproject::MyloginForm MyloginForm;

	MyloginForm.ShowDialog();
	User^ user = MyloginForm.user;

	if (user != nullptr) {
		Loginformproject::MainForm mainForm(user);
		Application::Run(% mainForm);
	}
	else {
		MessageBox::Show("Authentication Canceled",
			"Program.cpp", MessageBoxButtons::OK);
	}
}