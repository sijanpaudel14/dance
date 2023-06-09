#include <iostream>
using namespace std;

int main()
{
	system("cls");
		char si[30];
		// getline(cin,si);		This is used when data type is string
		// cin.getline(si,100);		//This is used when data type is char
		cin.get(si);		//This is used when data type is char
		cout<<si;
	return (0);
}