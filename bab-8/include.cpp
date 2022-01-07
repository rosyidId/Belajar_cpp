/******************************************************
Nama file: include.cpp
*******************************************************/

#include <iostream>

#include "faktorial.cpp"	// menyertakan file "faktorial.cpp"

int main() {
   
   // memanggil fungsi faktorial()
   std::cout<<"4! = "<<faktorial(4)<<std::endl;
   std::cout<<"5! = "<<faktorial(5)<<std::endl;
   
   return 0;
}

