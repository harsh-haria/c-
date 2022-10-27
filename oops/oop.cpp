#include <bits/stdc++.h>

using namespace std;

class CanAsk
{
    virtual void AskForPromotion() = 0;
};

class Employee : CanAsk
{
    string Company;
    int Age;

protected:
    string Name;

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
    virtual void work()
    {
        // virtual keyword says check if the derived class has work() defined
        // if yes then use that work() from derived class if not then use this work()
        cout << Name << " is working on tasks and will generate report for " << Company << endl;
    }
};

class Developer : public Employee
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
    void work()
    {
        cout << Name << " is writing code in " << FavProgrammingLanguage << endl;
    }
};

class Teacher : public Employee
{
public:
    string Subject;
    Teacher(string name, string company, int age, string subject) : Employee(name, company, age)
    {
        Subject = subject;
    }
    void PrepareLesson()
    {
        cout << Name << " is preparing lessons on " << Subject << endl;
    }
    void work()
    {
        cout << Name << " is teaching a class on " << Subject << endl;
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
    d1.AskForPromotion();
    Teacher teacher1 = Teacher("Ashwin", "Spoon", 31, "Backend Web Development");
    teacher1.PrepareLesson();
    teacher1.AskForPromotion();

    // polymorphism
    // teacher1.work();
    // d1.work();
    /*
        The most common use of polymorphism is when a parent class reference
        is used to refer to a child class object
    */
    Employee *employee1 = &teacher1;
    Employee *employee2 = &d1;
    employee1->work();
    employee2->work();
}