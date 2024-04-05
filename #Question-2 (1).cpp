#include <iostream>
#include <vector>

using namespace std;

void printDiagonal(const vector<vector<int>>& vals) {
    int n = vals.size();
    cout << "Given Matrix:" << endl;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << vals[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Diagonal elements: ";
    for (int i = 0; i < n; ++i) {
        cout << vals[i][i] << " ";
    }
    cout << endl;
}

int main() {
    vector<vector<int>> vals = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    printDiagonal(vals);

    return 0;
}
