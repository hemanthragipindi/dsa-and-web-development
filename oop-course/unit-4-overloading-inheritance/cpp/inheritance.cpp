#include <iostream>
#include <string>
using namespace std;

class Employee {
protected:
    string name;

public:
    explicit Employee(string employeeName) : name(employeeName) {}
    virtual void displayRole() const {
        cout << name << " is an employee\n";
    }
    virtual ~Employee() = default;
};

class Manager : public Employee {
public:
    explicit Manager(string managerName) : Employee(managerName) {}
    void displayRole() const override {
        cout << name << " is a manager\n";
    }
};

class Developer : public Employee {
public:
    explicit Developer(string developerName) : Employee(developerName) {}
    void displayRole() const override {
        cout << name << " is a developer\n";
    }
};

int main() {
    Manager manager("Anu");
    Developer developer("Hemanth");
    manager.displayRole();
    developer.displayRole();
    return 0;
}
