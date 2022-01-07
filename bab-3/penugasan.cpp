/******************************************************
Nama file: penugasan.cpp
*******************************************************/

#include <iostream>
#include <string>	// std::string
#include <cstring>	// strcpy()
#include <iomanip>	// std::fixed

int main() {
   int i;
   long l;
   float f;
   double d;
   std::string cpp_string;
   char c_string[255];
   
   // menggunakan operator =
   i = 123;			// mengisi nilai bertipe int
   l = 123456L; 	// mengisi nilai bertipe long
   f = 123.456F; 	// mengisi nilai bertipe float
   d = 123456.789; 	// mengisi nilai bertipe double
   cpp_string = "Bahasa C++";		// mengisi nilai bertipe string gaya C++ 
   //c_string = "Bahasa C";			// salah
   strcpy(c_string, "Bahasa C");	// mengisi nilai bertipe string gaya C	
   
   std::cout<<i<<std::endl;
   std::cout<<l<<std::endl;
   std::cout<<f<<std::endl;
   std::cout<<d<<std::endl;
   std::cout<<cpp_string<<std::endl;
   std::cout<<c_string<<std::endl;

   return 0;
}
