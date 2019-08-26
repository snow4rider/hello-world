#include <iostream>

using namespace std;

// proto type
int welcomeMessage();

int main()
{
    int number = 0;
    int *pNumber = &number;
    int index = 0;

    welcomeMessage();

    cout << "please enter a number" << endl;
    cin >> number;

    int arr[number];

    for (index = 0; index < number; index++){
        arr[index] = index;
    }

    for(index = 0; index < number; index++) {
        cout << arr[index] + 1 << " "; 
    }

    cout << "\ntwice the number is: " << *pNumber * 2 << endl;


    return 0;
}

int welcomeMessage()
{
    cout << "-----  Welcome to my Program  -----\n";
    return 0;
}