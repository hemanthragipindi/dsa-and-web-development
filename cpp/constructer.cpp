#include<iostream>
#include<string>
using namespace std;
class employee{
    private:
        string name;
        int employeeid;
        float salary;
    public:
        employee(string n,int eid,float s){
            name=n;
            employeeid=eid;
            salary=s;
        }
        void display(){
            std::cout<<"Employee Name : "<<name<<std::endl;
            std::cout<<"Employee ID : "<<employeeid<<std::endl;
            std::cout<<"Salary : "<<salary<<std::endl;
        }
};
int main(){
    employee e("Hemanth reddy",101,91.5);
    e.display();
    return 0;
}