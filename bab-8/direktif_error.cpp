/******************************************************
Nama file: direktif_error.cpp
*******************************************************/

#ifdef __cplusplus
   #if __cplusplus < 201703L
      #error SALAH: Kompilator Anda tidak mendukung C++17
   #endif
#endif

#include <iostream>
#include <variant>	// hanya ada di dalam C++17

int main() {
      
   std::variant<int, double> v{ 12 };
   
   std::cout<<std::get<int>(v);
   
   return 0;
}

