#include <iostream>
#include <cmath>
using namespace std;

class Point {

	private:
	int x,y;
	friend float distance (Point , Point);
	public:
	Point (int a, int b){
		x=a;
		y=b;
	}
	void displayPoint(){
		cout << "The point is: ("<<x<<","<<y<<")"<<endl;
	}
	
};

float distance(Point p1,Point p2){
	float diff = (p2.x-p1.x)*(p2.x-p1.x) + (p2.y-p1.y)*(p2.y-p1.y);
	float dis = sqrt(diff);
	cout << "The distance is "<<dis;
	return dis;


}
int main(){

	system("cls");
	Point p1(8,0);
	p1.displayPoint();
	Point p2(0,0);

	Point p3(9,0);
	Point p4(0,0);
	p2.displayPoint();
	cout<<"The distance between them is "<< distance(p3,p4);
	distance(p1,p2);
}


