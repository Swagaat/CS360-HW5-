#include <iostream>
#include <vector>

using namespace std;

void rvrs(vector<int>& vct) {
    int n = vct.size();
    for (int i = 0; i < n / 2; ++i) {
        int temp = vct[i];
        vct[i] = vct[n - i - 1];
        vct[n - i - 1] = temp;
    }
}

int main() {
    vector<int> numbers = {1, 2, 3, 4, 5};

    cout << "Original vector: ";
    for (int num : numbers) {
        cout << num << " ";
    }
    cout << endl;

    rvrs(numbers);

    cout << "Reversed vector: ";
    for (int num : numbers) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
