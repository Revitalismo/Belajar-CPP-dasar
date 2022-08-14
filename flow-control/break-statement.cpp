#include <iostream>
using namespace std;

/*Di C++, statement break digunakan untuk mengakhiri perulangan*/

int count = 1;

int main() {

    while (true) {
        cout << "count - " << count << endl;
    count++;

        // jika count lebih dari sama dengan 3. maka perulangan berakhir
        if (count >= 3){
            break;
        }
    
    }

    return 0;
}