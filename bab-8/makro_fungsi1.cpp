/******************************************************
Nama file: makro_fungsi1.cpp
*******************************************************/

#include <iostream>

#define MAKSIMUM(a,b) ((a > b) ? a : b)

int main() {
   double x, y;	// x dan y bertipe double
   
   std::cout<<"Masukkan nilai x: ";
   std::cin>>x;
   std::cout<<"Masukkan nilai y: ";
   std::cin>>y;

   std::cout<<"Nilai maksimum: "<<MAKSIMUM(x,y)<<std::endl;
   
   return 0;
}

