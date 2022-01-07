/******************************************************
Nama file: using.cpp
*******************************************************/

#include <iostream>
#include <cstring>

using ull = unsigned long long;
using c_string = char[255];

int main() {
   ull a;
   c_string s;
   
   a = 123'456'789ULL;
   strcpy(s, "Demo using");
   
   std::cout<<"Nilai a: "<<a<<std::endl;
   std::cout<<"Nilai s: "<<s<<std::endl;

   return 0;
}
