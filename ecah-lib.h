#include <iostream>
#include <string>
///
// ecah-lib - easier cpp argument handler - library
///

namespace eca {
    class arg {public:
        /**
        * checks if there is at least one argument provided.
        * @param argc the count of command-line arguments.
        * @param argv the array of command-line argument strings.
        * @return true if there is at least one argument, false otherwise.
        **/
        bool chk(int argc, char* argv[]) {
            if (argc >= 1) return true;
            return false;
        }

        /**
        * stores a command-line argument in the provided string.
        * @param output reference to a string where the argument will be stored.
        * @param chArg index of the argument in the argv array to store.
        * @param argc the count of command-line arguments.
        * @param argv array of command-line argument strings.
        **/
        bool store(std::string& output, int chArg, int argc, char* argv[]) {
            if (argv == nullptr || chArg < 0 || chArg >= argc) return false;
            if (argc > 1) {
                output = argv[chArg];
                return true;
            } return false;
        }
    }; arg arg;

    void printUsage() {
        std::cout << "ecah-lib - easier cpp argument handler - library\n"
        << "built by jstmax! (bit.ly/mx_info / @jstmaxlol on GitHub)\n\n"

        << "method/function list for ecah;\n"
        << "eca::arg.chk() > checks for arguments, returns true||false\n"
        << "eca::arg.store() > stores the chosen argument\n"
        << "eca::printUsage() > prints this usage screen\n\n"

        << "[n!] remember to (int argc, char* argv[]) in your main function\n"
        << "[n!] for parameters, check the ecah-lib.h file's comments";
    }
}
