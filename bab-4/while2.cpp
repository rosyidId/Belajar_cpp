/******************************************************
Nama file: while2.cpp
*******************************************************/

#include <iostream>

int main() {   
   int n, i, faktorial {1};

   std::cout<<"Masukkan bilangan bulat: ";
   std::cin>>n;

   if (n > 1) {
     i = n;
     while (i >= 1) {
       faktorial *= i;
       i--;
     }
   }
   std::cout<<n<< "! = "<<faktorial;
   
   
   return 0; 
}
