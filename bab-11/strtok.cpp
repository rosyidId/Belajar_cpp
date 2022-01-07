/******************************************************
Nama file: strtok.cpp
*******************************************************/

#include <iostream>
#include <cstring>	// strtok()

int main() {
   char s[] = "C,C++,Java,Python,Ruby";
   char *ptr;
  
   std::cout<<"Bahasa pemrograman: "<<std::endl;
   ptr = strtok(s, ","); // pembatas berupa koma
   while (ptr != nullptr) {
      std::cout<<ptr<<std::endl;
      ptr = strtok(nullptr, ",");
   }
      
   return 0;
}
