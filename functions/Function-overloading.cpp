#include <iostream>
using namespace std;

// function overloading
/* Di C++, dua function bisa memiliki nama yang sama, jika value
   argument dan atau tipe data argument nya yang dimasukan berbeda*/

// function ini memiliki nama yang sama yang dikenal sebagai overloading function
int test();
int test(float);
int test(int);
int test(int, float);
// 4 function prototype overload
/* Ketahui lah tipe data argument dari 4 function tidak lah sama, overload function
   mungkin atau tidak mungkin memiliki return types yang berbeda tapi mereka harus
   mempunyai argument yang berbeda*/

// error 
// int aku(int);   
// float aku(int);

// overloading prototype function
int sumNum(int);
int sumNum(int, int);

int main() {

    // Memanggil overloading pertama
    cout << sumNum(14) << endl;

    // Memanggil overloading kedua
    cout << sumNum(5, 1) << endl;

    return 0;
}

int sumNum(int num) {
    return num + 5;
}

int sumNum(int num1, int num2) {
    return num1 + num2;
}