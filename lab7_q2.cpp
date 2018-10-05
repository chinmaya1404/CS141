//to print all natural numbers between 1 to n using recursion
//library
#include<iostream>
using namespace std;
//function declare
int foo(int n){
	if(n>1){
		cout<<n<<endl;
		n--;
		foo(n);
	}
	else
		return 1;
}
//driver function
int main(){
int n;
cout<<"ENTER A NUMBER";
cin>>n;
cout<<foo(n)<<endl;
return 0;
}


