#include "katutaso.h"

Katutaso::Katutaso()
{
    as1 = new Asunto;
    as2 = new Asunto;
    cout<<"Katutaso luotu"<<endl;
}
Katutaso::~Katutaso()
{
    delete as1;
    as1 = nullptr;
    delete as2;
    as2 = nullptr;
}

void Katutaso::maaritaAsunnot()
{
    cout<<"Maaritetaan 2 kpl katutason asuntoja "<<endl;
    as1->Maarita(2,100);
    as2->Maarita(2,100);
    cout<<"Maaritetaan katutason kerrokselta perittyja asuntoja "<<endl;
    Kerros::maaritaAsunnot();
}
double Katutaso::laskeKulutus(double kulutus3)
{
    return as1->laskeKulutus(kulutus3)+as2->laskeKulutus(kulutus3)+Kerros::laskeKulutus(kulutus3);
}
