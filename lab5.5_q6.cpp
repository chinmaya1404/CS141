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
		for(j=1;j<=n*2-1;j++){
			if(j>=i&&j<n+i)
				cout<<"*";
			else
				cout<<" ";
		}
		cout<<endl;
	}
return 0;
}
