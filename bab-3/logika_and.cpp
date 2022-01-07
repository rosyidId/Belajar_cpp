/******************************************************
Nama file: logika_and.cpp
*******************************************************/

#include <iostream>

int main() {
   std::cout<<"a\t"
            <<"b\t"
            <<"a && b\t"<<std::endl;
   std::cout<<"true\t"
            <<"true\t"
            <<((true && true) ? "true" : "false") //tenery
            <<std::endl;
   std::cout<<"true\t"
            <<"false\t"            
            <<((true && false) ? "true" : "false")
            <<std::endl;
   std::cout<<"false\t"
            <<"true\t"
            <<((false && true) ? "true" : "false")
            <<std::endl;
   std::cout<<"false\t"
            <<"false\t"
            <<((false && false) ? "true" : "false") <<std::endl;

   return 0;
}
