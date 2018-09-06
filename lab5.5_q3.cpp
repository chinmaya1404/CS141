//library function
#include<iostream>
using namespace std;
int main()
//initialize
{
int i,j,n;
cout<<"Enter Stars in One Side of the Squre";
cin>>n;
//looping
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			if(i==1||i==n||j==1||j==n||i==j||i==n-j+1)
				cout<<"*";
			else
				cout<<" ";
		}
		cout<<endl;
	}
return 0;
}
