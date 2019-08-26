/* Author: Matthew Mckenney
 * Date: August 25 2019
 * Purpose: takes a string from the user and shift the letters by a whole number
 */


#include <iostream>
using namespace std;


string encrypt(string text, int s)
{
    string result;

    // traverse text
    for (int i = 0; i < text.length(); i++)
    {
        // apply transformation to each character
        // encrypt uppercase letters
        if(isupper(text[i]))
            result += char(int(text[i]+s-65)%26 +65);
        // encrypt lowercase letters
        else
            result += char(int(text[i]+s-97)%26 +97);
    }

    // Return the resulting string
    return result;
}

void print (string text, int s)
{
    cout << "Text: " << text << endl;
    cout << "Shift: " << s << endl;
    cout << "Cipher: " << encrypt(text, s) << endl;

}

int main()
{
    string text;

    cout << "Please enter the message: ";
    cin >> text;

    int s = 1;

    print(text, s);

    return 0;
}