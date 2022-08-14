#include <iostream>
using namespace std;

/*Di pemrograman komputer, statement continue digunakan untuk melewati
  iterasi yang sedang berlangsung dari perulangan, dan mengendalikan
  program ke iterasi selanjutnya*/

int main() {

    for (int count = 1; count <= 5; count++) {
        
        // jika count = 3, maka perulangan ke 3 di lewati, dan lanjut
        // ke perulangan selanjutnya
        if (count == 3) {
            continue;
        }

        cout << "count " << count << endl;
    }

    return 0;

}