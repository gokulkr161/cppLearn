#include <iostream>
#include "Account.h"  //never add Account.cpp its just extension of Account.h
#include "Player.h"  
using namespace std;

void display_player(Player p){
    cout<<"Name:"<< p.get_name();
}


int main(){

    // Account* frank_account =new Account();
    // frank_account->set_balance(1000.0);   // same as (*frank_account).set_balance(1000.0)
    // double bal1=frank_account->get_balance(); 
    // Account frank_account;
    // frank_account.set_balance(1000.0);
    // double bal1=frank_account.get_balance();

    // cout<<bal1<<endl;

    Player slayer;    // curly brackets set scope for this variables
    slayer.set_name("Slayer");

    Player kichu{"xxxxxxxx",101,33};  
    Player* level_boss=new Player("Level Boss",1000,300);
    //level_boss->set_name("LB");
    delete level_boss;

    Player my_knew_object{kichu};


    display_player(kichu);

return 0;


}





