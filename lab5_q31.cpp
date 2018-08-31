//library function
#include<iostream>
using namespace std;
int main()
{
//variable declaration
int i,n,sum;
cout<<"Enter a Number";
cin>>n;
sum=0;
//looping and output
	while(n>0){
		n=n/10;
		sum=sum+1;
	}
cout<<sum;
return 0;
}

