#include<bits/stdc++.h>
using namespace std;
main()
{
    float a;float b;
    cin>>a>>b;
    cout<<int(log10(float(b/a))/log10(1.5))+1;
}
