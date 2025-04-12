// Containers_InClass.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <array>
#include <vector>
#include <list>
#include <map>
#include <stack>
#include <unordered_map>

using namespace std;

//int GetHash(std::string str) {
//    // "Reymond"
//    // 66 35 42 15 43
//    for (char c : str) {
//        hash = hash * 31 + (int)c;
//    }
//    
//    return hash;
//}

int main()
{
    //Array
    cout << "ARRAY:\n";

    int i = 0;
    array<int, 5> nums = { 1, 2, 3, 4, 5 };

    //cout << a[1];

    cout << (void*)(&nums[0]) << endl;
    cout << (void*)(&nums[1]) << endl;

    //Vector
    cout << "\nVECTOR:\n";

    vector<int> vec = { 1, 2, 3, 4, 5 };

    vec.push_back(6);

    vec[0] = 5;

    cout << vec.size() << endl;
    cout << vec.capacity() << endl;

    //STACK
    cout << "\nSTACK:\n";

    stack<int> s;

    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);

    s.pop();

    cout << s.top() << endl;

    //List
    cout << "\nLIST:\n";

    list<int> lst = { 1, 2, 3, 4, 5 };

    lst.push_back(6);
    lst.insert(lst.begin(), 0);


    for (auto iter = lst.begin(); iter != lst.end(); iter++) {
        cout << *iter << endl;
    }

    //Map
    cout << "\nMAP:\n";

    map<string, int> m;

    m["Riley"] = 46;
    m["Garret"] = 86;

    //cout << m["Riley"] << endl;

    for (auto iter = m.begin(); iter != m.end(); iter++) {
        cout << iter->first << " " << iter->second << endl;
    }

    //Unorderd Map
    cout << "\nUNORDERED MAP:\n";
    
    unordered_map<string, string> um;

    um["Landon"] = "Cardenas";
    um["Kaden"] = "Fox";
    um["Liliya"] = "Sorensen";
    um["Garret"] = "Oxborrow";

    cout << um["Landon"] << endl;
}