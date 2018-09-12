//library
#include<iostream>
using namespace std;
//funcion define
int min(int v1,int v2){
if (v1>v2)
return v2;
else 
return v1;
}
int main(){
//data input
int a,b,mi;
cout<<"Enter two number";
cin>>a>>b;
//function calling
mi=min(a,b);
//output
cout<<"Minimum is :"<<mi<<endl;
return 0;
}
