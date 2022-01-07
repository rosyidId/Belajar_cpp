/******************************************************
Nama file: typeid1.cpp
*******************************************************/

#include <iostream>
#include <typeinfo>	// typeid
#include <string>	// std::string

class DuaDimensi {
public:
   // fungsi virtual
   virtual double luas() = 0;
   
   // fungsi non-virtual
   void cetakLuas(std::string namaBangun) {
      std::cout<<"Luas "
               <<namaBangun<<" = "
               <<luas()		// memanggil fungsi luas()
               <<std::endl;
   }
};

class PersegiPanjang: public DuaDimensi {
private:
   double panjang;
   double lebar;
public:
   PersegiPanjang() = default;
   PersegiPanjang(double p, double l):
      panjang(p), lebar(l) {}
   
   void setPanjang(double p) {
      panjang = p;
   }
   
   double getPanjang() {
      return panjang;
   }
   
   void setLebar(double l) {
      lebar = l;
   }
   
   double getLebar() {
      return lebar;
   }
   
   double luas() override {
      return panjang * lebar;
   }
};

class BujurSangkar: public DuaDimensi {
private:
   double sisi;
public:
   BujurSangkar() = default;
   BujurSangkar(double s): sisi(s) {}
   
   void setSisi(double s) {
      sisi = s;
   }
   
   double getSisi() {
      return sisi;
   }
   
   double luas() override {
      return sisi * sisi;
   }
};

class Segitiga: public DuaDimensi {
private:
   double alas;
   double tinggi;
public:
   Segitiga() = default;
   Segitiga(double a, double t):
      alas(a), tinggi(t) {}
   
   void setAlas(double a) {
      alas = a;
   }
   
   double getAlas() {
      return alas;
   }
   
   void setTinggi(double t) {
      tinggi = t;
   }
   
   double getTinggi() {
      return tinggi;
   }
   
   double luas() override {
      return alas * tinggi / 2;
   }
};

class Lingkaran: public DuaDimensi {
private:
   double jariJari;
public:
   Lingkaran() = default;
   Lingkaran(double r): jariJari(r) {}
   
   void setJariJari(double r) {
      jariJari = r;
   }
   
   double getJariJari() {
      return jariJari;
   }
   
   double luas() override {
      return 3.14159 * jariJari * jariJari;
   }
};

int main() {
   // mendeklarasikan pointer ke tipe DuaDimensi
   DuaDimensi *p;
   
   // mendeklarasikan objek dari kelas PersegiPanjang,
   // BujurSangkar, Segitiga, dan Lingkaran
   PersegiPanjang pp;
   BujurSangkar bs;
   Segitiga st;
   Lingkaran lk;
   
   // pointer menunjuk ke alamat dari objek PersegiPanjang
   p = &pp;
   std::cout<<"pp merupakan objek bertipe "
            <<typeid(*p).name()
            <<std::endl;
   
   // pointer menunjuk ke alamat dari objek BujurSangkar
   p = &bs;
   std::cout<<"bs merupakan objek bertipe "
            <<typeid(*p).name()
            <<std::endl;
   
   // pointer menunjuk ke alamat dari objek Segitiga
   p = &st;
   std::cout<<"st merupakan objek bertipe "
            <<typeid(*p).name()
            <<std::endl;
   
   // pointer menunjuk ke alamat dari objek Lingkaran
   p = &lk;
   std::cout<<"lk merupakan objek bertipe "
            <<typeid(*p).name()
            <<std::endl;

   return 0;
}
