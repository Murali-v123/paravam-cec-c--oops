#include<iostream>
using namespace std;
class Parent  //base class
{
    private:
        int net_worth=0;
    public:
        string family_Name,family_head;
        int number_of_members;

        void setData(int worth,string familyName,string familyHead,int member_count)
        {
            net_worth=worth;
            family_Name=familyName;
            family_head=familyHead;
            number_of_members=member_count;

        }

        int showNetWorth()
        {
            return net_worth;
        }

        int getFamilyInfo()
        {
            cout<<"I'm from "<<family_Name<<" family,and my family head is "<<family_head<<".Our Family's Net-Worth is about "<<showNetWorth()<<endl;
        }


};

class Child : public Parent   //Derived class
{
    public:
        string member_name;
        int age;

        void addDetails(string name,int person_age)
        {
            member_name=name;
            age=person_age;
        }

        void getfamilyDetails()
        {
            cout<<"My name is "<<member_name<<" and I'm "<<age<<" years old.";
        }
};

int main()
{
    string fName,fHead,cName;
    int childAge,fWorth,fMembers;

    cout<<"Enter your family name,family head,number of members & net Worth:";
    cin>>fName>>fHead>>fMembers>>fWorth;

    Parent p1;
    p1.setData(fWorth,fName,fHead,fMembers);
    p1.getFamilyInfo();

    cout<<"Enter your name & Age:"<<endl;
    cin>>cName>>childAge;

    Child c1;
    c1.setData(fWorth,fName,fHead,fMembers);
    c1.addDetails(cName,childAge);

    c1.getfamilyDetails();
}