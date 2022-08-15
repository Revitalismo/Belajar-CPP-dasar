#include <iostream>
using namespace std;

// default argument
/*Di pemgrograman C++, kita bisa menyediakan value-value default(bawaan),
  untuk paramter/argument function
  
  Jika sebuah function dengan default arguments dipanggil tanpa memasukan value
  arguments nya, kemudian default value argument nya lah yang digunakan
  
  Bagaimanpun juga, jika argument di beri value pada saat function dipanggil,
  maka default value argument diabaikan/tidak dipakai*/

// contoh default value argument
int jumlahDuaAngka(int = 5, int = 5);

int main() {
    // memanggil function dan memberi nilai kepada dua argument
    cout << jumlahDuaAngka(2, 2) << endl;

    // memanggil function tanpa memberi nilai
    cout << jumlahDuaAngka() << endl;

    // memanggil function tapi hanya memberi nilai kepada satu argument
    cout << jumlahDuaAngka(8) << endl;
}

int jumlahDuaAngka(int angka1, int angka2) {
    return angka1 + angka2;
}

// Hal-hal yang harus diingat
/*  1. Sekali kita menyediakan default value untuk argument, semua argument
       berikutnya harus memiliki default value, contoh :
        invalid
        void functionKu(int angka1 = 2, int angka2, int angka3)

        invalid
        void functionKu(int angka1 = 2, int angka2, int angka3 = 5)

        valid
        void functionKu(int angka1, int angka2 = 2, int angka3 = 4)


    2. Jika kita ingin mendefinisikan default arguments di dalam function
       dari pada di function prototype, maka kita tidak bisa memanggil nya
       sebelum function di definisikan, contoh :
       
       valid
       void funcKu(int a = 3) {
        return a; 
       }

       int main() {
        funcKu();
       }

       invalid
       int main() {
        funcKu();
       }

       void funcKu(int a = 3) {
        return a;
       }
       
       */