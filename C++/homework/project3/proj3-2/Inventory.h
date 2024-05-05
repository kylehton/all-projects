//header file for the Inventory Class
//declares and initializes Inventory object
#ifndef INVENTORY_H //if header file is not yet defined
#define INVENTORY_H //defines header file

class Inventory{

     private://private variables assigned to each Inventory object
     int itemNumber, quantity;
     double cost;

     public:
     Inventory(){//default constructor, sets all values to 0
          itemNumber = 0;
          quantity = 0;
          cost = 0;
     }

     Inventory(int i, int q, double c){//sets values to parameters
          itemNumber = i;
          quantity = q;
          cost = c;
     }

//declares functions in the class to be used with the Inventory object
//functions will be written in the function implementation file
     void setItemNumber(int);
     void setQuantity(int);
     void setCost(double);
     int getItemNumber();
     int getQuantity();
     double getCost();
     double getTotalCost();
};

#endif //makes sure it doesnt define more than once