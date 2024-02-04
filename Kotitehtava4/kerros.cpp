#include "kerros.h"

Kerros::Kerros()
{
    cout<<"Kerros luotu"<<endl;
}
void Kerros::maaritaAsunnot()
{
    cout<<"Maaritetaan 4 kpl kerroksen asuntoja"<<endl;
    as1.Maarita(2,100);
    as2.Maarita(2,100);
    as3.Maarita(2,100);
    as4.Maarita(2,100);
}
double Kerros::laskeKulutus(double kulutus2)
{
    return as1.laskeKulutus(kulutus2)+as2.laskeKulutus(kulutus2)+as3.laskeKulutus(kulutus2)+as4.laskeKulutus(kulutus2);
}
