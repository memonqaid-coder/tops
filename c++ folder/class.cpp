#include<iostream>
using namespace std;
class variable{
    public:
    int integervalue;
    float floatvalue;
    long longvalue;
    char charvalue;
    long long longlongvalue;
    double doublevalue;
};
int main(){
    variable cpp;
    cpp.integervalue=34;
    cpp.floatvalue=34.45;
    cpp.longvalue=123456;
    cpp.charvalue='A';
    cpp.longlongvalue=33445566778343546;
    cpp.doublevalue=2344.5676546;
    cout<<"integervalue : "<<cpp.integervalue<<endl;
    cout<<"floatvalue : "<<cpp.floatvalue<<endl;
    cout<<"longvalue : "<<cpp.longvalue<<endl;
    cout<<"charvalue : "<<cpp.charvalue<<endl;
    cout<<"longlongvalue : "<<cpp.longlongvalue<<endl;
    cout<<"doublevalue : "<<cpp.doublevalue<<endl;
    return 0;
}