//library 
#include<iostream>
using namespace std;
//Declare a function that obtains from the user and returns a value for unitCst, units, and taxRt to the calling modu
void askUser(int& units, int& unitCst, int& taxRt)
 {
   cout << "Enter the units=" << endl;
   cin >> units;
   cout << "Enter the unit cost" << endl;
   cin >> unitCst;
   cout << "Enter the tax rate" << endl;
   cin >> taxRt ;
 }
//Write a function that receives the units, unit cost and tax rate and returns to the calling module the sales tax and totDue
void taxCalculate( int& units, int& unitCst, int& taxRt, double& salesTx, double&  totDue)
 {
   salesTx= units* unitCst* taxRt;
   totDue= salesTx + (units*unitCst);
 }
//Function to output the received values in a readable format
void outputValues(  int& units, int& unitCst, int& taxRt, double& salesTx, double&  totDue)
 {
   cout << "The number of units are=" << units << endl;
   cout << "The unit cost is=" << unitCst << endl;
   cout << "The tax rate is=" << taxRt << endl;
   cout << "Sales tax=" << salesTx << endl ;
   cout << "Total=" << totDue << endl ;
 }
//driver function
int main() {
   //Declare the variables
   int unit, uCt, txRt;
   double slsTx, total;
   //call by reference
   askUser( unit, uCt, txRt);
   taxCalculate( unit, uCt, txRt, slsTx, total);
   outputValues( unit, uCt, txRt, slsTx, total);
   return 0;
}
