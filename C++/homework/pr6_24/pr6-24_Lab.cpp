 // This program uses 2 functions: a void function with a reference
 // variable as a parameter, and a value-returning function.
 #include <iostream>
 using namespace std;
 
 // Function prototypes
    void getNum(int &);
 int doubleNum(int);
     void getNum(double &);//declares function prototypes for double parameter
 double doubleNum(double);//declares function prototypes for double parameter


int main()
 {
   int value;
   double value2;

// Call getNum to get a number and store it in value
    getNum(value);

    // Call doubleNum, passing it the number stored in value
    // Assign value the number returned by the function
    value = doubleNum(value);

    // Display the resulting number
    cout << "That value doubled is " << value << endl;

    //This section is dedicated to instances of double values inputted
    // Call getNum to get a number and store it in value
    getNum(value2);

    // Call doubleNum, passing it the number stored in value
    // Assign value the number returned by the function
    value2 = doubleNum(value2);

    // Display the resulting number
    cout << "That value doubled is " << value2 << endl;
    
 return 0;
 } 
/********************************************************
**
* getNum *
 * This function stores user input data in main's value   *
* variable by using a reference variable as a
parameter. *

*********************************************************
*/
void getNum(int &userNum)
{
  do{//loops in cases of true while statement condition
   cout << "Enter a positive integer: ";//tells user to input a positive num
   cin  >> userNum;//gathers input in integer variable type
  }
  while (userNum < 0);//condition to validate positive input
   
} 

void getNum(double &userNum){//overloaded getNum() with a double parameter
  do{//loops in cases of true while statement condition
   cout << "Enter a positive double: ";//tells user to input a positive num
   cin  >> userNum;//gathers input in double variable type
  }
  while (userNum < 0);//condition to validate positive input
    
}
/********************************************************
***
  *                        doubleNum
*
  * This function doubles the number it receives as an
*
  * argument and returns it to main thru a return
statement.*

*********************************************************
**/
 int doubleNum (int number)
 {
    return number * 2;
 }
 double doubleNum (double number){//overloaded doubleNum() with double parameter
    return number * 2;//returns the double parameter times 2
 }