#include "DivSales.h"
#include <iostream>
using namespace std;

     //initializes the static double totalSales for class use 
     double DivSales::totalSales = 0;

     /*This function takes in 4 parameters that are doubles, and assigns
     their respective values to the 4 quarter slots allocated in each
     DivSales object. At the end, it sums all 4 quarterly sales parameters
     into the static variable totalSales to accumulate all inputted sales
     parameters across all DivSales objects*/
     void DivSales::inputSales(double q1, double q2, double q3, double q4)
     {
          salesArray[0] = q1;
          salesArray[1] = q2;
          salesArray[2] = q3;
          salesArray[3] = q4;
          totalSales += q1 + q2 + q3 + q4;
     }

     //returns the item at index i of salesArray, which is the 
     //quarterly sales double at the index corresponding to quarter
     double DivSales::getQuarterSales(int i)
     {
          return salesArray[i];
     }