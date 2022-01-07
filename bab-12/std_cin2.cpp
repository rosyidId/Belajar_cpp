/******************************************************
Nama file: std_cin2.cpp
*******************************************************/

#include <iostream>	// std::cout, std::cin
#include <iomanip>	// std::fixed

int main() {   
   int a, b, c, d, e, total=0;
   float rata2;
   
   std::cout<<"Masukkan nilai a, b, c, d, dan e: ";
   std::cin>>a>>b>>c>>d>>e;
   
   total = a + b + c + d + e;
   rata2 = (float) total / 5;  
   
   std::cout<<"\nNilai total\t: "<<total<<std::endl;
   std::cout<<"Nilai rata-rata\t: "
            <<std::fixed
            <<rata2<<std::endl;

   return 0;
}
