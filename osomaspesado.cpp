#include <bits/stdc++.h>
using namespace std ;
void ej () {
float b,p;cin>>b>>p;
int x ;
cout<<int((log10(p/b))/(log10(1.5)))+1<<endl;
}
main () {
 int cp ;cin>>cp ;
 while (cp--) {
        int a;cin>>a;
        if(a<=2)
            cout<<a<<endl ;
        else
            cout<<4+((a-3)*3)<<endl;
 }
}
