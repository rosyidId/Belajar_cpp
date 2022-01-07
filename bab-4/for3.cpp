/******************************************************
Nama file: for3.cpp
*******************************************************/

#include <iostream>
#include <string>	// std::string

int main() {   
   std::string s;

   std::cout<<"Masukkan teks: ";
   getline(std::cin, s);
   
   std::cout<<"\nSebelum dibalik: "<<s;
   
   for (size_t i {0}, j {s.length()-1}; i<j; i++, j--) {
      char temp = s[i];
      s[i] = s[j];
      s[j] = temp;
   }
   
   std::cout<<"\nSetelah dibalik: "<<s;
   
   return 0; 
}
