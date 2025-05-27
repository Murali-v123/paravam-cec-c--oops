#include<iostream>
using namespace std;

class bank{
    private:
        int balance;
    public:
        string custName,custEmail;
        int acNumber;

        void createAccount(string cName,string cEmail){
            custName=cName;
            custEmail=cEmail;

        }

        void displayInfo(){
            cout<<"Customer Name:"<<custName<<endl;
            cout<<"Customer Email:"<<custEmail<<endl;

        }

        void addBlance(int amount){
            balance+=amount;

        }

        void checkBalnce(){
            cout<<"Bank Balance:"<<balance<<endl;
        }

};

int main(){
    bank cust1;
    string name,email;
    int acNum,amount;
    cout<<"Enter your Name: ";
    cin>>name;
    cout<<"Enter your Email: ";
    cin>>email;

    cust1.createAccount(name,email);
    cust1.displayInfo();
    

}