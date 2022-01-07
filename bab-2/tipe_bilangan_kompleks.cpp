/******************************************************
Nama file: tipe_bilangan_kompleks.cpp
*******************************************************/

#include <iostream>
#include <complex>  // agar kelas complex dikenal

int main() {
   std::complex<double> a(4.0, 6.0);  // 4.0+6.0i
   std::complex<double> b(3.0, 9.0);  // 3.0+9.0i
   std::complex<double> c;
   
   std::cout<<"Bilangan kompleks a"<<std::endl;
   std::cout<<"Nilai riil: "<<a.real()<<std::endl;
   std::cout<<"Nilai imaginer: "<<a.imag()<<std::endl;     
   
   std::cout<<"\nBilangan kompleks b"<<std::endl;
   std::cout<<"Nilai riil: "<<b.real()<<std::endl;
   std::cout<<"Nilai imaginer: "<<b.imag()<<std::endl;
   
   // menjumlahkan a dan b
   c = a + b;
   
   std::cout<<"\nHasil penjumlahan"<<std::endl;
   std::cout<<"Nilai riil: "<<c.real()<<std::endl;
   std::cout<<"Nilai imaginer: "<<c.imag()<<std::endl;
   
   return 0;
}
