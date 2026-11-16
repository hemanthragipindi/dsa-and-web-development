#include<iostream>
using namespace std;
class person{
    public:
    string name="ajay";
    void showname(){
        cout<<"Name is : "<<endl;
   }
};
class student: public person{
    public: 
    int rollno;
    void showrollno(){
        cout<<"Roll number is : "<<endl;

    }
};
int main(){
    student s;
    s.showname();
    s.showrollno();
    return 0;
    
}