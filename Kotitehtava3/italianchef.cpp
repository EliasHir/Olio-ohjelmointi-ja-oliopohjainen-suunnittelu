#include "italianchef.h"
using namespace std;

ItalianChef::ItalianChef(string chefname, int vedet, int jauhoja):Chef(chefname)
{
    name=chefname;
    vesi=vedet;
    jauhot=jauhoja;
    cout << "Chef " << name << " konstruktori " <<endl;
}
void ItalianChef::makePasta(int vedet,int jauhoja)
{
    cout << "Chef " << name << " makes pasta with special recipe " <<endl;
    cout << "Chef " << name << " uses jauhot = " << jauhoja <<endl;
    cout << "Chef " << name << " uses vesi = " << vedet <<endl;
}
