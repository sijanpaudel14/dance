#include <iostream>
using namespace std;

class hello{
	public:
	int myfunction(char s[20]);

};
int main()
{
	system("cls");
	hello c1;
	char s[20];
	cin>>s;
	c1.myfunction(s);	
	return (0);
}
int hello::myfunction(char s[20])
{	
	cout<<s<<"\t";
	cout<< "Hello World";
}