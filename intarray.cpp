#include <iostream>
using namespace std;

int main(){


   int numArray[10]; //array declaration of index 10
   int number;



   for(int i = 0; i<10; ++i){ //iteratiing through for loop 10 times

     cout << "Please enter integer " << i + 1 << ": " << endl; //user input
     cin >> number;

     if(number < 0){

       cout << "Enter a non-negative number: " << endl; // user input; checking if they entered a non negative number
       cin >> number;

     }

     numArray[i] = number; //user input


   }


   for(int i = 0; i<10; ++i){ //iterating through array

     cout << numArray[i] << endl;

   }
   return 0;


}
