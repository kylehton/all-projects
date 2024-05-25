// This program uses the return value of strcmp to
// alphabetically order two strings entered by the user.
#include <iostream>
#include <cstring>
using namespace std;

int main() 
{
    // Two arrays to hold two strings
     const int NAME_LENGTH = 30;

     char name1[NAME_LENGTH], name2[NAME_LENGTH], name3[NAME_LENGTH];
     //added an additional name3 C-string

     // Read two strings
     cout << "Enter a name (last name first): ";
     cin.getline(name1, NAME_LENGTH);
     cout << "Enter another name: ";
     cin.getline(name2, NAME_LENGTH);
     cout << "Enter another name: ";
     cin.getline(name3, NAME_LENGTH);//gathered input for name3 C-string

     // Print the two strings in alphabetical order
     cout << "Here are the names sorted alphabetically:\n";

     /*checks whether name1 is greater than both name2 and name3,
     then determines whether name2 or name3 is greater, then prints
     in alphabetical order*/
     if (strcmp(name1, name2) < 0 && strcmp(name2, name3) < 0 &&
     strcmp(name1, name3) < 0)
          cout << name1 << endl << name2 << endl << name3 << endl;
     else if (strcmp(name1, name2) < 0 && strcmp(name3, name2) < 0 &&
     strcmp(name1, name3) < 0)
          cout << name1 << endl << name3 << endl << name2 << endl;
     /*checks whether name2 is greater than both name1 and name 3,
     then determines whether name1 or name3 is greater, then prints
     in alphabetical order*/
     else if (strcmp(name2, name1) < 0 && strcmp(name1, name3) < 0 &&
     strcmp(name2, name3) < 0)
          cout << name2 << endl << name1 << endl << name3 << endl;
     else if (strcmp(name2, name1) < 0 && strcmp(name3, name1) < 0 && 
     strcmp(name2, name3) < 0)
          cout << name2 << endl << name3 << endl << name1 << endl;
     /*checks whether name3 is greater than both name1 and name2,
     then determines whether name1 or name2 is greater, then prints
     in alphabetical order*/
     else if (strcmp(name3, name2) < 0 && strcmp(name2, name1) < 0 &&
     strcmp(name3, name1) < 0)
          cout << name3 << endl << name2 << endl << name1 << endl;
     else if (strcmp(name3, name2) < 0 && strcmp(name1, name2) < 0 &&
     strcmp(name3, name1) < 0)
          cout << name3 << endl << name1 << endl << name2 << endl;
     //else statement for when all three C-string are the same
     else
          cout << "You entered the same name three times!\n";

     return 0;
}