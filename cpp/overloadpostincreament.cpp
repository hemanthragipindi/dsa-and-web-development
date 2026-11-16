// postfix increment operator can also be overloaded in a similar way, but it takes an int parameter to differentiate it from the prefix version. Here's how you can implement the postfix increment operator for the Counter class:

#include <iostream>
using namespace std;

class Counter {
    int count;

public:
    Counter() {
        count = 0;
    }

    // Overload post-increment operator
    Counter operator++(int) {
        Counter temp = *this;
        count++;
        return temp;
    }

    void display() {
        cout << count << endl;
    }
};

int main() {
    Counter c1;

    cout << "Initial count: ";
    c1.display();

    c1++;

    cout << "Count after increment: ";
    c1.display();

    return 0;
}
