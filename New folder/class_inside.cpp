#include <iostream>
using namespace std;

class myClass
{
public:
	void mymethod()
	{
		cout << "Hello World";
	}

};
int main()
{
	system("cls");
	myClass a1;
	a1.mymethod();
	return (0);
}