#include <iostream>
using namespace std;

/*Untuk pemahaman pemrograman yang lebih baik dari arguments dan 
  return di function, User-defined Functions bisa di katagorikan
  sebagai :
   1. Function tanpa argument dan return value
   2. Function tanpa argument tapi dengan return value
   3. Function dengan argument tapi tanpa return value
   4. Function dengan argument dan return value*/

// Function tanpa argument dan return value
void myFunc1();

// Function tanpa argument tapi dengan return value
int myFunc2();

// Function dengan argument tapi tanpa return value
void myFunc3(int, int);

// Function dengan argument dan return value
int myFunc4(int, int);


int main() {
    // Memanggil function tanpa argument dan return value
    myFunc1();

    // Memanggil function tanpa argument tapi dengan return value
    cout << myFunc2() << endl;

    // Memanggil function dengan argument tapi tanpa return value
    myFunc3(10, 4);

    // Memanggil function dengan argument dan return value
    cout << myFunc4(3, 5) << endl;

}

// Function tanpa argument dan return value
void myFunc1() {
    cout << "Hello Bee" << endl;
}

// Function tanpa argument tapi dengan return value
int myFunc2() {
    return 21;
}

// Function dengan argument tapi tanpa return value
void myFunc3(int num1, int num2) {
    int result = num1 + num2;
    cout << result << endl;
}

// Function dengan argument dan return value
int myFunc4(int num1, int num2) {
    return num1 * num2;
}