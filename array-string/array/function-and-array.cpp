#include <iostream>
using namespace std;

// function prototype printArray
void printArray(int num[3]);

// function prototype printTwoDimensiArray
void printTwoDimensionArray(int val[][3]);

int main() {
    // inisialisasi numbers
    int numbers[3] = {5, 1, 8};

    // isisialisasi values
    int values[2][3] = {{14, 3, 7}, {11, 3, 2}};

    // memanggil printArray dan memasukan numbers ke argument/parameter nya
    // printArray(numbers);

    // memanggil printTwoDimensionArray dan memasukan values ke parameter nya
    printTwoDimensionArray(values);

    return 0;
}

// function untuk mengiterasi array
void printArray(int num[3]) {
    for (int i = 0; i < 3; i++)
    {
        cout << num[i] << ", ";
    }
    
}

// function untuk mengiterasi array multidimensi
void printTwoDimensionArray(int val[][3]) {
    for (int i = 0; i <= 1; i++)
    {
        for (int j = 0; j <= 2; j++)
        {
            cout << " " << val[i][j];
        }
        cout << endl;
        
    }
}