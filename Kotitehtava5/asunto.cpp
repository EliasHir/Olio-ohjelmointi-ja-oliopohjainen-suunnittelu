#include "asunto.h"

Asunto::Asunto()
{
    cout<<"Asunto luotu"<<endl;
}
Asunto::~Asunto()
{

}

void Asunto::Maarita(int asukkaat1,int neliot1)
{
    asukasMaara=asukkaat1;
    neliot=neliot1;
    cout<<"Asunto maaritetty, asukkaita= "<<asukasMaara<<"nelioita= "<<neliot<<endl;
}
double Asunto::laskeKulutus(double kulutus1)
{
    return kulutus1*asukasMaara*neliot;
}
