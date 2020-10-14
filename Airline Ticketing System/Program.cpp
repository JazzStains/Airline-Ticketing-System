#include "TicketingSystem.h"
#include "Plane.h"

using namespace System;
using namespace System::Windows::Forms;
using namespace AirlineTicketingSystem;

[STAThreadAttribute]


int main() {
	Application::EnableVisualStyles();
	Application::Run(gcnew TicketingSystem());

	return 0;
}
