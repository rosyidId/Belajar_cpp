/******************************************************
Nama file: stl_find.cpp
*******************************************************/

#include <iostream>
#include <vector>		// std::vector
#include <algorithm>	// std::find()

int main() {   
   std::vector<std::string> v = {"C++","C","Ruby","Java","Python"};
   
   std::cout<<"Isi vector:"<<std::endl;
   for (auto it=v.begin(); it!=v.end(); ++it) {
      std::cout<<*it<<std::endl;
   }
   
   // mendeklarasikan iterator
   std::vector<std::string>::iterator itr;
   
   std::cout<<"\nHasil pencarian:"<<std::endl;
   
   // mencari "Java"
   itr = std::find(v.begin(), v.end(), "Java");      
   if (itr != v.end()) {
      std::cout<<"\"Java\" ditemukan dalam vector"<<std::endl;
   } else {
      std::cout<<"\"Java\" tidak ditemukan dalam vector"<<std::endl;
   }
   
   // mencari "PHP"
   itr = std::find(v.begin(), v.end(), "PHP");
   if (itr != v.end()) {
      std::cout<<"\"PHP\" ditemukan dalam vector"<<std::endl;
   } else {
      std::cout<<"\"PHP\" tidak ditemukan dalam vector"<<std::endl;
   }
   
   return 0;
}
