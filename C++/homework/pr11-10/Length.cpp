#include "Length.h"

//*************************************
// Overloaded operator + *
//*************************************
Length operator+(Length a, Length b)
{
     return Length(a.len_inches + b.len_inches);
} 
//*************************************
// Overloaded  operator −             *
//*************************************
Length operator-(Length a, Length b)
{
     return Length(a.len_inches - b.len_inches);
}

//************************************
// Overloaded operator ==            *
//************************************
bool operator==(Length a, Length b)
{
     return a.len_inches == b.len_inches;
     }

//************************************
// Overloaded operator <
//************************************
bool operator<(Length a, Length b)
{
     return a.len_inches < b.len_inches;
}

//************************************
// Overloaded istream operator >>             *
//************************************
istream &operator>>(istream &in, Length &a)
{
     // Prompt for and read the object data
     int feet, inches;
     cout << "Enter feet: ";
     in >> feet;
     cout << "Enter inches: ";
     in >> inches;
}

//************************************
// Overloaded ostream operator <<*
//************************************
ostream &operator<<(ostream& out, Length a)
{
     out << a.getFeet() << " feet, " << a.getInches() << "inches";
     return out;
}