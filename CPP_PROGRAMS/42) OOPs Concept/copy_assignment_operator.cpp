/*
    Copy Assignment Operator
*/
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Hero
{
private:
    int health;

public:
    char *name;
    char level;

    Hero()
    {
        cout << "This is simple constructor" << endl;
    }

    Hero(int health)
    {
        cout << "This is one perameterised constructor" << endl;
        this->health = health;
    }

    Hero(int health, char level)
    {
        cout << "This is two perameterised constructor" << endl;
        this->health = health;
        this->level = level;
    }

    Hero(int health, char level, char name[])
    {
        cout << "This is three perameterised constructor" << endl;
        this->health = health;
        this->level = level;
        this->name = name;
        // strcpy(this->name, name);
    }

    // Deep Copy
    // Deep Copy
    // Deep Copy
    // Deep Copy
    // Deep Copy
    Hero(Hero &temp)
    {
        this->health = temp.health;
        this->level = temp.level;

        char *ch = new char[10];
        strcpy(ch, temp.name);
        this->name = ch;
    }

    void print()
    {
        cout << endl;
        cout << "[ Name: " << this->name << ", ";
        cout << "Health: " << this->health << ", ";
        cout << "Level: " << this->level << " ]" << endl;
        cout << endl;
    }
};

int main()
{
    char name[100] = "Babbar";
    Hero hero1(20, 'B', name);
    hero1.print();

    // Shallow Effect
    // Here for name it will pass the address of first character
    // Thats why if we change the value from "B" to "G" it will applicable for hero1 & hero2 both
    Hero hero2(hero1);
    hero2.print();

    hero1.name[0] = 'G';

    hero2 = hero1;
    hero1.name[0] = 'K';
    hero1.print();
    hero2.print();

    return 0;
}
