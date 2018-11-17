/*Write a definition of a class Rectangle using the Point class. A rectangle is specified by two corner points (bottom left and top right). The sides of the rectangle are parallel to the coordinate axes. The implementation of the class should be as follows: 
The private data members of the class include all 4 corner points of the rectangle. 
There are two constructors: one takes two points as arguments and creates a rectangle with the first point as the bottom left corner and the second as the top right corner, the other (default) constructor creates a rectangle with the corners (0,0), (1,0), (0,1), (1,1). 
Hint: use functions Set_X, Set_Y from the class Point to set the values of the corner points. 
The print member function prints all 4 corners of the rectangle, using the member function print of the class Point. 
Test the class Rectangle in main(), demonstrate that all member functions work as specified.*/
/******************************************************************************************************************************************************/ 
//including library
#include<iostream>
using namespace std;
//defining class point
class point {
//private the x and y value
	private:
		int x,y;
//public the functions
	public:
//constructor default
		point(){
			x=0;
			y=0;
		}
//constructor with value
		point(int xval,int yval){
			x=xval;
			y=yval;
		}
//setter functions
		void set_x(int xval){
			x=xval;
		}
		void set_y(int yval){
			y=yval;
		}
//getter functions
		int get_x(){
			return x;
		}
		int get_y(){
			return y;
		}
//print function for coordinate
		void print(){
			cout<<"("<<get_x()<<", "<<get_y()<<")"<<endl;
		}
};
//class rectangale defining
class rectangle {
//private points
	private:
		point p1,p2,p3,p4;
//public functions
	public:
//default constructor
		rectangle(){
			p1.set_x(0);
			p1.set_y(0);
			p2.set_x(1);
			p2.set_y(1);
			p3.set_x(1);
			p3.set_y(0);
			p4.set_x(0);
			p4.set_y(1);
		}
//value given constructor
		rectangle(point p_1,point p_2){
			p1=p_1;
			p2=p_2;
			p3.set_x(p1.get_x());
			p3.set_y(p2.get_y());
			p4.set_x(p2.get_x());
			p4.set_y(p1.get_y());
		}
//print points of rectangle
		void printr(){
			cout<<"The first point is :";
			p1.print();
			cout<<"The second point is :";
			p2.print();
			cout<<"The third point is :";
			p3.print();
			cout<<"The fourth point is :";
			p4.print();
		}
//Add two private member functions side1, side2 to the class Rectangle to compute the lengths of the two sides
	private:
		int side1(){
			return (p2.get_x()-p1.get_x());
		}
		int side2(){
			return (p2.get_y()-p1.get_y());
		}
//print area
	public:
		void area(){
			cout<<"Area is :"<<side1()*side2()<<endl;
		}

};

int main(){
point p1;
point p2(4,5);
p2.print();
rectangle r1;
r1.printr();
//points of rectangle
point p4(2,3);
point p5(5,6);
rectangle r2(p4,p5);
//print coordinates of rectangle
r2.printr();
//print area of rectangle
r2.area();
return 0;
}
