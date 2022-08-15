#include <iostream>
#include <cmath>
using namespace std;

/*Sebuah function adalah sebuah blok dari kode yang menjalankan
  tugas tertentu, membagi masalah yang komplex ke bagian yang kecil
  membuat kode program kita mudah dipahami dan digunakan kembali.
  Ada 2 tipe function :
    1. Standard Library Functions : sudah ditentukan sebelumnya didalam C++
    2. User-defined Function : yang dibuat oleh user*/

// C++ User-defined Function
/* C++ mengizinkan kita untuk mendefinisikan function kita sendiri

   User-defined Function yang di tentukan oleh kita, melakukan tugas tertentu
   sesuai isi kode programnya. Dan User-defined Function diberi nama(identifier)
   
   ketika Function dipanggil dari bagian manapun dari program kita, itu semua
   akan mengeksekusi kode-kode program yang ada di dalam body function
   
   deklarasi function : 
   returnType namaFunction (parameter1, parameter2) {
    function body
   }*/    

// Deklarasi Function
void myFunc() {
    cout << "Morning Bee" << endl;
}
/*-nama functionnya myFunc()
  -returnType nya void
  -tidak punya parameter
  -function di dalam {} */

/*Function parameters
  Seperti yang disebutkan diatas, sebuah function bisa di deklarasikan dengan
  parameter (Argument). Sebuah parameter dapat diisi nilai ketika kita memanggil function
  
  deklarasi function dengan parameter :
  returnType namaFunction(dataType parameterName, dataType parameterName)*/
void sumNum(int num1, int num2) {
    cout << (num1 + num2) << endl;
}

// return statement
/*pada program diatas kita telah menggunakan void dalam deklarasi function.
  Ini artinya function tidak mengembalikan value apapun, itu juga mungkin
  untuk mengembalikan value dari sebuah function. Kalau ntuk ini, kita harus
  mengspesifikasikan returnType dari function pada saat deklarasi funtion.
  
  Kemudian return statement bisa digunakan untuk mengembalikan value dari sebuah
  function, contoh : int sumNum(int num1, int num2) {
                        function body
                     }*/

int multiplyNum(int num1, int num2) {
  return num1 * num2;
}
/*Disini kita menetapkan returnType function nya yaitu int. Ini artinya function
  mengembalikan int value, kode program return num1 * num2, mengembalikan hasil
  operasi perkalian. Return statement menunjukan bahwa function tersebut telah
  berakhir, kode apapun setelah return tidak akan dieksekusi*/

// Function Prototype
/*Di C++, kode dari deklarasi function seharusnya ada sebelum function dipanggil.
  Bagaimanapun juga, jika kita ingin mendefinisikan function setelah functio dipanggil
  kita harus menggunakan function prototype. returnType namaFunction(dataTyoe1, dataType2); */
int devideNum(int, int);

// Keuntungan menggunakan User-defined function
/*  -Function membuat kode dapat digunakan kembali, Kita bisa mendeklarasikan nya sekali
     dan menggunakan nya berkali-kali
    -Function membuat kode program lebih mudah, karena kode program dibagi-bagi ke dalam function
    -Function membuat kode program lebih mudah dibaca*/

// C++ Library Functions
/* Library function adalah function bawaan di C++
   Programmer dapat memanggil nya tanpa harus mendefinikan nya, Untuk menggunakan Library functions
   kita harus meng-include header file dimana function itu di definisikan*/

// contoh library function 
int result = sqrt(12);

int main() {
    // memanggil function
    myFunc();

    // memanggil function dan memasukan nilai di kedua parameter
    sumNum(10, 3);

    // memanggil function dan mencetak return valuenya
    cout << multiplyNum(2, 6) << endl;

    // memanggil function prototype dan mencetak return valuenya
    cout << devideNum(20, 5) << endl;

    // mencetak value result yang didalamnya ada function
    cout << result << endl;

    return 0;
}

// mendefinisikan function devideNum
int devideNum(int num1, int num2) {
  return num1 / num2;
}