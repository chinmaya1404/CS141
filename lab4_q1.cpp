//declare library
#include<iostream>
using namespace std;
//declare function
int main()
{
//declare variable
float cm,m,km;
//make operation
cout<<"ENTER LENGTH IN CM ";
cin>>cm;
m = cm/100;
km=cm/100000;
//show output
cout<<"LENGTH IN METER IS "<<m<<"m"<<endl;
cout<<"LENGTH IN KILOMETER IS "<<km<<"km"<<endl;
return 0;
}
