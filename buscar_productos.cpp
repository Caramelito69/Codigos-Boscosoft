#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    while(cin>>a)
    {
        vector<int>f;
        int n=2;
        while (n*n<=a)
        {
            while (a%n==0) {
                f.push_back(n);
                a/=n;
            }
            n++;
        }
        if (a>1)
        {
            f.push_back(a);
        }
        for (int i=0;i<f.size();i++)
        {
            cout<<f[i];
            if (i<f.size() - 1){
                cout<<"x";
            }
        }
        cout<<endl;
    }
}
