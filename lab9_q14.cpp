//library
#include<iostream>
using namespace std;
//driver function
int main(){
//data initialization
char arr[40];
cout<<"Enter your first name :"<<endl;
cin>>arr;
//print characters by normal index method
int i;
for(i=0;arr[i]!='\0';i++){
	cout<<arr[i]<<endl;
}
//print characters by pointer method

char *p=arr;
for(i=0;arr[i]!='\0';i++){
	cout<<*(p+i)<<endl;
}
return 0;
}
