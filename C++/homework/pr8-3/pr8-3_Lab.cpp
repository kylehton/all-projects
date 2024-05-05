// This program reads employee work hours from a file
// and stores them in an int array. It uses one loop
// to input the hours and another to display them.
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std; 
int main()
{
     const int NUM_EMPLOYEES = 6;  // Sets number of employees
     int hours[NUM_EMPLOYEES];//employee's hours
     int count = 0;//variable that counts
     double payRate[NUM_EMPLOYEES];//array that holds respective pay rates
     int totalHours = 0;//sum variable to add all hours worked by all employees
     double totalPayRate = 0;//sum variable to add all payrates

// Holds each
// Loop control
// how many data items have been read in
    ifstream inputFile;
// Input file stream object

    // Open the data file.
    inputFile.open("workLab.dat");
    if (!inputFile)
       cout << "Error opening data file\n";
    else
    {     // Read the numbers from the file into the array. When we exit
          // the loop, count will hold the number of items read in.
          while (count < NUM_EMPLOYEES && inputFile >> hours[count]
               && inputFile >> payRate[count]){/*additional condition that 
               continues copying inputFile data to two arrays*/
               count++;//counter variable to transverse array indexes
          }

          // Close the file.
          inputFile.close();

          // Display the contents of the array.
          cout << "The hours worked and hourly pay rates of each employee are\n";
          for (int employee = 0; employee < count; employee++){   
               cout << "Employee " << employee+1 << ": ";
               cout << hours[employee] << " " << 
               payRate[employee] << endl;//displays the hourly rate of each employee
               totalHours += hours[employee];/* sums up all hours worked by
               all employees into one int variable */
               totalPayRate += (hours[employee]*payRate[employee]); /* sums up
               the total of all respective pay rates multiplied by hours worked,
               which finds the total gross pay for each employee with respect to
               their base hourly pay rate as well as their hours worked */
          }

          cout << "Total hours worked by all employees: " 
          << totalHours << endl;//prints the total hours of all employees
          cout << "Total gross pay of all employees: $" <<
          totalPayRate << endl;//prints total gross pay of all employees
          cout << "Average hours worked: " << (totalHours/count) 
          << endl; //finds and prints the average amount of hours worked
          cout << "Average gross pay: $" << (totalPayRate/count) 
          << endl;//finds and prints the average amount of pay

     }
}