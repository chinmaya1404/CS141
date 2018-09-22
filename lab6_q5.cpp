//library
#include<iostream>
using namespace std;
//function declare for sum
int sum(int v1,int v2){
int su=v1+v2;
return su;
}
//function declare for max
int max(int v1,int v2){
if(v1>v2)
return v1;
else 
return v2;
}
//funcion define for min
int min(int v1,int v2){
if (v1>v2)
return v2;
else 
return v1;
}
int main(){
//data input
int a,b,i;
cout<<"Enter two number";
cin>>a>>b;
//function calling
cout<<"To see sum press 1"<<endl;
cout<<"To see max press 2"<<endl;
cout<<"To see min press 3"<<endl;
cin>>i;
if (i==1)
//output
cout<<"Sum is :"<<sum(a,b)<<endl;
else if(i==2)
cout<<"Maximum is :"<<max(a,b)<<endl;
else if(i==3)
cout<<"Minimum is :"<<min(a,b)<<endl;
return 0;
}
