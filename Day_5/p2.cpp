#include <iostream>
using namespace std;

class time{
    int hours, minutes,m;
    public:
    time(){
        cout<<"enter the time: ";
        cin>>minutes;
    }
    void display(){
        hours=minutes/60;
        m=minutes%60;
        cout<<"the time is: "<<hours<<":"<<m<<endl;
    }
    
};
int main(){
    time t;
    t.display();
    return 0;
}