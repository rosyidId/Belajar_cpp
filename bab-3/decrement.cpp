/******************************************************
Nama file: decrement.cpp
*******************************************************/

#include <iostream>

int main() {
   int x;

   // pre-decrement
   std::cout<<"Pre-decrement"<<std::endl;
   x = 9;
   std::cout<<"x \t: "<<x<<std::endl;
   std::cout<<"--x \t: "<<--x<<std::endl;
   std::cout<<"x \t: "<<x<<std::endl;

   // post-decrement
   std::cout<<"\nPost-decrement"<<std::endl;
   x = 9;
   std::cout<<"x \t: "<<x<<std::endl;
   std::cout<<"x-- \t: "<<x--<<std::endl;
   std::cout<<"x \t: "<<x<<std::endl;

   return 0;
}
