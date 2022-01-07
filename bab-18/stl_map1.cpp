/******************************************************
Nama file: stl_map1.cpp
*******************************************************/

#include <iostream>
#include <map>	// std::map

int main() {   
   std::map<std::string, int> m = {
      {"satu", 10},
      {"dua", 20},
      {"tiga", 30},
      {"empat", 40},
      {"lima", 50}
   };
   
   std::cout<<"Penelusuran maju:"<<std::endl;   
   for (auto it=m.begin(); it!=m.end(); ++it) {
      std::cout<<it->first<<" \t=> "<<it->second<<std::endl;
   }
   
   std::cout<<"\nPenelusuran mundur:"<<std::endl;   
   for (auto it=m.rbegin(); it!=m.rend(); ++it) {
      std::cout<<it->first<<" \t=> "<<it->second<<std::endl;
   }
   
   return 0;
}
