# Memasukan array ke dalam sebuah function di pemrogramman C++
#### Di tutorial ini, kita akan belajar bagaimana untuk memasukan satu dimensi array dan multi dimensi array sebagai sebuah function parameter di C++.
Di C++, kita bisa memasukan array sebagai sebuah argument ke dalam sebuah function. Dan, juga kita bisa mengembalikan array dari sebuah function.

##### Syntax untuk memasukan array sebagai argument function :
```
returnType functionName(dataType arrayName[arraySize) {
    // your code here
}
```
mari lihat contohnya :
```
void printArray(int numbers[3]) {
    // your code here
}
```
##### disini kita telah memasukan array satu dimensi ke dalam function printArray :
- int tipe data arraynya
- numbers nama arraynya
- 3 ukuran arraynya

```
void printArray(int num[3]);

int main() {
    // inisialisasi numbers
    int numbers[3] = {5, 1, 8};

    // memanggil printArray dan memasukan numbers ke argument/parameter nya
    printArray(numbers);

    return 0;
}

// function untuk mengiterasi array
void printArray(int num[3]) {
    for (int i = 0; i < 3; i++)
    {
        cout << num[i] << ", ";
    }
    
}

Output : 5, 1, 8,
```
##### Disini :
1. Ketika kita memanggil sebuah function dengan memasukan array sebagai argument nya, hanya nama array lah yang digunakan.
    ```printArray(numbers);```
    disini, argument ```numbers``` merepresentasikan alamat memory dari element pertama dari array numbers[3].

2. Bagaimanapun juga, perhatikan parameter dari function printArray.
    ```void printArray(int num[3);```
    Disini, kita menggunakan full deklarasi dari array function parameter, termasuk kurung kotak ```[]```.

3. Parameter function mengkonversi dari int ```num[3]``` ke int* num. Ini menunjuk ke alamat yang sama yang ditunjukan oleh array ```numbers```. Ini artinya ketika kita memanipulasi ```num[3]``` di body function, kita sebenarnya memanipulasi original array ```numbers```. 
C++ menangani memasukan sebuah array  ke dalam function dengan cara ini bisa menghemat memori dan waktu.

##### Memasukan array multi dimensi ke dalam sebuah function
Kita juga bisa memasukan array multi dimensi sebagai sebuah argument ke dalam function. Contoh :
```
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
```
Di program diatas, kita mendefinisikan sebuah function yang bernama printTwoDimensionArray(). Function mengambil sebuah array dua dimensi, ```int val[][3]``` sebagai argument nya dan mencetak element-element dari array.
Saat memanggil function, kita hanya bisa memasukan nama dari array dua dimensi sebagai arguments function ```printTwoDimensionArray(values);```.
> Itu tidak wajib untuk menspesifikasikan ukuran dimensi pertama element di array. Bagaimanapun juga ukuran dari element setelah dimensi pertama harus dispesifikasikan. Ini mengapa kita harus menggunakan ```int val[][3]``` 

Kita juga bisa memasukan array dengan lebih dari 2 dimensi sebagai arguments function.