#include<bits/stdc++.h>
using namespace std;
void uwu()
{
     int a,c=1;
    cin>>a;
    for (int i=a; i>=1; i--,c+=2)
    {
        for(int j=1; j<=i; j++)
        {
           cout<<"  ";
        }
          for(int k=1; k<=c; k++)
        {
           cout<<"* ";
        }
        cout<<endl ;
}}
int main()
{
    uwu();
}
