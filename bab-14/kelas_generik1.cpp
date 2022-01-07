/******************************************************
Nama file: kelas_generik1.cpp
*******************************************************/

#include <iostream>
#include <string>	// std::string

// kelas generik
template <class T>
class Generik {
private:
   // mendeklarasikan atribut dengan tipe generik
   T data;
public:  
   // konstruktor dengan parameter bertipe generik
   Generik(T data) {
      this->data = data;
   }
  
   void setData(T data) {
      this->data = data;
   }
  
   T getData() {
      return data;
   }  
};

int main() {   
   // membuat objek dari kelas Generik
   Generik<int> obj1(99);
   Generik<double> obj2(88.99);
   Generik<std::string> obj3(std::string("Pemrograman C++"));
   
   // menampilkan nilai atribut pada obj1
   std::cout<<"Objek berisi data bertipe int"<<std::endl;
   std::cout<<"obj1->getData()\t: "<<obj1.getData()<<std::endl;
   
   // menampilkan nilai atribut pada obj2
   std::cout<<"\nObjek berisi data bertipe double"<<std::endl;
   std::cout<<"obj2->getData()\t: "<<obj2.getData()<<std::endl;
   
   // menampilkan nilai atribut pada obj3
   std::cout<<"\nObjek berisi data bertipe std::string"<<std::endl;
   std::cout<<"obj3->getData()\t: "<<obj3.getData()<<std::endl;
   
   return 0;
}
