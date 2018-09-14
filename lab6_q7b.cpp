//library
#include<iostream>
using namespace std;
//function
char Lcase(char v){
int i=int(v);
int j;
char k;
	if (i<=122&&i>=97){
		j=i;
		k=char(j);
	}
	else if (i>=65&&i<=90){
		j=i+32;
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
	cout<<"The Lower case is :"<<Lcase(c)<<endl;
//show output
}
