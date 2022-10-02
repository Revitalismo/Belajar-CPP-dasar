#include <iostream>
using namespace std;

int main() {
    // inisialisasi value
    int value = 6;

    // deklarasi addressOfValue
    int * adressOfValue;

    // inisilisasi addressOfValue
    adressOfValue = &value;

    // inisialisasi result
    int result = * adressOfValue;

    // mencetak result dan alamat value
    cout << result << " : " << adressOfValue << "\n";

    return 0;
}
