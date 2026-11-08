# 📚 Readability — CS50x Problem Set

> A program that figures out how "hard" a piece of text is to read — just like the reading level labels on books.

---

## 🤔 What Does This Program Do?

You paste in a paragraph of text, and the program tells you what **school grade level** you need to understand it.

**Example:**

```
Text: One fish. Two fish. Red fish. Blue fish.
Before Grade 1
```

```
Text: There are more things in Heaven and Earth, Horatio, than are dreamt of in your philosophy.
Grade 9
```

Simple sentences → low grade. Long words, complex sentences → high grade.

---

## 🧠 The Idea Behind It (For Non-Programmers)

Humans can judge reading difficulty, but so can a formula — the **Coleman-Liau Index**.

It works on two observations:
- **Longer words** = harder text
- **Longer sentences** = harder text

So the formula counts:
- **L** — average number of letters per 100 words
- **S** — average number of sentences per 100 words

Then plugs them in:

```
index = 0.0588 × L − 0.296 × S − 15.8
```

The result is rounded to the nearest whole number → that's the grade level.

**Output rules:**
- Grade 1–15 → `Grade X`
- Grade 16 or higher → `Grade 16+`
- Below Grade 1 → `Before Grade 1`

---

## 🛠️ How the Code Works (For Programmers)

The program is split into four clean functions:

### `count_letters(text)`
Loops through every character. If `isalpha()` returns true, it counts it. Ignores spaces, punctuation, and digits.

### `count_words(text)`
Counts spaces, then adds 1. Works because words = spaces + 1 (assuming no leading/trailing spaces and no double spaces — per the problem spec).

### `count_sentences(text)`
Counts `.`, `!`, and `?` characters. Each one marks the end of a sentence.

### `main()`
1. Gets text from user via `get_string()`
2. Calls the three count functions
3. Computes `L` and `S` as `float` to avoid integer truncation
4. Applies the Coleman-Liau formula
5. Uses `round()` from `math.h`
6. Prints the grade with the correct boundary check

---

## 📂 File Structure

```
readability/
└── readability.c   ← the only file you need
```

---

## ▶️ How to Run

Requires the [CS50 development environment](https://cs50.dev).

```bash
cd readability
make readability
./readability
```

Then type or paste your text and hit Enter.

---

## ✅ Test Cases

| Input (excerpt) | Expected Output |
|---|---|
| *"One fish. Two fish..."* | Before Grade 1 |
| *"Would you like them here or there?..."* | Grade 2 |
| *"Harry Potter was a highly unusual boy..."* | Grade 5 |
| *"In my younger and more vulnerable years..."* | Grade 7 |
| *"A large class of computational problems..."* | Grade 16+ |

---

## 📌 Key Concepts Used

| Concept | Where |
|---|---|
| `string` / `strlen()` | iterating through text |
| `isalpha()`, `isspace()` | character classification from `<ctype.h>` |
| `float` casting | avoiding integer division truncation |
| `round()` | rounding the index from `<math.h>` |
| Function decomposition | separating counting logic into helper functions |

---

## 🎓 Context

This is **Problem Set 2** from [CS50x](https://cs50.harvard.edu/x/) — Harvard's Introduction to Computer Science course. The problem teaches string traversal, function design, and applying a real-world formula in code.

---

*Built as part of CS50x 2026.*
