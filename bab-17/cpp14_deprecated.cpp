/******************************************************
Nama file: cpp14_deprecated.cpp
*******************************************************/

#include <iostream>

[[deprecated("Use 'void f1()' instead")]]
void f() {
   std::cout<<"Ini adalah fungsi usang"<<std::endl;
}

void f1() {
   std::cout<<"Ini adalah fungsi baru"<<std::endl;
}

int main() {
   
   // memanggil fungsi f()
   f();

   return 0;
}
