#include "Index.h"

using namespace SistemaSolar;




[STAThreadAttribute]

int main(array<System::String^> ^args){
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	Application::Run(gcnew Index());

	return 0;
}