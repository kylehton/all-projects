#include "Length1.h"

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
// Overloaded operator <             *
//************************************
bool operator<(Length a, Length b)
{
     return a.len_inches < b.len_inches;
}