#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    if(n>m)cout<<1;
    if(m>n) cout<<2;
    if(m==n) cout<<0;

    return 0;
}

