#ifndef DIVSALES_H //checks whether DivSales is defined, makes sure doesnt repeat
#define DIVSALES_H //defines DivSales if it has not been defined

class DivSales
{
     private:
     //static variable to hold all total sales across all divisions
     static double totalSales;
     const static int SIZE_OF_DIV = 4;//constant size for amount of sale per div
     /*Each DivSales object is essentially an array holding 4 doubles
     so the salesArray is the basis of the DivSales object, with a size of 
     SIZE_OF_DIV which is set to 4*/
     double salesArray[SIZE_OF_DIV];
     

     public: 

     /*Creates a DivSales default constructed object and sets each value
     at all quarterly sales to 0*/
     DivSales(){
          for (int i = 0; i < SIZE_OF_DIV; i++)
          {
               salesArray[i] = 0;
          }
     }
     
     //function initializations declarations for later implementation
     void inputSales(double, double, double, double);
     double getQuarterSales(int);

};

#endif //ends the definition of DivSales 
