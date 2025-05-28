<<<<<<< HEAD
#include<iostream>
using namespace std;
class Area{
    private:
        int length,breadth,height;
        float radius;
    public:
        int result;
        Area(){
            length=0;
            breadth=0;
            radius=0;
        }
        Area(int a){
            length=a;
            result=length+length;
        }
        Area(int c,int d){
            length=c;
            breadth=d;
            result=length*breadth;
        }
        Area(float r){
            radius=r;
            result=2*3.142*radius;
            cout<<"Area of circle: "<<result<<endl;
        }
            Area (int l,int b,int h){
                length=l;
                breadth=b;
                height=h;
                result=length*breadth*height;
                cout<<"Area of cube: "<<result<<endl;
            }        
=======
#include<iostream>
using namespace std;

class Area{
    private:
        int length,breadth,height;
        float radius;

    public:
        int result;

        Area(){
            length=0;
            breadth=0;
            radius=0;
        }
        Area(int a){
            length=a;
            result=length+length;
        }
        Area(int c,int d){
            length=c;
            breadth=d;
            result=length*breadth;

        }

        Area(float r){
            radius=r;
            result=2*3.142*radius;
            cout<<"Area of circle: "<<result<<endl;
        }

            Area (int l,int b,int h){
                length=l;
                breadth=b;
                height=h;
                result=length*breadth*height;
                cout<<"Area of cube: "<<result<<endl;
            }
        
>>>>>>> 3bffab0eb727f318c8b7a67acdc1371537c04949
};