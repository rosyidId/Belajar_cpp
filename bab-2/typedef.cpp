/******************************************************
Nama file: typedef.cpp
*******************************************************/

#include <iostream>
#include <cstring>

typedef unsigned long long ull;
typedef char c_string[255];

int main() {
   ull a;
   c_string s;
   
   a = 123'456'789ULL;
   strcpy(s, "Demo typedef");
   
   std::cout<<"Nilai a: "<<a<<std::endl;
   std::cout<<"Nilai s: "<<s<<std::endl;

   return 0;
}
