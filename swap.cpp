#include <iostream>
using namespace std;
int& swap(int &a, int &b);
//  void swap(int a, int b);

int main()
{
	system("cls"); 
	int x, y;
	cout << "Enter two numbers to swap";
	cin >> x >> y;
	// cout << "The numbers before swapping are " <<x << " and " << y;
	// swap(x, y);
	// cout << "The numbers after swapping are "<< x << " and " << y;
	swap(x,y)= 344;
	cout << "The numbers after swapping are "<< x << " and " << y;

	return (0);
}
// void swap(int &a, &int b)
int& swap(int &a, int &b)
{
	int z;
	z = a;
	a = b;
	b = z;
	return a;
}