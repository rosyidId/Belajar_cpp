/******************************************************
Nama file: escape_sequence.cpp
*******************************************************/

#include <iostream>
#include <string>

int main() {
   std::string s1 {"C:\\Windows"};
   std::string s2 {"\'C\' dan \"C++\""};
   int a {8}, b {9};
   
   std::cout<<"s1\t: "<<s1<<std::endl;
   std::cout<<"s2\t: "<<s2<<std::endl;
   std::cout<<"a\t: "<<a<<std::endl;
   std::cout<<"b\t: "<<b<<std::endl;   
    std::cout<<" jum'at "<<b<<std::endl;  
   return 0;
}
