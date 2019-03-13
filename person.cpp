#include <iostream>
#include <string>
#include "person.h"
using namespace std;

Person::Person()
{
    string firstName = " ";
    string lastName = " ";
    float payRate = 0;
    float hoursWorked = 0;
}
void Person::setLastName(string lName)
{
    lastName = lName;
}
string Person::getLastName()
{
    return lastName;
}
void Person::setFirstName(string fName)
{
    firstName = fName;
}
string Person::getFirstName()
{
    return firstName;
}
void Person::setPayRate(float rate)
{
    payRate = rate;
}
float Person::getPayRate()
{
    return payRate;
}
void Person::setHoursWorked(float hours)
{
    hoursWorked = hours;
}
float Person::getHoursWorked()
{
    return hoursWorked;
}
float Person::totalPay()
{
    float total = payRate * hoursWorked;
    return total;
}
string Person::fullName()
{
    string lastName = firstName + " " + lastName;
    return lastName;
}
