/******************************************************
Nama file: fungsi_generik1.cpp
*******************************************************/

#include <iostream>

// mendefinisikan fungsi generik
// dengan dua parameter generik
template <class T1, class T2>
void cetak(T1 a, T2 b) {
   std::cout<<a
            <<' '
            <<b
            <<std::endl;
}

int main() {   
   // memanggil fungsi cetak() 
   // dengan parameter std::string dan int
   cetak("Menjadi Master C++", 2017);
   
   // memanggil fungsi cetak() 
   // dengan parameter bertipe double dan std::string
   cetak(123.456, "adalah nilai bertipe double");

   return 0;
}
