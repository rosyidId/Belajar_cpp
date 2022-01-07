/******************************************************
Nama file: kelas_generik4.cpp
*******************************************************/

#include <iostream>
#include <cstdlib>	// exit(), EXIT_FAILURE

template <class T>
class Stack {
private:
   T *data;
   size_t _maxsize;
   size_t _size;
   size_t _top;
public:
   // konstruktor
   Stack() = default;
   Stack(size_t _maxsize) {
      setSize(_maxsize);      
   }
   
   // destruktor
   ~Stack() {
      delete [] data;
   }
   
   void setSize(size_t _maxsize) {
      this->_maxsize = _maxsize;
      data = new T[_maxsize];
      _size = 0;
      _top = -1;
   }
   
   bool empty() {
      return _size == 0;
   }
   
   bool full() {
      return _size == _maxsize;
   }
  
   void push(T value) {
      if (full()) {
	     std::cout<<"Kesalahan: stack penuh"<<std::endl;
	     exit(EXIT_FAILURE);
	  }
      data[++_top] = value;
      _size++;
   }
  
   T pop() {
      if (empty()) {
	     std::cout<<"Kesalahan: stack kosong"<<std::endl;
	     exit(EXIT_FAILURE);
	  }
      T temp;
      temp = data[_top--];
      _size--;
      return temp;
   }
   
   T top() {
      return data[_top];
   }
   
   size_t capacity() {
      return _maxsize;
   }
   
   size_t size() {
      return _size;
   }   
};

int main() {   
   // membuat objek dari kelas Stack
   // yang menyimpan 3 data bertipe int
   Stack<int> s(3);
   
   // mengisi nilai ke dalam s
   std::cout<<"Memasukkan elemen-elemen ke dalam stack:"
            <<std::endl;
   for (size_t i{0}; i<3; i++) {
      int value = (i+1) * 10;
      s.push(value);
      std::cout<<value<<std::endl;
   }
   
   std::cout<<"\nSebelum diambil"<<std::endl;
   std::cout<<"Kapasitas stack\t: "<<s.capacity()<<std::endl;
   std::cout<<"Ukuran stack\t: "<<s.size()<<std::endl;
   std::cout<<"Elemen terakhir\t: "<<s.top()<<std::endl;
   
   // mengambil nilai dari dalam s
   std::cout<<"\nMengambil elemen-elemen dari dalam stack:"
            <<std::endl;
   for (size_t i{0}; i<3; i++) {
      std::cout<<s.pop()<<std::endl;
   }

   std::cout<<"\nSetelah diambil"<<std::endl;
   std::cout<<"Kapasitas stack\t: "<<s.capacity()<<std::endl;
   std::cout<<"Ukuran stack\t: "<<s.size()<<std::endl;
   
   return 0;
}
