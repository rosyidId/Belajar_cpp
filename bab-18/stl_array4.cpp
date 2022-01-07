/******************************************************
Nama file: stl_array4.cpp
*******************************************************/

#include <iostream>
#include <array>	// std::array

int main() {   
   std::array<std::string, 4> a = {"C","C++","Python","Ruby"};
   
   std::array<std::string,4>::iterator it;
   for (it = a.begin(); it != a.end(); ++it) {
      std::cout<<*it<<std::endl;
   }
   
   return 0;
}
