#pragma once
#include "Human.h"
#include <iostream>

class Student : public Human {
public:
	Student() {
		cout << "Student Constructor\n";
	}

	Student(std::string name, age_t age, float gpa) :
		Human{ name, age },
		_gpa{gpa}
	{
		cout << "Student Constructor\n";
	}

	virtual void Read();

	virtual void Write();

	void SetGPA(float gpa) { _gpa = gpa; }

	float GetGPA() { return _gpa; }

	Type GetType() override { return Type::STUDENT; }

	void Work() override { std::cout << "Student Work\n"; }

private:
	float _gpa = 4.0f;
};
