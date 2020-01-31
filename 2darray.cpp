#include <iostream>
using namespace std;

int main(){
  int a [4][5]; //declaration of array


  for(int i = 0; i < 4; ++i){  //for loop iteration through rows

    for(int j = 0; j < 5; ++j){ //for loop iteration through columns

      cout << "Please enter a number for the specified row" << i + 1 << "  and specified column " << j + 1 << ": " << endl; //user input

      cin >> a[i][j]; //user input
    }

  }


  return 0;

}
