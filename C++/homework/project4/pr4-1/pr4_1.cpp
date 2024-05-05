/*This program utilizes and reads an input file to gather up to 50 integers.
It sorts through the numbers and provides the read number as well as the 
amount of times it recurs throughout the file*/
#include <iostream>
#include <fstream>
#include <array>
using namespace std;

const int SIZE = 50;//constant size of max amount of numbers

//declaration of function prototypes
int countOccurrences(int arr[], int i, int c);
void descendingSort(int[], int);


int main(){

     ifstream inputFile;//ifstream variable to access file
     inputFile.open("numbers.txt");//opens local txt file

     int fullNumList[SIZE];//creates an empty array with size SIZE
     int currentnum, count;//local int variables to use
     /*The if statement here checks if the file inputFile can be accessed.
     If not, it tells the user and terminates the program immediately*/
     if (!inputFile)
     {
          cout << "File Error: Cannot Access File" << endl;
          return 0;
     }
     /*while loop to iterate through all instances of integers in inputFile*/
     while (inputFile >> fullNumList[count])
     {
          count++;//used as index and counts up to last used index
     }

     inputFile.close();//closes the stream inputFile

     int printArray[count];//array for actual numbers used
     /*for loop that goes through and creates another array with
     only integers that were from the input file, following the
     count to make sure it is only values that were imported*/
     for (int i = 0; i < count; i++)
     {       
          //copies reference to another array
          printArray[i] = fullNumList[i];
     }

     //sorts by greatest to least numerical value in the given array
     //uses count-1 as a starting index since array.size() cannot be used
     descendingSort(printArray, count-1);

     cout << "N\tCount" << endl;

     /* for loop that prints out the number and corresponding count
     as long as it is not a repeat. The if loop below checks if the 
     previous value is not the same as the current, and if so, it prints.
     If they are the same, it skips to the next index. This for loop begins
     with a starting index 'i' of 1 so that it does not incur an out of 
     bounds error , and the initialized values after filled indexes, 
     (the zeroes that are automatically initialized), keep from an out of
     bounds error on the end side of the loop */
     for (int i = 1; i <= count; i++)
     {
          if (printArray[i-1] != printArray[i]){
          cout << printArray[i-1] << "\t" 
          << countOccurrences(printArray, printArray[i-1], count) << endl;
          }

     }
}

/*implement of function countOccurrences() which returns the amount of times
a value reoccurs within the given array. parameter variable c is used as 
a stop condition for the for loop below in which it is the last index of the 
provided array. parameter variable num is used as the
current number being checked for reoccurrence*/
int countOccurrences(int array[], int num, int c)
{
     int count = 0;//count variable for each number
     for (int i = 0; i < c; i++)
     {
          //checks if current accessed value is greater than the number 
          //being checked
          if (num == array[i])
               count++;//adds one to amount of occuring specific value
     }
     
     return count;//returns the total amount of one value occurring
}

/*implement of function descendingSort() that sorts through the array
and reorganizes it to place the highest values at the top and list from
greatest to least values. the parameter variable i is used as the stop 
condition for the below outer for loop, in which it is the last index of the 
provided array */
void descendingSort(int arr[], int i)
{
     for (int index = i; index >= 0; index--)
     {
          for (int x = 0; x < index; x++){
               //checks if one value is greater than the other
               if (arr[index] > arr[x])
                    //swaps the two places if one is greater
                    swap(arr[x], arr[index]);
          }
     }
}