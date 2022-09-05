#include <iostream>
#include<string.h>
using namespace std;

class sting{
    int len;
    char*name;
    public:
    sting(){
        len=0;
        name=new char;
    }
    sting(char*s){
        name=new char[strlen(s)+1];
        len=strlen(s);
        strcpy(name, s);
    }
    ~sting(){
        delete name;
    }
    void join(sting&s1,sting&s2){
    len=s1.len+s2.len;
    name=new char[len+1];
    strcpy(name, s1.name);
    strcat(name, s2.name);
    }
    void display(){
        cout<<"the concatenated string: "<<name<<endl;
    }
};
int main(){
    sting c1("swati"), c2("mishra"),c3;
    c3.join(c1,c2);
    c1.display();
    c2.display();
    c3.display();
    return 0;
}



    

