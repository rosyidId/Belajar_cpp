/******************************************************
Nama file: copy_constructor2.cpp
*******************************************************/

#include <iostream>
#include <cstdlib>	// exit(), EXIT_FAILURE
#include <stdexcept>

class Array {
   int *data;
   int ukuran;
public:
   // konstruktor standar
   Array(int ukuran) {
      try {
         data = new int[ukuran];
      } catch (std::bad_alloc e) {
         std::cout<<"Alokasi memori gagal dilakukan";
         exit(EXIT_FAILURE);
      }
      this->ukuran = ukuran;
   }
	
   // copy constructor
   Array(const Array &obj) {
      int i;
		
      try {
         data = new int[obj.ukuran];
      } catch (std::bad_alloc e) {
         std::cout<<"Alokasi memori gagal dilakukan";
         exit(EXIT_FAILURE);
      }
      
      // melakukan penyalinan isi array
      for (i=0; i < obj.ukuran; i++) {
         data[i] = obj.data[i];
      }
   }
	
   // destructor
   ~Array() {
      delete [] data;
   }
	
   // fungsi untuk memasukkan nilai ke dalam array
   void isiNilai(int indeks, int nilai) {
      if ((indeks < ukuran) && (nilai >= 0)) {
         data[indeks] = nilai;
      } else {
         std::cout<<"Nilai gagal dimasukkan";
      }
   }
	
   // fungsi untuk mendapatkan nilai 
   // berdasarkan indeks
   int ambilNilai(int indeks) {
      return data[indeks];
   }
};

int main() {   
   // memanggil konstruktor standar
   Array a(10);

   int j;
	
   // mengisikan nilai ke dalam array a
   for (j=0; j<10; j++) {
      a.isiNilai(j, j+1);
   }
	
   // menampilkan nilai yang terdapat di dalam array a
   std::cout<<"Nilai di dalam array a: "<<std::endl;
   for (j=0; j<10; j++) {
      std::cout<<a.ambilNilai(j)<<" ";
   }
	
   std::cout<<std::endl<<std::endl;
	
   // melakukan inisialisasi 
   // terhadap array b 
   // menggunakan array a
   Array b(a);	// memanggil copy constructor
	
   // menampilkan nilai 
   // yang terdapat di dalam array b
   std::cout<<"Nilai di dalam array b: "<<std::endl;
   for (j=0; j<10; j++) {
      std::cout<<b.ambilNilai(j)<<" ";
   }

   return 0;
}
