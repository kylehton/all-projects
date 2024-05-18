// This program illustrates pointers to class objects
// and structures as parameters of functions.
#include <iostream>
#include <string> 
using namespace std;

// Person class
class Person
{
private:
	string name;
	int age;
public:

     Person()
     {
          name = "";
          age = 0;
     }
	Person(string name1, int age1)
	{
		name = name1;
		age = age1;
	}
	int getAge() 
     { 
          return age; 
     }
	string getName() 
     { 
     return name; 
     }

};

//function prototype declaration
int lengthOfName(Person *p);

int main()
{

     int personcount;//number of people that are going to be inputted
     cout << "Please enter a number of people: ";
     cin >> personcount;
     //creates an array of pointers for each Person object
     Person *personArray[personcount];

     /*For loop that gathers input and creates a pointer leading to
     a new Person object, in which the pointer is stored in an array
     with a size of personcount*/
     for (int i = 0; i < personcount; i++)
     {
          string tempname;
          int tempage;
          cout << "Please enter this person's name: ";
          cin >> tempname;
          cout << "Please enter this person's age: ";
          cin >> tempage;
          Person *pPerson = new Person(tempname, tempage);
          personArray[i] = pPerson;
     }
	
     /*for loop that uses the pointer within the array at index i 
     to access the name and length of name of the specified Person
     object, then prints it. After use, deletes the pointer to the
     Peron object at index i for memory deallocation*/
     for (int i = 0; i < personcount; i++){
	     cout << "The name " << personArray[i]->getName()
	     << " has length " << lengthOfName(personArray[i]) << endl;
          delete personArray[i];
  	     personArray[i] = nullptr;
     }
	
  	return 0; 
}

//******************************************************
// Returns the number of characters in a person's name *
//******************************************************
int lengthOfName(Person *p)
{
     string name = p->getName();
     return name.length();
}
