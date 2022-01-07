/******************************************************
Nama file: stl_sort1.cpp
*******************************************************/

#include <iostream>
#include <vector>		// std::vector
#include <algorithm>	// std::sort()

int main() {   
   std::vector<std::string> v = {"C++","C","Ruby","Java","Python"};
   
   std::cout<<"Sebelum tiga elemen pertama diurutkan:"<<std::endl;
   for (auto it=v.begin(); it!=v.end(); ++it) {
      std::cout<<*it<<std::endl;
   }
   
   // mengurutkan elemen pertama sampai ketiga
   std::sort(v.begin(), v.begin()+3);
   
   std::cout<<"\nSetelah tiga elemen pertama diurutkan:"<<std::endl;
   for (auto it=v.begin(); it!=v.end(); ++it) {
      std::cout<<*it<<std::endl;
   }
   
   return 0;
}
