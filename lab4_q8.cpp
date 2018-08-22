//library
#include<iostream>
using namespace std;
//function
int main()
{
//declare variable
float s1,s2,s3,s4,s5,tot,avg,per,ful;
//input data
cout<<"ENTER MARKS OF FIVE SUBJECTS";
cin>>s1>>s2>>s3>>s4>>s5;
cout<<"FULL MARK";
cin>>ful;
//operation
tot = s1+s2+s3+s4+s5;
avg = tot/5;
per = (tot/ful)*100;
//output
cout<<"TOTAL MARK IS :"<<tot<<endl;
cout<<"AVARAGE MARK IS :"<<avg<<endl;
cout<<"PERCENTAGE IS :"<<per<<"%"<<endl;
return 0;
}
