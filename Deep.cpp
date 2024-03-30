#include "Deep.h"

Deep::Deep(int d){
    data = new int;
    *data = d;
}

Deep::Deep(const Deep &source):Deep{*source.data}{
    std::cout<<"Copy constructor - deep copy"<<"\n"; 
}

Deep::~Deep(){
    delete data;
    std::cout<<"Destructor freeing data"<<"\n";
}

void Deep::set_data_value(int d){
    data = new int;
    *data = d;
}

int Deep::get_data_value(){
    return *data;
}

void Deep::display_deep(Deep dp){
    std::cout<<dp.get_data_value()<<"\n";
}