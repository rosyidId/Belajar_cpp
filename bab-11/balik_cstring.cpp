/******************************************************
Nama file: balik_cstring.cpp
*******************************************************/

#include <iostream>
#include <cstring>	// strcpy(), strlen()

void tukar(char& c1, char& c2) {
   char temp = c1;
   c1 = c2;
   c2 = temp;
}

int main() {
   char s[16];
   size_t i, j;
   
   // mengisi nilai ke dalam s1
   strcpy(s, "Pemrograman C++");
   
   // menampilkan nilai variabel s sebelum dibalik
   std::cout<<"Sebelum dibalik: "<<s<<std::endl;
   
   // membalik string s
   i = 0;
   j = strlen(s)-1;
   while (i < j) {
      tukar(s[i], s[j]);
      i++, j--;
   }
      
   // menampilkan nilai variabel s setelah dibalik
   std::cout<<"Setelah dibalik: "<<s<<std::endl;
   
   return 0;
}
