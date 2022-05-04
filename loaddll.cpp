
#include <Windows.h>
#include <iostream>


int main (int argc, char** argv) {

    if (argc != 2) {
		std::cout << "\nThis program load a dll at runtime with Explicit Linking method." << std::endl;
		std::cout << "\n Usage:\tloaddll dllname.dll\n" << std::endl;
		return 1;
	}
 
	HINSTANCE Hdlltarget = LoadLibraryA(argv[1]);

    if (Hdlltarget == NULL) {
		std::cout << "Cannot load dll!" << std::endl;
		return 1;
    }
    std::cout << "(" << argv[1] << ") loaded!" << std::endl;
    system ("pause");

    FreeLibrary(Hdlltarget);
	std::cout << "(" << argv[1] << ") unloaded!" << std::endl;
    system ("pause");
    return 0;
}
