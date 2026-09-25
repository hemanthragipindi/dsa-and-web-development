#include <iostream>
#include <vector>
using namespace std;

class CircularQueue {
private:
    vector<int> values;
    int frontIndex = 0;
    int size = 0;

public:
    explicit CircularQueue(int capacity) : values(capacity) {}

    bool enqueue(int value) {
        if (size == static_cast<int>(values.size())) return false;
        int rearIndex = (frontIndex + size) % values.size();
        values[rearIndex] = value;
        size++;
        return true;
    }

    bool dequeue(int& value) {
        if (size == 0) return false;
        value = values[frontIndex];
        frontIndex = (frontIndex + 1) % values.size();
        size--;
        return true;
    }
};

int main() {
    CircularQueue queue(3);
    queue.enqueue(10);
    queue.enqueue(20);
    int removedValue;
    queue.dequeue(removedValue);
    queue.enqueue(30);
    cout << removedValue << '\n';
    return 0;
}
