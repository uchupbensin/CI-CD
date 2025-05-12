// Mengubah nilai stack
s.push(100);  // Menambahkan angka 100 ke dalam stack
#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<int> s;
    s.push(10); s.push(20); s.push(30);
    cout << "Isi stack dari atas ke bawah:" << endl;
    while (!s.empty()) {
        cout << s.top() << endl;
        s.pop();
    }
    return 0;
}
