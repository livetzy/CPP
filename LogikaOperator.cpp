#include <iomanip>
#include <iostream>
using namespace std;

int main() {
    bool a[] = {true, true, false, false};
    bool b[] = {true, false, true, false};
    cout << boolalpha;

    cout << "TABEL KEBENARAN OPERATOR LOGIKA\n";
    cout << setfill('-') << setw(91) << "" << setfill(' ') << '\n';
    cout << left
         << "| " << setw(10) << "A"
         << "| " << setw(10) << "B"
         << "| " << setw(10) << "A AND B"
         << "| " << setw(10) << "A OR B"
         << "| " << setw(10) << "NOT A"
         << "| " << setw(10) << "NOT B"
         << "| " << setw(10) << "A == B"
         << "| " << setw(10) << "A != B" << "|\n";
    cout << setfill('-') << setw(91) << "" << setfill(' ') << '\n';

    for (int i = 0; i < 4; ++i) {
        cout << "| " << setw(10) << a[i]
             << "| " << setw(10) << b[i]
             << "| " << setw(10) << (a[i] && b[i])
             << "| " << setw(10) << (a[i] || b[i])
             << "| " << setw(10) << !a[i]
             << "| " << setw(10) << !b[i]
             << "| " << setw(10) << (a[i] == b[i])
             << "| " << setw(10) << (a[i] != b[i]) << "|\n";
    }

    cout << setfill('-') << setw(91) << "" << setfill(' ') << '\n';
}