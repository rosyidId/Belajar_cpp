/******************************************************
Nama file: variabel6.cpp
*******************************************************/

#include <iostream>

void test() {
   int a {9};  // variabel lokal untuk fungsi test()
   std::cout<<"Nilai a di dalam fungsi test(): "<<a<<std::endl;
   
   // salah
   //std::cout<<"Nilai b milik fungsi main(): "<<b<<std::endl;
}

int main() {
   int a {100};  // variabel lokal untuk fungsi main()
   int b {200};
   
   // menampilkan a dan b
   std::cout<<"Nilai a di dalam fungsi main(): "<<a<<std::endl;
   std::cout<<"Nilai b di dalam fungsi main(): "<<b<<std::endl;
   
   // memanggil fungsi test()
   test();    
   
   return 0;
}
