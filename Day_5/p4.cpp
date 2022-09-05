#include <iostream>
using namespace std;

class A{
    public:
    A(){
        cout<<"constructor was called\n";
    }
    void function(){
        cout<<"function was called\n";
    }
    ~A(){
        cout<<"destructor was called\n";
    }
};
int main(){
    A h;
    h.function();
    return 0;
}