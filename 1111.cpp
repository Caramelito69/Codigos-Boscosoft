#include <bits/stdc++.h>
using namespace std;
void pattern1()
{
    int a;
    cin>>a;
    for(int i=1; i<=a; i++)
    {
        for(int j=1; j<=a; j++)
        {
            if(i==j or i+j==a+1)
                cout<<"*";
            else
                cout<<" ";
        }
        cout<<endl;
    }
}
void pattern2 ()
{
    int a;
    cin>>a;
    for(int i=1; i<=a; i++)
    {
        for(int j=1; j<=a; j++)
        {
            if(i==j or i==a)
                cout<<"*";
            else
                cout<<" ";
        }
        cout<<endl;
    }
}
void pattern3()
{
    int a;
    cin>>a;
    for(int i=1; i<=a; i++)
    {
        for(int j=1; j<=a; j++)
        {
            if(i==j-1)
                cout<<"*";
            else
                cout<<" ";
        }
        for(int c=a; c>=1; c--)
        {
            if(i==c)
                cout<<"*";
            else
                cout<<" ";
        }
        cout<<endl;
    }
}
void pattern4() {
int a;
    cin>>a;
    for(int i=a; i>=1; i--)
    {
        for(int j=a; j>=1; j--)
        {
            if(i-1==j)
                cout<<i;
            else
                cout<<" ";
        }
        for(int c=1; c<=a; c++)
        {
            if(c==i)
                cout<<c;
            else
                cout<<" ";
        }
        cout<<endl;
    }
}
main () {
    int a;
    cin>>a;
    for(int i=a/2;i>=-a/2; i--)
    {
 for(int j=1;j<=(a/2+1)-abs(i)-1;j++){
cout<<" ";
 }
 cout<<"*";
cout<<endl;
}
}
