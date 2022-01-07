/******************************************************
Nama file: memecah_namespace.cpp
*******************************************************/

#include <iostream>

// mendefinisikan namespace A bagian pertama
namespace A {
   int i;
}

// mendefinisikan namespace A bagian kedua
namespace A {
   int j;
}

int main() {   
   //menggunakan operator ::
   A::i = 10;
   A::j = 20;
	
   std::cout<<"Menggunakan operator ::"<<std::endl;
   std::cout<<A::i * A::j<<std::endl<<std::endl;
	
   // menggunakan kata kunci using
   using namespace A;
   i = 30;
   j = 40;
	
   std::cout<<"Menggunakan kata kunci using"<<std::endl;
   std::cout<<i * j<<std::endl;

   return 0;
}
