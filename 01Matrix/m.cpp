#include <iostream>
#include <vector>

using namespace std;

bool checkRows(const vector<vector<int>>& mat) {
    int rows = mat.size();
    if (rows == 0) {
        return true; // Empty matrix
    }

    int cols = mat[0].size(); 

    for (int i = 0; i < rows / 2; ++i) {
        int sum1 = 0, sum2 = 0;
        for (int j = 0; j < cols; ++j) {
            sum1 += mat[i][j];
            sum2 += mat[rows - 1 - i][j];
        }
        if (sum1 != sum2) {
            return false; 
        }
    }
    return true;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;

        vector<vector<int>> mat(n, vector<int>(m));

        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                cin >> mat[i][j];
            }
        }

        cout << (checkRows(mat) ? "YES" : "NO") << endl;
    }

    return 0;
}