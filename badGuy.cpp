#include <iostream>
using namespace std;

class badGuy
{
private:
    int life;
    int weponPower;
public:
    void setLife(int ilife) {
        life = ilife;
    }

    int getLife(){
        return life;
    }

    void setWeponPower(int iweponPower){
        weponPower = iweponPower;
    }

    int getWeponPower(){
        return weponPower;
    }
};


