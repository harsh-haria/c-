#include <bits/stdc++.h>

using namespace std;

class CanAsk
{
    virtual void AskForPromotion() = 0;
};

class Employee : CanAsk
{
protected:
    string Name;
    string Company;
    int Age;

public:
    string getName()
    {
        return Name;
    }
    void setName(string name)
    {
        Name = name;
    }

    string getCompany()
    {
        return Company;
    }
    void setCompany(string company)
    {
        Company = company;
    }

    int getAge()
    {
        return Age;
    }
    void setAge(int age)
    {
        Age = age;
    }

    Employee(string name, string company, int age)
    {
        Age = age;
        Company = company;
        Name = name;
    }
    void printData()
    {
        cout << Name << " " << Company << " " << Age << endl;
    }
    void AskForPromotion()
    {
        if (Age >= 30)
            cout << Name << " can be promoted!" << endl;
        else
            cout << Name << ", sorry NO promotion for you!" << endl;
    }
};

class Developer : Employee
{
public:
    string FavProgrammingLanguage;
    Developer(string name, string company, int age, string favProgrammingLanguage) : Employee(name, company, age)
    {
        FavProgrammingLanguage = favProgrammingLanguage;
    }
    void fixBug()
    {
        cout << getName() << " is Fixing the bug using " << FavProgrammingLanguage << endl;
        cout << Name << " is Fixing the bug using " << FavProgrammingLanguage << endl; // protected access modifier
    }
};

int main()
{
    // Employee emp1 = Employee("Harsh", "Umemployed", 22);
    // emp1.AskForPromotion();
    // Employee emp2 = Employee("Harsh", "Cimpress", 23);
    // emp2.AskForPromotion();
    // Employee emp3 = Employee("Chirag", "Textile", 39);
    // emp3.AskForPromotion();
    Developer d1 = Developer("Harsh", "NULL", 22, "C++");
    d1.fixBug();
}