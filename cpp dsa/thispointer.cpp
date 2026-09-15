#include<iostream>
using namespace std;
class student{
    public:
    int marks;
    void setMarks(int marks){
        this->marks=marks;
    }
    void display(){
        cout<<"Marks: "<<this->marks<<endl;
    }

};
int main(){
    student s1,s2;
    s1.setMarks(85);
    s1.display();
    s2.setMarks(90);
    s2.display();
    return 0;
}