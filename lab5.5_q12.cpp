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
		for(j=1;j<=n-i+1;j++){
				cout<<"*";
		}
		cout<<endl;
	}
return 0;
}
