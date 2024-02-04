#include "katutaso.h"

Katutaso::Katutaso()
{
    cout<<"Katutaso luotu"<<endl;
}
void Katutaso::maaritaAsunnot()
{
    cout<<"Maaritetaan 2 kpl katutason asuntoja "<<endl;
    as1.Maarita(2,100);
    as2.Maarita(2,100);
    cout<<"Maaritetaan katutason kerrokselta perittyja asuntoja "<<endl;
    Kerros::maaritaAsunnot();
}
double Katutaso::laskeKulutus(double kulutus3)
{
    return as1.laskeKulutus(kulutus3)+as2.laskeKulutus(kulutus3)+Kerros::laskeKulutus(kulutus3);
}
