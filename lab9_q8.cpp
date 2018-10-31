//include library
#include<iostream>
using namespace std;
//Write a function myStrLen(char*) which returns the length of the parameter cstring
int myStrLen(char* cptr){
	int k;
  for(k=0;*(cptr+k)!='\0';k++){
	
  }
return k;
}
//main func
int main(){
int i,n;
char arr[100];
char *ptr;
ptr=arr;
cout<<"enter string"<<endl;
cin>>arr;
//show output
cout<<"Length of the string :"<<myStrLen(ptr)<<endl;
return 0;
}
