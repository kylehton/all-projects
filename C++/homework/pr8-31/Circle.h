 // This header file contains the Circle class declaration.
 //For each declaration, it also implements the function
#ifndef CIRCLE_H
#define CIRCLE_H
#include <cmath>

class Circle
{  
     private:
          double radius;//radius
          int centerX, centerY;//coordinates

     public:
          Circle(){//default constructor with a preset radius of 1.0
               radius = 1.0;
               centerX = centerY = 0;
          }
     
          Circle(double r){//constructor that takes 1 argument (radius)
               radius = r;
               centerX = centerY = 0;
          }

 

          Circle(double r, int x, int y){/*constructor that takes all
               3 arguments for its respective private variables*/
               radius = r;
               centerX = x;
               centerY = y;
          } 

          void setRadius(double r){  
               radius = r;
          } 

          int getXcoord(){  
               return centerX;
          } 

          int getYcoord(){
               return centerY;
          } 

          double findArea(){  
               return 3.14 * pow(radius, 2);
          }

}; // End Circle class declaration
#endif