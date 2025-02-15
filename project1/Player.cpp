#include <iostream>

#include "Player.h"

using namespace std;
void Player::set_name(string name_val){  //member function
    name=name_val;
}
// delegating constructors

// Player::Player()
//     :Player{"None",0,0} // delegating cnstructor ....cannot call the delegating 
//     //constructors from the body
// {}   //body
// Player::Player(string name_val)
//     :Player{name_val,0,0}
// {}
Player::Player(string name_val, int health_val, int xp_val)

    :name{name_val},health{health_val},xp{xp_val} // we can also use delegating constructors
{

}
// copy constructor declaration
Player::Player(const Player& source)
:Player (source.name,source.health,source.xp)

    //:name{source.name},health{source.health},xp{source.xp}  // we can also use delegating constructors
{}

//     // destructor
Player::~Player(){
    cout<<"destructor called for "<<name<<endl;
}

std::string Player::get_name(){
return name;
}
int Player:: get_health(){

return health;
}
int Player:: get_xp(){
return xp;
}