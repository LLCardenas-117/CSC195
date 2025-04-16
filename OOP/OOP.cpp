#include "School.h"
#include "Student.h"
#include <iostream>
#include "Professor.h"
#include <vector>

int main()
{
    School school;

    bool quit = false;

    while (!quit) {
        std::cout << "1: Add Human\n";
        std::cout << "2: Display All Humans\n";
        std::cout << "3: Display Human Type\n";
        std::cout << "4: Quit\n";
        unsigned short selection;
        std::cin >> selection;

        switch (selection) {
        case 1:
            std::cout << "1. Student\n";
            std::cout << "2. Professor\n";

            unsigned short type;
            std::cin >> type;
            
            school.Add(static_cast<Human::Type>(type - 1));
            break;
        case 2:
            system("cls");
            school.DisplayAll();
            break;
        case 3:
            type = 4;
            break;
        case 4:
            quit = true;
            break;
        default:
            break;
        }

        school.Add(Human::Type::STUDENT);
        school.DisplayAll();

    }

}