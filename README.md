# 🔤 CS50x — Week 2: Scrabble

Solusi untuk problem set **Scrabble** dari [CS50's Introduction to Computer Science](https://cs50.harvard.edu/x/) (Harvard).

---

## 📌 Deskripsi Problem

Program ini mensimulasikan mini-game **Scrabble** untuk 2 pemain. Setiap pemain memasukkan sebuah kata, lalu program menghitung skor masing-masing berdasarkan nilai poin tiap huruf, dan menentukan siapa yang menang.

---

## 🎯 Nilai Poin Tiap Huruf

| Huruf | Poin |
|-------|------|
| A, E, I, O, U, L, N, S, T, R | 1 |
| D, G | 2 |
| B, C, M, P | 3 |
| F, H, V, W, Y | 4 |
| K | 5 |
| J, X | 8 |
| Q, Z | 10 |

Huruf besar dan kecil dihitung sama. Karakter non-huruf (angka, tanda baca) bernilai 0.

---

## 🚀 Cara Menjalankan

```bash
# Compile
make scrabble

# Jalankan
./scrabble
```

**Contoh output:**

```
Player 1: COMPUTER
Player 2: science
Player 1 wins!
```

```
Player 1: red
Player 2: wheelbarrow
Player 2 wins!
```

```
Player 1: Question?
Player 2: Question!
Tie!
```

---

## 🧠 Cara Kerja

Program pakai dua teknik utama:

**1. Array POINTS sebagai lookup table**

```c
int POINTS[] = {1,3,3,2,1,4,2,4,1,8,5,1,3,1,1,3,10,1,1,1,1,4,4,8,4,10};
```

Index 0 = nilai 'A', index 1 = nilai 'B', dst. Jadi untuk cari nilai huruf apapun, tinggal kurangi dengan nilai ASCII-nya:

- Huruf besar: `POINTS[word[i] - 'A']`
- Huruf kecil: `POINTS[word[i] - 'a']`

**2. Fungsi `compute_score`**

Loop tiap karakter dalam kata, cek apakah huruf besar atau kecil pakai `isupper()` / `islower()`, lalu akumulasi skornya.

---

## 📁 Struktur File

```
scrabble/
└── scrabble.c
```

---

## ✅ Spesifikasi

- Input: dua kata bebas (huruf besar/kecil/campuran semua valid)
- Karakter non-huruf diabaikan (skor 0)
- Output: `Player 1 wins!`, `Player 2 wins!`, atau `Tie!`

---

## 🔗 Referensi

- [CS50x Problem Set 2 — Scrabble](https://cs50.harvard.edu/x/2026/psets/2/scrabble/)
- [CS50 Manual Pages](https://manual.cs50.io/)

---

*Submitted as part of CS50x 2026 — Harvard University*
