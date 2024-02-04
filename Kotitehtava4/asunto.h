#ifndef ASUNTO_H
#define ASUNTO_H
#include <iostream>
#include <cstdlib>
using namespace std;


class Asunto
{
public:
    Asunto();
    int asukasMaara;
    int neliot;
    void Maarita(int,int);
    double laskeKulutus(double);
};

#endif // ASUNTO_H
