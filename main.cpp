#include <iostream>
#include "Hero.h"
#include "Warrior.h"
#include "Knight.h"
#include "Spellblade.h"
#include "Guild.h"

using namespace std;

int main()
{
    // creating one guild object that will store heroes
    Guild gameGuild("NightWatch");

    int choice = -1;

    // keep running until user decides to exit
    while(choice != 0)
    {
        cout << "\n====== Guild Menu ======\n";
        cout << "1. Recruit basic hero\n";
        cout << "2. Show guild members\n";
        cout << "3. Show guild statistics\n";
        cout << "0. Exit program\n";
        cout << "Select option: ";

        cin >> choice;

        if(choice == 1)
        {
            // collect hero info from user
            string name;
            int health;
            int power;

            cout << "\nEnter hero name: ";
            cin >> name;

            cout << "Enter hero health: ";
            cin >> health;

            cout << "Enter hero power: ";
            cin >> power;

            // create hero dynamically and add to guild
            Hero* recruit = new Hero(name, health, power);

            gameGuild += recruit;

            cout << "Hero successfully added to guild.\n";
        }

        else if(choice == 2)
        {
            // print guild using overloaded << operator
            cout << "\nCurrent Guild Members:\n";
            cout << gameGuild;
        }

        else if(choice == 3)
        {
            // display guild stats
            cout << "\nGuild Information:\n";
            gameGuild.displayGuildStats();
        }

        else if(choice == 0)
        {
            cout << "\nExiting program...\n";
        }

        else
        {
            // handle invalid menu input
            cout << "\nInvalid choice. Try again.\n";
        }
    }

    return 0;
}