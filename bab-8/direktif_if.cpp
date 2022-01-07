/******************************************************
Nama file: direktif_if.cpp
*******************************************************/

#include <iostream>

int main() {
   
   // windows
   #if _WIN32 || _WIN64
      #if _WIN64
         #define ENV "Windows 64-bit"
      #else
         #define ENV "Windows 32-bit"
      #endif
   #endif

   // GCC
   #if __GNUC__
      #if __x86_64__ || __ppc64__
         #define ENV "Linux 64-bit"
      #else
         #define ENV "Linux 32-bit"
      #endif
   #endif
   
   std::cout<<"Kode program ini dikompilasi di "<<ENV<<std::endl;
   
   return 0;
}

