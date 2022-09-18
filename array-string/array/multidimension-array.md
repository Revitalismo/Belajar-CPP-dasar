# C++ Multi dimensional array
##### Di tutorial ini, kita akan belajar tentang array multidimensi di C++. Lebih spesifiknya, bagaimana mendeklarasikannya, mengaksesnya, dan menggunakannya secara efektif di program kita.

Di C++ kita bisa membuat sebuah array di dalam array, yang dikenal sebagai array multidimensi. Sebagai contoh :
```
int x[2][3];
```
Disini, x adalah array dua dimensi, itu bisa menampung maksimal 6 element.

Agar lebih mudah dipahami, kita bayangkan bahwa array mempunyai 2 tempat kosong, yang masih-masing tempatnya diisi dengan array yang memiliki kapasitas 3 element

![](./img/multi%20dimensi%20array.svg)

array x bisa menampung maksimal 6 element.
Kita bisa mengetahui total maksimal element di dalam array dengan cara mengalikan dimensinya :
```
2 x 3 = 6
```

##### Inisialisasi array multidimensi
**1. Insialisasi array dua dimensi**
```
int twoDimensional[2][4] = {{2, 2, 1, 0}, {12, 3, 10, 7}};
```
![](./img/2%20dimensi%20array.svg)

array ini mempunyai 2 tempat kosong, yang masing-masing tempatnya diisi dengan array yang memiliki kapasitas 4 element. 

**2. Inisialisasi array tiga dimensi**
```
int threeDimensional[2][2][3] = {
    {
        {7, 8, 3}, {10, 12, 20}
    }, 
    {
        {11, 15, 3}, {0, 2, 17}
    }
};
```
![](./img/3%20dimensi%20array.svg)

array ini mempunyai 2 tempat kosong, yang masing-masing tempatnya diisi dengan 2 array yang mempunyai tempat kosong, kemudian 2 array tersebut diisi dengan array yang memiliki kapasitas 3 element.

##### Mengakses array dua dimensi
```
int twoDimensional[2][4] = {{2, 2, 1, 0}, {12, 3, 10, 7}};

twoDimensional[0][0]
twoDimensional[0][2]
```
- [0][0] artinya kita mengakses index pertama di array 1, dan index pertama di array 1
- [0][1] artinya kita mengakses index kedua di array 1, dan index kedua di array 1