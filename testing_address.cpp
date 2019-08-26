#include <iostream>

using namespace std;

int main()
{
    int age = 0;
    const double pi = 3.1416;

    // use & to find the address in memory
    cout << "Please enter your age: " << endl;
    cin >> age;
    cout << "the age is: " << age << endl;
    cout << "the age is located at: " << &age << endl;
    cout << "the size of age is: " << sizeof(age) << endl;

    return 0;
}