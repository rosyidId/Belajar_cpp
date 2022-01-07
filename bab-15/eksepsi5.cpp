/******************************************************
Nama file: eksepsi5.cpp
*******************************************************/

#include <iostream>
#include <stdexcept>	// std::out_of_range

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
  
   void setElement(size_t index, T value) {
      data[index] = value;
   }
  
   T getElement(size_t index) {
      if (index < 0 || index > _size-1) {
	     throw std::out_of_range("Kesalahan: indeks di luar rentang");
	  }
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
   size_t index;
   
   // mengisi nilai ke dalam a
   for (size_t i{0}; i<5; i++) {
      a.setElement(i, (i+1) * 10);
   }
   
   // menampilkan nilai-nilai di dalam a
   std::cout<<"Isi array: ";
   a.printArray();
   
   std::cout<<"Masukkan indeks array: ";
   std::cin>>index;
   
   try {
      int value = a.getElement(index);
      std::cout<<"Elemen ke-"<<index<<": "<<value;
   } catch (std::out_of_range e) {
      std::cout<<e.what();
   }

   return 0;
}
