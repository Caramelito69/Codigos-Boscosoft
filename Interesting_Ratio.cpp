#include <iostream>

int main() {
    long cpp_version = __cplusplus;

    std::cout << "El valor de __cplusplus es: " << cpp_version << std::endl;

    if (cpp_version == 199711L) {
        std::cout << "Estándar C++98/03" << std::endl;
    } else if (cpp_version == 201103L) {
        std::cout << "Estándar C++11" << std::endl;
    } else if (cpp_version == 201402L) {
        std::cout << "Estándar C++14" << std::endl;
    } else if (cpp_version == 201703L) {
        std::cout << "Estándar C++17" << std::endl;
    } else if (cpp_version == 202002L) {
        std::cout << "Estándar C++20" << std::endl;
    } else if (cpp_version > 202002L) { // Para C++23 y futuros
        std::cout << "Estándar C++23 o más reciente" << std::endl;
    } else {
        std::cout << "Estándar de C++ desconocido o anterior a C++98" << std::endl;
    }

    return 0;
}
//#include<bits/stdc++.h>
//#define INI cin.tie(0)->sync_with_stdio(0);
//#define fore(i,a,b) for(ll i=a;i<=b;i++)
//#define forei(i,a,b) for(int i=a;i>=b;i--)
//typedef long long ll;
//typedef unsigned long long ull;
//const ll m=1e9+7;
//using namespace std;
//void primo()
//{
//    fore(i,2,100)
//    {
//        bool ban=0;
//        fore(j,2,i/2)
//        {
//            if(i%j==0)
//            {
//                ban=true;
//                break;
//            }
//        }
//        if(!ban)
//            cout<<i<<",";
//    }
//}
//void fact(int a)
//{
//    cout<<a<<"-> ";
//    int c=2;
//    set<int>seti;
//    while(a>1)
//    {
//        if(a%c==0)
//        {
//            seti.insert(c);
//            a/=c;
//        }
//        else
//            c++;
//    }
//    for(auto i:seti)
//        cout<<i<<" ";
//    cout<<endl;
//}
//void solve()
//{
//
//}
//main()
//{
//    primo();
//}
//
