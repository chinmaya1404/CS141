//library
#include<iostream>
using namespace std;
//funcion define
void min(int& v1,int& v2,int& m){
if (v1>v2)
m=v2;
else 
m=v1;
}
int main(){
//data input
int a,b,mi;
cout<<"Enter two number";
cin>>a>>b;
//function calling
min(a,b,mi);
//output
cout<<"Minimum is :"<<mi<<endl;
return 0;
}
