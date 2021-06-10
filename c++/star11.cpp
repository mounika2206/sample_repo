#include <iostream>
using namespace std;
int main() {

  int row, col;
  int size;
  int diagA, diagB;

  cout << "Enter height of the pattern ";
  cin >> size;

  for ( row=0; row<size; row++ ) {
    for ( col=0; col<size; col++ ) {

      diagA = row;
      diagB = size-row-1;

      if ( diagA <= diagB ){
        if ( col >= diagA && col <= diagB )
          cout << "*";
        else
          cout << " "; 
      }
      else {
        if (  col >= diagB && col <= diagA  )
          cout << "*";
        else
          cout << " ";
      }
    }
    cout <<endl;
  }

  cout <<endl;

  return 0;
}