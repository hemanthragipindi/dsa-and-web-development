#include<iostream>
#include<fstream>
using namespace std;
class student{
    public:
    int roll ;
    char name[20];
    float marks;

};
int main(){
    student s;
    cout<<"enter the roll number :- ";
    cin>>s.roll;
    cout<<"enter the name :- ";
    cin>>s.name;
    cout<<"enter the marks :- ";
    cin>>s.marks;
    ofstream file("student.dat",ios::binary);
    file.write((char*)&s,sizeof(s));
    file.close();
    return 0;
}