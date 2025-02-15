// palyer header file

#ifndef _PLAYER_H_
#define _PLAYER_H_
#include <iostream>
#include <string>

using namespace std;

class Player{
private:
    string name;
    int health;
    int xp;
    int* data;
public:


//constructors 

    // Player();   // default constructors
    // Player(string name_val);
    Player(string name_val="None", int health_val=0, int xp_val=0);

// copy constructor init
    Player (const Player& source);
    
// destructor

    // ~Player();

// member functions
std::string get_name();
int get_health();
int get_xp();

void set_name(string name_val);

};


#endif