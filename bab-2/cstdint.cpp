/******************************************************
Nama file: cstdint.cpp
*******************************************************/

#include <iostream>
#include <cstdint>

int main() {
   // notasi biner
   uint32_t a {0b100100011U}; // 291U

   // notasi oktal
   int32_t b {012L}; // 10L

   // notasi heksadesimal
   uint32_t c {0xdeadLU};  // 57005UL
      
   std::cout<<"Nilai a: "<<a<<std::endl;
   std::cout<<"Nilai b: "<<b<<std::endl;
   std::cout<<"Nilai c: "<<c<<std::endl;
   
   return 0;
}
