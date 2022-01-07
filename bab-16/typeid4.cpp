/******************************************************
Nama file: typeid4.cpp
*******************************************************/

#include <iostream>
#include <typeinfo>	// typeid
#include <string>	// std::string

template <class T>
class Generik {
private:
   T data;
public:
   Generik(T d): data(d) {}
};

int main() {   
   // membuat tiga objek dari kelas Generik
   Generik<int> obj1(10);
   Generik<double> obj2(10.0);
   Generik<std::string> obj3(std::string("C++"));
   
   // menampilkan tipe dari masing-masing objek
   std::cout<<"obj1 bertipe: "
            <<typeid(obj1).name()<<std::endl;
   std::cout<<"obj2 bertipe: "
            <<typeid(obj2).name()<<std::endl;
   std::cout<<"obj3 bertipe: "
            <<typeid(obj3).name()<<std::endl;

   return 0;
}
