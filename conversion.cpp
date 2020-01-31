#include <iostream>
using namespace std;


const double centiPerIn = 2.54;
const int  inchPerFt = 12;

// printing to console converstion solution
void conversionSolution(double meters, double centimeters){



cout << "Converting length: " << endl;
cout << meters << " meters and " << centimeters << " centimeters." << endl;

}

//Conversion from inches/feet into centimeters
double conversion(int inches, int feet){

  int totalInches;
  double centimeterVal;
  double centimeters;
  int meters;

  meters = centimeterVal / 100;
  totalInches = (feet * inchPerFt) + inches;
  centimeterVal = totalInches * centiPerIn;
  centimeters = centimeterVal - (meters * 100);

  conversionSolution(meters, centimeters);

  return meters, centimeters;
}


//user input for feet and inches
void userInput(){


  int inches;
  int feet;

  cout << "How many inches? " << endl;
  cin >> inches;

  cout << "How many feet? " << endl;
  cin >> feet;



  conversion (inches, feet);

}

int main(int argc, char **argv){

  bool keepConversion = true;
  string answer = "";

//while loop to keep program running or to quit
  while(keepConversion == true){

    userInput();

    cout << "Would you like to make a conversion again? (Yes or No)" << endl;

    cin >> answer;

    if (answer == "No"){

      keepConversion = false;
    }
  }

  return 0;
}
