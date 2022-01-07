/******************************************************
Nama file: overload_delete.cpp
*******************************************************/

#include <iostream>
#include <cstdlib>	// malloc(), free()
#include <new>		// std::bad_alloc

class BilanganBulat {
private:
   int nilai;
public:  
   // konstruktor
   BilanganBulat() = default;
   BilanganBulat(int nilai) {
      this->nilai = nilai;
   }
  
   void setNilai(int nilai) {
      this->nilai = nilai;
   }
   
   int getNilai() {
      return nilai;
   }
  
   // overload operator new
   void *operator new(size_t size) {      
      void *p;

      std::cout<<"Operator new yang "
               <<"didefinisikan sendiri"
               <<std::endl;

      // melakukan alokasi memori
      p = malloc(size);
      
      // jika alokasi gagal, lemparkan eksepsi bad_alloc
      if (!p) {
         std::bad_alloc ba;
         throw ba;
      }
      return p;
   }
   
   // overload operator delete
   void operator delete(void *p) {
      std::cout<<"Operator delete yang "
               <<"didefinisikan sendiri"
               <<std::endl;
      free(p);
   }
};

int main() {   
   // mendeklarasikan pointer ke tipe BilanganBulat
   BilanganBulat *a;
   
   try {
      a = new BilanganBulat(9);      
      std::cout<<"a.getNilai(): "
               <<a->getNilai()
               <<std::endl;
      delete a;
   } catch (std::bad_alloc e) {
      std::cout<<"Alokasi memori gagal dilakukan"<<std::endl;
      return 1;
   }

   return 0;
}
