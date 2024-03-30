#include "Player.h"

  Player::Player(std::string n, int health_val, int xp_val):name{n}, health{health_val}, xp{xp_val}{// <-- Better way Initialization
    //Assignment NOT initialization
   // name = n;
   // health = health_val;
   // xp = xp_val;
   std::cout <<"Three args constructor called"<<"\n";
 }

 Player::Player(const Player &source):Player(source.name, source.health, source.xp){  //name{source.name}, health{source.health}, xp{source.xp}{
   std::cout <<"Copy constructor - made a copy of:"<<source.name<<"\n";
 }
 
//  Player::Player():name{"None"}, health{0}, xp{0}{   <-- Better way Initialization
//    //Assignment NOT initialization.
//    // name = "None";
//    // health = 0;
//    // xp = 0;
//    std::cout <<"No args constructor called"<<"\n";
//  }
   
   // Player::Player():Player{"None", 0, 0} {  // using delegating constructor
   //    //Assignment NOT initialization.
   //    // name = "None";
   //    // health = 0;
   //    // xp = 0;
   //    std::cout <<"No args constructor called"<<"\n";
   // }
 
//  Player::Player(std::string n):name{n}, health{0}, xp{0}{ // <-- Better way Initialization
//     //Assignment NOT initialization
//     //name = n;
//     std::cout <<"One string arg constructor called"<<"\n";
//  }
//    Player::Player(std::string n):Player{n, 0, 0}{ //  using delegating constructor
//    //Assignment NOT initialization
//    //name = n;
//    std::cout <<"One string arg constructor called"<<"\n";
// }



 Player::~Player(){
    std::cout <<"Destructor called"<<"\n";
 }

 void Player::set_name(std::string n){
    name = n;
 }
 
 std::string Player::get_name(){
    return name;
 }

 int Player::get_health(){
   return health;
 }

 int Player::get_xp(){
   return xp;
 }

 void Player::talk(std::string text_to_say)
 {
    std::cout<<name<<" says "<<text_to_say<<"\n";
 }
 
 bool Player::is_dead()
 {
    return true;  //need a good logic to check wether a player is dead or not
 }

 void Player::display_player(Player p){
   std::cout<<"Name: "<<p.get_name()<<"\n";
   std::cout<<"Health: "<<p.get_health()<<"\n";
   std::cout<<"XP: "<<p.get_xp()<<"\n";
 }