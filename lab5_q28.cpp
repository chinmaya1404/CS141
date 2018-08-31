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
	for(i=1;i<=n;i++){
		if(i%2==0){
			sum=sum+i;
		}
	}
cout<<sum<<endl;
return 0;
}

