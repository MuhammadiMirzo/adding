#include <iostream>
#include <cmath>
using namespace std;
int(bool x, bool y, bool z)
{
    if (x==0 and y==0) {return 0;}
    else if (x==0 and z==0) {return 0;}
    else if (y==0 and z==0) {return 0;}

    else if (x==1 and z==1) {return 1;}
    else if (y==1 and z==1) {return 1;}
    else if (x==1 and z==0) {return 1;}
}
