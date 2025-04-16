#include "Student.h"
#include <iostream>

void Student::Read() {
	std::cout << "------Student------\n";
	Human::Read();
	
	std::cout << "Enter GPA: ";
	std::cin >> _gpa;
}

void Student::Write() {
	std::cout << "------Student------\n";
	Human::Write();

	std::cout << "GPA: " << _gpa << endl;
}