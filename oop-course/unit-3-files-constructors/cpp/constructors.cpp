#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    string name;
    int id;

public:
    Employee() : Employee("Unknown", 0) {}

    Employee(string employeeName, int employeeId) : name(employeeName), id(employeeId) {}

    Employee(const Employee& other) : name(other.name), id(other.id) {}

    void display() const {
        cout << name << " - " << id << '\n';
    }
};

int main() {
    Employee firstEmployee("Hemanth", 101);
    Employee copiedEmployee(firstEmployee);
    Employee defaultEmployee;
    firstEmployee.display();
    copiedEmployee.display();
    defaultEmployee.display();
    return 0;
}
