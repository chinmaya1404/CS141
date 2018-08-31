//library
#include<iostream>
using namespace std;
//function
int main(){
//data input
int a;
cout<<"Enter a Number";
cin>>a;
//operation output
	if(a%5==0&&a%11==0){
		cout<<"The Number is Divisible by both 5 and 11";
	}
	else
		cout<<"The Number is not Divisible by 5 and 11";
return 0;
}
