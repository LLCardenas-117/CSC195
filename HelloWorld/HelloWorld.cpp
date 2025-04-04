#include "Student.h"
#include <iostream>
#include <string>
using namespace std;

//class Student;

class Person {
public:
    float weight;
    int age;

    void f() {}
};


int main()
{
    Student student;
    student.SetName("BroDude");
    student.Write();

    Person person;
    person.age = 20;

    unsigned int i = 23;
    printf("%d\n", person.age);
    std::cout << i++ << std::endl;
    
    std::cout << sizeof(double) << std::endl; //Gets the amount of bytes in the object

    cout << sizeof(person) << endl;

    char c = 'A';
    cout << (int)c << endl; //Get the ASCII position of a character
    cout << &i << endl; //Get the ASCII Hexcode of a position

    f();

    cout << "Hello, World!";
    cout << "\nGit is now tracking this project!";
    return 0;
}
