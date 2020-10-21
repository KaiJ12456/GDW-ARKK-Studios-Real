/* 
Besiege of Power
ARKK Studios
Version 1.0
*/

#include <iostream>
using namespace std;

string mainMenu(); //Main Menu Function
string rules(); //Rules Function
string infoPage(); //About Page Function
string mapSelect(); //Map Selection Function
void unitStats(); //Initialize Unit Stats

int main()
{
    
    string menuNum = mainMenu(); 
    bool loopMenu = true;

    while (loopMenu) {

        if (menuNum == "1") { //start

            string mapOp = mapSelect();
            if (mapOp == "1") {
                std::cout << "map 1" << endl;
            }
            else if (mapOp == "2") {
                std::cout << "map 2" << endl;
            }
            else {
                std::cout << "map 3" << endl;
            }

        }
        else if (menuNum == "3") { //rules

            rules();
            menuNum = mainMenu();

        }
        else if (menuNum == "2") {

            infoPage();
            menuNum = mainMenu();

        }
        else { //quit

            return EXIT_SUCCESS;

        }

    }

}

string mainMenu()
{
    string menuOp; //menu option
    bool loopMenu = true;
    string ascGame = R"(

                                            ____            _               
                                           / __ )___  _____(_)__  ____ ____ 
                                          / __  / _ \/ ___/ / _ \/ __ `/ _ \
                                         / /_/ /  __(__  ) /  __/ /_/ /  __/
                                        /_____/\___/____/_/\___/\__, /\___/ 
                                                    / __ \/ __//____/       
                                                   / / / / /_               
                                            ____  / /_/ / __/               
                                           / __ \_\____/_/   _____  _____   
                                          / /_/ / __ \ | /| / / _ \/ ___/   
                                         / ____/ /_/ / |/ |/ /  __/ /       
                                        /_/    \____/|__/|__/\___/_/        
                                    

    )";

    while (loopMenu) 
    {
        std::cout << ascGame << endl;
        std::cout << "                                             Input a number to begin: " << endl << endl;
        std::cout << "                                                    1. Start" << endl
            << "                                                    2. About" << endl
            << "                                                    3. Rules" << endl
            << "                                                    4. Quit" << endl << endl
            << "                                                       ";
        cin >> menuOp;

        if (menuOp == "1" || menuOp == "2" || menuOp == "3" || menuOp == "4") {
            loopMenu = false;
        }
        else {
        }

        system("CLS"); //clear console
    }
    return menuOp;
}

string rules() 
{
    string return2Menu;
    string ascRules = R"(
        ____        __         
       / __ \__  __/ /__  _____                                             [ Input "1" to return to the main menu ]
      / /_/ / / / / / _ \/ ___/
     / _, _/ /_/ / /  __(__  ) 
    /_/ |_|\__,_/_/\___/____/  
           
                
    )"; 
    
    while (return2Menu != "1") {

        std::cout << ascRules << endl;
        std::cout << "    Required Number of Players: 2" << endl 
            << "    Objective: Defeat the opponent's king to win" << endl << endl
            << "    1. Each player has 7 units (2 swordsmen, 2 heavy armours, 2 archers, and 1 king each). Map layouts determine the" << endl
            << "       starting positions." << endl
            << "    2. The team colours are blue and red. Blue always takes the first turn." << endl
            << "    3. Each unit has a stat for health, strength, speed, and range." << endl
            << "    4. Players alternate turns, moving and potentially attacking with 3 units maximum. Players don't need to use the" << endl
            << "       unit's full movement nor need to move all 3 units." << endl
            << "    5. Units can move and then attack. Attacking doesn't use up movement. Units can also attack without moving. Once" << endl
            << "       you attack, you cannot move" << endl
            << "    6. Units on the same team can move through each other, but they cannot pass through enemy units. Units can't rest" << endl
            << "       on the same tile" << endl << endl;

        std::cout << "    U N I T S  -----------------------------------------------------------------------------------------------------" << endl << endl
            << "    Units have 4 stats: " << endl
            << "    -  Health: Health determines how much health units have. If it is lower or equal to 0, the unit is defeated." << endl
            << "    -  Strength: Strength is how much damage a unit does when it attacks. The health of the attacked unit is lowered" << endl
            << "                 by the strength of the attacking unit." << endl
            << "    - Speed: Speed refers to how many tiles the unit can move" << endl
            << "    - Range: Range is how far units can attack enemies (1 = adjacent tiles, 2 = 2 tiles away in linear fashion)" << endl << endl;
        std::cout << "    The 4 units, their ingame symbols, and their stats are as follows: " << endl
            << "    - Swordsman" << endl
            << "          - S = swordsman 1, s = swordsman 2" << endl
            << "          - Health: 10, Strength: 5, Speed: 4, Range: 1" << endl
            << "    - Heavy Armour" << endl
            << "          - H = heavy armour 1, h = heavy armour 2" << endl
            << "          - Health: 13, Strength: 4, Speed: 3, Range: 1" << endl
            << "    - Archer" << endl
            << "          - A = archer 1, a = archer 2" << endl
            << "          - Health: 8, Strength: 3, Speed: 5, Range: 2" << endl
            << "    - King" << endl
            << "          - K = king" << endl
            << "          - Health: 14, Strength: 5, Speed: 2, Range: 1" << endl << endl;
        std::cout << "    T E R R A I N  -------------------------------------------------------------------------------------------------" << endl << endl
            << "    - Ground: No status effects" << endl
            << "    - Forest: Lose 1 speed point when starting on forest tile or once a unit passes through a forest tile on its turn" << endl
            << "          - If a forest is the last tile for a unit's last speed point, the unit can cross into the forest." << endl
            << "    - Mountain: Intraversible tile" << endl
            << "          - Archers cannot shoot over mountains" << endl
            << "          - Denoted as 'X' on map" << endl << endl;

        std::cout << "    ";
        cin >> return2Menu;
        system("CLS");

    }

    return return2Menu;

}

string infoPage()
{
    string return2Menu;
    string ascAbout = R"(
        ___    __                __ 
       /   |  / /_  ____  __  __/ /_                                        [ Input "1" to return to the main menu ]  
      / /| | / __ \/ __ \/ / / / __/                             
     / ___ |/ /_/ / /_/ / /_/ / /_  
    /_/  |_/_.___/\____/\__,_/\__/  
          
                      
    )";

    while (return2Menu != "1") {

        std::cout << ascAbout;
        std::cout << "Besiege of Power is a turn-based strategy game of outwitting your opponent. It redefines the game of chess," << endl
            << "    allowing tacticians to deploy their units to attack, defend, and conquer the map. Play methodically to claim" << endl
            << "    your opponent's king. Along the way, navigate through forests and mountains to defeat the enemy's forces. Suit" << endl
            << "    up, form a battle plan, and adapt to emerge victorious in Besiege of Power! " << endl << endl
            << "    Besiege of Power was developed by the following team of 5 dedicated students at ARKK Studios:" << endl
            << "      -  Anthony Karas (100784819)" << endl
            << "      -  Ryan Yee (100785620)" << endl
            << "      -  Kai Joseph (100783670)" << endl
            << "      -  Kyra Trinidad (100784182)" << endl
            << "      -  Suraaj Gill (100783848)" << endl;

        std::cout << endl << "    ";
        cin >> return2Menu;
        system("CLS");
    }
    return return2Menu;

}

string mapSelect()
{

    bool loopMapSelect = true;
    string ascMap = R"(

        __  ___               _____      __          __  _           
       /  |/  /___ _____     / ___/___  / /__  _____/ /_(_)___  ____ 
      / /|_/ / __ `/ __ \    \__ \/ _ \/ / _ \/ ___/ __/ / __ \/ __ \
     / /  / / /_/ / /_/ /   ___/ /  __/ /  __/ /__/ /_/ / /_/ / / / /
    /_/  /_/\__,_/ .___/   /____/\___/_/\___/\___/\__/_/\____/_/ /_/ 
                /_/                                                  

    )";
    string mapNum;
    
    while (loopMapSelect) {

        std::cout << ascMap << endl;
        std::cout << "     Which map would you like to play?" << endl << endl;

        std::cout << "      1." << endl;
        //print map 1 array

        std::cout << "      2." << endl;
        //print map 2 array

        std::cout << "      3." << endl;
        //print map 3 array

        std::cout << "      ";
        cin >> mapNum;

        if (mapNum == "1" || mapNum == "2" || mapNum == "3") {
            loopMapSelect = false;
        }
        else {

        }

        system("CLS");

    }

    return mapNum;
}

void unitStats()
{
    string userInput;
    int placeHold[4];

    //Unit {current health, max health, strength, speed, range}
    int bS[] = { 10, 10, 5, 4, 1 };
    int bs[] = { 10, 10, 5, 4, 1 };
    int bH[] = { 13, 13, 4, 3, 1 };
    int bh[] = { 13, 13, 4, 3, 1 };
    int bA[] = { 8, 8, 3, 5, 2 };
    int ba[] = { 8, 8, 3, 5, 2 };
    int bK[] = { 14, 14, 5, 2, 1 };

    int rS[] = { 10, 10, 5, 4, 1 };
    int rs[] = { 10, 10, 5, 4, 1 };
    int rH[] = { 13, 13, 4, 3, 1 };
    int rh[] = { 13, 13, 4, 3, 1 };
    int rA[] = { 8, 8, 3, 5, 2 };
    int ra[] = { 8, 8, 3, 5, 2 };
    int rK[] = { 14, 14, 5, 2, 1 };

    cin >> userInput;

}


