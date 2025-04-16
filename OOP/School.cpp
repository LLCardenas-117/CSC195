#include "School.h"
#include "Student.h"
#include "Professor.h"

School::~School()
{
	for (Human* human : _humans) {
		delete human;
	}
	_humans.clear();
}

void School::Add(Human::Type type)
{
	Human* human = nullptr;
	switch (type)
	{
	case Human::Type::STUDENT:
		human = new Student;
		break;

	case Human::Type::TEACHER:
		human = new Professor;
		break;

	default:
		break;
	}

	human->Read();
	_humans.push_back(human);
}

void School::DisplayAll()
{
	for (Human* human : _humans) {
		human->Write();
	}
}
