/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <string>
#include<vector>

using namespace std;

class Rocket {

public:
    int fuel;
    string color;
};


int main()
{
    vector<Rocket> rockets;

    Rocket myRocket;
    myRocket.fuel = 100;
    myRocket.color = "green";
    rockets.push_back(myRocket);

    Rocket myRocketOne;
    myRocketOne.fuel = 100;
    myRocketOne.color = "red";
    rockets.push_back(myRocketOne);

    Rocket myRocketTwo;
    myRocketTwo.fuel = 100;
    myRocketTwo.color = "blue";
    rockets.push_back(myRocketTwo);

    Rocket myRocketThree;
    myRocketThree.fuel = 100;
    myRocketThree.color = "yellow";
    rockets.push_back(myRocketThree);

    try {
        for (int i = 0; i < rockets.size(); i++) {
            if (rockets.at(i).color == "yellow") {
                throw rockets.at(i);
            }
            else {
                cout << rockets.at(i).color << endl;
            }
        }
    }
    catch (Rocket error) {
        cout << "This threw and ERROR:" << error.color;
    }

    return 0;

}