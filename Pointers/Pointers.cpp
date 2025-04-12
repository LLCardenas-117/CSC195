// Pointers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

void func1() {
    bool b = true;
    int i = 5;
}

void func2() {
    bool b = false;
    float f = 10;

    func1();
}

void func3() {
    int a[100000];
    func3();
}

class Animal {
public:
    Animal(string name) {
        name_ = name; 
    }

    string getName() {
        return name_;
    }

private:
    string name_;
};

void setValue(int* v) {
    *v = 5;
}

void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int i = 5;
    float f = 4.5f;

    /*func2();
    func3();*/

    int* pointer = new int(5);

    cout << *pointer << endl;

    delete pointer;

    Animal* dog = new Animal("Dog");

    cout << dog->getName() << endl;

    delete dog;

    dog = nullptr;
    // Null Check
    if (dog) {
        cout << dog->getName() << endl;
    }

    Animal cat("Cat");

    cout << cat.getName() << endl;

    int* block = (int*)malloc(sizeof(int) * 1000);

    block[0] = 3;
    block[1] = 4;
    block[2] = 5;
    block[3] = 6;

    block++;
    cout << *(block + 2) << endl;
    free(--block);


    //Pointers Extended
    int v1 = 10;
    int v2 = 20;

    int* p = nullptr;
    cout << p << endl;

    p = &v1;
    cout << p << endl;
    cout << v1 << endl;

    //This sets the pointer to v2
    p = &v2;
    cout << p << endl;
    cout << v2 << endl;

    //This changes v2 to 5 since the pointer is set to v2's location
    *p = 5;
    cout << p << endl;
    cout << *p << endl;

    //This changes v2 to 42 since the pointer is set to v2's location
    *p = 42;
    cout << p << endl;
    cout << *p << endl;

    setValue(&v1);

    cout << v1 << endl;

    swap(&v1, &v2);
    cout << &v1 << endl;
    cout << &v2 << endl;
}
