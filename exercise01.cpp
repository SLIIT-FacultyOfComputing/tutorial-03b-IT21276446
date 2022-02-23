#include <iostream>
#include<iomanip>
using namespace std;

int main() {
 float marks[] = {78.4, 90.6, 45.9, 72.2, 54.4}; //declaring variables
 char names[][20] = {"Ajith", "Wimal", "Kanthi", "Suranji", "Kushmitha"};
  
 cout << "No\t\t" << "\t\tName\t" << " Marks" << endl;
  //displaying the values using a for loop
 for (int r = 0; r < 5; r++) {
     cout << setiosflags(ios::fixed) << setw(5) << r+1 
          << setw(15) <<  names[r]
          << setw(10) << setprecision(2)<< marks[r] << endl;
 }

  return 0;
}