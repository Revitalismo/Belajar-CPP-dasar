#include <iostream>
using namespace std;

// Inisialisasi string dengan char/C-string
char name[7] = {"Julian"};

// Inisialisasi string dengan object string
string herName = "Clara";

// function prototype printUserName
void printUserName();

// function prototype printUserFullname
void printUserFullname();

// function prototype printVariable
void printVariable(string text = "Hello");

string myName = "Julian and Clara";

int main() {
    
    // Menampilkan nilai name
    // cout << name << endl;

    // menampilkan nilai herName
    // cout << herName << endl;

    // memanggil printUserName
    // printUserName();

    // memanggil printUserFullname
    // printUserFullname();

    // Memanggil printVariable
    printVariable();

    // Memanggil printVariable dan memasukan
    // variabel myName ke argument nya
    printVariable(myName);

    return 0;
}

// printUserName untuk menjalankan program pencetak
// kata apa yang telah dimasukan user
void printUserName() {
    // Inisialisasi name
    char name[100];

    // Meminta input dari user dan menyimpan nya
    // di variabel name
    cout << "Masukan nama kamu: ";
    cin.get(name, 100);

    cout << "Hai " << name;
}

// printUserFullname untuk menjalankan program
// pencetak kata apa yang telah dimasukan user
void printUserFullname() {
    // Deklarasi object string
    string fullname;

    // Meminta input dari user dan menyimpan nya
    // di variabel name
    cout << "Masukan nama panjang : ";
    getline(cin, fullname);

    // Menampilkan fullname
    cout << "Hai " << fullname;
}

// printVariable untuk menjalankan program pencetak variabel
void printVariable(string text) {
    cout << text << endl;
}