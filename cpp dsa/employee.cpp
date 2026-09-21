#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

class employee {
private:
    int employeeId;
    string employeeName;
    float employeeSalary;
    float experience;

public:
    void setEmployeeDetails(int id, string name, float salary, float exp) {
        employeeId = id;
        employeeName = name;
        employeeSalary = salary;
        experience = exp;
    }

    void displayEmployeeDetails() {
        float hra = 0.20f * employeeSalary;
        float da = 0.10f * employeeSalary;
        float bonus = (experience >= 5) ? 0.05f * employeeSalary : 0.0f;
        float grossSalary = employeeSalary + hra + da + bonus;

        cout << fixed << setprecision(2);
        cout << "\n========== Employee Details ==========\n";
        cout << "Employee ID     : " << employeeId << endl;
        cout << "Employee Name   : " << employeeName << endl;
        cout << "Basic Salary    : " << employeeSalary << endl;
        cout << "Experience      : " << experience << " years" << endl;
        cout << "HRA (20%)       : " << hra << endl;
        cout << "DA (10%)        : " << da << endl;
        cout << "Bonus           : " << bonus << endl;
        cout << "Gross Salary    : " << grossSalary << endl;
        cout << "======================================\n";
    }
};

int main() {
    employee emp1;
    int id;
    string name;
    float salary, experience;

    cout << "Enter employee ID: ";
    cin >> id;
    cin.ignore();

    cout << "Enter employee name: ";
    getline(cin, name);

    cout << "Enter basic salary: ";
    cin >> salary;

    cout << "Enter experience in years: ";
    cin >> experience;

    emp1.setEmployeeDetails(id, name, salary, experience);
    emp1.displayEmployeeDetails();

    return 0;
}