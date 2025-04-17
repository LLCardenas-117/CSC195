#include <iostream>
#include <string>

int main()
{
    bool quitApplication = false;

    while (!quitApplication) {
        std::cout << "Please make your selection using a numerical value\n";
        std::cout << "1: Something something\n";
        std::cout << "2: Something something\n";
        std::cout << "3: Something something\n";
        std::cout << "4: Quit Application\n";

        unsigned short usrChoice;
        std::cout << "User choice: ";
        std::cin >> usrChoice;
    }
}
