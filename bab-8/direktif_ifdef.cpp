/******************************************************
Nama file: direktif_ifdef.cpp
*******************************************************/

#include <iostream>

// mendefinisikan makro
#define ULL unsigned long long

int main() {
      
   // memeriksa makro
   #ifdef ULL
      ULL a {987654321ULL};
   #else
      unsigned long long a {123456789ULL};
   #endif  
   
   std::cout<<"Nilai a: "<<a<<std::endl;
   
   return 0;
}

