#include <iostream>
using namespace std;

int a;

// insisialisasikan array dan menyisakan 3 slot kosong
int myNumbers[5] = {2, 1, 2};


int main() {
  // menampilkan nilai index ke 0
  cout << myNumbers[0] << endl;

  // mengubah nilai di index ke 0
  myNumbers[0] = 10;

  // menampilkan nilai index ke 0
  cout << myNumbers[0] << endl;

  // menampilkan nilai index ke 5 
  cout << myNumbers[5] << endl; // undefined behavior

  cin >> a;

  return 0;
}