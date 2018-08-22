//lairary
#include<iostream>
using namespace std;
//function
int main()
{
//declare variable
int days,day,mon,year,rem1;
//input day
cout<<"ENTER NUMBER OF DAYS :";
cin>>days;
//operation
year = days/365;
rem1 = days % 365;
mon = rem1 / 30;
day = rem1 % 30;

//output
cout<<"RESULT :"<<year<<" YEARS "<<mon<<" MONTHS "<<day<<" DAYS "<<endl;
return 0;
}
