/******************************************************
Nama file: stl_map.cpp
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
   
   std::cout<<"Sebelum diubah:"<<std::endl;   
   std::cout<<m["satu"]<<" "
            <<m["dua"]<<" "
            <<m["tiga"]<<" "
            <<m["empat"]<<" "
            <<m["lima"]<<"\n\n";
   
   // mengubah nilai elemen
   m["satu"]  = 100;
   m["dua"]   = 200;
   m["tiga"]  = 300;
   m["empat"] = 400;
   m["lima"]  = 100;
   
   std::cout<<"Setelah diubah:"<<std::endl;   
   std::cout<<m["satu"]<<" "
            <<m["dua"]<<" "
            <<m["tiga"]<<" "
            <<m["empat"]<<" "
            <<m["lima"]<<"\n\n";
   
   return 0;
}
