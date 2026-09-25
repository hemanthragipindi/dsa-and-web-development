#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int maximumSubarraySum(const vector<int>& values) {
    int bestSum = values[0];
    int currentSum = values[0];
    for (size_t index = 1; index < values.size(); index++) {
        currentSum = max(values[index], currentSum + values[index]);
        bestSum = max(bestSum, currentSum);
    }
    return bestSum;
}

void rotateRight(vector<int>& values, int positions) {
    if (values.empty()) return;
    positions %= static_cast<int>(values.size());
    reverse(values.begin(), values.end());
    reverse(values.begin(), values.begin() + positions);
    reverse(values.begin() + positions, values.end());
}

void printArray(const vector<int>& values) {
    for (int value : values) cout << value << ' ';
    cout << '\n';
}

int main() {
    vector<int> values{-2, 1, -3, 4, -1, 2, 1, -5, 4};
    cout << "Maximum subarray sum: " << maximumSubarraySum(values) << '\n';
    rotateRight(values, 2);
    cout << "Array after right rotation: ";
    printArray(values);
    return 0;
}
