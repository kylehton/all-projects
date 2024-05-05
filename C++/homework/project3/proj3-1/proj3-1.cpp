/*This program takes user input in feet and inches and converts the two
into metric. It gives an option to run the program more than once before 
ending.
The program consists of 3 void functions and its main function.*/

#include <iostream>
#include <cmath>
using namespace std;

//prototype functions that are to be created and used in the main function
void getFeetInches(int &, int &);
void convertToMeterCentimeter(int, int, int &, int &);
void displayResults(int, int, int, int);

int main()
{

     int ft, in, m, cm;//declares local variables to main()
     bool flag = true;//boolean variable for while condition
     char choice;//char variable for user input Yes or No

     while (flag){
          getFeetInches(ft, in);//gathers input
          displayResults(ft, in, m, cm);//converts and displays data in metric
          cout << "Do you want to convert another set of values (Y/N)? ";
          //option to continue conversions
          cin >> choice;//option of yes or no
          flag = (choice == 'Y');/*continues if yes, if else then invalidates 
          while statement by turning flag false*/
     }
cout << "Good bye!" << endl;

return 0;
}


void getFeetInches(int &feet, int &inches){/*void function to gather output
that is only positive*/
     do{
          cout << "Enter feet: ";
          cin >> feet;
          cout << "Enter inches: ";
          cin >> inches;
     }while ((feet <= 0) || (inches <= 0));
}

void convertToMeterCentimeter(int feet, int inches, int &meters, int &centimeters){
/*converts US measurements to metric system using reference variables*/
     double totalinches = (feet*12) + inches;
     double totalincentimeters = totalinches * 2.54;//conversion rate in to cm
     meters = totalincentimeters/100;//converts total in cm to complete meters
     centimeters = (int)round(totalincentimeters)%100;/*rounds to nearest cm
     and displays total centimeters rounded to the nearest*/
}

void displayResults(int feet, int inches, int meters, int centimeters){
/*calls on the convert function and outputs the results*/
     convertToMeterCentimeter(feet, inches, meters, centimeters);/*call on the 
     convertTo() function*/
     cout << "Result of conversion: " << meters <<" meter(s) and "
     << centimeters << " centimeters."<< endl;//prints the results
}