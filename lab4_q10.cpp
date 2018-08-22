//library
#include<iostream>
#include<cmath>
using namespace std;
//function
int main()
{

//declare variable
float p,t,r,i;
//input data
cout<<"ENTER PRINCIPAL AMOUNT :";
cin>>p;
cout<<"ENTER INTEREST RATE :";
cin>>r;
cout<<"ENTER TIME PERIOD :";
cin>>t;
//calculate
i = p*pow((1+r/100),t)-p;
//output
cout<<"NET INTEREST IS :"<<i<<endl;
return 0;
}
