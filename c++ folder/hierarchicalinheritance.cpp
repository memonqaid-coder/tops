#include<iostream>
using namespace std;
class employee{
    public:
    string name;
    void login(){
        cout<<name<<"\nloggedin"<<endl;
    }
};
class developer:public employee{
    public:
    void write_code(){
        cout<<"write your code"<<endl;
    }
};
class tester:public employee{
    public:
    void test_software(){
        cout<<"test the software"<<endl;
    }
};
class manager:public employee{
    public:
    void assign_task(){
        cout<<"Assign task"<<endl;
    }
};
int main(){
    developer d1;
    tester t1;
    manager m1;
    d1.name="QAID";
    d1.login();
    d1.write_code();
    t1.name="velcyy";
    t1.login();
    t1.test_software();
    m1.name="yartik";
    m1.login();
    m1.assign_task();
    return 0;
}