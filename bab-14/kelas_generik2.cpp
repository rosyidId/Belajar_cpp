/******************************************************
Nama file: kelas_generik2.cpp
*******************************************************/

#include <iostream>
#include <string>	// std::string

// kelas generik
template <class T1, class T2>
class Generik {
private:
   // mendeklarasikan atribut dengan tipe generik
   T1 data1;
   T2 data2;
public:  
   // konstruktor dengan parameter bertipe generik
   Generik(T1 data1, T2 data2) {
      this->data1 = data1;
      this->data2 = data2;
   }
  
   void setData1(T1 data1) {
      this->data1 = data1;
   }
  
   T1 getData1() {
      return data1;
   }
   
   void setData2(T2 data2) {
      this->data2 = data2;
   }
  
   T2 getData2() {
      return data2;
   }   
};

int main() {   
   // membuat objek dari kelas Generik
   // yang menyimpan data std::string dan int
   Generik<std::string, int> obj1("C++", 17);
   
   // membuat objek dari kelas Generik
   // yang menyimpan data std::string dan std::string
   Generik<std::string, std::string> 
      obj2(std::string("C"), std::string("C++"));
   
   // menampilkan nilai atribut pada obj1
   std::cout<<"Objek berisi data bertipe std::string dan int:"
            <<std::endl;
   std::cout<<obj1.getData1()<<obj1.getData2()<<std::endl;
   
   // menampilkan nilai atribut pada obj2
   std::cout<<"\nObjek berisi data bertipe std::string "
            <<"dan std::string:"
            <<std::endl;
   std::cout<<obj2.getData1()<<" dan "<<obj2.getData2()<<std::endl;   
   
   return 0;
}
