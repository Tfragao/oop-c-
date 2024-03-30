#ifndef _DEEP_H_
#define _DEEP_H_

#include <iostream>

class Deep{
    private:
        int *data;
    public:
        void set_data_value(int d);
        int get_data_value();
        Deep(int d);
        Deep(const Deep &source);
        void display_deep(Deep dp);
        ~Deep();
};

#endif