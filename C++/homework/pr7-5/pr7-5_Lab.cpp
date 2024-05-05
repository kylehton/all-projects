 // This program uses a constructor to initialize a member variable.
 #include <iostream>
 #include <cmath>
 using namespace std;

 // Circle class declaration
 class Circle
 {  
     
private:
     double radius;

public:
   Circle();
   Circle(double);//creates instance for object with a parameter
// Member function prototypes
void setRadius(double);
double calcArea();
double calcCircumference();//declares function prototype
};

 // Circle member function implementation section

 /********************************************
  *             Circle::Circle               *
  * This is the constructor. It initializes  *
  * the radius class member variable.        *
  ********************************************/
 Circle::Circle()
 {  radius = 1.0;
 }

Circle::Circle(double r){//constructor for Circle object with parameter
     if (r > 0.0)//invalidates illogical responses, negatives and 0
          radius = r;
     else radius = 1.0;//automatically sets invalid responses to radius = 1.0
}
 /********************************************
  *             Circle::setRadius            *
  * This function validates the value passed *
  * to it before assigning it to the radius  *
  * member variable.                         *

 ********************************************/ 
void Circle::setRadius(double r)
{ if(r>=0.0)
 radius = r;
    // else leave it set to its previous value
 }

 /**********************************************
  *               Circle::calcArea             *
  * This function calculates and returns the   *
  * Circle object's area. It does not need any *
  * parameters because it can directly access  *
  * the member variable radius.                *
  **********************************************/
 double Circle::calcArea()
 {  
     return 3.14 * pow(radius, 2);
 }
double Circle::calcCircumference(){//calculates circumference of Circle object
     return 3.14 * 2 * radius;
}
 /***************************************
  *               main                  *
  * The main function creates and uses  *
  * 2 Circle objects.                   *
  ***************************************/

 
 int main()
 {
    // Define a Circle object. Because the setRadius function
    // is never called for it, it will keep the value set
    // by the constructor.
    Circle circle1(3.1);/*3.1 is a random number to instantiate the Circle
    object with a predetermined value for its radius */ 

    // Define a second Circle object and set its radius to 2.5
    Circle circle2;
    circle2.setRadius(2.5);

    // Get and display each circle's area
    cout << "The area of circle1 is " <<
circle1.calcArea() << endl;
    cout << "The area of circle2 is " <<
circle2.calcArea() << endl;
     cout << "The circumference of circle1 is " <<
circle1.calcCircumference() << endl;//calls on function and outputs
    cout << "The circumference of circle2 is " <<
circle2.calcCircumference() << endl;//calls on function and outputs

    return 0;
 }