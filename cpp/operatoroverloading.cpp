#include<iostream>
using namespace std;
class number{
    int value;
    public:
    number(int v){
        value=v;

    }
    number operator-(){
        return number(-value);

    }
    void display(){
        cout<<value<<endl;

    }
};
int main(){
    number n1(100);
    number n2=-n1;
    cout<<"Original number: ";
    n1.display();
    cout<<"Negated number: ";
    n2.display();
    return 0;

}