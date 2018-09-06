//library function
#include<iostream>
using namespace std;
int main()
//initialize
{
int i,j,n;

cout<<"Stars Side of Triangle";
cin>>n;
//looping
	for(i=1;i<=n;i++){
		for(j=1;j<=i;j++){
			if(i==j||j==1||i==n)
				cout<<"*";
			else
				cout<<" ";	
		}
		cout<<endl;
	}
return 0;
}
