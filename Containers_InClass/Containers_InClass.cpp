// Containers_InClass.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <array>
#include <vector>
#include <list>
#include <map>

using namespace std;

int main()
{
    //Array
    int i = 0;
    array<int, 5> nums = { 1, 2, 3, 4, 5 };

    //cout << a[1];

    cout << (void*)(&a[0]) << endl;
    cout << (void*)(&a[1]) << endl;

    //Vector
    vector<int> vec = { 1, 2, 3, 4, 5 };
    vec.push_back(6);

    cout << vec.size() << endl;
    cout << vec.capacity() << endl;

    //List
    list<int> lst = { 1, 2, 3, 4, 5 };
    lst.push_back(6);
    lst.insert(lst.begin(), 0);

    //Map
    map<string, int> m;
    m["Riley"] = 46;
    m["Garret"] = 86;

    cout << m["Riley"] << endl;
}