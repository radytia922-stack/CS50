# 🏰 CS50x — Week 1: Mario (Less)

Solusi untuk problem set **Mario (Less)** dari [CS50's Introduction to Computer Science](https://cs50.harvard.edu/x/) (Harvard).

---

## 📌 Deskripsi Problem

Program ini mencetak **piramida bata right-aligned** menggunakan karakter `#`, terinspirasi dari game Super Mario Bros. Tinggi piramida ditentukan oleh user.

Contoh output untuk height = 4:

```
   #
  ##
 ###
####
```

---

## 🚀 Cara Menjalankan

```bash
# Compile
make mario

# Jalankan
./mario
```

**Contoh:**

```
Height: 4
   #
  ##
 ###
####
```

```
Height: 8
       #
      ##
     ###
    ####
   #####
  ######
 #######
########
```

---

## 🧠 Cara Kerja

Tiap baris punya dua bagian: **spasi** di kiri dan **bata (#)** di kanan.

Untuk piramida setinggi `n`, baris ke-`i` (mulai dari 0) punya:
- Spasi: `n - i - 1`
- Bata: `i + 1`

Contoh untuk height = 3:

| Baris | Spasi | Bata | Output |
|-------|-------|------|--------|
| 0     | 2     | 1    | `  #`  |
| 1     | 1     | 2    | ` ##`  |
| 2     | 0     | 3    | `###`  |

Logika ini di-handle oleh fungsi `print_row(int spaces, int bricks)`.

---

## 📁 Struktur File

```
mario-less/
└── mario.c
```

---

## ✅ Spesifikasi

- Input harus `int` dan > 0, jika tidak program meminta ulang (do-while loop)
- Output: piramida right-aligned setinggi input user

---

## 🔗 Referensi

- [CS50x Problem Set 1 — Mario Less](https://cs50.harvard.edu/x/2026/psets/1/mario/less/)
- [CS50 Manual Pages](https://manual.cs50.io/)

---

*Submitted as part of CS50x 2026 — Harvard University*
