/******************************************************
Nama file: for2.cpp
*******************************************************/

#include <iostream>

int main() {   
   int n, faktorial {1};

   std::cout<<"Masukkan bilangan bulat: ";
   std::cin>>n;
   
   std::cout<<n<< "! = ";
   
   if (n > 1) {
     for (auto i {n}; i>=1; i--) {
        std::cout<< i <<(i != 1 ? " x " : " = ");
        faktorial *= i;
     }
   }
   std::cout<<faktorial << std::endl;   
   
   return 0; 
}
