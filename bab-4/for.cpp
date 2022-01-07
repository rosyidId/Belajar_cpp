/******************************************************
                  Nama file: for.cpp
*******************************************************/

#include <iostream>

int main() {   
   
   for (auto i {1}; i <= 10; i++) 
   {
      std::cout << i <<" adalah bilangan "
                << ((i % 2 == 0) ? "genap" : "ganjil")
                << std::endl;
   }
   
   return 0; 
}
