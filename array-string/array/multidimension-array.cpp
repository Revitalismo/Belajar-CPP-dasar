#include <iostream>
using namespace std;

int a;

// insialisasi array dua dimensi
int twoDimension[2][4] = {{2, 2, 1, 0}, {12, 3, 10, 7}};

// insialisasi array tiga dimensi
int threeDimension[2][2][3] = {
    {
        {7, 8, 3}, {10, 12, 20}
    }, 
    {
        {11, 15, 3}, {0, 2, 17}
    }
};

int main() {
    // mengakses array dua dimensi
    cout << "2D array: " << twoDimension[0][0] << ", ";
    cout << twoDimension[0][2] << endl;

    // mengakses array tiga dimensi
    cout << "3D array: " << threeDimension[0][0][1] << ", ";
    cout << threeDimension[1][0][2];

    cin >> a;

    return 0;
}