
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

    //can you write an if condition that prevents -1 from being calculated, exit without caculation? 
   }
     counter++;  
     cout << "\nThis program ran " << counter;
     cout << " times."; 
   
}