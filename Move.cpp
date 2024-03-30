#include "Move.h"


Move::Move(int d){
    data = new int;
    *data = d;
    std::cout <<"Constructor for:" <<d<<"\n";
}

// Move::Move(const Move &source):Move{*source.data}{
//     std::cout<<"Copy constructor - deep copy for:"<<*data<<"\n";
// }

Move::Move(Move &&source) noexcept :data{source.data}{
    source.data = nullptr;
    std::cout <<"Move constructor - moving resource:" <<*data<<"\n";
}

Move::~Move(){
    if(data != nullptr){
        std::cout<<"Destructor freeing data for:"<<*data<<"\n";
    }else{
        std::cout<<"Destructor freeing data for nullptr"<<"\n";
    }
    delete data;
}