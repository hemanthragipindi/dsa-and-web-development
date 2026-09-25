#include <iostream>
#include <queue>
#include <vector>
using namespace std;

vector<int> kthLargestValues(const vector<int>& values, int k) {
    priority_queue<int, vector<int>, greater<int>> minimumHeap;
    for (int value : values) {
        minimumHeap.push(value);
        if (static_cast<int>(minimumHeap.size()) > k) minimumHeap.pop();
    }
    vector<int> result;
    while (!minimumHeap.empty()) {
        result.push_back(minimumHeap.top());
        minimumHeap.pop();
    }
    return result;
}

void heapSort(vector<int>& values) {
    priority_queue<int> maximumHeap(values.begin(), values.end());
    for (int index = static_cast<int>(values.size()) - 1; index >= 0; index--) {
        values[index] = maximumHeap.top();
        maximumHeap.pop();
    }
}

int main() {
    vector<int> values{3, 2, 1, 5, 6, 4};
    vector<int> largest = kthLargestValues(values, 2);
    cout << "K largest values: ";
    for (int value : largest) cout << value << ' ';
    cout << '\n';
    heapSort(values);
    for (int value : values) cout << value << ' ';
    cout << '\n';
    return 0;
}
