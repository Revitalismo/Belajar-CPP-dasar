#include <iostream>
using namespace std;
/*Di C++, tipe data adalah deklarasi untuk variabel, ini menentukan tipe dan
  ukuran dari data terkait dengan variabelnya*/

int myNumber = 2;
/*Disini, myNumber adalah variabel dari tipe data int, Artinya. Variabel hanya
  bisa menampung integer dari 2 atau 4 bytes*/

/*C++ int
  -kata kunci int digunakan untuk mengindikasikan integer(bilangan bulat)
  -ukurannya biasanya 4 bytes. Artinya, itu bisa menyimpan nilai dari -2147483648 to 2147483647.
  
  C++ float dan double
  -float dan double digunakan untuk menampung angka floating-point(desimal dan exponensial)
  -Ukuran dari float adalah 4 bytes dan ukuran dari double adalah 8 bytes. Karena itu, dobule
   dua kali lebih presisi daripada float*/
float squareLarge = 25.00;
double squareExtraLarge = 25.00199;

/*C++ char
  -kata kunci char digunakan untuk karakter
  -ukuran 1 bytes
  -karakter di C++ diawali dengan petik satu (')dan diakhiri dengan (')
  Catatan : di C++, sebuah value integer disimpan di dalam sebuah variable char dari karakter
            itu sendiri*/
char myChar = 'a';

/*C++ wchar_t
   -Wide character wchar_t serupa tipe data char, kecuali ukurannya 2 bytes
   -itu menggunakan lebih banyak memori untuk merepresentasikan karakter
    daripada single char 1*/
wchar_t myWideChar = L'a';

/*C++ bool
   -tipe data bool mempunyai dua nilai kemungkinan yaitu true atau false
   -boolean digunakan di conditional statement dan looping*/
bool myBool = false;

/*C++ void
   -kata kunci void mengindikasikan ke absenan dari sebuah data itu artinya
    "nothing" or "no value
   Catatan : kita tidak bisa mendeklarasikan tipe data ini"*/

int main() {
    cout << myNumber << endl;
    cout << squareLarge << endl;
    cout << squareExtraLarge << endl;
    cout << myChar << endl;
    cout << myWideChar << endl;
    cout << myBool << endl;
}