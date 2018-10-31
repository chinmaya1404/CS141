//include library
#include<iostream>
using namespace std;
#include<string>
//Write a function contains(char*, char) which returns true if the 1st parameter cstring contains the 2nd parameter char, or false otherwise
string contains(char* cptr, char c){
int k;
string t,f;
t="true";
f="false";
  for(k=0;*(cptr+k)!='\0';k++){
	if(*(cptr+k)==c){
return t;		
	}
  }
return f;
	
}
//main func
int main(){
int i,n;
char c,arr[100];
char *ptr;
ptr=arr;
cout<<"enter string"<<endl;
cin>>arr;
cout<<"enter the character"<<endl;
cin>>c;
//show output
cout<<"Contains  :"<<contains(ptr,c)<<endl;
return 0;
}
