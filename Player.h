#ifndef _PLAYER_H_
#define _PLAYER_H_

#include <iostream>
#include <vector>

class Player{
private:
    std::string name ;
    int health;
    int xp;
public:
    void set_name(std::string n);
    std::string get_name() const;
    int get_health();
    int get_xp();
    void talk(std::string text_to_say);
    bool is_dead();
    void display_player(Player p);
    void display_another_player(const Player &p) const;
    //Overloaded constructor
    // Player();
    // Player(std::string name);
    // Player(std::string name, int helath, int xp);
    
    //Default constructor
    Player(std::string name_val = {"None"}, int health_val = 0, int xp_val = 0);

    //Copy constructor
    Player(const Player &source);

    //Destructor
   ~Player();
};


#endif //_PLAYER_H_