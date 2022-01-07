/******************************************************
Nama file: cpp17_class_template_argument.cpp
*******************************************************/

#include <iostream>

template <class T=float>
class Contoh {
private:
   T val;
public:
   Contoh() : val() {}
   Contoh(T val) : val(val) {}
  
   void setValue(T val) {
      this->val = val;
   }
  
   T getValue() {
      return val;
   }  
};

int main() {
   // gaya sebelum C++17
   Contoh<int> c1(1);
   Contoh<float> c2;
   c2.setValue(1.23F);
   
   // gaya C++17
   Contoh c3(2);
   Contoh c4;
   c4.setValue(2.34F);
   
   // menampilkan nilai
   std::cout<<"c1.getValue(): "<<c1.getValue()<<std::endl;
   std::cout<<"c2.getValue(): "<<c2.getValue()<<std::endl;
   std::cout<<"c3.getValue(): "<<c3.getValue()<<std::endl;
   std::cout<<"c4.getValue(): "<<c4.getValue()<<std::endl;

   return 0;
}
