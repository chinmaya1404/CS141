//to print all even numbers in given range using recursion
//library
#include<iostream>
using namespace std;
//function declare
int foo(int n){
	if(n>1){
		if(n%2==0){
			cout<<n<<endl;
		}
		n--;
		foo(n);
	}
	else
		return 0;
}
//driver function
int main(){
int n;
cout<<"ENTER A NUMBER";
cin>>n;
cout<<foo(n)<<endl;
return 0;
}

