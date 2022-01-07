/******************************************************
Nama file: kelas_generik.cpp
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
   // mendeklarasikan pointer ke kelas Generik
   Generik<int> *obj1;
   Generik<double> *obj2;
   Generik<std::string> *obj3;
   
   // membuat objek dari kelas Generik
   // yang menyimpan data bertipe int
   obj1 = new Generik(99);
   
   // menampilkan nilai atribut pada obj1
   std::cout<<"Objek berisi data bertipe int"<<std::endl;
   std::cout<<"obj1->getData()\t: "<<obj1->getData()<<std::endl;
   
   // membuat objek dari kelas Generik
   // yang menyimpan data bertipe double
   obj2 = new Generik(88.99);
   
   // menampilkan nilai atribut pada obj2
   std::cout<<"\nObjek berisi data bertipe double"<<std::endl;
   std::cout<<"obj2->getData()\t: "<<obj2->getData()<<std::endl;
   
   // membuat objek dari kelas Generik
   // yang menyimpan data bertipe std::string
   obj3 = new Generik(std::string("Pemrograman C++"));
   
   // menampilkan nilai atribut pada obj3
   std::cout<<"\nObjek berisi data bertipe std::string"<<std::endl;
   std::cout<<"obj3->getData()\t: "<<obj3->getData()<<std::endl;
   
   delete obj1;
   delete obj2;
   delete obj3;
   
   return 0;
}
