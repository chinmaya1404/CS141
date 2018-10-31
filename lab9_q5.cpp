#include<iostream>
using namespace std;
int main(){
char s[10] = "abcde";
char* cptr;  
cptr=s;
int i,k;
for(k=0;*(cptr+k)!='\0';k++){
	
}
for(i=k;i>=0;i--){
	cout<<*(cptr+i);
}
   return 0;
}
