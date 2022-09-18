# C++ string
##### Di tutorial ini, kamu akan belajar cara menangani string di C++. Kamu akan belajar mendeklarasikannya, menginisialisasikannya dan menggunakannya untuk berbagai operasi input/output.

string adalah kumpulan dari karakter. Ada dua tipe dari string yang umumnya digunakan di bahasa pemrograman C++:
- string itu adalah objek dari class string (The C++ standard C++ library string class)
- C-string (C-style string)
 
#### C-String
Di pemrograman C, kumpulan dari karakter disimpan dalam bentuk array. Ini juga didukung di pemrogramman C++. Karenanya ini di panggil C-string.
C-string adalah array bertipe ```char``` yang diakhiri dengan karakter null, yaitu \0 (nilai ASCII dari karakter null adalah 0)

#### Bagaimana caranya mendefinisikan sebuah C-string?
```
char str[] = "C++";
```
Pada kode diatas ```str``` adalah sebuah string yang menampung 4 karakter.
Meskipun, ```"C++"``` hanya 3 karakter, karakter null ditambahkan ke akhir dari string secara otomatis maka dari itu jadi 4 karakter.

---
#### Cara alternatif mendefinisikan sebuah string
```
char str[4] = {"C++"};
char str[4] = {"C", "+", "+", "\0"};
char str[] = {"C", "+", "+", "\0"};
```
seperti array, kita tidak harus menggunakan semua ruang yang dialokasikan untuk string, contoh :
```
char str[100] = {"C++"};
```

#### string Object
Di C++, kamu juga bisa membuat sebuah object string untuk menampung string.
Tidak seperti menggunakan array char, object tidak memiliki panjang tetap, dan bisa diperluas sesuai kebutuhanmu.
**Membuat variabel dengan object string**
```
string varName = "nilainya";
```

---
#### Program untuk menampilkan nama user menggunakan C-String
```
// printUserName untuk menjalankan program pencetak
// kata apa yang telah dimasukan user
void printUserName() {
    // Inisialisasi name
    char name[100];

    // Meminta user untuk memasukan nama
    // dan memasukannya ke variabel name
    cout << "Masukan nama kamu: ";
    cin >> name;

    // Menampilkan name
    cout << "Hai " << name;
}

    input: Masukan nama kamu: Achmad Julian
    output: Hai Achmad
```
[^note]: 
Perhatikan, bahwa hanya "Hai Achmad" yang ditampilkan dari pada "Hai Achmad Julian".
Ini karena operator extraction bekerja seperti ```scanf()``` di C dan kata setelah spasi tidak akan ditampilkan.

**Mengatasi teks setelah spasi tidak ditampilan**
function ```cin.get()``` bisa digunakan. Function ini mengambil dua argument.
- argument pertama adalah nama variabel string nya
- argument kedua adalah ukuran maksimal dari array nya
```
cout << "masukan nama kamu : ";
cin.get(name, 100);
// pada program diatas name adalah nama variabel string nya
// dan 100 adalah ukuran maksimal dari array nya
```

**Menggunakan object string**
```
void printUserFullname() {
    // Deklarasi object string
    string fullname;

    // Meminta input dari user dan menyimpan nya
    // di variabel name
    cout << "Masukan nama panjang : ";
    getline(cin, fullname);

    // Menampilkan fullname
    cout << "Hai " << fullname;
}
```
Di program ini, sebuah string fullname di deklarasikan. Kemudian fullname meminta input ke user.
Daripada menggunakan ```cin <<``` atau function ```cin.get()```, kamu bisa mendapatkan input dari user menggunakan ```getline()```.
Function ```getline()``` :
- Mengambil input pada parameter ke yaitu ```cin```
- dan ```fullname``` sebagai lokasi data string itu disimpan

---
#### Memasukan string ke parameter function
```
// inisialisasi myName
string myName = "Julian"

// function prototype printvariable
void printVariable(string text = "Hello");

int main() {
    // memanggil printVariable
    printVariable();
    
    // memanggil printVariable dan memasukan myName ke argument nya
    printVariable(myName);
}

// printVariable untuk menjalankan program pencetak variabel
void printVariable(string text) {
    cout << text << endl;
}
```