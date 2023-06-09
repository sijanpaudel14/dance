#include <iostream>
using namespace std;
class Employee
{
private:
	char name[20];
	float salary;

public:
	void getData()
	{
		cout << "Enter name: ";
		cin.getline(name, 20);
		cout << "Enter salary: ";
		cin >> salary;
	}
	void showData()
	{
		cout << "Name: " << name << endl;
		cout << "Salary: " << salary << endl;
	}
};
int main()
{
	system("cls");
	Employee *e1;
	Employee e2;
	e1 = &e2;
	e1->getData();
	cout << "Accessing data through pointer variable: " << endl;
	e1->showData();
	return (0);
}