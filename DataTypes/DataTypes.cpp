#include <iostream>
using namespace std;

int main()
{
	string name;
	char initial;
	short age;
	bool isAdult;
	unsigned int zipCode;
	float wage;
	short daysWorked;
	float hoursWorkedPerDay[7];

	const float TAX = 0.1f; //10% tax rate

	cout << "Enter first name: ";
	cin >> name;

	cout << "Enter initial of last name: ";
	cin >> initial;

	cout << "Enter age: ";
	cin >> age;
	isAdult = (age >= 18); //Determine adulthood status

	cout << "Enter zip code: ";
	cin >> zipCode;

	cout << "Enter hourly wage: ";
	cin >> wage;

	cout << "Enter number of days worked (Max 7): ";
	cin >> daysWorked;

	float totalHours = 0; //Initialize the total hours

	for (int i = 0; i < daysWorked; i++) {
		cout << "Enter hours worked for day " << (i + 1) << ": ";
		cin >> hoursWorkedPerDay[i];

		totalHours += hoursWorkedPerDay[i];
	}

	float grossIncome = totalHours * wage;
	float taxAmount = grossIncome * TAX;
	float netIncome = grossIncome - taxAmount;

	cout << "\nEmployee Payroll Summary\n";
	cout << "-------------------------\n";
	cout << "Name: " << name << " " << initial << ".\n";
	cout << "Age: " << age << " (Adult: " << (isAdult ? "Yes" : "No") << ")\n";
	cout << "Zipcode: " << zipCode << "\n";
	cout << "Hourly Wage: $" << wage << " per hour\n";
	cout << "Total Hours Worked: " << totalHours << " hours\n";
	cout << "Gross Income: $" << grossIncome << "\n";
	cout << "Tax Amounts: $" << taxAmount << "\n";
	cout << "Net Income: $" << netIncome << "\n";
}