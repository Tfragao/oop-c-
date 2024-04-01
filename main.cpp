
#include "Account.h"
#include "Player.h"
#include "Shallow.h"
#include "Deep.h"
#include "Move.h"


int main(void)
{
    // Account frank_account;
    // Account hero_account;

    // Player frank;
    // Player hero;

    // Player players[] = {frank, hero};

    // std::vector<Player> player_vec{frank};
    // player_vec.push_back(hero);

    // //creating objects on the heap
    // Player *enemy {nullptr};
    // enemy = new Player;
    // delete enemy;

    /* Acessing class Members*/
    // Player frank;
    // frank.name = "Frank";
    // frank.health = 100;
    // frank.xp = 12;
    // frank.talk("Hi there.");

    // Player *enemy = new Player;
    // (*enemy).name = "Enemy";
    // (*enemy).health = 100;
    // enemy->xp = 15;

    // enemy->talk("I will destroy you!");

    // Account frank_account;
    // frank_account.name = "Frank's account";
    // frank_account.balance = 5000.0;

    // frank_account.deposit(1000.0);
    // frank_account.withdraw(500.0);

    /* getters and setters*/
    // Account frank_account;
    // frank_account.set_name("Frank's account");
    // frank_account.set_balance(1000.0);

    // frank_account.deposit(200.0) ? std::cout<<"Deposit OK"<<"\n" : std::cout <<"Not sufficient funds"<<"\n";
    // frank_account.withdraw(150.0) ? std::cout<<"Withdraw OK"<<"\n" : std::cout<<"Not sufficient funds"<<"\n";  

    // Player thomas("Thomas", 100, 350);
    // thomas.set_name("Thomas");
    // Player pedro("Pedro");
    
    // Player hero;
    // hero.set_name("Hero");

    // Player *enemy = new Player;
    // enemy->set_name("Enemy");
    // delete enemy;

    /* copy constructor*/
    // Player empty;
    // empty.display_player(empty);

    //Shallow copy
    // Shallow sh1{100};
    // sh1.display_shallow(sh1);

    // sh1.set_data_value(1000);
    // Shallow sh2{sh1};
    // sh2.set_data_value(1000);
    // std::cout <<"Check copy constructor"<<"\n";

    /* Deep Copy*/
    // Deep obj1{100};
    // obj1.display_deep(obj1);

    // Deep obj2 {obj1};
    // obj2.set_data_value(1000);

    /* Move Constructor*/
    // std::vector<Move> vec;
    // vec.push_back(Move{10});

    /* Using const with classes*/
    const Player p {"Villain", 100, 55};
    Player p2 {"Hero", 50, 25};

    // p.set_name("Super villain");
    std::cout<<p.get_name()<<"\n";
    std::cout<<p2.get_name()<<"\n";
    p.display_another_player(p);
   
    return 0;
}