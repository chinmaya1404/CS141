//library
#include<iostream>
using namespace std;
//driver function
int main(){
//data initialization and output
//integer
int a1;
int *p1;
cout<<"size of integer datatype :"<<sizeof(a1)<<endl;
cout<<"size of integer pointer :"<<sizeof(p1)<<endl; 
//character
char a2;
char *p2;
cout<<"size of character datatype :"<<sizeof(a2)<<endl;
cout<<"size of character pointer :"<<sizeof(p2)<<endl; 
//boolean
bool a3;
bool *p3;
cout<<"size of boolean datatype :"<<sizeof(a3)<<endl;
cout<<"size of boolean pointer :"<<sizeof(p3)<<endl; 
//float
float a4;
float *p4;
cout<<"size of float datatype :"<<sizeof(a4)<<endl;
cout<<"size of float pointer :"<<sizeof(p4)<<endl; 
//double
double a5;
double *p5;
cout<<"size of double datatype :"<<sizeof(a5)<<endl;
cout<<"size of double pointer :"<<sizeof(p5)<<endl; 
return 0;
}
