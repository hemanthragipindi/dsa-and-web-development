// create a counter class and overload the prefix increment operator so that it increases the counter by one
# include <iostream>
using namespace std;
class Counter{
    int count;
    public:
    Counter(){
        count=0;

    }
    Counter operator++(){
        count++;
        return *this;

    }
    void display(){
        cout<<count<<endl;

    }

};
int main(){
    Counter c1;
    cout<<"Initial count: ";
    c1.display();
    ++c1;
    cout<<"Count after increment: ";
    c1.display();
    return 0;
    
}