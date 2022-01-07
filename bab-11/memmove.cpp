/******************************************************
Nama file: memmove.cpp
*******************************************************/

#include <iostream>
#include <cstring>	// memmove()

int main() {
   char s1[] = "Belajar Pemrograman C++.....";
   char s2[] = "Python";
   
   std::cout<<"Keadaan awal"<<std::endl;
   std::cout<<"s1: "<<s1<<std::endl;
  
   memmove(s1+20, s2, strlen(s2));
  
   std::cout<<"\nKeadaan akhir"<<std::endl;
   std::cout<<"s1: "<<s1<<std::endl;
      
   return 0;
}
