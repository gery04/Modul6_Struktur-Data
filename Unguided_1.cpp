#include <iostream>
#include <stack>
#include <string>

using namespace std;

// Menghapus spasi dan karakter non-alfabet dari string
string cleanString(const string& str) {
    string cleanedStr;
    for (char c : str) {
        if (isalpha(c)) {
            cleanedStr += tolower(c);
        }
    }
    return cleanedStr;
}

// Memeriksa apakah sebuah kalimat adalah palindrom
bool isPalindrome(const string& str) {
    stack<char> charStack;
    string cleanedStr = cleanString(str);

    // Memasukkan setengah pertama dari kalimat ke dalam stack
    int length = cleanedStr.length();
    for (int i = 0; i < length / 2; ++i) {
        charStack.push(cleanedStr[i]);
    }

    // Membandingkan setengah kedua dari kalimat dengan stack
    int i = (length + 1) / 2;
    while (i < length) {
        if (cleanedStr[i] != charStack.top()) {
            return false;
        }
        charStack.pop();
        ++i;
    }

    return true;
}

int main() {
    string kalimat;
    cout << "Masukkan kalimat: ";
    getline(cin, kalimat);

    if (isPalindrome(kalimat)) {
        cout << "Kalimat tersebut adalah palindrom." << endl;
    } else {
        cout << "Kalimat tersebut bukan palindrom." << endl;
    }

    return 0;
}