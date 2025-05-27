#include<iostream>
using namespace std;

class Bike{
    public:
        string brand,model,engine_type;
        int year,price;

    void injectFuel(){
        cout<<"injected the fuel-petrol!"<<endl;

    }
    void igniteFuel(){
        cout<<"ignite the Fuel!"<<endl;

    }
    void start(string bikeModel){
        injectFuel();
        igniteFuel();
        cout<<model<<" started,happy journey! ";
    }

    void stopAcceleration(){
        cout<<"Acceleration stoppeed!"<<endl;

    }
    void stopFuelFlow(){
        cout<<"stopping the fuel"<<endl;

    }
    void stop(){
        stopAcceleration();
        stopFuelFlow();
        cout<<model<<" stopped,lock the vehicle"<<endl;

    }
};

int main(){
    Bike bike1;
    bike1.brand="kawasaki";
    bike1.model="ninja zx10rr";
    bike1.engine_type="liquid cool engine";
    bike1.year=2024;
    bike1.price=230000;
    bike1.start(bike1.model);
    bike1.stop();
}