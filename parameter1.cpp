#include <iostream>
using namespace std;

class Wish
{
private:
  string name;
  int age;

public:
  Wish()
  {
    name = "unknown";
    age = 0;
  }
  Wish(string n, int a);
  void birthdayWishes()
  {
    cout << "happy birthday " << name << " ! now you're " << age << " years old." << endl;
  }
};
Wish::Wish(string n, int a)
{
  name = n;
  age = a;
}

int main()
{
  string personName;
  int personAge;
  Wish person1;
  person1.birthdayWishes();

  cout << "enter your name:";
  cin >> personName;
  cout << "enter your age:";
  cin >> personAge;

  Wish person2(personName, personAge);
  person2.birthdayWishes();
}