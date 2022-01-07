/******************************************************
Nama file: logika_or1.cpp
*******************************************************/

#include <iostream>
#include <cctype>	// isalpha() dan tolower()

int main() {
   char c;
   
   std::cout<<"Masukkan sebuah karakter: ";
   std::cin>>c;
   
   if (isalpha(c)) {
      //mengubah huruf besar menjadi huruf kecil
      // toupper(c) kebalikan 
      char ch = tolower(c);
      bool vokal = (ch=='a' || ch=='e' || ch=='i' || 
                    ch=='o' || ch=='u');
      if (vokal) {
         std::cout<<c<<" adalah huruf vokal"<<std::endl;
      } else {
         std::cout<<c<<" adalah huruf konsonan"<<std::endl;
      }
   } else {
      std::cout<<"Data yang dimasukkan bukan huruf"<<std::endl;
   }

   return 0;
}
