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
	}
	else if(i>=65&&i<=90){
		j=i;
	}
	k=char(j);
return k;
}
char Lcase(char v){
int i=int(v);
int j;
char k;
	if (i<=122&&i>=97){
		j=i;
	}
	else if (i>=65&&i<=90){
		j=i+32;
	}
	k=char(j);
return k;
}
int main(){
//data input
char c,op;
cout<<"Enter a Character :";
cin>>c;
//function call
//condition
	if(int (c)<=90&&int (c)>=65)
		cout<<"The Lower case is :"<<Lcase(c)<<endl;
	else if(int (c)>=97&&int(c)<=122)
		cout<<"The Upper Case is :"<<Ucase(c)<<endl;
//show output
}
