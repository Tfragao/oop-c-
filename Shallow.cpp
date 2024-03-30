#include "Shallow.h"

Shallow::Shallow(int d){
    data = new int;
    *data = d;
}

//Problem: sourde and the newly created object BOTH point to the SAME data area!
Shallow::Shallow(const Shallow &source):data(source.data){  // Shallow copy - only the pointer is copied - not what it is pointing to!
    std::cout<<"Copy constructor - shallow copy"<<"\n";
}

Shallow::~Shallow(){
    delete data;
    std::cout<<"Destructor freeing data"<<"\n";
}

void Shallow::set_data_value(int d){
    *data = d;
}

int Shallow::get_data_value(){
    return *data;
}

void Shallow::display_shallow(Shallow sh){
    std::cout<<sh.get_data_value()<<"\n";
}