#include<iostream>
using namespace std;
class student{
    int *marks;
    int n;
    public:
    student(int subjects){
        n=subjects;
        marks=new int[n];
        cout<<"Memory allocated"<<endl;
    }
    void input(){
        for (int i=0;i<n;i++){
            cout<<"Enter marks "<<i+1<<": ";
            cin>>marks[i];
        }
    }
    void display(){
        cout<<"student marks are: ";
        for(int i=0;i<n;i++){
            cout<<marks[i]<<" ";
        }
        cout<<endl;
    }
    ~student(){
        delete [] marks;
        cout<<"Memory deallocated"<<endl;
    }
};
int main(){
    int subjects;
    cout<<"Enter number of subjects: ";
    cin>>subjects;
    student s(subjects);
    s.input();
    s.display();
    return 0;
}
