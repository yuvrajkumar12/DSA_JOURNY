#include <iostream>
using namespace std;

void print_pattern(int n) {
    // First part: Top section of the pattern
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == 0 || j == 0 || (n - i - 1) == j) {
                cout << "*";
            } else if ((i - j) == 0 && i > (n / 2)) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }

    // Second part: Lower triangle
    for (int i = 0; i < n - 2; i++) {
        for (int _ = 0; _ < n; _++) {
            cout << " ";
        }
        for (int j = 0; j < n - 2; j++) {
            if (i == j) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }

    // Third part: The bottom line with three stars
    for (int _ = 0; _ < n + (n - 2); _++) {
        cout << " ";
    }
    cout << "***" << endl;
}

int main() {
    int l;
    cout << "Enter the length: ";
    cin >> l;
    print_pattern(l);
    return 0;
}
