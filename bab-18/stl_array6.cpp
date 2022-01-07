/******************************************************
Nama file: stl_array6.cpp
*******************************************************/

#include <iostream>
#include <array>	// std::array

int main() {   
   std::array<std::string, 4> a = {"C","C++","Python","Ruby"};
   
   std::cout<<"Penelusuran maju:"<<std::endl;
   for (auto it = a.begin(); it != a.end(); ++it) {
      std::cout<<*it<<std::endl;
   }   
   
   std::cout<<"\nPenelusuran mundur:"<<std::endl;
   for (auto it = a.rbegin(); it != a.rend(); ++it) {
      std::cout<<*it<<std::endl;
   }
   
   return 0;
}
