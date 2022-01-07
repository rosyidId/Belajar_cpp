/******************************************************
Nama file: namespace_bersarang.cpp
*******************************************************/

#include <iostream>

// namespace bagian luar
namespace Luar {
   int i;	// anggota namespace bagian luar
   
   // namespace bagian dalam
   namespace Dalam {
      int j;	// anggota namespace bagian dalam
   }
}

int main() {   
   // menentukan nilai i dan j
   Luar::i = 10;         // benar
   // Luar::j = 20;      // salah
   Luar::Dalam::j = 20;  // benar

   std::cout<<"Nilai i : "<<Luar::i<<std::endl;
   std::cout<<"Nilai j : "<<Luar::Dalam::j<<std::endl<<std::endl;
	
   // menggunakan namespace Luar
   using namespace Luar;
   i = 30;               // benar
   // j = 40;            // salah
   Dalam::j = 40;        // benar
	
   std::cout<<"Nilai i : "<<i<<std::endl;
   std::cout<<"Nilai j : "<<Dalam::j<<std::endl<<std::endl;	
	
   // menggunakan namespace Dalam
   using namespace Dalam;
   i = 50;               // Benar
   j = 60;               // Benar
	
   std::cout<<"Nilai i : "<<i<<std::endl;
   std::cout<<"Nilai j : "<<j<<std::endl<<std::endl;

   return 0;
}
