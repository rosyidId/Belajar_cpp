/******************************************************
Nama file: scope_resolution.cpp
*******************************************************/

#include <iostream>

class Contoh {
public:
   static int x;
   static void f() {
      std::cout<<"Nilai x: "<<x<<std::endl;
   }
};

int Contoh::x;

int main() {   
   Contoh::x = 9;
   Contoh::f();   
   
   return 0; 
}
