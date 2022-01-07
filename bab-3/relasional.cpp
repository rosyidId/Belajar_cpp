/******************************************************
Nama file: relasional.cpp
*******************************************************/

#include <iostream>

int main() {
   int a = 10;
   int b = 20;

   std::cout<<"a \t: "<<a<<std::endl;
   std::cout<<"b \t: "<<b<<std::endl;
   std::cout<<"a == b \t: "
            <<((a == b) ? "true" : "false")
            <<std::endl;
   std::cout<<"a != b \t: "
            <<((a != b) ? "true" : "false")
            <<std::endl;
   std::cout<<"a < b \t: "
            <<((a < b) ? "true" : "false")
            <<std::endl;
   std::cout<<"a > b \t: "
            <<((a > b) ? "true" : "false")
            <<std::endl;
   std::cout<<"a <= b \t: "
            <<((a <= b) ? "true" : "false")
            <<std::endl;
   std::cout<<"a >= b \t: "
            <<((a >= b) ? "true" : "false")
            <<std::endl;

   // operator relasional dalam blok pemilihan
   if (a < b) {
      std::cout<<"a lebih kecil dari b"<<std::endl;
   }

   // operator relasional dalam blok pengulangan
   for (int i {a}; i<=b; i+=4) {
      std::cout<<i<<" semet " << b << std::endl;
   }

   return 0;
}
