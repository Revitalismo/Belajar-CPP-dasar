#include <iostream>
using namespace std;

/*C++ mengizinkan kita melakukan konversi data dari satu tipe ke tipe yang lain
  ini dikenal sebagai type conversion
  Ada dua tipe dari type conversion :
   1. Implicit coversion
   2. Explicit conversion(dikenal sebagai type casting)*/

/*Implicit type coversion yang dilakukan secara otomatis oleh compiler, dikenal
  juga sebagai konversi otomatis*/

// insialisasi sebuah float value ke floatNum
float floatNum = 13.5;
float floatNum1 = 1.2;

// deklarasi sebuah variable int value
int intNum, intNum1, intNum2;


int main() {
    // implicit conversion
    // assign value floatNum ke intNum
    intNum = floatNum;
    /* di atas, kita memasukan sebuah data float ke variable intNum.
       int value otomatis dikonversi ke double oleh compiler sebelum
       dimasukan ke variabel intNum. Ini adalah penjelasan implicit type conversion
       
       catatan : sejak int tidak bisa mempunyai bagian desimal, digit setelah
                 titik akan dipotong*/

    // Explicit conversion
    /*ketika user secara manual mengubah data dari satu tipe ke tipe yang lain,
      ini dikenal sebagai explicit conversion. Tipe dari konversi ini juga dikenal
      sebagai type casting.
      Ada tiga cara utama dimana kita bisa menggunakan expilicit conversion di c++
        1. C-style type casting (juga dikenal sebagai cast notation)
        2. Function notation (juga dikenal sebagai style lama C++ type casting)
        3. Type conversion operators*/

    // C-style Type Casting
    /*Seperti namanya, tipe dari casting ini disukai pada bahas pemrograman C, itu
      dikenal juga sebagai cast notation
      syntax nya : (data_type)expression*/
      intNum1 = (int)floatNum1;

    // Function-style Casting
    /*Kita juga bisa menggunakan function seperti notasi untuk konversi tipe data
    syntax nya : data_type(expression)*/
      intNum2 = int(floatNum1);
    

    cout << floatNum << endl;
    cout << intNum << endl;

    cout << floatNum1 << endl;
    cout << intNum1 << endl;
    cout << intNum2 << endl;


    return 0;
}