#include <iostream>
#include <string>
using namespace std;

#include "ecah-lib.h"
///
// [n!] ecah-lib 's standard namespace is 'eca'
///
// ecah-lib - example program
///

int main(int argc, char* argv[]) {
  // check for arguments with eca::arg.chk()
	if (eca::arg.chk(argc, argv) == true) {
		cout << "true\n";
	}
	else if (eca::arg.chk(argc, argv) == false) {
		cout << "false\n";
	}

  // testing the eca::arg.store() method
	string firstArg, exeName;
	eca::arg.store(firstArg, 1, argc, argv);
	eca::arg.store(exeName, 0, argc, argv);
	cout << "the first argument is: " << firstArg;
	cout << "\nthe executable's name is: " << exeName << "\n";

  // testing the eca::printUsage() method
	eca::printUsage();
	return 0;
}
