//
// Created by User on 26/02/2020.
//


#ifndef NPC_ENEMY_H
#define NPC_ENEMY_H

#include "non_player_character.h"
using namespace std;
class Hostile_NPC : public Non_Player_Character
{
protected:
    Hostile_NPC(const std::string & name, std::unique_ptr<World> & world);

    const vector<string> get_new_hostile_id(const std::unique_ptr<World> & world, const std::map<std::string, std::shared_ptr<Character>> & character);

    class Structure
    {
    public:
        int _x, _y, height, width;
        Structure(const int & set_x, const int & set_y, const int & set_height, const int & set_width) :
                _x(set_x), _y(set_y), height(set_height), width(set_width) {}
    };


    typedef Structure Partition;

    class Map
    {
    private:
        std::map<std::string, Structure> jungle;
    };

    bool moving;
    void Combat();
    bool delay;
};

#endif
