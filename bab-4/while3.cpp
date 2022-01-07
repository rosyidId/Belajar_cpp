/******************************************************
Nama file: while3.cpp
*******************************************************/

#include <iostream>

int main() {   
   int n, i, faktorial {1};

   std::cout<<"Masukkan bilangan bulat: ";
   std::cin>>n;
   
   std::cout<<n<< "! = ";
   
   if (n > 1) {
     i = n;
     while (i >= 1) {
       if (i != 1) {
          std::cout<<i<<" x ";
       } else {
          std::cout<<i<<" = ";
       }
       faktorial *= i;
       i--;
     }
   }
   std::cout<<faktorial;   
   
   return 0; 
}
