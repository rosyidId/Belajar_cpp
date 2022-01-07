/******************************************************
Nama file: akses_anggota_namespace1.cpp
*******************************************************/

#include <iostream>

namespace BangunDatar {

   class DuaDimensi {
   public:
      // fungsi virtual
      virtual double luas() = 0;
      
      // fungsi non-virtual
      void cetakLuas(std::string namaBangun) {
         std::cout<<"Luas "
                  <<namaBangun<<" \t= "
                  <<luas()	// memanggil fungsi luas()
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
  
}

int main() {   
   // mendeklarasikan objek bertipe PersegiPanjang
   BangunDatar::PersegiPanjang pp(10,8);
   
   // mendeklarasikan objek bertipe BujurSangkar
   BangunDatar::BujurSangkar bs(9);
   
   // mendeklarasikan objek bertipe Segitiga
   BangunDatar::Segitiga st(4,5);
   
   // mendeklarasikan objek bertipe Lingkaran
   BangunDatar::Lingkaran lk(5);
   
   // menampilkan luas dari masing-masing objek
   pp.cetakLuas(std::string("persegi panjang"));
   bs.cetakLuas(std::string("bujursangkar"));
   st.cetakLuas(std::string("segitiga"));
   lk.cetakLuas(std::string("lingkaran"));

   return 0;
}
