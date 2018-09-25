//library
#include<iostream>
using namespace std;
//function for asinking the user for input the number of pair of shoes per week
int ask(int& shoe){
cout<<"ENTER NO OF PAIR OFF SHOES SOLD IN A WEEK :";
cin>>shoe;
return 0;
}
//function for salary per week Rs 600
int sal1(int& shoe){
int sal=600;
return sal;
}
//function for salary Rs 7 per hour and 10% commission on sale
double sal2(int& shoe){
double sal=(40*7)+(0.1*shoe*225);
return sal;
}
//function for salary 20% commission and Rs 20 per pair of shoes
double sal3(int& shoe){
double sal=(.2*shoe*225)+(20*shoe);
return sal;
}
//driver function
int main (){
//data input 
int shoe;
double s1,s2,s3;
ask(shoe);
//function calling
s1=sal1(shoe);
s2=sal2(shoe);
s3=sal3(shoe);
//program for best and output
	if(s1>s2&&s1>s3)
		cout<<"FIRST PROCESS IS THE BEST"<<endl;
	else if(s2>s3&&s2>s1)
		cout<<"SECOND PROCESS IS THE BEST"<<endl;
	else if(s3>s1&&s3>s2)
		cout<<"THIRD PROCESS IS THE BEST"<<endl;
return 0;
}
