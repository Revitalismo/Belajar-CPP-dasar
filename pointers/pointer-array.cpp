#include <iostream>
using namespace std;

// Deklarasi function prototype arrayPointerInteration
void arrayPointerIteration();

int main() {
    // Deklarasi pointer ptr
    int * ptr;

    // Inisialisasi arr
    int arr[5] = {2, 1, 9, 8, 1};
    
    // Inisialisasi pointer ptr
    ptr = arr;

    // Mengakses element arr[0] dan arr[2]
    cout << *(ptr) << " " << *(ptr + 2) << endl;
    
    // Mengakses alamat arr[0] dan arr[2]
    cout << ptr << " " << ptr + 2 << endl;

    // Memanggil function arrayPointerIteration
    arrayPointerIteration();

    return 0;
}

// program iterasi element array
void arrayPointerIteration() {
    // Inisialisasi numbers
    int numbers[3] = {10, 9, 14};

    // Insialisasi pointer numPtr
    int * numPtr = numbers;

    // iterasi numbers untuk mendapatkan element dan alamatnya
    for (int i = 0; i <= 2; i++)
    {
        cout << *(numPtr + i) << " : " << numPtr + i << " ";
    }
    
}