//WAp to create a class employee(show employee name and UID). Define another class employeedetaiuls which mustbe derived from class
//employee(show employee contact number and salary). use the concept of inheritence for the same 
#include<iostream>
#include<string>
using namespace std;
class employee{
    public:
    string name="Marya";
    int uid= "123";
    void showemployee(){
        cout<<"employee name is : "<<endl;
        cout << "employee uid is : "<<endl;


    }
};
class employeedetails : public employee{
    public:
    double contactno="1234567890";
    double salary="123";
    void showdetails(){
        cout<<"contact number is : "<<endl;
        cout<<"Salary is : "<<endl;

    }
};
int main(){
    employeedetails e;
    e.showemployee();
    e.showdetails();
    return 0;
}