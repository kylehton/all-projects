// This program uses an array of objects.
// The objects are instances of the Circle class.
#include <iostream>
#include <iomanip>
#include "Circle.h"//includes declaration file
using namespace std;

void bubbleSort(Circle[], int);//function prototype to later implement
const int NUM_CIRCLES = 4;

int main()
{
    Circle circle[NUM_CIRCLES];  // Define an array of Circle objects

    // Use a loop to initialize the radius of each object
     for (int index = 0; index < NUM_CIRCLES; index++) 
     {
          double r;
          cout << "Enter the radius for circle " << (index+1) << ": ";
          cin >> r;
          circle[index].setRadius(r);
     }

     //calls on bubbleSort function to sort Circle objects by ascending
     //order in terms of their area
     bubbleSort(circle, NUM_CIRCLES);

    // Use a loop to get and print out the area of each object
    cout << fixed << showpoint << setprecision(2);
    cout << "\nHere are the areas of the " << NUM_CIRCLES
    << " circles.\n";

    for (int index = 0; index < NUM_CIRCLES; index++)
    {
     cout << "circle " << (index+1) << setw(8)
     << circle[index].findArea() << endl;
    }
    return 0;
}

void bubbleSort(Circle arr[], int i)//void function to sort array ascending
{
     /*outer for loop ensures that the maxValue index goes through the entire
     array to see if any values in any other indexes are greater than itself*/
     for (int maxValue = i-1; maxValue > 0; maxValue--)
     {
          /* nested for loop starts from index 0 and meets up with index
          maxValue to compare each number with one current possible swap
          (whatever is in index maxValue), by stopping at index maxValue
          it eliminates double swapping and misreading*/
          for (int minValue = 0; minValue < maxValue; minValue++)
          {
               /*if statement checks if the minValue index value is 
               greater than the current number in maxValue index */
               if (arr[minValue].findArea() > arr[maxValue].findArea())
                    swap(arr[maxValue], arr[minValue]);//swaps two indexes
          }
     }
}