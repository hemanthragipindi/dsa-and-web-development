#include <iostream>
using namespace std;
class Student{
    public:
    int marks;
    void display(){
        cout<<"Marks: "<<marks<<endl;
    }   
};
int main(){
    Student s[3];
    s[0].marks=85;
    s[1].marks=90; 
    s[2].marks=95;
    for(int i=0;i<3;i++){
        s[i].display();
    }
    return 0;   
}