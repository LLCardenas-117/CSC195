#pragma once
#include "Human.h"

using roomNumber = unsigned short;

class Professor : public Human {
public:
	Professor() {
		cout << "Professor Constructor\n";
	}

	Professor(std::string name, age_t age, roomNumber classroom, std::string classTopic) :
		Human {name, age},
		_classroom {classroom},
		_classTopic {classTopic}
	{
		//
	}

	void setClassTopic(std::string classTopic) { _classTopic = classTopic; }
	std::string getClassTopic() { return _classTopic; }

	void SetClassroom(roomNumber classroom) {
		if (classroom > 300 || classroom < 400) {
			_classroom = classroom;
		}
	}
	
	virtual void Read();

	virtual void Write();

	roomNumber GetClassroom() { return _classroom; }

	Type GetType() override { return Type::TEACHER; }

	void Work() override { std::cout << "Professor Work\n"; }

private:
	roomNumber _classroom;
	std::string _classTopic;
};
