// References.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void func1(int* p) {
    if (p != nullptr) *p = 5;
}

void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int i1 = 5;
    int i2 = 20;

    int* p1 = &i1;
    p1 = nullptr;
    func1(p1);

    int& r1 = i1;
    r1 = 10;

    cout << "i1: " << i1 << "\ni2: " << i2 << "\nr1: " << r1 << endl;
    cout << "&i1: " << &i1 << "\n&i2: " << &i2 << "\n&r1: " << &r1 << endl;

    swap(&i1, &i2);
    swap(i1, i2);

    cout << "i1: " << i1 << "\ni2: " << i2 << "\nr1: " << r1 << endl;
    cout << "&i1: " << &i1 << "\n&i2: " << &i2 << "\n&r1: " << &r1 << endl;
}