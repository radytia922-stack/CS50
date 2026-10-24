# 💰 CS50x — Week 1: Cash

Solusi untuk problem set **Cash** dari [CS50's Introduction to Computer Science](https://cs50.harvard.edu/x/) (Harvard).

---

## 📌 Deskripsi Problem

Program ini menghitung **jumlah minimum koin** yang diperlukan untuk memberikan kembalian kepada pelanggan, menggunakan **greedy algorithm**.

Koin yang tersedia:
- Quarter (25¢)
- Dime (10¢)
- Nickel (5¢)
- Penny (1¢)

---

## 🚀 Cara Menjalankan

```bash
# Compile
make cash

# Jalankan
./cash
```

**Contoh output:**

```
Change owed: 41
4
```

```
Change owed: 99
9
```

---

## 🧠 Pendekatan

Greedy algorithm — selalu ambil koin terbesar yang bisa dikurangi dari sisa kembalian, lalu lanjut ke koin berikutnya.

Contoh untuk 41¢:
1. 1 quarter (25¢) → sisa 16¢
2. 1 dime (10¢) → sisa 6¢
3. 1 nickel (5¢) → sisa 1¢
4. 1 penny (1¢) → sisa 0¢

Total: **4 koin**

---

## 📁 Struktur File

```
cash/
└── cash.c
```

---

## ✅ Spesifikasi

- Program meminta input `int` dari user
- Jika input < 0, program meminta ulang (do-while loop)
- Output: jumlah minimum koin sebagai integer

---

## 🔗 Referensi

- [CS50x Problem Set 1 — Cash](https://cs50.harvard.edu/x/2026/psets/1/cash/)
- [CS50 Manual Pages](https://manual.cs50.io/)

---

*Submitted as part of CS50x 2026 — Harvard University*
