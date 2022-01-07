/******************************************************
Nama file: kelas_non_generik.cpp
*******************************************************/

#include <iostream>
#include <string>	// std::string

// kelas yang berisi atribut bertipe int
class Integer {
private:
   // mendeklarasikan atribut dengan tipe int
   int data;
public:  
   // konstruktor dengan parameter bertipe int
   Integer(int data) {
      this->data = data;
   }
  
   // fungsi untuk mengubah nilai data
   void setData(int data) {
      this->data = data;
   }
  
   // fungsi untuk mengambil nilai data
   int getData() {
      return data;
   }  
};

// kelas yang berisi atribut bertipe double
class Double {
private:
   // mendeklarasikan atribut dengan tipe double
   double data;
public:  
   // konstruktor dengan parameter bertipe double
   Double(double data) {
      this->data = data;
   }
  
   void setData(double data) {
      this->data = data;
   }
  
   double getData() {
      return data;
   }  
};

// kelas yang berisi atribut bertipe std::string
class String {
private:
   // mendeklarasikan atribut dengan tipe std::string
   std::string data;
public:  
   // konstruktor dengan parameter bertipe double
   String(std::string data) {
      this->data = data;
   }
  
   void setData(std::string data) {
      this->data = data;
   }
  
   std::string getData() {
      return data;
   }  
};


int main() {   
   // mendeklarasikan pointer ke Integer
   Integer *obj1;
   
   // membuat objek dari kelas Integer
   obj1 = new Integer(99);
   
   // menampilkan nilai atribut pada obj1
   std::cout<<"Objek bertipe Integer"<<std::endl;
   std::cout<<"obj1->getData()\t: "<<obj1->getData()<<std::endl;
   
   // mendeklarasikan pointer ke Double
   Double *obj2;
   
   // membuat objek dari kelas Integer
   obj2 = new Double(88.99);
   
   // menampilkan nilai atribut pada obj2
   std::cout<<"\nObjek bertipe Double"<<std::endl;
   std::cout<<"obj2->getData()\t: "<<obj2->getData()<<std::endl;
   
   // mendeklarasikan pointer ke String
   String *obj3;
   
   // membuat objek dari kelas Integer
   obj3 = new String("Pemrograman C++");
   
   // menampilkan nilai atribut pada obj3
   std::cout<<"\nObjek bertipe String"<<std::endl;
   std::cout<<"obj3->getData()\t: "<<obj3->getData()<<std::endl;
   
   delete obj1;
   delete obj2;
   delete obj3;
   
   return 0;
}
