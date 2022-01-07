/******************************************************
Nama file: kelas_generik3.cpp
*******************************************************/

#include <iostream>
#include <string>	// std::string

template <class T>
class Array {
private:
   T *data;
   size_t _size;
public:
   // konstruktor
   Array() = default;
   Array(size_t _size) {
      setSize(_size);      
   }
   
   // destruktor
   ~Array() {
      delete [] data;
   }
   
   void setSize(size_t _size) {
      this->_size = _size;
      data = new T[_size];
   }
  
   void setElement(int index, T value) {
      data[index] = value;
   }
  
   T getElement(int index) {
      return data[index];
   }
   
   size_t size() {
      return _size;
   }
   
   void printArray() {
	  std::cout<<"[";
      for (size_t i{0}; i<_size; i++) {
         std::cout<<getElement(i);
         if (i<_size-1) std::cout<<", ";
      }
      std::cout<<"]"<<std::endl;
   }
};

int main() {   
   // membuat objek dari kelas Array
   // yang menyimpan 5 data bertipe int
   Array<int> a(5);
   
   // mengisi nilai ke dalam a
   for (size_t i{0}; i<5; i++) {
      a.setElement(i, (i+1) * 10);
   }
   
   // menampilkan nilai-nilai yang terdapat di dalam a
   std::cout<<"Array berisi data bertipe int:"<<std::endl;
   a.printArray();
   
   // membuat objek dari kelas Array
   // yang menyimpan 4 data bertipe std::string
   Array<std::string> a1;
   a1.setSize(4);
   
   // mengisi nilai ke dalam a
   a1.setElement(0, std::string("C"));
   a1.setElement(1, std::string("C++"));
   a1.setElement(2, std::string("Python"));
   a1.setElement(3, std::string("Ruby"));
   
   
   // menampilkan nilai-nilai yang terdapat di dalam a1
   std::cout<<"\nArray berisi data bertipe std::string:"<<std::endl;
   a1.printArray();
   
   return 0;
}
