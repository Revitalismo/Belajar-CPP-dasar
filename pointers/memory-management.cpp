#include <iostream>
using namespace std;

// function prototype dml
void dml();

int main() {
    // Deklarasi pointer pointVar
    int * pointVar;

    // Mengalokasikan memori untuk poinVar variabel int
    pointVar = new int;

    // Mencetak nilai alamat pointVar
    cout << *(pointVar) << " : " << &pointVar << endl;

    // Menetapkan nilai alamat pointVar
    *pointVar = 13;

    // Mencetak nilai alamat pointVar
    cout << *(pointVar) << " : " << &pointVar << endl;

    // Menghapus memori yang dialokasikan
    delete pointVar;

    // Mencetak nilai alamat pointVar
    cout << *(pointVar) << " : " << &pointVar << endl;

    dml();

    return 0;
}

// Program Dynamic memory allocation
void dml() {
    // Deklarasi pointer int
    int * pointInt;

    // Deklarasi pointer float
    float * pointFloat;

    // Mengalokasikan memori secara dinamis
    // untuk pointer int dan float
    pointInt = new int;
    pointFloat = new float;

    // Menetapkan nilai pada alamat pointer int dan float
    *pointInt = 13;
    *pointFloat = 6;

    // Mencetak nilai alamat pointer int dan float
    cout << *pointInt << " : " << &pointInt << "\n";
    cout << *pointFloat << " : " << &pointFloat << "\n";

    // Membatalkan alokasi memori untuk pointer int dan float
    delete pointInt;
    delete pointFloat;
    
    // Mencetak nilai alamat pointer int dan float
    cout << *pointInt << " : " << &pointInt << "\n";
    cout << *pointFloat << " : " << &pointFloat << "\n";
}