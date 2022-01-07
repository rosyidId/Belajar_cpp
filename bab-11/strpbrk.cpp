/******************************************************
Nama file: strpbrk.cpp
*******************************************************/

#include <iostream>
#include <cstring>	// strpbrk()

int main() {
   char s1[] = "Ini adalah contoh string";
   char s2[] = "AaEeIiOoUu";
   char *ptr;
   int counter {0};
  
   std::cout<<"Huruf vokal dalam s1: ";
   ptr = strpbrk(s1, s2);
   while (ptr != nullptr) {
      std::cout<<*ptr<<" ";
      ptr = strpbrk(ptr+1, s2);
      counter++;
   }
   std::cout<<"\nJumlah huruf vokal: "<<counter;
      
   return 0;
}
