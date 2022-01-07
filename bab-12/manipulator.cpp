/******************************************************
Nama file: manipulator.cpp
*******************************************************/

#include <iostream>
#include <iomanip>

int main() {   
   // menggunakan flag setfill, setw dan endl
   std::cout<<std::setfill('*')
            <<std::setw(8)
            <<12
            <<std::endl;

   // menggunakan flag oct dan endl
   std::cout<<std::oct
            <<64
            <<std::endl;

   // menggunakan flag hex
   std::cout<<std::hex
            <<16
            <<std::endl;

   return 0;
}
