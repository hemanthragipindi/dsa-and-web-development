#include <iostream>
using namespace std;

long long factorial(int number) {
    if (number <= 1) return 1;
    return number * factorial(number - 1);
}

void towerOfHanoi(int disks, char source, char auxiliary, char destination) {
    if (disks == 0) return;
    towerOfHanoi(disks - 1, source, destination, auxiliary);
    cout << source << " -> " << destination << '\n';
    towerOfHanoi(disks - 1, auxiliary, source, destination);
}

int main() {
    cout << factorial(5) << '\n';
    towerOfHanoi(3, 'A', 'B', 'C');
    return 0;
}
