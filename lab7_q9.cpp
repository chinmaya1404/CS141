//Write a C++ program to find factorial of any number using recursion.
//library
#include<iostream>
using namespace std;
//function
int fac(int n,int mul){
	if(n>0){
		mul=mul*n;
		n--;
	fac(n,mul);
	}
	else
	return mul;
}
//driver function
int main(){
int n;
	cout<<"ENTER A NUMBER";
	cin>>n;
//calling function
	cout<<"FACTORIAL IS :"<<fac(n,1)<<endl;
return 0;
}
