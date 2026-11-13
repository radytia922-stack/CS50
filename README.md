# Caesar Cipher

A command-line encryption tool built in C for CS50x Problem Set 2. It implements the classic Caesar cipher — shifting every letter in a message by a fixed number of positions.

---

## What It Does

You give it a key (a number) and a message. It shifts every letter by that many positions in the alphabet and prints the encrypted result. Punctuation, spaces, and numbers stay exactly as they are.
plaintext: Hello, World!
ciphertext: Khoor, Zruog!

---

## How It Works

**1. Command-line validation**  
The program requires exactly one argument — the key. If you run it with no arguments or too many, it exits immediately with a usage hint.

**2. Digit check**  
It walks through every character of your key using `isdigit()`. If any character isn't a number (say you accidentally type `./caesar abc`), it rejects it.

**3. Key conversion**  
Once validated, `atoi()` converts the key string to an integer.

**4. Encryption loop**  
For each character in your plaintext:
- If it's a letter, it shifts it by the key using this formula:
(plaintext[i] - ‘A’ + key) % 26 + ‘A’ // uppercase
(plaintext[i] - ‘a’ + key) % 26 + ‘a’ // lowercase


  The `% 26` wraps the shift cleanly — so shifting `Z` by 1 gives `A`, not some garbage character.
- If it's anything else (space, comma, digit), it prints it unchanged.

---

## Usage

### Compile

```bash
make caesar
```

Or manually with `clang`:

```bash
clang -o caesar caesar.c -lcs50
```

### Run

```bash
./caesar KEY
```

Replace `KEY` with any positive integer.

### Examples

```bash
$ ./caesar 1
plaintext:  abc
ciphertext: bcd
```

```bash
$ ./caesar 13
plaintext:  Hello, World!
ciphertext: Uryyb, Jbeyq!
```

```bash
$ ./caesar 0
plaintext:  No change.
ciphertext: No change.
```

### Error cases

```bash
$ ./caesar
Usage: ./caesar key

$ ./caesar abc
Usage: ./caesar key

$ ./caesar 1 2
Usage: ./caesar key
```

---

## Requirements

- [CS50 Library](https://cs50.readthedocs.io/libraries/cs50/c/) (`cs50.h`)
- A C compiler (`clang` or `gcc`)
- Part of [CS50x](https://cs50.harvard.edu/x/) — Problem Set 2

---

## Author

[radytia922-stack](https://github.com/radytia922-stack)
