#include<iostream>
using namespace std;

//syntax
//class class_name//class dsecltration
class Student {
  public:
    string name,college,branch;      //DATA
    int sem;

    void show(){ //member functions
        cout<<"Name: "<<name<<endl;
        cout<<"college: "<<college<<endl;
        cout<<"Branch: "<<branch<<endl;
        cout<<"semister: "<<sem<<endl;

    }
};

int main(){
    Student student1; //object function 
    student1.name="murali.v";  //assining value to class using object
    student1.college="cec";
    student1.sem=2;
    student1.branch="AIML";

    Student student2; //object function 
    student2.name="manoj ";  //assining value to class using object
    student2.college="cec";
    student2.sem=5;
    student2.branch="cse";

    student1.show();
    student2.show();
}
