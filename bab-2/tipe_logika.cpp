/******************************************************
Nama file: tipe_logika.cpp
*******************************************************/

#include <iostream>

int main() {
   bool a {true}, b {false};
   
   std::cout<<"Nilai a: "<<a<<std::endl;
   std::cout<<"Nilai b: "<<b<<std::endl;
   
   if (a) {
      std::cout<<"Baris ini akan dieksekusi"<<std::endl;
   }
   
   if (b) {
      std::cout<<"Baris ini tidak akan dieksekusi"<<std::endl;
   }
   
   // ekspresi yang menghasilkan nilai logika
   std::cout<<"100 > 10: "<<(100 > 10)<<std::endl;
   std::cout<<"100 < 10: "<<(100 < 10)<<std::endl;

   return 0;
}
