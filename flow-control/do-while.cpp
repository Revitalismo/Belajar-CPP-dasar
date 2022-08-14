#include <iostream>
using namespace std;

// while loop
/*whilte(condition) {
    body while loop
}
1. condition di evaluasi, body while loop dieksekusi jika condition true
2. condition di evaluasi lagi
3. ini akan terus berulang sampai condition false
4. jika condition false maka perulangan berakhir*/
int a;

// do while loop
/*do while loop adalah variant dari while loop, yang membedakan dari while loop
  adalah body loop dieksekusi paling pertama, setelah itu baru kondisi di evaluasi
  
  do {
    body loop
  } while (condition)*/

int main() {
    // while loop
    a = 1;
    while (a <= 5) {
        cout << "a = " << a << endl;
    a++;
    }

    // do while loop
    do {
        cout << "Hello" << endl;
    } while (a <= 1);
    /*kode program tetap akan dijalankan walau condtion false, karena eksekusi
      selalu dijalankan duluan dan evaluasi condition dijalankan setelah eksekusi*/
    
}