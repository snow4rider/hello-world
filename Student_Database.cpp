#include <iostream>

using namespace std;

class Student
{
private:
    int studentNumber;
    string firstName;
    string lastName;
    int age;
    

public:
    enum gender
    {
        Male = 1,
        Female
    };

    void setStudentNumber(int x){
        studentNumber = x;
    }

    void setFirstName( string sName){
        firstName = sName;
    }

    void setLastName(string lName) {
        lastName = lName;
    }

    void setAge (int sAge) {
        age = sAge;
    }

    int getStudentNumber(){
        return studentNumber;
    }

    string getFirstName(){
        return firstName;
    }

    string getLastName() {
        return lastName;
    }

    int getAge() {
        return age;
    }

};

int main()
{
    Student first;

    first.setStudentNumber(0000);
    first.setFirstName("John");
    first.setLastName("Mckenney");
    first.setAge(23);

    cout << first.getStudentNumber() << " " << first.getFirstName() << " " << first.getLastName() << " " << first.getAge() <<endl;
    return 0;
}