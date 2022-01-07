/******************************************************
Nama file: logika_or.cpp
*******************************************************/

#include <iostream>
#include <cctype>	// isalpha()

int main() {
   char c;
   
   std::cout<<"Masukkan sebuah karakter: ";
   std::cin>>c;
   

    // mengecek apakah ini huruf/alfabet 
    // isdigit untuk mengecek angka
   if (isalpha(c))
   {
      if (c == 'a' || c == 'A' ||
          c == 'e' || c == 'E' ||
          c == 'i' || c == 'I' ||
          c == 'o' || c == 'O' ||
          c == 'u' || c == 'U') 
      {
         std::cout<<c<<" adalah huruf vokal"<<std::endl;
      } 
      else 
      {
	     std::cout<<c<<" adalah huruf konsonan"<<std::endl;
	   }
   } 
   else 
   {
      std::cout <<"Data yang dimasukkan bukan huruf"<<std::endl;
   }

   return 0;
}
