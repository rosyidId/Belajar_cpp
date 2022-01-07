/******************************************************
Nama file: cpp14_variable_template.cpp
*******************************************************/

#include <iostream>

template <class T>
constexpr T PI = T(3.1415926535897932385); 

int main() {
   
   // menampilkan nilai PI dalam tipe int
   std::cout<<"Nilai PI<int>: "
            <<PI<int>
            <<std::endl;
   
   // menampilkan nilai PI dalam tipe double
   std::cout<<"Nilai PI<double>: "
            <<PI<double>
            <<std::endl;   

   return 0;
}
