/******************************************************
Nama file: stl_array5.cpp
*******************************************************/

#include <iostream>
#include <array>	// std::array

int main() {   
   std::array<std::string, 4> a = {"C","C++","Python","Ruby"};
   
   std::array<std::string,4>::reverse_iterator it;
   for (it = a.rbegin(); it != a.rend(); ++it) {
      std::cout<<*it<<std::endl;
   }
   
   return 0;
}
