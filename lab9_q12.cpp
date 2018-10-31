//library
#include<iostream>
using namespace std;
//driver function
int main(){
//data initialization
int a,b;
int * p;
p=&a;
b=*p;
cout<<"value of a :"<<a<<endl;
cout<<"value of b :"<<b<<endl;
cout<<"value of *p :"<<*p<<endl;
//data assignment
a=2;b=3;
cout<<"value of a :"<<a<<endl;
cout<<"value of b :"<<b<<endl;
cout<<"value of *p :"<<*p<<endl;
p=&b;
cout<<"value of a :"<<a<<endl;
cout<<"value of b :"<<b<<endl;
cout<<"value of *p :"<<*p<<endl;
return 0;
}
