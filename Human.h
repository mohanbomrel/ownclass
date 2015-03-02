#include<string>
using namespace std;

class Human
{
public:
    Human(string college);
    Human(int age);
    ~Human();
    void setName(string);
    string getName();
    void displayCollege();
    void setAge(int);
    int getAge();
    void displayAge();

private:
    string college;
    string nameCollege;
    int age;
    int numberAge;
};
