/******************************************************
Nama file: parameter_opsional1.cpp
*******************************************************/

#include <iostream>

double kali(double a=8.0, double b=9.0) {
   return a * b;
}

int main() {
   std::cout<<kali()<<std::endl;	// sama dengan: kali(8.0, 9.0);
   std::cout<<kali(2.5)<<std::endl; // sama dengan: kali(2.5, 9.0);
   
   return 0;
}
