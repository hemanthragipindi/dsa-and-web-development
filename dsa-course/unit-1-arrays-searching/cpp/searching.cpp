#include <iostream>
#include <vector>
using namespace std;

int firstOccurrence(const vector<int>& values, int target) {
    int left = 0;
    int right = static_cast<int>(values.size()) - 1;
    int answer = -1;
    while (left <= right) {
        int middle = left + (right - left) / 2;
        if (values[middle] == target) {
            answer = middle;
            right = middle - 1;
        } else if (values[middle] < target) {
            left = middle + 1;
        } else {
            right = middle - 1;
        }
    }
    return answer;
}

int lastOccurrence(const vector<int>& values, int target) {
    int left = 0;
    int right = static_cast<int>(values.size()) - 1;
    int answer = -1;
    while (left <= right) {
        int middle = left + (right - left) / 2;
        if (values[middle] == target) {
            answer = middle;
            left = middle + 1;
        } else if (values[middle] < target) {
            left = middle + 1;
        } else {
            right = middle - 1;
        }
    }
    return answer;
}

int main() {
    vector<int> values{1, 2, 2, 2, 5};
    cout << firstOccurrence(values, 2) << ' ' << lastOccurrence(values, 2) << '\n';
    return 0;
}
