#include <iostream>
#include <fstream>
using namespace std;

int main(){
     ifstream inputFile;
     inputFile.open("encodedtext.txt");

     if (!inputFile)
     {
          cout << "Failed to open file.";
          return 0;
     }

     while (inputFile)
     {
          
     }
     
}