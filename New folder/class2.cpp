#include <iostream>
using namespace std;
class myClass
{
private:
	int a;
	float b;

public:
	void setData(int x, float y);
	void getData();
};
void myClass::setData(int x, float y)
{
	a=x;
	b=y;
}
void myClass::getData(){
	cout<<"The value of x is "<<a;
	cout<<"The value of y is "<<b;
}
int main()
{
	system("cls");
	myClass m1;
	m1.setData(5,5.5);
	m1.getData();
	// cout<<"The value of another x is"<<m1.a;
	cout<<"The value of another y is";
	m1.getData();

	return (0);
}