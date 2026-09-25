#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main() {
    ofstream outputFile("students.txt");
    if (!outputFile) {
        cerr << "Could not open file for writing\n";
        return 1;
    }
    outputFile << "101 Hemanth 91.5\n";
    outputFile << "102 Anu 84.0\n";
    outputFile.close();

    ifstream inputFile("students.txt");
    if (!inputFile) {
        cerr << "Could not open file for reading\n";
        return 1;
    }
    int id;
    string name;
    double marks;
    while (inputFile >> id >> name >> marks) {
        if (marks >= 85.0) cout << id << ' ' << name << ' ' << marks << '\n';
    }
    return 0;
}
