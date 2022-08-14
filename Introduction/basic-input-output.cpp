#include <iostream>
using namespace std;

/*Di C++, cout mengirim output yang diformat kestandar output perangkat,
 seperti layar. Kita menggunakan object cout bersama dengan operator <<
 untuk menampilkan output
 
 Bagaimana program ini bekerja ?
 -Pertama kita include file header iostream untuk menampilkan output

 -object cout di definisikan di dalam std namespace. Untuk menggunakan
  std namespace, kita menggunakan statement using namespace std;

 -cout adalah sebuah object yang mencetak string di dalam tanda petik dua
  diikuti dengan operator <<

 -return 0; adalah "exit status" dari function main(). Program berakhir
  dengan statement ini, bagaimanapun juga, statement ini tidak wajib
  
  Catatan : jika kita tidak menginclude statement using namespace std;
            kita harus menggunakan std::cout daripada cout, ini adalah
            metode yang disukai karena menggunakan std namespace menimbulkan
            menimbulan masalah potensial*/

/*Di C++, cin mengambil format input dari standart input devices, seperti
  keyboard. Kita menggunakan object cin bersama dengan operator >> */

int age;

int main() {
    cout << "Memulai karir" << endl;
    cout << "Di software house" << endl;
    cout << "your age : ";
    cin >> age;
    cout << "your age is " << age;
}