#include <iostream>
using namespace std;

// storage class
/* Setiap variabel mempunyai dua fitur : type dan storage class
   Type spesifikny adalah tipe dari data yang bisa disimpan didalam
   sebuah variabel, sebagai contoh: int, float, char, dan lain-lain.
   
   Dan, storage class mengontrol dua perbedaan property-property dari
   sebuah variable yaitu:
    -lifetime(menentukan berapa lama sebuah variabel bisa ada)
    -scope(menentukan bagian program mana yang bisa mengaksesnya)*/

// tergantung pada storage class dari sebuah variable, itu bisa dibagi ke dalam 4 jenis utama:
/*  -Local variable
    -Global varable
    -Static local variable
    -Register variable
    -Thread Local variable
   yang akan di bahas hanya 3*/

// Local variable
/* Sebuah variabel didalam sebuah function dipanggil local variabel atau automatic variabel,
   scope nya hanya dibatasi pada function dimana itu didefinisikan. Sederhananya, local variabel
   ada dan hanya bisa diakses di dalam sebuah function yang mendefinisikan nya.
   Life dari sebuah variabel local ends(variabel dihancurkan) ketika function berakhir*/

// global variable
/* Sebuah variabel yang di definisikan diluar semua function, itu namanya sebuah global variable
   
   scope dari global variabel adalah keseluruhan program. Ini artinya, bisa diubah dan digunakan 
   value nya di bagian program manapun setelah deklarasinya.
   Juga, life nya berakhir ketika program berakhir*/

// global variabel
int nilaiKalkulus = 84;

// static local variabel
/* kata kunci static digunakan untuk menspesifikasikan static variabel.
   Sebuah static local variable tersedia hanya di dalam function tempat ia dideklarasikan
   (mirip dengan local variable), tapi lifetime nya dimulai pada saat function dipanggil
   dan berakhir ketika program berakhir. Perbedaan utama antara local variable dan static
   local variable adalah, value dari static variable tetap ada diakhir program*/

void funcB();
void staticNum();
void nonStaticNum();

int main() {

    // local variabel main()
    int valueA = 15;
    funcB();

    cout << valueA << endl;
    cout << nilaiKalkulus << endl;

    // error: identifier is undefined
    // cout << valueB << endl;

    staticNum();
    staticNum();

    nonStaticNum();
    nonStaticNum();

}

void funcB() {
    // local variabel funcB()
    int valueB = 3;

    cout << valueB << endl;
    cout << nilaiKalkulus << endl;

    // error: identifier is undefined
    // cout << valueA << endl;
}
/*  variabel valueA tidak bisa digunakan di funcB, variabel valueB
    tidak bisa digunakan di main. Karena scope dari masing-masing
    variabel berbeda*/

void staticNum() {
    // static local variable
    static int num = 0;
    num++;
    
    cout << num << endl;
}
/*  pada program diatas staticNum() dipanggil 2 kali, pada saat function
    pertama kali dipanggil variable num dideklarasikan dan 
    diinisialisasikan 0, kemudian num dinaikan 1 angka dan num dicetak,
    setelah function berakhir variable num masih ada karena dia static variable.
    Pada saat pemanggilan kedua tidak ada pembuatan variable num baru, num
    dinaikan 1 angka dan num dicetak*/

void nonStaticNum() {
    int nonStaticVar = 5;
    nonStaticVar++;

    cout << nonStaticVar << endl;
}
/*  pada program diatas nonStaticNum() dipanggil 2 kali, pada saat function
    pertama kali dipanggil variable nonStaticVar dideklarasikan dan diinsialisasikan
    5, kemudian dinaikan 1 angka dan dicetak, setelah function berakhir berakhir
    setelah function berakhir variable nonStaticVar sudah tidak ada karena dia local biasa 
    bukan static local variable. Pada saat pemanggilan ada pembuatan variable
    baru yaitu nonStaticVar, variable itu dinaikan 1 angka dan dicetak*/
