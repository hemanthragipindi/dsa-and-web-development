#include <iostream>
#include <fstream>
using namespace std;
int main() {
    ifstream file("student.txt");
    file.seekg(3);
    cout << "Position: " << file.tellg() << endl;
    char ch;
    file.get(ch);
    cout << "Character: " << ch;
    file.close();
    return 0;
}