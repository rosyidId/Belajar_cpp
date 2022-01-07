/******************************************************
Nama file: direktif_undef.cpp
*******************************************************/

#include <iostream>

int main() {
      
   #ifdef __cplusplus
      
      // menampilkan nilai makro
      std::cout<<"Nilai __cplusplus sebelum diubah: "
               <<__cplusplus<<std::endl;
      
      // menghapus makro
      #undef __cplusplus
      
      // mendefinisikan ulang makro dengan nilai baru
      #define __cplusplus "C++17"
      
      // menampilkan nilai makro setelah diubah
      std::cout<<"Nilai __cplusplus setelah diubah: "
               <<__cplusplus<<std::endl;
      
   #endif
   
   return 0;
}

