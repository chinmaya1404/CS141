//library
#include<iostream>
using namespace std;
//function
char Ucase(char v){
int i=int(v);
int j;
char k;
	if (i<=122&&i>=97){
		j=i-32;
		k=char(j);
	}
	else if(i>=65&&i<=90){
		j=i;
		k=char(j);
	}
return k;
}
int main(){
//data input
char c;
cout<<"Enter a Character :";
cin>>c;
//function call
	cout<<"The Upper case is :"<<Ucase(c)<<endl;
//show output
}
