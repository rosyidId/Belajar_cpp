/******************************************************
Nama file: increment1.cpp
*******************************************************/

#include <iostream>
#include <iomanip>	// std::fixed

int main() {
   double x;	// x bertipe double
   
   std::cout<<std::fixed;

   // pre-increment
   std::cout<<"Pre-increment"<<std::endl;
   x = 0.5;
   std::cout<<"x \t: "<<x<<std::endl;
   std::cout<<"++x \t: "<<++x<<std::endl;
   std::cout<<"x \t: "<<x<<std::endl;

   // post-increment
   std::cout<<"\nPost-increment"<<std::endl;
   x = 0.5;
   std::cout<<"x \t: "<<x<<std::endl;
   std::cout<<"x++ \t: "<<x++<<std::endl;
   std::cout<<"x \t: "<<x<<std::endl;

   return 0;
}
