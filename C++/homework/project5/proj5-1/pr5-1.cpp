#include "DivSales.h"
#include "DivSales.cpp"
#include <iostream>
#include <iomanip>
using namespace std;

int main(){

     //constant variable for number of total divisions that will be created
     const int NUMOF_DIV = 6;
     //creates an array to hold NUMOF_DIV(6) DivSales objects
     DivSales allDivisions[NUMOF_DIV];

     //input gathering for loop to create Division objects and array
     for (int i = 0; i < NUMOF_DIV; i++)
     {
          DivSales newDiv;//creates a newDiv object
          //adds the reference to the allDivisions array at index i
          allDivisions[i] = newDiv;
          double q1, q2, q3, q4;//temporary doubles to hold input
          cout << "Enter the quarterly sales below for the " << i+1 
          << " Division: " << endl;
          //below gathers input for the 4 quarters of each DivSales object
          cout << "Quarter 1: ";
          cin >> q1;
          cout << "Quarter 2: ";
          cin >> q2;
          cout << "Quarter 3: ";
          cin >> q3;
          cout << "Quarter 4: ";
          cin >> q4;
          //uses the inputSales() function to set values for each DivSales object
          allDivisions[i].inputSales(q1,q2,q3,q4);

     }

     /*printing nested for loop to print each quarter of each division,
     which loops 6 times in the outer to cover all 6 DivSales objects,
     and loops 4 times to reach each quarter of each DivSales object*/
     for (int i = 0; i < NUMOF_DIV; i++)
     {
          cout << "Division " << i+1 << " :";
          for (int x = 0; x < 4; x++)
          {
               //prints the quarterly sales using getQuarterSales();
               cout << setw(4) << allDivisions[i].getQuarterSales(x);
               ;
          }
          cout << "\n";
     }
     
     return 0;

}