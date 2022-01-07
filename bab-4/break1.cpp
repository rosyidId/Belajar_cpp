/******************************************************
Nama file: break1.cpp
*******************************************************/

#include <iostream>
#include <string>	// std::string

const std::string USERNAME = "cpp";
const std::string PASSWORD = "cplusplus";

int main() {   
   std::string username, password;
   
   for ( ; ; ) {
      std::cout<<"Masukkan username dan password"<<std::endl;
      std::cout<<"Username\t: ";
      std::cin>>username;
      std::cout<<"Password\t: ";
      std::cin>>password;
      std::cout<<std::endl;
      if ((username.compare(USERNAME) == 0) &&
          (password.compare(PASSWORD) == 0)) {
         break;
      }
   }
   
   std::cout<<"Selamat datang...";
   
   return 0; 
}
