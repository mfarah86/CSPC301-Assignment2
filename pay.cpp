#include <iostream>
#include <iomanip>
#include <string>
#include <cstring>
#include <fstream>
#include "person.cpp"
#include <vector>

using namespace std;

void readData(vector<Person> &emp);
void writeData(vector<Person> &emp);

int main()
{
  vector<Person> employees;
  readData(employees);
  writeData(employees);

  return 0;
}

void readData(vector<Person> &emp)
{
  ifstream inFile;
  string fName;
  string lName;
  float hoursWorked;
  float payRate;
  inFile.open("input.txt");
  inFile >> fName;

  while(!inFile.eof())
    {
      inFile >> lName >> payRate >> hoursWorked;
      emp.emplace_back(fName, lName, payRate, hoursWorked);
      inFile >> fName;
    }
    inFile.close();
}

void writeData(vector <Person> &emp)
{
  ofstream outFile;
  outFile.open("output.txt");
  for(int i = 0; i < emp.size(); i++)
  {
    outFile << emp.at(i).fullName() << " " << fixed << setprecision(2) << emp.at(i).totalPay() << endl;
  }
  outFile.close();
}
