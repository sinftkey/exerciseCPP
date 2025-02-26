#include<iostream>
using namespace std;

class vector2{
    public:
        vector2(int x, int y):x(x), y(y) {
            cout<<"Constructor called"<<endl;
        }
        ~vector2(){
            cout<<"Destructor called"<<endl;
        }
        void print(){
            cout<<"x: "<<x<<", y: "<<y<<endl;
            cout<<this<<endl;
        }
    private:
        int x;
        int y;
};

int main(){
    vector2 *v=new vector2(1, 2);
    // delete v;
    v->print();
    cout<<v<<endl;

    return 0;
}