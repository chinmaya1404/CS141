//library
#include<iostream>
using namespace std;
//function define
int max(int v1,int v2){
if(v1>v2)
return v1;
else
return v2;
}
//drivary function
int main(){
//data input
int a,b,result;
cout<<"Enter two number";
cin>>a>>b;
//function calling
result=max(a,b);
//output
cout<<"Maximum is :"<<result<<endl;
return 0;
}
