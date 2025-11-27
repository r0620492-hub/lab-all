#include <iostream>
using namespace std;

int main() {
    const int MAX = 100;
    char a[MAX];
    int k;
    cout << "Vvedite kol sim (do " << MAX << "): ";
    cin >> k;

    if (k <= 0 || k > MAX) {
        cout << "nedopustimiy razmer" << endl;
        return 1;
    }
    cout << "Vvedite " << k << " sim: ";
    for (int i = 0; i < k; i++) {
        cin >> a[i];
    }
    bool Sim = true;
    for (int i = 0; i < k / 2; i++) {
        if (a[i] != a[k - 1 - i]) {
             Sim = false;
            break;
        }
    }
    if (Sim) {
        cout << "sim" << endl;
    }
    else {
        cout << "ne sim" << endl;
    }

    return 0;
}
