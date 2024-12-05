#include <iostream>
#include <cstdlib>
#include <string>
#include "ecah-lib.h"
using namespace std;
using namespace eca;
///
// do! - a stupid program to test out ecah-lib and make myself a shorter g++ syntax :)
///

void usage() {
	system("figlet do!");
	cout << "\nyour (not) trustworthy replacement for g++ syntax\n\n"
		 << "usage for do:\n"
		 << "do <outputFileName> <inputFileName>\n"
		 << "alt usage:\n"
		 << "do <outputFileName> <inputFileName> <-e||--execute>\n\n"

		 << "[devN!] had to finish the program quickly, so no --help or any fancy scheiBe\n";
}


int main (int argc, char* argv[]) {
	if (argc > 1) {
		string inputFileName, outputFileName, thirdArgument;

		arg.store(outputFileName, 1, argc, argv);
		arg.store(inputFileName, 2, argc, argv);
		arg.store(thirdArgument, 3, argc, argv);

		string gppCmd = "g++ -o " + outputFileName + " " + inputFileName;
		string gppExCmd = "./" + outputFileName;

		switch (argc) {
		case 4:
			system(gppCmd.c_str());
			system(gppExCmd.c_str());
			break;
		default:
			system(gppCmd.c_str());
			break;
		}
	}
	else {
		cout << "[e!] less than 2 parameters were parsed (NOT_ENOUGH_PARAMS)";
		usage();
		return 1;
	}
}
