#include<iostream>
using namespace std;

class student{
    static int a;
    public:
    student(){
        ++a;
    }
    static void display(){
        cout<<a<<endl;
    }
};
int student::a;
int main(){
    student n;
    student p;
    student r;
    cout<<"objects created are: ";
    student::display();
    return 0;
}