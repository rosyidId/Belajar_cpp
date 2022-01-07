/******************************************************
Nama file: for6.cpp
*******************************************************/

#include <iostream>

int main() {   
   // array dengan 5 elemen bertipe int
   int data[] = {10,20,30,40,50};

   for (auto elemen: data) {
      std::cout<<elemen<<" ";
   }
   
   return 0; 
}
