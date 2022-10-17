#include <iostream>
using namespace std;

// Struktur Person
struct Person
{
    string name;
    short int age;
};

// Struktur Animal
struct Animal
{
    string name;
    short int age;
};

// function prototype printPeopleStruct
void printPersonStruct(Person structName);

// function prototype printAnimalStruct
void printAnimalStruct(Animal structName);

int main() {
    // Membuat variabel struktur dari Person
    Person Mirai;

    Mirai.name = "Mirai";
    Mirai.age = 15;

    // memanggil function dan memasukan Mirai sebagai argumentnya
    printPersonStruct(Mirai);

    // Membuat variabel struktur dari Person
    Animal Cat;
    Cat.name = "Jeb";
    Cat.age = 5;

    // memanggil function dan memasukan Mirai sebagai argumentnya
    printAnimalStruct(Cat);

    return 0;
}

// Program untuk mencetak variabel struktur yang dibuat dari Person
void printPersonStruct(Person structName) {
    cout << structName.name << endl;
    cout << structName.age << endl;
}

// Program untuk mencetak variabel struktur yang dibuat dari Animal
void printAnimalStruct(Animal structName) {
    cout << structName.name << endl;
    cout << structName.age << endl;
}