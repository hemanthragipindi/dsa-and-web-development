#include<fstream>
using namespace std;
int main(){
    ofstream file;
    file.open("student.txt");
    file<<"Hemanth redd\n";
    file<<"20";
    file.close();
    return 0;
    
}