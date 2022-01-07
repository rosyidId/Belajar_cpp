/******************************************************
Nama file: for5.cpp
*******************************************************/

#include <iostream>

const int N = 5;

int main() {   
   // array dengan 5 elemen bertipe int
   int data[] = {10,20,30,40,50};

   for (int i=0; i<N; i++) {
      std::cout<<data[i]<<" ";
   }
   
   return 0; 
}
