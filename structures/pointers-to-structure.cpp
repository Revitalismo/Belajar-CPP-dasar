#include <iostream>
using namespace std;

// Membuat structure Person
struct Person {
    string name;
    int age;
};


int main() {
    // Membuat variabel structure Julian
    Person Julian;

    // Deklarasi pointer ke structure
    struct Person *Julianptr;

    // Mendapatkan alamat structure Julian
    Julianptr = &Julian;

    // Mencetak alamat Julian
    cout << Julianptr << "\n";
    
    // Inisialisasi member structure Julian 
    (*Julianptr).name = "Julian";
    Julianptr->age = 20;

    // Mencetak member structure Julian
    cout << (*Julianptr).name << "\n";
    cout << Julianptr->age << "\n";
    
    return 0;
}