//library
#include<iostream>
using namespace std;
//function
int sumOddNumber(int v1,int v2){
int sum;
for (sum=0;v1<=v2;v1++){
if (v1 %2==1)
	sum=sum+v1;
else
	sum=sum+0;
}
return sum;
}
int main(){
//data input
int fn,sn;
cout<<"Enter first and second number";
cin>>fn>>sn;
//function calling
//output
cout<<"Sum is :"<<sumOddNumber(fn,sn)<<endl;
return 0;
}
