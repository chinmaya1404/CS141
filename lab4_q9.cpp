//library
#include<iostream>
using namespace std;
//function
int main()
{
//declare variable
float p,t,r,i;
//input data
cout<<"ENTER PRINCIPAL AMOUNT :";
cin>>p;
cout<<"ENTER TIME PERIOD :";
cin>>t;
cout<<"ENTER RATE OF INTEREST :";
cin>>r;
//calculate
i =p*t*r/100;
//output
cout<<"TOTAL INTEREST AMOUNT IS :"<<i<<endl;
return 0;
}

