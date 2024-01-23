#include <cstdlib>
#include <chef.h>
#include <iostream>
#ifndef ITALIANCHEF_H
#define ITALIANCHEF_H
using namespace std;

class ItalianChef : public Chef
{
public:
    ItalianChef(string,int,int);
    string getName();
    void makePasta(int,int);
private:
    int vesi;
    int jauhot;
};

#endif // ITALIANCHEF_H
