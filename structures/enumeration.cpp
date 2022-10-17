#include <iostream>
using namespace std;

// Membuat enum season
enum season { spring, summer, autumn, winter };

int main() {
    // Delarasi mySeason dari tipe enum season
    season mySeason;
    
    // Mengakses value enum mySeason
    cout << "my season : " << mySeason << "\n";

    // Mengubah default value enum mySeason
    mySeason = autumn;

    // Mengakses value enum mySeason
    cout << "my season : " << mySeason << "\n";

    mySeason = summer; // 1
    cout << "my season : " << mySeason << " The size is : " << sizeof(mySeason);
    
    return 0;
}