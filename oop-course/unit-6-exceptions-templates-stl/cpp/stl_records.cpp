#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct Employee {
    string name;
    double salary;
};

int main() {
    vector<Employee> employees{{"Hemanth", 50000}, {"Anu", 65000}, {"Ravi", 45000}};
    sort(employees.begin(), employees.end(), [](const Employee& first, const Employee& second) {
        return first.salary > second.salary;
    });
    for (const Employee& employee : employees) {
        cout << employee.name << ' ' << employee.salary << '\n';
    }
    return 0;
}
