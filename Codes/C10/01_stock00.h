// stock00.h -- Stock class interface
// verison 00

#ifndef STOCK00_H_
#define STOCK00_H_

#include <string>

class Stock
{
    private:
        std::string company;
        long shares;
        double share_val;
        double total_val;
        void set_tot() { total_val = shares * share_val; }   // 成员函数及定义。
    public:
        void acquire(const std::string &co, long n, double pr);
        void buy(long num, double price);
        void sell(long num, double price);
        void update(double price);
        void show();
};

#endif