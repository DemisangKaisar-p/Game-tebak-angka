# 🎯 Game Tebak Angka (C++)

Game **Tebak Angka** adalah program sederhana berbasis **C++** yang menghasilkan angka acak dari 1 sampai 100. Pemain diminta menebak angka tersebut hingga benar, dan program akan memberi petunjuk apakah tebakan terlalu besar atau terlalu kecil.

---

## 📌 Fitur

* Menghasilkan angka acak (1–100)
* Memberi petunjuk: terlalu besar / terlalu kecil
* Menghitung jumlah percobaan
* Pesan spesial jika berhasil menebak di percobaan pertama
* Loop berjalan sampai jawaban benar

---

## 🛠️ Teknologi yang Digunakan

* Bahasa: **C++**
* Library:

  * `<iostream>` untuk input/output
  * `<cstdlib>` untuk fungsi `rand()` dan `srand()`
  * `<ctime>` untuk seed waktu (`time(NULL)`)

---

## ▶️ Cara Menjalankan Program

### 1️⃣ Compile

Gunakan compiler seperti **g++**:

```bash
g++ tebak_angka.cpp -o tebak_angka
```

### 2️⃣ Jalankan

```bash
./tebak_angka
```

---

## 🎮 Cara Bermain

1. Program akan memilih angka rahasia antara **1–100**
2. Masukkan tebakan angka
3. Program akan memberi petunjuk:

   * 📈 Terlalu tinggi
   * 📉 Terlalu rendah
4. Ulangi sampai tebakan benar
5. Program menampilkan jumlah percobaan

---

## 🧠 Contoh Output

```
********** Tebak Nomor **********
Tebak angka dari 1-100! 50
Terlalu tinggi nomornya bro!
Tebak angka dari 1-100! 25
Terlalu kecil nomornya bro!
Tebak angka dari 1-100! 37
BENAR, HORE!!
Jumlah percobaan: 3
*******************************
```

---

## 📚 Catatan Pembelajaran

Program ini cocok untuk belajar:

* Variabel dan tipe data
* Percabangan (`if-else`)
* Perulangan (`do-while`)
* Angka acak (`rand()`)
* Scope variabel

---

##

---

## 👨‍💻 Author

Dibuat untuk latihan dasar **C++ Programming** 🚀

Silakan dikembangkan lebih lanjut sesuai kreativitasmu!
