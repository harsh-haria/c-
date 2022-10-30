#include <bits/stdc++.h>

using namespace std;

class Hero
{
public:
    int health;
    char level;
    static int timeLeft;
    Hero(int health, char level) : health(health), level(level)
    {
        cout << "Parameteried constructor called!" << endl;
    }
    Hero()
    {
        cout << "Default constructor called!" << endl;
    }
    void print()
    {
        cout << "Health of the hero is " << health << " and has level " << level << endl;
    }
    static int getTimeLeft()
    {
        // return health; //won't work
        // return this->health //won't work, there is no this for static functions
        // can use only static members inside static functions
        return timeLeft;
    }
};

int Hero::timeLeft = 10;

int main()
{

    cout << Hero::getTimeLeft() << endl;

    // cout << "Time Left is: " << Hero::timeLeft << endl;

    // Hero hero1;
    // cout << "The time left from hero1 is: " << hero1.timeLeft << endl;

    // Hero hero2;
    // cout << "The time left from hero2 is: " << hero2.timeLeft << endl;

    // cout << "Changing the time left of hero2 to 20" << endl;
    // hero2.timeLeft = 20;

    // cout << "Now, The time left from the class is: " << Hero::timeLeft << endl;
    return 0;
}