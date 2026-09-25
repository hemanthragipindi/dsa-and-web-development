#include <iostream>
#include <vector>
using namespace std;

void bubbleSort(vector<int>& values) {
    for (size_t pass = 0; pass < values.size(); pass++) {
        bool swapped = false;
        for (size_t index = 0; index + 1 < values.size() - pass; index++) {
            if (values[index] > values[index + 1]) {
                swap(values[index], values[index + 1]);
                swapped = true;
            }
        }
        if (!swapped) break;
    }
}

void selectionSort(vector<int>& values) {
    for (size_t start = 0; start < values.size(); start++) {
        size_t smallest = start;
        for (size_t index = start + 1; index < values.size(); index++) {
            if (values[index] < values[smallest]) smallest = index;
        }
        swap(values[start], values[smallest]);
    }
}

void insertionSort(vector<int>& values) {
    for (size_t index = 1; index < values.size(); index++) {
        int currentValue = values[index];
        int position = static_cast<int>(index) - 1;
        while (position >= 0 && values[position] > currentValue) {
            values[position + 1] = values[position];
            position--;
        }
        values[position + 1] = currentValue;
    }
}

int main() {
    vector<int> values{7, 3, 9, 1, 4};
    insertionSort(values);
    for (int value : values) cout << value << ' ';
    cout << '\n';
    return 0;
}
