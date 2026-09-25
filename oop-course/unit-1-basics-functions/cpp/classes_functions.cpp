#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int marks;
    static int objectCount;

public:
    Student(string studentName, int studentMarks) : name(studentName), marks(studentMarks) {
        objectCount++;
    }

    ~Student() {
        objectCount--;
    }

    string grade() const {
        if (marks >= 90) return "A";
        if (marks >= 75) return "B";
        if (marks >= 60) return "C";
        return "D";
    }

    void display() const {
        cout << name << ": " << marks << " (" << grade() << ")\n";
    }

    static int activeObjects() {
        return objectCount;
    }
};

int Student::objectCount = 0;

void swapByReference(int& firstValue, int& secondValue) {
    int temporary = firstValue;
    firstValue = secondValue;
    secondValue = temporary;
}

int factorial(int number) {
    if (number <= 1) return 1;
    return number * factorial(number - 1);
}

int main() {
    Student firstStudent("Hemanth", 91);
    firstStudent.display();
    int firstValue = 10;
    int secondValue = 20;
    swapByReference(firstValue, secondValue);
    cout << firstValue << ' ' << secondValue << '\n';
    cout << "Factorial: " << factorial(5) << '\n';
    cout << "Active objects: " << Student::activeObjects() << '\n';
    return 0;
}
