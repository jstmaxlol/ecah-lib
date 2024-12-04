///
// ecah-lib >> example program
///

#include "ecah-lib.h" // Including ecah-lib in our project (in this example, the .h file is in our same directory)
using namespace eca; // Optionally use the `eca` namespace (Basically if you do not want to use the `eca::` prefix on ecah-lib's methods/functions)

int main(int argc, char* argv[]) // argc = count of command-line arguments, argv = array of command-line argument strings
{
	string firstArgument; // Create an empty string

	arg.store(firstArgument, 1, argc, argv); // Store the first argument in the string `programName` (index 1 in the argv array)

	cout << "The first argument is: " << firstArgument << "\n"; // Prints the first argument

	return 0; // Returns 0 (Basically quits the program)
}

/* 
	Compiled with g++ on Arch Linux, output;
	
	$ g++ -o test main.cpp
	$ ./test Hello!
	The first argument is: Hello!
*/
