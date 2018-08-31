//library function
#include<iostream>
using namespace std;
int main()
{
//variable declaration
int i;
cout<<"Enter a Number";
cin>>i;
cout<<"Last Digit is :"<<i%10<<endl;
//looping and output
	while(i>0){
		if(i>0&&i<10){
			cout<<"First Digit is :"<<i<<endl;
		}
		i=i/10;
	}
			
return 0;
}

