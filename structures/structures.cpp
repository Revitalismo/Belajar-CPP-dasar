#include <iostream>
using namespace std;

// Membuat struktur person
struct Person
{
    string name;
    string city;
    float salary;
};

// function prototype structures
void structures();

// function prototype structureForm
void structureForm(string name, string city, float salary);

int main() {
    // Memanggil structures
    structures();

    // Memanggil structureForm
    structureForm("Devania", "Tangerang", 6.000000);
    structureForm("Mirai", "Jakarta", 6.000000);

    return 0;
}

// Mendefinisikan function structures
void structures() {
    // Membuat variabel struktur Julian
    Person Julian;

    // Menetapkan nilai masing-masing membernya
    Julian.name = "Julian";
    Julian.city = "Jakarta";
    Julian.salary = 7.000000;

    // Membuat variabel struktur Clara
    Person Clara;

    // Menetapkan nilai masing-masing membernya
    Clara.name = "Clara";
    Clara.city = "Bandung";
    Clara.salary = 5.000000;

    // Membuat variabel struktur Julian
    Person Mirai;

    // Menetapkan nilai masing-masing membernya
    Mirai.name = "Mirai";
    Mirai.city = "Kyoto";
    Mirai.salary = 7.000000;
}

// Program sederhana memasukan parameter sebagai value member
void structureForm(string name, string city, float salary) {
    Person wife;

    wife.name = name;
    wife.city = city;
    wife.salary = salary;

    cout << wife.name << endl;
    cout << wife.city << endl;
    cout << wife.salary << endl;
}