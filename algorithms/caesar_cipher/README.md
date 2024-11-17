# Caesar Cipher Algorithm

This project implements a simple Caesar cipher algorithm in C++. The Caesar cipher is a type of substitution cipher in which each letter in the plaintext is shifted a certain number of places down or up the alphabet.

## How It Works

The Caesar cipher works by shifting each letter in the plaintext by a fixed number of positions (key) down the alphabet. For example, with a shift of 3, 'A' would be replaced by 'D', 'B' would become 'E', and so on. The decryption reverses this process by shifting in the opposite direction. This algorithm is one of the oldest and simplest forms of encryption and is named after Julius Caesar, who reportedly used it to communicate with his officials.

<img src="https://github.com/user-attachments/assets/dd34be63-f788-48b4-b770-d443ff5a0758" width="500">

## Functions

### `string cipherText(string text, int key)`

Encrypts the given text using the specified key.

- `text`: The input string to be encrypted.
- `key`: The encryption key (number of positions to shift).

### `string plainText(string text, int key)`

Decrypts the given text using the specified key.

- `text`: The input string to be decrypted.
- `key`: The decryption key (number of positions to shift).

Absolutely! Here’s the pseudocode for both the encryption and decryption processes of the Caesar cipher:

### Encryption Pseudocode

```plaintext
function cipherText(text, key):
    result = empty string
    for each character in text:
        if character is uppercase:
            shift character by key positions within 'A' to 'Z'
            append shifted character to result
        else if character is lowercase:
            shift character by key positions within 'a' to 'z'
            append shifted character to result
        else:
            append character to result as it is
    return result
```

### Decryption Pseudocode

```plaintext
function plainText(text, key):
    result = empty string
    for each character in text:
        if character is uppercase:
            shift character by -key positions within 'A' to 'Z'
            append shifted character to result
        else if character is lowercase:
            shift character by -key positions within 'a' to 'z'
            append shifted character to result
        else:
            append character to result as it is
    return result
```

### Example Usage Pseudocode

```plaintext
main:
    encryptedText = cipherText("HELLO", 3)
    print "Encrypted: " + encryptedText  // Output: KHOOR

    decryptedText = plainText(encryptedText, 3)
    print "Decrypted: " + decryptedText  // Output: HELLO
```

## Installation

To compile and run the program, use a C++ compiler such as `g++`:

### Prerequisites
- `g++ (GCC) 11.2.0`

```sh
g++ -o caesar_cipher main.cpp
./caesar_cipher
```

## License

This project is licensed under the MIT License.