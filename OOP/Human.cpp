#include "Human.h"
#include "Console.h"

int Human::_count = 0;
const float Human::_tax = 0.0025f;

void func() {
    cout << "Funky!\n";
}

void Human::SetAge(unsigned short age) {
    _age = age;
}

void Human::Read()
{
    std::cout << "------Human------\n";

    std::cout << "\nEnter Name: ";
    //std::cin >> _name;
    _name = getData<std::string>();
    std::cout << "Enter Age: ";
    _age = getData<age_t>();

    //_age = getInt();
}

void Human::Write()
{
    std::cout << "------Human------\n";

    std::cout << "Name: " << _name << endl;
    std::cout << "Age: " << _age << endl;
}
