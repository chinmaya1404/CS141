//library
#include<iostream>
using namespace std;
//function
int main()
{
//declare variable
float a,b,c,d;
//input data
cout<<"ENTER TWO ANGLES OF A TRIANGLE IN DEGREE :";
cin>>a>>b;
//operation
d=a+b;
c=180-d;
//output
cout<<"THE THIRD ANGLE OF THE TRIANGLE IS :"<<c<<"degree"<<endl;
return 0;
}
