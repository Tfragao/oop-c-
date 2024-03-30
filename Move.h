#ifndef _MOVE_H_
#define _MOVE_H_

#include <iostream>
#include <vector>

class Move
{
    private:
        int *data;
    public:
        void set_data_value(int);
        int get_data_value();
        Move(int);
        //Copy constructor
        // Move(const Move &source);
        //Move constructor
        Move(Move &&source) noexcept;
        ~Move();
};




#endif