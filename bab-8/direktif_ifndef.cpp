/******************************************************
Nama file: direktif_ifndef.cpp
*******************************************************/

#include <iostream>

int main() {
      
   #ifndef ULL
      // mendefinisikan makro
      #define ULL unsigned long long
      
      ULL a {987654321ULL};
      std::cout<<"Nilai a: "<<a<<std::endl;
   #else
      std::cout<<"Makro ULL sudah didefinisikan di dalam C++";
   #endif
   
   return 0;
}

