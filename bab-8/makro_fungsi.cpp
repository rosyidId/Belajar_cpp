/******************************************************
Nama file: makro_fungsi.cpp
*******************************************************/

#include <iostream>

#define MAKSIMUM(a,b) ((a > b) ? a : b)

int main() {
   int x, y;
   
   std::cout<<"Masukkan nilai x: ";
   std::cin>>x;
   std::cout<<"Masukkan nilai y: ";
   std::cin>>y;

   std::cout<<"Nilai maksimum: "<<MAKSIMUM(x,y)<<std::endl;
   
   return 0;
}

