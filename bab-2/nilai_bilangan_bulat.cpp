/******************************************************
Nama file: nilai_bilangan_bulat.cpp
*******************************************************/

#include <iostream>

int main() {
   int a, b, c, d;
   
   a = 255;  // ditulis dalam notasi desimal
   std::cout<<"Nilai a: "<<a<<std::endl;
   
   b = 0b11111111;  // ditulis dalam notasi biner
   std::cout<<"Nilai b: "<<b<<std::endl;
   
   c = 0377;  // ditulis dalam notasi oktal
   std::cout<<"Nilai c: "<<c<<std::endl;
   
   d = 0xff;  // ditulis dalam notasi heksadesimal
   std::cout<<"Nilai d: "<<d<<std::endl;
   
   return 0;
}
