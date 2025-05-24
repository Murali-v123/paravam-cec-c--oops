#include<iostream>
using namespace std;

class Calucalate{
    public:
        int a,b;     
        float res;

    Calucalate(){     
        a=5;
        b=10;

    void showOutput(){
        cout<<"Addition: "<<a+b<<endl;
        cout<<"Substraction: "<<a-b<<endl;
        cout<<"multiplication: "<<a*b<<endl;
        cout<<"remainder: "<<a%b<<endl;
        cout<<"quotient: "<<a/b<<endl;
        
    }
    }
};


int main(){
    Calucalate c1;  
    c1.showOutput;

}