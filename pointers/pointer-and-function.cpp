#include <iostream>
using namespace std;

// function prototype callByReference
void callByReference(int &value);

// function prototype swap
void swap(int &value1, int &value2);

int main() {
    int nana = 3;
    int jade = 2;

    // Memanggil callByReference dan memasukan variabel nana
    callByReference(nana);

    // Memanggil callByReference dan memasukan variabel jade
    callByReference(jade);
    
    // variabel nana dan jade sebelum di swap
    cout << "Sebelum di swap\n" << "\nnana : " << nana << "\njade : " << jade;

    // memanggil swap dan memasukan dua variabel, nana dan jade
    swap(nana, jade);

    // variabel nana dan jade sesudah di swap
    cout << "\nSesudah di swap\n" << "\nnana : " << nana << "\njade : " << jade;

    return 0;
}

// function mencetak alamat memori dan nilainya
void callByReference(int &value) {
    cout << value << " : " << &value << endl;
}

// function swap two values
void swap(int &value1, int &value2) {
    int temp;

    // Menyimpan value2 ke variabel temp
    temp = value2;

    // Menetapkan value2 dengan value1
    value2 = value1;

    // Menetapkan value1 dengan value variabel temp
    value1 = temp;
}