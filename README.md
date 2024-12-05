# ecah-lib 💊
**ecah-lib** (**e***asier* **c***pp* **a***rgument* **h***andler* **lib***rary*) \
is a public library to easily handle arguments in **C++** *(!)*

### [download ecah-lib](https://github.com/jstmaxlol/ecah-lib/blob/main/ecah-lib.h)

## how to use ⁉️
to use **ecah-lib** you need to [download](https://github.com/jstmaxlol/ecah-lib/blob/main/ecah-lib.h) the library's **.h (header)** file and `#include` it in your **C++** project \
`#include "pathToHeaderFile.h"` or if you have it in the same directory as your **.cpp** file `#include "ecah-lib.h"` \
here's an example program, for more (and more practical) example programs, check out the [./examples](https://github.com/jstmaxlol/ecah-lib/tree/main/examples) directory in this repo;
```
#include "ecah-lib.h" // Including ecah-lib in our project
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
```


&nbsp;
###### { jstmax! } @ { 62 69 74 2E 6C 79 2F 6D 78 5F 69 6E 66 6F }
