/*The program is an extension of the Inventory header class, and is 
the implementation file for the object Inventory. Uses the declared
functions from the header class and constructs them into accessors
and mutators*/

#include <iostream>
#include "Inventory.h"//includes Inventory header class
using namespace std;

     void Inventory::setItemNumber(int itemNum){/*sets item number of 
     Inventory object to parameter as long as its positive, if not
     then it leaves as is*/
          if (itemNum >= 0)
               itemNumber = itemNum;
     }

     void Inventory::setQuantity(int q){/*sets item quantity of 
     Inventory object to parameter as long as its positive, if not
     then it leaves as is*/
          if (q >= 0)
               quantity = q;
     }

     void Inventory::setCost(double c){/*sets item cost of 
     Inventory object to parameter as long as its positive, if not
     then it leaves as is*/
          if (c >= 0)
               cost = c;
     }

     int Inventory::getItemNumber(){
          return itemNumber;
     }

     int Inventory::getQuantity(){
          return quantity;
     }

     double Inventory::getCost(){
          return cost;
     }

     double Inventory::getTotalCost(){
          return cost * quantity;
     }