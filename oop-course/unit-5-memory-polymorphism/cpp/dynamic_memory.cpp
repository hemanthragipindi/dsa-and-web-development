#include <iostream>
using namespace std;

class IntBuffer {
private:
    int* values;
    int length;

public:
    explicit IntBuffer(int size) : values(new int[size]{}), length(size) {}

    ~IntBuffer() {
        delete[] values;
    }

    IntBuffer(const IntBuffer& other) : values(new int[other.length]), length(other.length) {
        for (int index = 0; index < length; index++) values[index] = other.values[index];
    }

    void set(int index, int value) {
        if (index >= 0 && index < length) values[index] = value;
    }

    int get(int index) const {
        return values[index];
    }
};

int main() {
    IntBuffer original(2);
    original.set(0, 10);
    IntBuffer copy = original;
    copy.set(0, 99);
    cout << original.get(0) << ' ' << copy.get(0) << '\n';
    return 0;
}
