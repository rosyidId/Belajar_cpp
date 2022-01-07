/******************************************************
Nama file: increment.cpp
*******************************************************/

#include <iostream>

int main() {
   int x;

   // pre-increment
   std::cout<<"Pre-increment"<<std::endl;
   x = 9;
   std::cout<<"x \t: "<<x<<std::endl;
   std::cout<<"++x \t: "<<++x<<std::endl;
   std::cout<<"x \t: "<<x<<std::endl;

   // post-increment
   std::cout<<"\nPost-increment"<<std::endl;
   x = 9;
   std::cout<<"x \t: "<<x<<std::endl;
   std::cout<<"x++ \t: "<<x++<<std::endl;
   std::cout<<"x \t: "<<x<<std::endl;

   return 0;
}
