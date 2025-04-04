#include "Employee.h"
#include <iostream>
using namespace std;

int main()
{
	int numEmployees;
	cout << "Number of employees (max 5): ";
	cin >> numEmployees;

	if (numEmployees > 5);

	Employee employees[5];

	for (int i = 0; i < numEmployees; i++) {
		cout << "\nEnter details for Employee " << (i + 1) << ":\n";
		employees[i].Read();
	}

	cout << "\n--- Payroll Summary ---\n";
	for (int i = 0; i < numEmployees; i++) {
		employees[i].Write();
	}
}