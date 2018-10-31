//library
#include<iostream>
using namespace std;
//driver function
int main(){
//data initialization
char arr[10];
char *p=arr;
int i,j;
cout<<"Enter a 10 character string"<<endl;
cin>>arr;
//shifting top character of string to right
for(i=0;i<10;i++){
	for(j=i;j<10;j++){
		cout<<*(p+j);
	}
cout<<endl;
}
return 0;
}
