/******************************************************
Nama file: referensi_konstan1.cpp
*******************************************************/

#include <iostream>
#include <iomanip>	// std::fixed

double kali(const double& refa, const double &refb) {
   return refa * refb;
}

int main() {
   double a {9}, b {10};
   
   std::cout<<std::fixed;
   
   // memanggil fungsi kali()
   std::cout<<"Sebelum a dan b diubah"<<std::endl;
   std::cout<<"Hasil kali = "<<kali(a, b)<<std::endl;
   
   // mengubah nilai a dan b
   a = 11;
   b = 12;
   
   // memanggil kembali fungsi kali()
   std::cout<<"\nSetelah a dan b diubah"<<std::endl;
   std::cout<<"Hasil kali = "<<kali(a, b)<<std::endl;
   
   return 0;
}
