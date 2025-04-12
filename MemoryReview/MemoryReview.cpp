#include <iostream>
using namespace std;

struct Person
{
	char name[32];
	int id;
};

void square(int& numParameter) {
	numParameter = numParameter * numParameter;
}

void Double(int* pointerParameter) {
	*pointerParameter = *pointerParameter * 2;
}

int main()
{
	// ** REFERENCE **
	// 
	// declare an int variable and set the value to some number (less than 10)
	int num = 7;
	// declare a int reference and set it to the int variable above
	int& reference = num;

	// output the int variable
	cout << num << endl;

	// set the int reference to some number
	reference = 2;
	// output the int variable
	cout << num << endl;
	// what happened to the int variable when the reference was changed: The int was changed along with the reference since they are both tied to the same point in memory

	// output the address of the int variable
	cout << &num << endl;
	// output the address of the int reference
	cout << &reference << endl;
	// are the addresses the same or different: They are the same since they are still tied to the same point in memory

	// ** REFERENCE PARAMETER **
	//
	// create a function above main() called Square that takes in an int parameter
	// in the function, multiply the int parameter by itself and assign it back to the parameter (i = i * i)
	// call the Square function with the int variable created in the REFERENCE section
	square(num);

	// output the int variable to the console
	cout << num << endl;

	// !! notice how the variable has not changed, this is because we only passed the value to the function !!
	// change the Square function to take a int reference
	// !! notice how the calling variable has now changed, this is because we 'passed by reference' !!
	// !! when a function takes a reference parameter, any changes to the parameter changes the calling variable ""

	// ** POINTER VARIABLE **
	// 
	// declare an int pointer, set it to nullptr (it points to nothing)
	int* pointer = nullptr;
	// set the int pointer to the address of the int variable created in the REFERENCE section
	pointer = &num;
	
	// output the value of the pointer
	cout << pointer << endl;
	// what is this address that the pointer is pointing to: It's pointing to the address of the num since it's pointing to that address
	// output the value of the object the pointer is pointing to (dereference the pointer)
	cout << *pointer << endl;

	// ** POINTER PARAMETER **
	//
	// create a function above main() called Double that takes in an int pointer parameter
	// in the function, multiply the int pointer parameter by 2 and assign it back to the parameter (i = i * 2)
	// !! make sure to dereference the pointer to set the value and not set the address !!
	// call the Double function with the pointer created in the POINTER VARIABLE section
	Double(pointer);

	// output the dereference pointer
	cout << *pointer << endl;
	// output the int variable created in the REFERENCE section
	cout << num << endl;
	// did the int variable's value change when using the pointer: Yes, since they are tied to the same position in memory

}