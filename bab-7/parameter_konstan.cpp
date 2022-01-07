/******************************************************
Nama file: parameter_konstan.cpp
*******************************************************/

#include <iostream>

std::string upperCase(const std::string s) {
   std::string temp {""};
   for (size_t i {0}; i<s.length(); i++) {
      temp += toupper(s[i]);
   }
   return temp;
}

int main() {
   std::string str {"pemrograman c++"};
   
   std::cout<<"str: "<<str<<std::endl;   
   std::cout<<"upperCase(str): "<<upperCase(str)<<std::endl;
   
   return 0;
}
