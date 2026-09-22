#include<iostream>
#include<fstream>
using namespace std;    
int main(){
    ifstream file("student.txt");
    int marks;
    string name;

    if (getline(file, name) && file >> marks) {
        cout << marks << " " << name << endl;
    }

    file.close();
}