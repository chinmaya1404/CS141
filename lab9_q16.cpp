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
//show string repeatedly by shifting top character of string from right to lef
for(i=0;i<10;i++){
	for(j=(10-i)-1;j<10;j++){
		cout<<*(p+j);
	}
cout<<endl;
}
return 0;
}
