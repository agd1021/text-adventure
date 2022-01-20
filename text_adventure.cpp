//-------------------------------------------------------------------------
// Course: CS 215, Summer 2020
// Section: 010    
// Assignment: Lab 2 Team: Adventure Game
// Author: Ilya Segal, Allison Davis, Robby Fuqua, Jr.
// Email: segal1990@uky.edu, ada283@uky.edu , jrfu223@uky.edu
// Date: 12 June 2020
//-------------------------------------------------------------------------
// Purpose: text adventure game
// Learning goals: verify that every student can
// • Create a game flow chart
// • Write a Design and Test Plan
// • Use IF - ELSE statements and/or SWITCH
// • Follow Coding Style Guide criteria when writing code
// • Implement program-user interaction
// • Create a zip file and submit it to Canvas
// Pre-Conditions: input integers
// Post-Conditions: print strings
// Help Citation: None
//-------------------------------------------------------------------------

// DESIGN
// 1. includes
// 2. open main
// 3. declarations: level1Choice, level2Choice, reward, deadAlive

// 4. Game opener
// 5. Level 1 prompt: right or left at crossroads
// 6. Level 1 choice: switch

// 7. Level 1 option 1: left
// 8. Level 2 prompt: ogre
// 9. Level 2: switch
//// 10. Level 2 option 1: fight ogre (die)
//// 11. Level 2 option 2: feed bread to ogre (reward)
//// 12. Level 2 invalid option: (die)

// 13. Level 1 option 2: right
// 14. Level 2 prompt: witch
// 15. Level 2 switch
//// 16. Level 2 option 1: eat meal (die)
//// 17. Level 2 option 2: wash dishes (reward)
//// 18. Level 2 invalid option: (die)

// 19. Game over
// 20. if-else: death or reward
// 21. return 0


// 1. includes
#include <iostream> // cout, cin
using namespace std; // cout, cin

// 2. open main
int main()
{
    // 3. declarations
    int level1Choice = 0;
    int level2Choice = 0;
    string reward;
    string deadAlive;

    // 4. Game opener
    cout << "------------------------------------------" << endl;
    cout << "Let's go on an Adventure!" << endl;
    cout << "------------------------------------------" << endl;

    /// 5. Level 1 prompt: right or left at crossroads
    cout << "You are at crossroads in a dense mysterious forest." << endl;
    cout << "Choose which way you want to go (enter 1 or 2):" << endl;
    cout << "1. Left" << endl;
    cout << "2. Right" << endl;
    cout << ">> ";
    cin >> level1Choice;

    // 6. Level 1 choice: switch
    switch(level1Choice)
    {
        // 7. Level 1 option 1: left
        case 1:
        {
            deadAlive = "alive";

             // 8. Level 2 prompt: ogre
            cout << "You've chosen to go LEFT." << endl;
            cout << "Now you see an old ugly Ogre." << endl;
            cout << endl;
            cout << "What are you going to do? (choose 1 or 2):" << endl;
            cout << "1. Fight the Ogre" << endl; // aliveDead = "dead"
            cout << "2. Share a loaf of bread with the Ogre" << endl; // reward = "chest of gold" 
            cout << ">> ";
            cin >> level2Choice;
            
            // 9. Level 2: switch
            switch(level2Choice)
            {
                //// 10. Level 2 option 1: fight ogre (die)
                case 1:
                {
                    deadAlive = "dead";
                    cout << "You've chosen to fight the Ogre. Big mistake!" << endl;
                    break;
                }

                //// 11. Level 2 option 2: feed bread to ogre (reward)
                case 2:
                {
                    deadAlive = "alive";
                    cout << "You've chosen to share a loaf of bread with the Ogre." << endl;
                    reward = "chest of gold";
                    break;
                }
                
                //// 12. Level 2 invalid option: (die)
                default:
                {
                    deadAlive = "dead";
                    break;
                }
            }
            
            break; // end case 1 on level1Choice
        }

        // 13. Level 1 option 2: right
        case 2:
        {
            deadAlive = "alive";

            // 14. Level 2 prompt: witch
            cout << "You've chosen to go RIGHT." << endl;
            cout << "Now you see a beautiful cottage." << endl;
            cout << "This cottage belongs to an evil witch." << endl;
            cout << endl;
            cout << "You go inside the cottage and you see a freshly cooked meal on the table" << endl;
            cout << "And a pile of dirty dishes in a sink." << endl;
            cout << "What are you going to do? (choose 1 or 2):" << endl;
            cout << "1. Eat the meal, beacuse you are starving" << endl; // aliveDead = "dead"
            cout << "2. Wash the dishes because you want to be helpful" << endl; // reward = "magic ring"
            cout << ">> ";
            cin >> level2Choice;

            // 15. Level 2 switch
            switch(level2Choice)
            {
                //// 16. Level 2 option 1: eat meal (die)
                case 1:
                {
                    deadAlive = "dead";
                    cout << "You've chosen to eat the meal. It was poisoned!" << endl;
                    break;
                }

                //// 17. Level 2 option 2: wash dishes (reward)
                case 2:
                {
                    deadAlive = "alive";
                    cout << "You've chosen to wash the dirty dishes. That was nice." << endl;
                    reward = "magic ring";
                    break;
                }
                
                //// 18. Level 2 invalid option: (die)
                default:
                {
                    deadAlive = "dead";
                    break;
                }
            }
            
            break; // end case 2 on level1Choice
        }

        default: // invalid input
        {
            deadAlive = "dead";
            break;
        }
    }

    // 19. Game over
    cout << "------------------------------------------" << endl;
    cout << "Game over!" << endl;
    // 20. if-else: death or reward
    if (deadAlive == "alive")
    {
        cout << "You've got a " << reward << "!" << endl; // level2Choice == 2
    }
    else
    {
        cout << "Too bad, you died!" << endl; // level2Choice == 1 | other
    }
    cout << "------------------------------------------" << endl;

    // 21. return 0
    return(0);
}
