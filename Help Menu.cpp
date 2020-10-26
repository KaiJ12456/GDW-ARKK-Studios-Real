// Help Menu.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

//Declare each function
int rulesH();
int HelpMenu(string& help);
int moveH();
int attackH();
int statsH();


int main()
{
    string help;
    int pick = 0;
    int goback = 0;
    bool MenuLoop = true;
    int MenuNum = HelpMenu(help);

    while (MenuLoop == true) {
        if (MenuNum == 1) { 

            rulesH();
            MenuNum = HelpMenu(help);

        }
        else if (MenuNum == 2) {

            moveH();
            MenuNum = HelpMenu(help);

        }
        else if (MenuNum == 3) {

            attackH();
            MenuNum = HelpMenu(help);
        }
        else if (MenuNum == 4) {

            statsH();
            MenuNum = HelpMenu(help);
        }

    }

}

//Menu Function
int HelpMenu(string& help) {
    int pick = 0;
    bool MenuLoop = true;

    // This is where the user is prompted with a message asking them to type help to use the menu
    while (MenuLoop == true) {

        cout << "Type help to accsess the help menu\n";
        cin >> help;

        if (help == "help" || help == "Help") {
            system("CLS");
            cout << "What do you need help with?\n";
            cout << "Please enter a number\n";
            cout << "1. rules\n";
            cout << "2. How to move units\n";
            cout << "3. How to attack with units\n";
            cout << "4. unit statistics\n";
            cin >> pick;

            if (pick == 1 || pick == 2 || pick == 3 || pick == 4) {
                MenuLoop = false;
            }
            system("CLS");
        }
        return pick;
    }
}

//Rules Function
    int rulesH()
    {
    int goback = 0;

    while (goback != 1) {

        cout << "The rules are as follows:\n";
        cout << " \n";
        cout << "1. Each player gets 7 units to use (2 swordsmen, 2 heavy armours, 2 archers, and 1 king each).\n\n";

        cout << "2. There are 2 team colours: blue and red. Blue team always takes the first turn.\n\n";

        cout << "3. Once a unit's health reaches 0 or below, they are defeated and cannot be used anymore.\n\n";

        cout << "4. The person that defeats their opponent's king first wins.\n\n";

        cout << "5. Each unit starts in a predetermined location on the map depending on the map variant.\n\n";

        cout << "6. Movement: Players alternate turns to move and then attack with 1 unit each turn.\n  The number of tiles each unit moves is dependent on its speed statistic.\n\n";

        cout << "7. When moving units, players do not need to use the unit’s full movement,\n  and players can move or attack with 1 unit per turn.\n\n";

        cout << "8. Units move and then can attack. Attacking does not use up movement.\n  Units can also attack without moving. However, once you attack, you cannot move.\n\n";

        cout << "9. Units cannot occupy the same tile. or move through each other\n\n";

        cout << "10. Archer units cannot shoot through/over mountains.\n\n";
        cout << "------------------------------------------------------------------------------------------------------\n\n";
        cout << "To return to the help menu type 1\n";
        cin >> goback;
        system("CLS");
    }
    return goback;
        
}

// Moving Units Function
    int moveH()
{
 int goback = 0;

    while (goback != 1) {
        cout << "- In order to move Units around the board follow this format:\n\n";

        cout << "move (unit tile) (R,L,U,D) (R,L,U,D) (R,L,U,D)\n";
        cout << "Example: move C3 L L D\n\n";
        cout << "- ^ Above example is based off the speed stat of a Heavy Armor Unit.\n";
        cout << "This will make the unit at C3 move left once, left agian, then down once\n\n";
        cout << "------------------------------------------------------------------------------------------------------\n\n";
        cout << "- The amount of adjacent tiles you can input depends on the speed stat of the character your moving.\n";
        cout << "For more information on unit statistics refer to the statistics section of the help menu.\n\n";
        cout << "------------------------------------------------------------------------------------------------------\n\n";
        cout << "- To return to the help menu type 1\n\n";

        cin >> goback;
        system("CLS");
    }
    return goback;
}

// Unit Attacks Function
    int attackH()
    {
        int goback = 0;

        while (goback != 1) {
            cout << "- To make Units attack follow the format below.\n";
            cout << "attack (Unit attacking's tile) (Unit you wish to attack's tile)\n\n";

            cout << "- Units with a range stat of 1 must be adjacent to an enemy unit they wish to attack.\n";
            cout << "Units with a range stat of 2 can be 1 or 2 tiles from an enemy unit they wish to attack.\n\n";
            cout << "------------------------------------------------------------------------------------------------------\n\n";
            cout << "- For more information on unit statistics refer to the statistics section of the help menu.\n\n";
            cout << "------------------------------------------------------------------------------------------------------\n\n";
            cout << "- To return to the help menu type 1.\n";
            cin >> goback;
            system("CLS");
        }
        return goback;
    }

// Unit Stats Function
    int statsH() {
        int goback = 0;

        while (goback != 1) {
            cout << "Swordsman stats are:\n";
            cout << "Health: 10, Strength: 5, Speed: 4, Range: 1\n\n";
            cout << "------------------------------------------------------------------------------------------------------\n\n";
            cout << "Heavy Armor stats are:\n";
            cout << "Health: 13, Strength: 4, Speed: 3, Range: 1\n\n";
            cout << "------------------------------------------------------------------------------------------------------\n\n";
            cout << "Archer stats are:\n";
            cout << "Health: 8, Strength: 3, Speed: 5, Range: 2\n\n";
            cout << "------------------------------------------------------------------------------------------------------\n\n";
            cout << "King Stats are:\n";
            cout << "Health: 14, Strength: 5, Speed: 2, Range: 1\n\n";
            cout << "------------------------------------------------------------------------------------------------------\n\n";

            cout << "To see the stats of a specific unit on the board use this format:\n";
            cout << "stats (unit's tile)\n\n";
            cout << "------------------------------------------------------------------------------------------------------\n\n";


            cout << "To return to the help menu type 1\n";
            cin >> goback;
            system("CLS");
        }
        return goback;
    }


