#include<ostream>
using namespace std;
class calculator{
    public:
    void add(int a,int b){
        cout<<"1"<<a+b;
    }
    void add (int a,int b,int c){
        cout<<"2"<<a+b+c<<endl;
    }
};
int main(){
    calculator calc;
    calc.add(15,6);
    calc.add(3,6,6);
    return 0;
}