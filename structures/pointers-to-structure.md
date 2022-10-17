# Pointers to Structure 
##### Pada tutorial ini, kamu akan menemukan penjelasan yang relevan yang akan membantu mu untuk bekerja dengan pointer untuk mengakses data di dalam structure.

Sebuah variabel `pointer` bisa dibuat tidak hanya untuk tipe native seperti (`int`, `float`, `double` dll.) tapi juga bisa dibuat untuk user defined types seperti `structure`.

Jika kamu tidak tau apa itu pointer, maka kunjungi `https://www.programiz.com/cpp-programming/pointers`.

Seperti yang kita tau sebuah pointer menyimpan alamat dari sebuah variabel, sebuah pointer ke sebuah variabel structure adalah pointer yang menyimpan alamat dari variabel structure.
```
// Syntax untuk mendeklarasikan sebuah pointer ke variabel structure
struct structure_name *pointer_variable;
```

Disini adalah bagaimana kita membuat pointer untuk structure :
```
// Membuat structure Person
struct Person {
    string name;
    int age;
}; 

// Membuat variabel structure Julian
Person Julian;

// Deklarasi pointer
struct Person *Julianptr;
```

Untuk mendapat alamat dari variabel structure, kita bisa menggunakan operator addressOf (&).
```
Person *Julianptr = &Julian;
```

Untuk mengakses memberi variable menggunakan pointer, kita bisa menggunakan operator (->). Kita bisa mengakses variable menggunakan namapointer yang diikuti dengan operator arrow dan kemudian nama dari member variabel nya.
```
Julianptr->name;
Julianptr->age;
```

**Catatan** :
- Pointer `Julianptr` menunjuk ke variabel Julian di program ini, `(*Julianptr).name` dan `Julian.name` adalah kedua hal sama.
- Bagaimanapun juga, jika kita menggunakan pointer, ini lebih baik untuk mengakses struct member menggunakan operator `->`, sejak operator `.` mempunyai hak yang lebih tinggi dari pada operator `*`.

Referensi :
`https://www.techcrashcourse.com/2016/12/cpp-programming-pointer-to-structure.html`

`https://www.programiz.com/cpp-programming/structure-pointer`

