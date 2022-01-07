/******************************************************
Nama file: nonstatic.cpp
*******************************************************/

#include <iostream>

// mendefinisikan fungsi test()
void test() {
   int a {0};  // variabel dengan kelas penyimpanan "auto"
   a++;  // menaikkan nilai a dengan 1
   std::cout<<"Nilai a: "<<a<<std::endl<<std::endl;
}

int main() {
   // memanggil fungsi test() sebanyak tiga kali
   std::cout<<"Pemanggilan pertama"<<std::endl;
   test();
   std::cout<<"Pemanggilan kedua"<<std::endl;
   test();
   std::cout<<"Pemanggilan ketiga"<<std::endl;
   test();
   
   return 0;
}
