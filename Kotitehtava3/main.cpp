#include <iostream>
#include "chef.h"
#include "italianchef.h"

using namespace std;

int main()
{
/*    Chef objectChef1("Jyrki");
    ItalianChef objectChef2("Mario");
    objectChef1.makeSalad();
    objectChef2.makePasta();
    objectChef1.makeSoup();
    */

    ItalianChef objectChef("Mario",100, 250);
    objectChef.makePasta(100, 250);
}
