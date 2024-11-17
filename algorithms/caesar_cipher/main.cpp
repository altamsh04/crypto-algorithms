#include <iostream>
#include <string>
using namespace std;

/**
 * Encrypt the given text using Caesar cipher with the specified key.
 * 
 * @param text The input string to be encrypted.
 * @param key The encryption key (number of positions to shift).
 * @return The encrypted text.
 */
string cipherText(string text, int key) {
    string res = "";
    for (int i = 0; i < text.length(); ++i) {
        if (isupper(text[i])) {
            // Encrypt uppercase letters
            res += static_cast<char>((text[i] - 'A' + key) % 26 + 'A');
        } else if (islower(text[i])) {
            // Encrypt lowercase letters
            res += static_cast<char>((text[i] - 'a' + key) % 26 + 'a');
        } else {
            // Non-alphabetic characters remain unchanged
            res += text[i];
        }
    }
    return res;
}

/**
 * Decrypt the given text using Caesar cipher with the specified key.
 * 
 * @param text The input string to be decrypted.
 * @param key The decryption key (number of positions to shift).
 * @return The decrypted text.
 */
string plainText(string text, int key) {
    string res = "";
    for (int i = 0; i < text.length(); ++i) {
        if (isupper(text[i])) {
            // Decrypt uppercase letters
            res += static_cast<char>((text[i] - 'A' - key + 26) % 26 + 'A');
        } else if (islower(text[i])) {
            // Decrypt lowercase letters
            res += static_cast<char>((text[i] - 'a' - key + 26) % 26 + 'a');
        } else {
            // Non-alphabetic characters remain unchanged
            res += text[i];
        }
    }
    return res;
}

int main() {
    // Example usage of the cipherText and plainText functions
    string cipher = cipherText("HELLO", 3);
    cout << "Encrypted: " << cipher << endl; // Output: KHOOR

    string plain = plainText(cipher, 3);
    cout << "Decrypted: " << plain << endl; // Output: HELLO

    return 0;
}
