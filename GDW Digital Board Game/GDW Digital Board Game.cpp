/* 
Besiege of Power
ARKK Studios
Version 1.0
*/

#include <iostream>
using namespace std;

//Main Menu Function
string mainMenu();

int main()
{
    
    string menuNum = mainMenu();

    if (menuNum == "1") { //start
        //choose map
        cout << "map" << endl;
    }
    else if (menuNum == "2") { //rules
        //rules
        cout << "rules" << endl;
    }
    else if (menuNum == "3") { //quit
        return EXIT_SUCCESS;
    } 
    else {
    }

}

string mainMenu()
{
    string menuOp; //menu option
    bool loopMenu = false;

    while (!loopMenu) 
    {
        cout << "Game Title" << endl;
        cout << "Input a number to begin: " << endl;
        cout << "1. Start" << endl
            << "2. Rules" << endl
            << "3. Quit" << endl;
        cin >> menuOp;

        if (menuOp == "1" || menuOp == "2" || menuOp == "3") {
            loopMenu = true;
        }
        else {
        }

        system("CLS"); //clear console
    }
    return menuOp;
}


