//library function
#include<iostream>
using namespace std;
int main()
//initialize
{
int i,j,n;

cout<<"Height of Pyramid";
cin>>n;
//looping
	for(i=1;i<=n;i++){
		for(j=1;j<=n*2-i;j++){
			if((j>=i)&&(i==1||i==j||j==n*2-i))
				cout<<"*";
			else
				cout<<" ";
		}
		cout<<endl;
	}
return 0;
}
