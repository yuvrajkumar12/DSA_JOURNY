#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 1; i <= n; ++i) {
        for (int j = 0; j < i; ++j) {
            if (i % 2 == 0) {
                cout << j + 1;
            } else {
                cout << "*";
            }
        }
        cout << endl;
    }

    return 0;
}