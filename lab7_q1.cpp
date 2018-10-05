//find power of any number using recursion
//library
#include<iostream>
using namespace std;
//function declare
int pow(int a, int n,int mul){
	if(n>=1){
		mul=a*mul;
		n--;
		pow(a,n,mul);
	}
	else
		return mul;
}
//driver function
int main(){
int a,n;
cout<<"ENTERTHE NUMBER AND ITS POWER ";
cin>>a>>n;
//calling function
cout<<"POWER IS :"<<pow(a,n,1)<<endl;
return 0;
}
