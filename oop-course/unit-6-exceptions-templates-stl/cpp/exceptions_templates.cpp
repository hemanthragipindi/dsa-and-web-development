#include <iostream>
#include <stdexcept>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

template <typename Type>
Type maximumValue(Type firstValue, Type secondValue) {
    return firstValue > secondValue ? firstValue : secondValue;
}

double divide(double numerator, double denominator) {
    if (denominator == 0) throw invalid_argument("denominator cannot be zero");
    return numerator / denominator;
}

int main() {
    try {
        cout << divide(10, 0) << '\n';
    } catch (const invalid_argument& error) {
        cout << error.what() << '\n';
    }
    cout << maximumValue(4, 9) << '\n';
    vector<int> values{4, 1, 3, 1, 2};
    sort(values.begin(), values.end());
    for (int value : values) cout << value << ' ';
    cout << '\n';
    return 0;
}
