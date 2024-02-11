#include "kerros.h"

Kerros::Kerros()
{
    as1 = new Asunto;
    as2 = new Asunto;
    as3 = new Asunto;
    as4 = new Asunto;
    cout<<"Kerros luotu"<<endl;
}
Kerros::~Kerros()
{
    delete as1;
    as1 = nullptr;
    delete as2;
    as2 = nullptr;
    delete as3;
    as3 = nullptr;
    delete as4;
    as4 = nullptr;
}
void Kerros::maaritaAsunnot()
{
    cout<<"Maaritetaan 4 kpl kerroksen asuntoja"<<endl;
    as1->Maarita(2,100);
    as2->Maarita(2,100);
    as3->Maarita(2,100);
    as4->Maarita(2,100);
}
double Kerros::laskeKulutus(double kulutus2)
{
    return as1->laskeKulutus(kulutus2)+as2->laskeKulutus(kulutus2)+as3->laskeKulutus(kulutus2)+as4->laskeKulutus(kulutus2);
}
