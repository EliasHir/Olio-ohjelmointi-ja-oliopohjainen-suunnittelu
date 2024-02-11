#include "katutaso.h"
#include "kerrostalo.h"

int main()
{
    Kerrostalo *objectKerrostalo;
    objectKerrostalo = new Kerrostalo;
    double kh = 1;
    cout << "Kerrostalon kulutus, kun hinta = " << kh << " on " << objectKerrostalo->laskeKulutus(kh) << endl;

    delete objectKerrostalo;
    objectKerrostalo = nullptr;
}
