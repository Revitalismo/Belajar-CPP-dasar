#include <iostream>
using namespace std;

// operator aritmatika C++
/* operator aritmatika digunakan untuk melakukan operasi aritmatika pada
   variabel dan data*/

int nilaiKalkulus = 90;
bool result;

int main() {
    nilaiKalkulus = nilaiKalkulus - 42;
    cout << nilaiKalkulus << endl;

    // modulo operator
    nilaiKalkulus = nilaiKalkulus % 1;
    cout << nilaiKalkulus << endl;

    // operator increment dan decrement
    nilaiKalkulus++;
    cout << nilaiKalkulus << endl;

    // assignment operator
    /*digunakan untuk memasukan value ke variable lebih singkat*/
    nilaiKalkulus = nilaiKalkulus + 7; // terlalu panjang
    // remedial nilai kalkulus biar full senyum
    nilaiKalkulus =+ 78; // singkat
    cout << nilaiKalkulus << endl;

    // relational operator
    /*digunakan untuk mengecek hubungan antara dua value dari masing-masing variabel*/
    result = (3 < 1);
    cout << result << endl;

    result = (3 > 1);
    cout << result << endl;

    // operator logika
    /*digunakan untuk mengecek kedua kondisi boolean yang hasil akhirnya boolean*/
    result = ((3 < 1) && (3 > 1));
    cout << result << endl;

    result = ((3 < 1) || (3 > 1));
    cout << result << endl;

    return 0;
}
