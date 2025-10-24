// Quick Sort
// Time: Average O(n log n), Worst O(n^2)
// Space: O(log n) recursion stack
#include <bits/stdc++.h>
using namespace std;

int partition(vector<int>& a, int low, int high) {
    int pivot = a[high];
    int i = low - 1;
    for (int j = low; j < high; ++j) {
        if (a[j] <= pivot) {
            ++i;
            swap(a[i], a[j]);
        }
    }
    swap(a[i + 1], a[high]);
    return i + 1;
}

void quickSort(vector<int>& a, int low, int high) {
    while (low < high) {
        int pi = partition(a, low, high);
        // tail call elimination: recurse on smaller side first
        if (pi - low < high - pi) {
            quickSort(a, low, pi - 1);
            low = pi + 1;
        } else {
            quickSort(a, pi + 1, high);
            high = pi - 1;
        }
    }
}

int main() {
    vector<int> a = {5, 1, 4, 2, 8};
    quickSort(a, 0, (int)a.size() - 1);
    for (int i = 0; i < (int)a.size(); ++i) {
        cout << a[i] << (i + 1 == (int)a.size() ? '\n' : ' ');
    }
    return 0;
}
