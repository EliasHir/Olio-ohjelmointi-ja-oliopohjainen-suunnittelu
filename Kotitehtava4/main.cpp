#include "katutaso.h"
#include "kerrostalo.h"

int main()
{
    /*
    Asunto objectAsunto1;
    objectAsunto1.Maarita(2,100);
    cout<<"asunnon kulutus, kun hinta= 1 on "<<objectAsunto1.laskeKulutus(1)<<endl;
    */

    /*
    Katutaso objectKatu;
    objectKatu.maaritaAsunnot();
    double kh = 1;
    cout << "Katutason ja perityn kerroksen kulutus, kun hinta = " << kh << " on " << objectKatu.laskeKulutus(kh) << endl;
    */

    Kerrostalo objectKerrostalo;
    double kh = 1;
    cout << "Kerrostalon kulutus, kun hinta = " << kh << " on " << objectKerrostalo.laskeKulutus(kh) << endl;
}
