#include <iostream>
using namespace std;

// if statement
/*di pemrogramaman komputer, kita menggunakan statement if..else untuk
  menjalankan blok kode program dalam kondisi yang berbeda
  ada tiga bentuk statement if else di C++ :
    1. if statement
    2. if ... else statement
    3. if ... else if ... else statement
    
    if(condition) {
        block kode prograrm
    }*/

int nilaiKalkulus, nilaiGraph;

int main() {
    // syntax statement if
    if (10 > 3) {
        cout << "damn" << endl;
    }
    /*if statement mengevaluasi kondisi di dalam (), jika kondisi true maka 
      blok kode program dijalankan. Jika tidak maka blok kode program tidak dijalankan
      catatan : kode didalam {} adalah body dari if statement*/
    
    // syntax statement if else
    nilaiKalkulus = 83;
    if (nilaiKalkulus > 70) {
        cout << "Lulus" << endl;
    }
    else {
        cout << "Kagak lulus" << endl;
    }
    /*jika kondisi true maka kode program di body if dieksekusi, kode program dibody else di skip.
      Jika kondisi false maka kode program di body if di skip, kode program dibody else di eksekusi*/
    
    // syntax statement if elseif else
    nilaiGraph = 8;
    if (nilaiGraph > 10) {
        cout << "Lulus" << endl;
    } else if (nilaiGraph > 5) {
        cout << "Eluh kudu remedial" << endl;
    } else {
        cout << "Kagak lulus" << endl;
    }
    
    // nested if else statement
    if (nilaiGraph > 1) {
        if (nilaiGraph > 5) {
            cout << "this is nested if else statement" << endl;
        }        
    }
    

}