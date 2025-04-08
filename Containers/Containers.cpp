// Containers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <array>
#include <vector>
#include <list>
#include <map>

using namespace std;


// This fuction makes an array of the days of the week and then prints them to the console
void arrayWork() {
    array<string, 7> daysOfTheWeek = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};

    for (string day : daysOfTheWeek)
    {
        cout << day << "\n";
    }
}

// This function creates a vector and adds two numbers to the end, then it gets rid of the last one and prints all values in the vector
void vectorWork() {
    vector<int> testInts = { 0, 1, 2, 3, 4 };

    testInts.push_back(5);
    testInts.push_back(6);
    testInts.pop_back();

    for (int num : testInts) {
        cout << num << "\n";
    }
}

// This function creates a list of fruit and adds a replaces the first and last fruit, then it deletes the second fruit and prints all values in the list
void listWork() {
    list<string> fruits = { "apple", "peach", "plum" };

    fruits.front() = "banana";
    fruits.back() = "cherry";

    fruits.remove("peach");

    for (string fruit : fruits) {
        cout << fruit << "\n";
    }
}

// This function creates a map of items in a grocery store, then it changes the number of one of the items and then it prints all values in the map to show you the items and the amount remaing
void mapWork() {
    map<string, int> storeItems = { {"Apple" , 10}, {"Plum", 15}, {"Lettuce", 2} };

    storeItems.at("Plum") = 8;

    for (auto item : storeItems) {
        cout << "Item: " << item.first << "\nAmount: " << item.second << "\n";
    }
}

int main()
{
    arrayWork();
    vectorWork();
    listWork();
    mapWork();

}