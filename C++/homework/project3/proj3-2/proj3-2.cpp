/*This program is the main function program that uses both the 
Inventory header file and implementation file that belong to
the Inventory object class*/
#include <iostream>
#include "Inventory.cpp"//includes the Inventory implementation file
#include "Inventory.h"//includes the Inventory header file
using namespace std;

//function prototypes of functions in the header and class files
void setItemNumber(int);
void setQuantity(int);
void setCost(double);
int getItemNumber();
int getQuantity();
double getCost();
double getTotalCost();

int main(){

     //initializes the variables used for user input and parameters
     int itemNum = 0, quantity = 0;
     double cost = 0.0;
     
     Inventory inv1;//creates a default constructed Inventory object

     cout << "Inventory tester output with input validation:"<< endl;
     
     do{//do-while loop that validates a positive input for item number
          cout << "\nEnter item number: ";
          cin >> itemNum;
          if (itemNum < 0){
               cout << "ERROR: Please enter a positive value for item number.";
          }
     }while (itemNum < 0);

     do{//do-while loop validating positive input for cost
          cout << "\nEnter item cost (per unit): $";
          cin >> cost;
     if (cost < 0.0){
               cout << "ERROR: Please enter a positive value for item cost.";
          }
     }while (cost < 0.0);

     do{//do while loop that validates a positive item quantity
          cout << "\nEnter item quantity: ";
          cin >> quantity;
          if (quantity < 0){
               cout << "ERROR: Please enter a positive value for item quantity.";
          }
     }while (quantity < 0);
     
     Inventory inv2(itemNum, quantity, cost);/*creates an Inventory
     object with the inputted values as parameters*/

     
//output for Inventory object created with default constructor
//uses Inventory class accessor functions to print variable values
     cout << "Inventory Summary (Default):\n" << endl;
     cout << "Item: " << inv1.getItemNumber() << endl;
     cout << "Price per quantity: $" << inv1.getCost() << endl;
     cout << "Quantity: " << inv1.getQuantity() << endl;
     cout << "Total Cost: $" << inv1.getTotalCost() << endl;

//output for Inventory object created with constructor with parameters
//uses accessor functions to print variable values
     cout << "\nInventory Summary (Custom):\n" << endl;
     cout << "Item: " << inv2.getItemNumber() << endl;
     cout << "Price per quantity: $" << inv2.getCost() << endl;
     cout << "Quantity: " << inv2.getQuantity() << endl;
     cout << "Total Cost: $" << inv2.getTotalCost() << endl;

return 0;
}