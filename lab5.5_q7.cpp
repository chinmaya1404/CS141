//library function
#include<iostream>
using namespace std;
int main()
//initialize
{
int i,j,n;
cout<<"Enter Stars in One Side of the Rhombous";
cin>>n;
//looping
	for(i=1;i<=n;i++){
		for(j=1;j<=n*2-1;j++){
			if(j>=i&&j<n+i)
				if(i==1||i==n||j==i||j==n+i-1)
					cout<<"*";
				else
					cout<<" ";
				
			else
				cout<<" ";
		}
		cout<<endl;
	}
return 0;
}
