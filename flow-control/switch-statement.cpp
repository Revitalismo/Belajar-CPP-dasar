#include <iostream>
using namespace std;

/*statement switch memungkinkan kita untuk mengeksekusi kode
  program dengan banyak alternatif kondisi*/

int nilaiKalkulus;

int main() {

    cout << "Masukan nilai kalkulus = ";
    cin >> nilaiKalkulus;

    switch (nilaiKalkulus) {
    case 1:
        cout << "Kagak lulus" << endl;
        break;
    case 2:
        cout << "Ujian ulang" << endl;
        break;
    case 3:
        cout << "Remedial" << endl;
        break;
    case 4:
        cout << "Lulus tapi KKM" << endl;
        break;
    case 5:
        cout << "Lulus" << endl;
        break;

    
    default:
        cout << "Nilai yang dimasukan tidak valid, masukan nilai 1-5" << endl;
        break;
    }
}