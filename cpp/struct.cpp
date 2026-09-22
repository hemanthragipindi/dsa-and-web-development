#include<iostream>
#include<fstream>
using namespace std;
struct student{
    int roll;
    char name[20];
    float marks;

};
int main(){
    student s= {101,"Ravi", 90.5};
    ofstream file("student.dat",ios::binary);
    file.write((char*)&s,sizeof(s));    
    file.close();
    return 0;
}