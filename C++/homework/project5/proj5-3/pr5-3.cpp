/*This program takes in a string from user input and for each instance
of the letter C uppercase, it replaces it with */

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){

     string fulltext = "";
     char currentletter;

     ifstream inputFile;
     ofstream outputFile;

     inputFile.open("inText.txt");
     if (!inputFile)
     {
          cout << "File Error";
          return 0;
     }

     int ccount = 0;
     while (inputFile.get(currentletter))
     {
          fulltext += currentletter;
          if (currentletter == 'C')
          {
               fulltext += "++";
          }
     }

     outputFile.open("outText.txt");

     outputFile << fulltext;
     inputFile.close();
     outputFile.close();
     return 0;
     
}