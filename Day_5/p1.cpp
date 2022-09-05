#include <iostream>
using namespace std;

class complex{
    int real, imaginary;
    public:
    complex(){
        cout<<"enter real part of a complex number: ";
        cin>>real;
        cout<<"enter imaginary part of a complex number: ";
        cin>>imaginary;
        
    }
    void display(){
        cout<<"the number is: "<<real<<"+i"<< imaginary<<endl;
    }
    ~complex(){
        cout<<"the destructor was invoked\n";
    
    }
};
int main(){
    complex a;
    a.display();
    return 0;
}