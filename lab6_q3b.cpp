//library
#include<iostream>
using namespace std;
//fuction define
void max(int v1,int v2,int& ma){
if (v1>v2)
ma=v1;
else
ma=v2;
}
int main(){
//data input
int a,b,m;
cout<<"Enter two number";
cin>>a>>b;
//function callng
max(a,b,m);
//output
cout<<"Max is :"<<m<<endl;
return 0;
}
