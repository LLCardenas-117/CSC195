#pragma once
#include <iostream>

using age_t = unsigned short;

using namespace std;

class Human {
public:
    enum class Type {
        STUDENT,
        TEACHER
    };

public:
    Human() {
        cout << "Constructor\n";
        _count++;
    }

    Human(string name, age_t age) :
        _name{ name },
        _age{ age }
    {
        cout << "Contstructor\n";
        _count++;
    }

    ~Human() {
        cout << "Decontstructor\n";
        _count--;
    }

    virtual void Read();

    virtual void Write();

    string GetName() { return _name; }

    age_t GetAge() { return _age; }

    void SetAge(age_t age);

    static int GetCount() { return _count; }

    virtual Type GetType() { return Type::STUDENT; };

    virtual void Work() { std::cout << "Human Work\n"; }

protected:
    string _name;
    age_t _age = 0;
    static int _count;
    static const float _tax;
};

void func();