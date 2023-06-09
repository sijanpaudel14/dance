#include <iostream>
using namespace std;

class sijan{
	public:
	int x;
	string si;
	string pa;
	sijan(int a,string y, string z);

};
sijan::sijan(int a,string y, string z){
	x=a;
	si= y;
	pa=z; 

	}
int main()
{
	system("cls");
		sijan s1(29,"Sijan","Pokhara");
		sijan s2(18,"Avishek","Syangja");

		cout <<s1.si<<" " <<s1.pa<<" "<<s1.x<<endl;
		cout <<s2.si <<" "<<s2.pa<<" "<<s2.x;
	return (0);
}