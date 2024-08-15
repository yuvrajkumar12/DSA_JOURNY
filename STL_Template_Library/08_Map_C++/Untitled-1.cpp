#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

int main() {
    int N, Q;
    cin >> N >> Q;
    string S;
    cin >> S;

    while (Q--) {
        int L, R;
        cin >> L >> R;
        L--; // Convert to 0-based index
        R--;

        unordered_map<char, int> freq;
        // Count the frequency of each character in the substring S[L..R]
        for (int i = L; i <= R; i++) {
            freq[S[i]]++;
        }

        // Find the maximum frequency
        int maxFreq = 0;
        for (auto& entry : freq) {
            maxFreq = max(maxFreq, entry.second);
        }

        // Calculate the minimum deletions required
        int deletions = 0;
        for (auto& entry : freq) {
            deletions += entry.second - maxFreq;
        }

        cout << deletions << endl;
    }

    return 0;
}
