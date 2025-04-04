// MadLibLabConversion.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    string item;
    string name;
    string verb;
    int number;

    cout << "Enter the name of an item: ";
    cin >> item;

    cout << "Enter a name: ";
    cin >> name;

    cout << "Enter a verb ending in -ing: ";
    cin >> verb;

    cout << "Enter a whole number: ";
    cin >> number;

    printf("Once there was a princess called %s, she loved %s through the woods. One day when %s, she found %d %ss. With the %ss in hand, she went %s back to the castle to show the Queen! 'Oh my! look at all the %ss that %s brought home!' The Queen said with shock. 'Do you like them?' Princess %s asked. 'Oh yes. They are very delightful. Let's put them on the mantle to show everybody. Princess %s then set them down and there they stayed until the end of the Kingdom. ", name.c_str(), verb.c_str(), name.c_str(), number, item.c_str(), item.c_str(), verb.c_str(), item.c_str(), name.c_str(), name.c_str(), name.c_str());

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
