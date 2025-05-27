#include<iostream>
using namespace std;
class Area{
    private:
        int length,breadth;
    public:
        int result;
        Area(){
            length=0;
            breadth=0;
        }
        Area(int a,int b){
            length=a;
            breadth=b;
        }
        void calucalateArea(){
            result=length*breadth;
            cout<<"Area of rectangle with length"<<length<<" & Breadth "<<breadth<<" is equal to "<<result<<endl;
        }
};

int main(){
    int len,wid;
    Area rect1;
    rect1.calucalateArea();
    cout<<"Enter length & breadth of the area of the rectangle: ";
    cin>>len>>wid;
    Area rect2(len,wid);
    rect2.calucalateArea();
    return 0;
}