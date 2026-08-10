#include<iostream>
using namespace std;
class volume{
    double length,breath,height;
    public:
    volume(){
        cout<<"vol. of box"<<endl;
        length=2;
        breath=3;
        height=5;
    }
    volume(double l,double b,double h){
    cout<<"inside pameter const."<<endl;
    length=l;
    breath=b;
    height=h;
}
volume(volume &cc){
    cout<<"in copy const."<<endl;
    length=cc.length;
    breath=cc.breath;
    height=cc.height;
}
void show(){
    cout<<"total is: "<<length*breath*height<<endl;
}
};
int main(){
    volume dc;
    dc.show();
    volume pc(2,3,5);
    pc.show();
    return 0;
}