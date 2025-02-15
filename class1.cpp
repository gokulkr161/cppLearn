// classes
#include <iostream>
#include <string>
#include<vector>

using namespace std;

// header file
class Player{
    
    // atributes /data
    string name {"jithu"};
    int health{10};
    int xp;
   
    // methods
    void talk(string);  //function 1 prototype
    bool dead();  //function 2 prototype

};


//

int main(){
    Player frank;
    Player hero;
    // array
    Player players[]{frank,hero};
    // vector
    vector<Player> player_vec{frank};
    player_vec.push_back(hero);

    Player* enemy {nullptr};
    enemy= new Player;

    delete enemy;

    return 0;

}