#include <iostream>
using namespace std;

/*Di pemrogramman computer, loops digunakan untuk mengeksekusi blok
  kode program secara berulang
  Katakanlah kita ingin mencetak Hello 10 kali, daripada menulisnya
  sebanyak 10 kali, kita bisa menggunakan loop
  Ada 3 tipe loop di C++ :
    1. for loop
    2. while loop
    3. do while loop*/

// syntax for loop
/*for(initialization; condition; update) {
    body for loop
  }
  -initialization : insialisasi variabel dan dieksekusi hanya sekali
  -condition : jika true, body for loop dieksekusi, jika false, body
               for loop tidak dieksekusi
  -update : mengupdate value dari variabel yang di inisialisasi dan
            mengecek kondisi lagi*/



int main() {

    for (int i = 1; i <= 5; i++)
    {
        cout << "Hello" << i << endl;
    }
    
    // infinity loop
    /*for (int i = 1; i <= 5; i--) {
        cout << "Hello" << endl;
    }
    ini akan berjalan selamanya(sampai memori habis), pada contoh diatas
    kondisi selalu true*/
    

}