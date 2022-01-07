/******************************************************
Nama file: akses_anggota_namespace.cpp
*******************************************************/

#include <iostream>

namespace A {
  int x;
  
  void setx(int nilai) {
    x = nilai;
  }
  
  int getx() {
    return x;
  }
}

int main() {   
   // mengakses nilai x yang terdapat 
   // di dalam namespace A untuk diisi nilai
   A::x = 100;
   std::cout<<"Sebelum diubah"<<std::endl;
   std::cout<<"Nilai x di dalam namespace A: "
       <<A::x<<std::endl;

   // mengakses fungsi setx()
   // yang terdapat di dalam namespace A
   // untuk mengubah nilai A::x
   A::setx(200);

   // mengakses fungsi getx()
   // yang terdapat di dalam namespace A
   std::cout<<"\nSetelah diubah"<<std::endl;
   std::cout<<"Nilai x di dalam namespace A: "
       <<A::getx()<<std::endl;

   return 0;
}
