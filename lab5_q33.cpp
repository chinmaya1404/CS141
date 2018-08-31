//library function
#include<iostream>
using namespace std;
int main()
{
//variable declaration
int i,f,l;
cout<<"Enter a Number";
cin>>i;
l=i%10;
//looping and output
	while(i>0){
		if(i>0&&i<10){
			f=i;
		}
		i=i/10;
	}
cout<<"Sum OF First and Last Digit is :"<<f+l<<endl;
			
return 0;
}
