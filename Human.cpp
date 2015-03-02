#include<iostream>
#include "Human.h"

using namespace std;

Human::Human(string college)
{
    cout << "Initialized" << endl;
    setName(college);
}

void Human::setName(string college)
{
    nameCollege = college;
}
string Human::getName()
{
    return nameCollege;
}
void Human::displayCollege()
{
    cout << "Mohan read in " << getName() << endl;
}

Human::Human(int age)
{
    cout << "Initialized" << endl;
    setAge(age);
}
void Human::setAge(int age)
{
    numberAge = age;
}
int Human::getAge()
{
    return numberAge;
}
void Human::displayAge()
{
    cout << "He is " << getAge() << " years old." <<endl;
}
Human::~Human()
{
    cout << "Destructed" << endl;
}
