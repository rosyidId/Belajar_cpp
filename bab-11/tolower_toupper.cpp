/******************************************************
Nama file: tolower_toupper.cpp
*******************************************************/

#include <iostream>
#include <cstring>	// strlen()
#include <cctype>	// toupper()

char *lower(char *s) {
   char *hasil = new char[strlen(s)+1];
   for (size_t i {0}; i<strlen(s); i++) {
      hasil[i] = (char) tolower((int) s[i]);
   }
   hasil[strlen(s)+1] = '\0';
   return hasil;
}

char *upper(char *s) {
   char *hasil = new char[strlen(s)+1];
   for (size_t i {0}; i<strlen(s); i++) {
      hasil[i] = (char) toupper((int) s[i]);
   }
   hasil[strlen(s)+1] = '\0';
   return hasil;
}

int main() {
   char s1[16] = "Pemrograman C++";
   char *s2, *s3;
   
   s2 = lower(s1);
   s3 = upper(s1);
   
   // menampilkan nilai
   std::cout<<"s1: "<<s1<<std::endl;
   std::cout<<"s2: "<<s2<<std::endl;
   std::cout<<"s3: "<<s3<<std::endl;
      
   return 0;
}
