#include <iostream>
using namespace std;

class Test 
{
	private:
	int data;
	public:
	Test():data{0}{};
	Test(int n):data{n}{};
	void getData(){
		cout<<"Enter data: ";
		cin>>data;
	}
	void showData(){
		cout <<"\t"<<data;
	}
};

int main()
{
	system("cls");
		Test t1[3]= {9,8,4};
		cout<<"The intialized data are:";
		for(int i=0;i<3; i++){
			t1[i].showData();
		}
	return (0);
}