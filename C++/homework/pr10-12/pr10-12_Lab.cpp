// This program demonstrates that a pointer may be used as a
// parameter to accept the address of an array. Either subscript
// or pointer notation may be used.
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

// Function prototypes
void getSales(double *sales, int size);
double totalSales(double *sales, int size);
double averageSales(double *sales, int size);

int main()
{
     const int QUARTERS = 4;
     double sales[QUARTERS];
     double avgsales;

     getSales(sales, QUARTERS);
     avgsales = averageSales(sales, QUARTERS);
     cout << setprecision(2);
     cout << fixed << showpoint;
     cout << "The total sales for the year are $";
     cout << totalSales(sales, QUARTERS) << endl;
     cout << "The average sales for the year are $";
     cout << avgsales << endl;
     return 0;
     } 

//******************************************************************
// Definition of getSales. This function uses a pointer to accept  *
// the address of an array of doubles. The number of elements   *
// in the array is passed as a separate integer parameter.  *
// The function asks the user to enter the sales figures for  *
// four quarters, then stores those figures in the array using  *
// subscript notation. * 
//******************************************************************
void getSales(double *array, int size)
{
     for (int count = 0; count < size; count++)
     {
          cout << "Enter the sales figure for quarter ";
          cout << (count+1) << ": ";
          cin >> array[count];
     }  
} 

//****************************************************************
// Definition of totalSales. This function uses a pointer to *
// accept the address of an array of doubles whose
//Program Output with Example Input Shown in Bold size  *
// is passed as a separate parameter. The function uses pointer  *
// notation to sum the elements of the array. 
//****************************************************************
double totalSales(double *array, int size)
{
     double sum = 0.0;

     for (int count = 0; count < size; count++)
     {
          sum += *array;
          array++;
     }
     return sum;
}


/*This function calls on the function totalSales() in order to gather
the sum of all the elements within the array provided in the parameters,
which is pointed to by its reference using the asterick. Then, it 
computes the average by dividing it by the provided size, and returns 
the average as a double*/
double averageSales(double *array, int size)
{
     double avg = totalSales(array, size);//calls on sum method 
     
     return (avg/size);//returns the sum divided by the size for an average
}