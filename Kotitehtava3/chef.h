#include <cstdlib>
#include <iostream>
#ifndef CHEF_H
#define CHEF_H
using namespace std;


class Chef
{
public:
    Chef(string);
    void makeSalad();
    void makeSoup();
    ~Chef();
protected:
    string name;

};

#endif // CHEF_H
