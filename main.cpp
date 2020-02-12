//Wilfrido Varela 2-10-2020
//COSC 1436 Dr_T Unit 4 Assignment Part 1
//What I did in this program are calculation and to accept input from the user while the value does not equal 1 
#include <cstdlib>
#include <iostream>  
#include "Input_Validation_Extended.h" 
#include<sstream> 
using namespace std;

int main()
{ 
  //Initializing and declaring variables
   int counter = 0; 
   double n = 0.0; 
   double times = 0.0;
   double divided = 0.0;

   while(n != -1.0)  
   {
     cout << "\nPlease enter n (-1 to exit): ";
     n = validateDouble(n);
     
    //Calculations
     cout << "(" << n << "*" << n << ")" << " = " << (n*n) << endl;
     cout << "(" << n << "/" << n << ")" << " = " << (n/n) << endl;

     cout << "(" << n << "+" << 3 << ")" << "/" << 5 << " = " << (n+3.0)/5.0 << endl;

     cout << "[" << "(" << "(" << n << "+" << 3 << ")" << "/" << 5 << ")" << "+" << "(" << "(" << n << "+" << 7 << ")" << "/" << 2 << ")" << "]" << " = " << ((n+3.0)/5.0)+((n+7.0)/2.0) << endl;  
   }
     counter++;  
     cout << "\nThis program ran " << counter;
     cout << " times."; 
   
}