//library
#include<iostream>
#include<cmath>
using namespace std;
//function
int main()
{
//declare variable
float area,side;
//input
cout<<"ENTER SIDE OF THE EQUILATERAL TRIANGLE :";
cin>> side;
//operation
area = (sqrt(3)/4.0)*side*side;
//output
cout<<"AREA OF THE EQUILATERAL TRIANGLE IS :"<<area<<"sq unit"<<endl;
return 0;
}
