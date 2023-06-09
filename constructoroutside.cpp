#include <iostream>
using namespace std;

class sijan{
	public:
	int x;
	string si;
	string pa;
	sijan(int x,string y, string z);

};
sijan::sijan(int x,string y, string z){
		cout <<"Hello "<< y<< " You are from "<<z<< " Your age is "<<x<<endl;
	}
int main()
{
	system("cls");
		sijan s1(29,"Sijan","Pokhara");
		sijan s2(18,"Avishek","Syangja");
	return (0);
}