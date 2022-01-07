/******************************************************
Nama file: stl_array8.cpp
*******************************************************/

#include <iostream>
#include <array>	// std::array

int main() {   
   std::array<int, 5> a = {10,20,30,40,50};
   
   for (size_t i=0; i<a.size(); i++) {
      std::cout<<"a.at("<<i<<"): "<<a.at(i)<<std::endl;
   }   
   
   std::cout<<"\na.front(): "<<a.front()<<std::endl;
   std::cout<<"a.back(): "<<a.back()<<std::endl;   
   
   return 0;
}
