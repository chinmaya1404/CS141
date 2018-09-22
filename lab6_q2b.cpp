//library
#include<iostream>
using namespace std;
//function define
void Sum (int v1,int v2,int&s)
{
s=v1+v2;
}
//drivery function
int main(){
int a,b,su;
//data input
cout<<"Enter two numbers :";
cin>>a>>b;
//function calling
Sum(a,b,su);
//output
cout<<"The SUM is :"<<su<<endl;
return 0;
}
