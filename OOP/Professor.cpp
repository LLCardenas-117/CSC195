#include "Professor.h"

void Professor::Read()
{
	std::cout << "------Professor------\n";
	Human::Read();

	std::cout << "Classroom: ";
	std::cin >> _classroom;
	std::cout << "Class Topic: ";
	std::cin >> _classTopic;
}

void Professor::Write() {
	std::cout << "------Professor------\n";
	Human::Write();

	std::cout << "Classroom: " << _classroom << endl;
	std::cout << "Class Topic: " << _classTopic << endl;
}
