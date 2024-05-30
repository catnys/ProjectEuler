# Project Euler - Problem 59

## `XOR Decryption`

### Problem Statement

Each character on a computer is assigned a unique code and the preferred standard is ASCII (American Standard Code for Information Interchange). For example, uppercase A = 65, asterisk (*) = 42, and lowercase k = 107.

A modern encryption method is to take a text file, convert the bytes to ASCII, then XOR each byte with a given value, taken from a secret key. The advantage with the XOR function is that using the same encryption key on the cipher text, restores the plain text; for example, 65 XOR 42 = 107, then 107 XOR 42 = 65.

For unbreakable encryption, the key is the same length as the plain text message, and the key is made up of random bytes. The user would keep the encrypted message and the encryption key in different locations, and without both "halves", it is impossible to decrypt the message.

Unfortunately, this method is impractical for most users, so the modified method is to use a password as a key. If the password is shorter than the message, which is likely, the key is repeated cyclically throughout the message. The balance for this method is using a sufficiently long password key for security, but short enough to be memorable.

Your task has been made easy, as the encryption key consists of three lower case characters. Using [p059_cipher.txt](https://projecteuler.net/project/resources/p059_cipher.txt), a file containing the encrypted ASCII codes, and the knowledge that the plain text must contain common English words, decrypt the message and find the sum of the ASCII values in the original text.

### Instructions

1. Read the encrypted ASCII codes from the provided file.
2. Try all possible combinations of three lower case characters as the key.
3. Decrypt the message using each key and check if the resulting text contains common English words.
4. Identify the correct key that produces meaningful English text.
5. Calculate the sum of the ASCII values of the decrypted text.
6. Output the result.

### Example

For a sample encrypted text and key:
- Encrypted ASCII: [79, 59, 12, 2, 79, 35, 12, 5, 79, 50, 12, 7]
- Key: 'abc'
- Decrypted text: 'The quick brown fox'

### Discussion

This problem involves reading and interpreting an encrypted message, trying multiple decryption keys, and identifying meaningful text. Efficient handling of ASCII operations, XOR decryption, and text validation are key to solving this problem.

### Notes

For more information and to solve the problem, visit [Project Euler - Problem 59](https://projecteuler.net/problem=59).

