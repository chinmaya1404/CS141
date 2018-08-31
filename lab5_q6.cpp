//library
#include<iostream>
using namespace std;
//function
int main(){
//data input
int a;
cout<<"Enter the Year";
cin>>a;
//condition and output
	if(a%400==0){
		
		cout<<"LEAP YEAR";
	}
	else if(a%100==0){
		cout<<"NOT A LEAP YEAR";
	}
	else if(a%4==0){
		cout<<"LEAP YEAR";
	}
return 0;
}
