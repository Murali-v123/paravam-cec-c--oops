#include<iostream>
using namespace std;

class Customer{
    public:
    string firstName,lastName;
    int age,rating;

    Customer(){
        firstName="john";
        lastName="wick";
        age=10;
        rating=5;

        void showDetalis(){
            cout<<"Customer name: "<<firstName<<" "<<lastName<<endl;
            cout<<"customer Age: "<<age<<endl;

        }

        void giveRating(int rate);

        void showRating(int rate){
            cout<<"you've given "<<rating<<"star rating ,thank you!"<<endl;
                }

    void Customer::giveRating(int rate){
        rating=rate;
    }
}};

int main(){
    Customer cust1;

    cust1.showDetalis();
    cust1.showRating();

    Customer cust2;
    cust2.firstName="murali";
    cust2.lastName=".v";
    cust2.age=24;


    int starRating;

    cout<<"give your rating(0 to 5):";
    cin>>starRating;
    cust2.giveRating(starRating);
    cust2.showRating(); 

}