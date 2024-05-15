// This program demonstrates the Length class's overloaded
// +, −, ==, and < operators.
//It also demonstrates overloaded istream and ostream operators.
#include <iostream>
#include "Length.h"
#include "Length.cpp"//includes length.cpp file for function use
using namespace std;

int main() 
{
     Length first(0), second(0), third(0);
     int f, i;
     /*uses the istream overloaded operators to ask for and gather input*/
     cin >> first;
     cin >> second;

     // Test the + and − operators
     third = first + second;
     cout << "first + second = ";
     cout << third << "\n";//uses the overloaded ostream operator to output
     third = first - second;
     cout << "first - second = ";
     cout << third << "\n";//uses the overloaded ostream operator to output

     // Test the relational operators
     cout << "first == second = ";
     if (first == second) cout << "true"; else cout << "false";
     cout << "\n";
     cout << "first < second = ";
     if (first < second) cout << "true"; else cout << "false";
     cout << "\n";

     return 0;
}