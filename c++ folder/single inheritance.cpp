#include<iostream>
using namespace std;
class person{
    public:
    string name;
    void displayperson (){
        cout<<"hello "<<name<<endl;
    }
};
class student:public person{
    public:
    int marks;
    void displaymarks(){
        cout<<"your marks is : "<<marks<<endl;
    }
};
int main(){
    student c1;
    c1. name="QAID";
    c1. displayperson();
    c1.marks=50;
    c1.displaymarks();
    return 0;
}