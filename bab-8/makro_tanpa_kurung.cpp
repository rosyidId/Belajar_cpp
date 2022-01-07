/******************************************************
Nama file: makro_tanpa_kurung.cpp
*******************************************************/

#include <iostream>

// mendefinisikan makro untuk pangkat tiga
// tanpa tanda kurung
#define F(a) a * a * a

int main() {
   
   // memanggil makro dengan menulis: F(5)
   std::cout<<"F(5)\t: "<<F(5)<<std::endl;
   
   // memanggil makro dengan menulis: F(2+3)
   std::cout<<"F(2+3)\t: "<<F(2+3)<<std::endl;
   
   return 0;
}

