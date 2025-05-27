#include<iostream>
using namespace std;

class car{
    public:
    string brand,model,variant,fuel_type;
    int year;
    float price;

    void start(){
        cout<<model<<"started!"<<endl;
    }
    void park(){
        cout<<model<<"parked!"<<endl;

    }
    void stop(){
        cout<<model<<"stopped!"<<endl;
    }

    void display(){
        cout<<"Brand:"<<brand<<endl;
        cout<<"Model:"<<model<<endl;
        cout<<"variant:"<<variant<<endl;
        cout<<"fuel_type:"<<fuel_type<<endl;
        cout<<"year:"<<year<<endl;
        cout<<"price:"<<price<<endl;
    }
};

int main(){
    car c1;
    c1.brand="porsche 911 gt3 rs";
    c1.model="sports edition";
    c1.variant="2 seater";
    c1.fuel_type="petrol";
    c1.year=2023;
    c1.price=3.5;
    c1.start();
    c1.park();
    c1.stop();
    c1.display();


}