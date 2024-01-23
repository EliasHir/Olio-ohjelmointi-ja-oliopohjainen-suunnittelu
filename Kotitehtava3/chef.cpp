#include "chef.h"
using namespace std;

Chef::Chef(string chefname)
{
    name = chefname;
    cout << "Chef " << name << " konstruktori " <<endl;
}

void Chef::makeSalad()
{
    cout << "Chef " << name << " makes salad " <<endl;
}

void Chef::makeSoup()
{
    cout << "Chef " << name << " makes soup " <<endl;
}

Chef::~Chef()
{
    cout << "Chef " << name << " destruktori " <<endl;
}
