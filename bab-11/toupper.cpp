/******************************************************
Nama file: toupper.cpp
*******************************************************/

#include <iostream>
#include <cstring>	// strlen()
#include <cctype>	// toupper()

int main() {
   char s[16] = "Pemrograman C++";
      
   for (size_t i {0}; i<strlen(s); i++) {
      std::cout<<(char) toupper((int) s[i]);
   }
      
   return 0;
}
