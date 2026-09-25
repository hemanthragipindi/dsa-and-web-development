#include <iostream>
using namespace std;

class IntArray {
private:
    int* values;
    int length;

public:
    explicit IntArray(int size) : values(new int[size]{}), length(size) {}

    ~IntArray() {
        delete[] values;
    }

    void set(int index, int value) {
        if (index >= 0 && index < length) values[index] = value;
    }

    int sum() const {
        int total = 0;
        for (int index = 0; index < length; index++) total += values[index];
        return total;
    }
};

int main() {
    IntArray values(3);
    values.set(0, 10);
    values.set(1, 20);
    values.set(2, 30);
    cout << "Sum: " << values.sum() << '\n';
    return 0;
}
