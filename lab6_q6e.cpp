//library
#include<iostream>
using namespace std;
//function
int sumEvenNumber(int v1,int v2){
int sum=0;
for(sum=0;v2>=v1;v1++){
if(v1%2==0)
sum=sum+v1;
else
sum=sum+0;
}
return sum;
}
int sumOddNumber(int v1,int v2){
int sum=0;
for(sum=0;v2>=v1;v1++){
if(v1%2==1)
sum=sum+v1;
else
sum=sum+0;
}
return sum;
}
int sumSquareEvenNumber(int v1,int v2){
int sum=0;
for(sum=0;v2>=v1;v1++){
if(v1%2==0)
sum=sum+v1*v1;
else
sum=sum+0;
}
return sum;
}
int sumSquareOddNumber(int v1,int v2){
int sum=0;
for(sum=0;v2>=v1;v1++){
if(v1%2==1)
sum=sum+v1*v1;
else
sum=sum+0;
}
return sum;
}
int main(){
//data input
int fn,sn,sumEven,sumOdd,sumSquareEven,sumSquareOdd;
cout<<"Enter First and Second Number";
cin>>fn>>sn;
//function calling
sumEven=sumEvenNumber(fn,sn);
sumOdd=sumOddNumber(fn,sn);
sumSquareEven=sumSquareEvenNumber(fn,sn);
sumSquareOdd=sumSquareOddNumber(fn,sn);
//output
cout<<"Sum Of Even Number is :"<<sumEven<<endl;
cout<<"Sum of Odd Number is :"<<sumOdd<<endl;
cout<<"Sum of square of Even Number is :"<<sumSquareEven<<endl;
cout<<"Sum of square of Odd Number is :"<<sumSquareOdd<<endl;
return 0;
}

