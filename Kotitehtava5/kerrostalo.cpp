#include "kerrostalo.h"

Kerrostalo::Kerrostalo()
{
    eka = new Katutaso;
    toka = new Kerros;
    kolmas = new Kerros;
    cout << "Kerrostalo luotu" << endl;
    cout << "maaritellaan koko kerrostalon kaikki asunnot" << endl;

    eka->maaritaAsunnot();
    toka->maaritaAsunnot();
    kolmas->maaritaAsunnot();
}
Kerrostalo::~Kerrostalo()
{
    delete eka;
    eka = nullptr;
    delete toka;
    toka = nullptr;
    delete kolmas;
    kolmas = nullptr;
}

double Kerrostalo::laskeKulutus(double KulutusKt)
{
    return eka->laskeKulutus(KulutusKt)+toka->laskeKulutus(KulutusKt)+kolmas->laskeKulutus(KulutusKt);
}
