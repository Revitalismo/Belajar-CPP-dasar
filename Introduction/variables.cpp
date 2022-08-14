#include <iostream>
using namespace std;

/* Di pemrograman, sebuah variabel adalah sebuah container(storage area)
   untuk menampung data. Untuk meindikasikan area penyimpanan, setiap variabel
   harus diberikan nama yang unik(pengenal) */
int age = 21;
/*Disini, age adalah nama variable yang tipe datanya integer, dan kita menetapkan
  18 sebagai valuenya.
  Catatan : Variabel dengan tipe data integer hanya bisa menampung integer, demikian
  kita bisa menggunakan tipe data double jika kita ingin menyimpan pecahan dan exponensial*/

int main() {
    cout << age << endl;
    age++;
    cout << age << endl;
    return 0;
}

/* Peraturan untuk menamai variable 
    -Nama variable hanya bisa dengan alfabet, number dan underscore(_)
    -Nama varirable tidak bisa dimulai dengan angka
    -Penamaan variable yang baik dengan lowercase(nama) daripada Nama
    -Nama variabel bisa dimulai dengan underscore, bagaimanapun juga itu bukan
     praktik yang baik

   C++ Literal adalah data yang digunakan untuk merepresentasikan nilai-nilai tetap,
   disini, 1, 2, 1.5, a adalah literal, mengapa?, Kamu tidak dapat menetapkan nilai-nilai 
   yang berbeda di literal inih.

   daftar dari literal-literal yang berbeda di C++ : 
   -Integer 
   -Floating-point literal
   -Characters*/
