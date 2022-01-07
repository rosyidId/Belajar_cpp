/******************************************************
Nama file: stl_map2.cpp
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
   
   std::cout<<"Sebelum ditambah:"<<std::endl;   
   for (auto it=m.begin(); it!=m.end(); ++it) {
      std::cout<<it->first<<" \t=> "<<it->second<<std::endl;
   }
   
   // menambah dua elemen
   m["enam"] = 60;
   m["tujuh"] = 70;
   
   std::cout<<"\nSetelah ditambah:"<<std::endl;   
   for (auto it=m.begin(); it!=m.end(); ++it) {
      std::cout<<it->first<<" \t=> "<<it->second<<std::endl;
   }
   
   return 0;
}
