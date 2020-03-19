//
// Created by User on 16/02/2020.
//

#include "Character.h"

Character::Character()

{
    name = " ";
    race = " ";
    sex = " ";
  playerRace = {"elf", "dwarf", "firelord", "Akuma", "Human" };

   level = 0, health = 0, totalHealth = 0, maxHealth = 0,  heal = 0;
   level = 1, current_xp = 0, base_xp = 85, xp_to_level = base_xp, minLevel = 1, maxHealth = 10;

}


void Character::characterCreation() {

    int counter = 0;

    // character creation
    std::cout << "Enter Character Name: ";
    std::cin >> name;

    std::cout << "Enter Character race: \n";
    std::cout << "Elf\n";
    std::cout << "Dwarf\n";
    std::cout << "Firelord\n";
    std::cout << "Akuma\n";
    std::cout << "Human\n";
    std::cout << "Type Below Your Race: \n\n";
    std::cin >> race;

    std::for_each(race.begin(), race.end(), [](char & c){
        c = ::tolower(c);
    });

    for (int i = 0; i < sizeof(playerRace); i++){

        if(race == "elf"){
            health = 80;
            break;
        }
        if (race == "dwarf"){
            health = 120;
            break;
        }
        if (race == "akuma") {
            health = 170;
            break;
        }
        if (race == "firelord"){
            health = 150;
            break;
        }
        if (race == "human") {
            health = 72;
            break;
        } else {
            health = 100;
        }
    }



    std::cout << "\n";
    std::cout << "Enter Character sex: ";
    std::cin >> sex;
    system("cls");

    // Fun creation

    for (int i = 0; i <= counter; i++){
        if(i == 0)
            std::cout << "Creating Character.\n";
        if (i == 1)
            std::cout << "Creating Character..\n";
        if(i == 2) {
            std::cout << "Creating Character...\n";
            break;
        }
        _sleep(400);
        system("cls");
        counter++;


    }
    race[0] = toupper(race[0]);
    name[0] = toupper(name[0]);
    sex[0] = toupper(sex[0]);


    totalHealth = health;
    maxHealth = totalHealth;


}
