#include <iostream>
using namespace std;

//definition of function
float addTax(double taxRate, double costBeforeTax){

  double taxAmount;
  float finalCost;


  taxAmount = (taxRate/ 100) * costBeforeTax;

  finalCost = costBeforeTax + taxAmount;

  return finalCost;

}

int main(int argc, char **argv){

double tax;
double price;

//user input
cout << "Enter the tax: $";
cin >> tax;

cout << "Enter the cost: $";
cin >> price;

cout << "$" << addTax(tax, price) << " is your final cost." << endl;

return 0;

}
