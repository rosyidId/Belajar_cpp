/******************************************************
Nama file: makro_fungsi.cpp
*******************************************************/

#include <iostream>

// mendefinisikan makro
#define MAKSIMUM(a,b) ((a>b) ? a : b)

int main() {
   double x, y;
   
   std::cout<<"Masukkan nilai x: ";
   std::cin>>x;
   std::cout<<"Masukkan nilai y: ";
   std::cin>>y;
   
   std::cout<<"\nNilai maksimum: "
            <<MAKSIMUM(x,y);
   
   return 0;
}
