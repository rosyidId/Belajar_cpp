/******************************************************
Nama file: tolower.cpp
*******************************************************/

#include <iostream>
#include <cstring>	// strlen()
#include <cctype>	// tolower()

int main() {
   char s[16] = "Pemrograman C++";
      
   for (size_t i {0}; i<strlen(s); i++) {
      std::cout<<(char) tolower((int) s[i]);
   }
      
   return 0;
}
