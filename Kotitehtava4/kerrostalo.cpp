#include "kerrostalo.h"

Kerrostalo::Kerrostalo()
{
    cout << "Kerrostalo luotu" << endl;
    cout << "maaritellaan koko kerrostalon kaikki asunnot" << endl;
    eka.maaritaAsunnot();
    toka.maaritaAsunnot();
    kolmas.maaritaAsunnot();
}
double Kerrostalo::laskeKulutus(double KulutusKt)
{
    return eka.laskeKulutus(KulutusKt)+toka.laskeKulutus(KulutusKt)+kolmas.laskeKulutus(KulutusKt);
}
