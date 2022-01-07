/******************************************************
Nama file: stl_map4.cpp
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
   
   std::cout<<"Sebelum dihapus:"<<std::endl;   
   for (auto it=m.begin(); it!=m.end(); ++it) {
      std::cout<<it->first<<" \t=> "<<it->second<<std::endl;
   }
   
   // mendeklarasikan iterator
   std::map<std::string, int>::iterator itr, itr1;
   
   // menghapus elemen pertama (elemen dengan kunci "dua")
   itr = m.begin();
   m.erase(itr);
   
   std::cout<<"\nSetelah penghapusan pertama:"<<std::endl;   
   for (auto it=m.begin(); it!=m.end(); ++it) {
      std::cout<<it->first<<" \t=> "<<it->second<<std::endl;
   }
   
   // menghapus elemen dengan kunci "tiga"
   m.erase("tiga");
   
   std::cout<<"\nSetelah penghapusan kedua:"<<std::endl;   
   for (auto it=m.begin(); it!=m.end(); ++it) {
      std::cout<<it->first<<" \t=> "<<it->second<<std::endl;
   }
   
   // menghapus elemen dari elemen dengan kunci "empat"
   // sampai elemen sebelum elemen dengan kunci "satu"
   itr = m.find("empat");
   itr1 = m.find("satu");
   m.erase(itr, itr1);
   
   std::cout<<"\nSetelah penghapusan ketiga:"<<std::endl;   
   for (auto it=m.begin(); it!=m.end(); ++it) {
      std::cout<<it->first<<" \t=> "<<it->second<<std::endl;
   }
   
   return 0;
}
