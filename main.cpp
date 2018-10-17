#include <iostream>
#include "slovar.h"

using namespace std;

int main()
{
    int type;
    cin >> type;
    slovar myslovar(type);
    myslovar.show();
    myslovar.add();
    //myslovar.find_word();
    //myslovar.counter_plus("archer");
    myslovar.show();
    return 0;
}
