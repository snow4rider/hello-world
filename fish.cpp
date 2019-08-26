/**
 * Matthew Mckenney
 * Date: July 27 2019
 * Purpose: practice of inheritance
 */

#include <iostream>
using namespace std;

class Fish
{
protected:
    // accessible only to derived classes
    bool isFreshWaterFish;

public:
    // fish constructor
    Fish(bool isFreshWater) : isFreshWaterFish(isFreshWater) {}

    void swim()
    {
        if (isFreshWaterFish)
            cout << "Swims in lake" << endl;
        else
            cout << "Swims in sea" << endl;
    }
};

class Tuna: public Fish
{
public:
    Tuna(): Fish(false){}
};

class Carp: public Fish
{
public:
    Carp(): Fish(true) {}
};

int main ()
{
    Carp myLunch;
    Tuna myDinner;

    cout << "About my food" << endl;

    cout << "Lunch: ";
    myLunch.swim();

    cout << "Dinner: ";
    myDinner.swim();  

    return 0;
}