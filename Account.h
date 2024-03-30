#ifndef _ACCOUNT_H_
#define  _ACCOUNT_H_

#include <vector>
#include<iostream>
class Account{
    private:
        std::string name;
        double balance;

    // bool deposit(double bal){balance += bal;std::cout<<"In deposit"<<"\n";}
    // bool withdraw(double bal){balance -= bal;std::cout<<"In withdraw"<<"\n";}
    public:
        void set_name(std::string name);
        std::string get_name();
        void set_balance(double bal);
        double get_balance();

        bool deposit(double amount);
        bool withdraw(double amount);
};

#endif //_ACCOUNT_H_