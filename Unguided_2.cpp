#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main() {
  string kalimat;
  stack<char> s;

  cout << "Masukkan Kata: ";
  getline(cin, kalimat);

  // Push characters of the sentence into the stack
  for (char c : kalimat) {
    s.push(c);
  }

  // Pop characters from the stack and print them
  cout << "Kalimat setelah dibalik: ";
  while (!s.empty()) {
    cout << s.top();
    s.pop();
  }

  cout << endl;

  return 0;
}
