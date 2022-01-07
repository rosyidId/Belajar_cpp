/******************************************************
Nama file: do_while2.cpp
*******************************************************/

#include <iostream>
#include <string>	// std::string

const std::string USERNAME = "cpp";
const std::string PASSWORD = "cplusplus";

int main() {   
   std::string username, password;
   
   do {
      std::cout<<"Masukkan username dan password"<<std::endl;
      std::cout<<"Username\t: ";
      std::cin>>username;
      std::cout<<"Password\t: ";
      std::cin>>password;
      std::cout<<std::endl;
   } while ((username.compare(USERNAME) != 0) ||
            (password.compare(PASSWORD) != 0));
   
   std::cout<<"Selamat datang...";
   
   return 0; 
}
