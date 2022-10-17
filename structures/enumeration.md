# C++ Enumeration
##### Di artikel ini, kamu akan belajar bekerja dengan enumeration (enum). Juga, kita akan pelajari dimana enum umumnya digunakan di pemrograman C++.

Sebuah enumeration adalah tipe data yang didefinisikan oleh user yang mengandung konstanta integral. Untuk mendefinisikan sebuah enumeration, kata kunci **enum** digunakan.
```
enum season { spring, summer, autumn, winter };
```
Disini, nama dari enumeration adalah `season`.
Dan, `spring`, `summer` dan `winter` adalah value-value dari tipe `season`.

Secara default, `spring` adalah 0, `summer` adalah 1 dan begitu seterusnya. Kita juga bisa mengubah default value dari sebuah element enum pada saat dideklarasai (jika dibutuhkan).
```
enum season = {
    spring = 0,
    summer = 1,
    autumn = 2,
    winter = 3
};
```

---
#### Enumerated Type Declaration
Ketika kita membuat sebuah enumerated type, hanya blueprint untuk variabel yang dibuat. Disini bagaimana kamu bisa membuat variabel dari tipe enum.
```
enum boolean {false, true};

// inside function
enum boolean check;
```
Pada kode diatas, sebuah variabel `check` **dari tipe enum boolean** dibuat.

Dan ada cara lain mendeklarasikan variabel `check` menggunakan syntax yang berbeda :
```
enum boolean
{
    false, true
} check;
```

---

#### Example 1: enumeration type
```
    // Membuat enum season
    enum season { spring, summer, autumn, winter };
    
    // Delarasi mySeason dari tipe enum season
    season mySeason;
    
    // Mengakses value enum mySeason
    cout << "my season : " << mySeason << "\n";
    cout << "my season : " << mySeason + 2 << "\n";
```

#### Example 2 : Changing Default Value of Enums
```
    // Mengubah default value enum mySeason
    mySeason = autumn;

    // Mengakses value enum mySeason
    cout << "my season : " << mySeason << "\n";
```

---
### Mengapa enum digunakan di pemrogramman C++?
Sebuah variabel enum hanya mengambil satu nilai dari banyak kemungkinan nilai. Ini penjelasan untuk mendemonstrasikan nya.
```
mySeason = summer; // 1
mySeason = winter; // 3

cout << mySeason << "The size is : " << sizeof(mySeason);
// Output : 4
```
Jadi kita bisa memilih nilai variabel mySeason entah summer atau winter. Output nya 4 ini karena ukuran dari integer 4 byte.
Ini membuat enum menjadi pilihan yang baik untuk bekerja dengan flag.
Kita dapat menyelesaikan tugas yang sama dengan structure C++. Namun, bekerja dengan enum memberi kita efisiensi berssama dengan fleksibilitas.

---

**Bagaimana cara menggunakan enum untuk flag?**
Mari lihat penjelasan di bawah.
```
enum designFlags {
	ITALICS = 1,
	BOLD = 2,
	UNDERLINE = 4
} button;
```
Misal kita mendesain sebuah tombol untuk aplikasi windows. Kita bisa meng-set flag `ITALIC`, `BOLD` dan `UNDERLINE` untuk bekerja dengan teks.








