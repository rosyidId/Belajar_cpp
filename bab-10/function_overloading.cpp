/******************************************************
Nama file: function_overloading.cpp
*******************************************************/

#include <iostream>

class Induk {
public:
   Induk() = default;
   virtual ~Induk() { }
   
   // fungsi yang akan di-override 
   // dan sekaligus di-overload oleh kelas turunan
   virtual void cetak() {
      std::cout<<"Induk::cetak() dipanggil..."<<std::endl;
   }   
};

class Anak: public Induk {
public:
   // override fungsi Induk::cetak()
   void cetak() override {
      std::cout<<"Anak::cetak() dipanggil..."<<std::endl;
   }
   
   // melakukan overload terhadap fungsi Induk::cetak()
   void cetak(std::string s) {
      std::cout<<"Anak::cetak(std::string) dipanggil "
               <<"dengan parameter \""<<s<<"\""
               <<std::endl;
   }
   
   // melakukan overload terhadap fungsi Induk::cetak()
   void cetak(int i) {
      std::cout<<"Anak::cetak(int) dipanggil "
               <<"dengan parameter "<<i
               <<std::endl;
   }
   
   // melakukan overload terhadap fungsi Induk::cetak()
   void cetak(double d) {
      std::cout<<std::fixed;
      std::cout<<"Anak::cetak(double) dipanggil "
               <<"dengan parameter "<<d
               <<std::endl;
   }
   
};

int main() {
   // pointer ke kelas Anak
   Anak *obj;

   // membuat objek dari kelas Anak
   obj = new Anak();
      
   obj->cetak();		// memanggil fungsi Induk::cetak()
   obj->cetak("C++");	// memanggil fungsi Induk::cetak(std::string)
   obj->cetak(99);		// memanggil fungsi Induk::cetak(int)
   obj->cetak(123.456);	// memanggil fungsi Induk::cetak(double)
   
   delete obj;
   
   return 0;
}
