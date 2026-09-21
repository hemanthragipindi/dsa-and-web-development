#include<iostream>
using namespace std;
int main(){
    int attendance[5][7];
    cout<<"Enter the attendance of 5 students for 7 days.\n"<<endl;
    cout<<"Enter 1 for present and 0 for absent.\n"<<endl;
    for(int i=0; i<5; i++){
        cout<<"Student "<<i+1<<":\n";
        for(int j=0; j<7; j++){
            cout<<"Day "<<j+1<<": ";
            cin>>attendance[i][j];
        }
        cout<<endl;
    }
    cout<<"----Attendance Table----\n"<<endl;
    cout<<"Student\t";
for(int j=0; j<7; j++){
        cout<<"Day "<<j+1<<"\t";
    }
    cout<<endl;
    for(int i=0; i<5; i++){
        cout<<"Student "<<i+1<<"\t";
        for(int j=0; j<7; j++){
            cout<<attendance[i][j]<<"\t";
        }
        cout<<endl;
    }
    //calculate percentage of attendance for each student
    for(int i=0; i<5; i++){
        int total=0;
        for(int j=0; j<7; j++){
            total+=attendance[i][j];
        }
        float percentage=(total/7.0)*100;
        cout<<"Percentage of attendance for Student "<<i+1<<": "<<percentage<<"%"<<endl;
    }
    

}