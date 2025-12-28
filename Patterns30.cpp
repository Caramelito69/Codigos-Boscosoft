#include<bits/stdc++.h>
using namespace std;
#define INI cin.tie(0)->sync_with_stdio(0);cout.tie(0);
#define int ll
#define readi(a) int a;cin>>a;
#define readi2(a,b) int a,b;cin>>a>>b;
#define readi3(a,b,c) int a,b,c;cin>>a>>b>>c;
#define readi4(a,b,c,d) int a,b,c,d;cin>>a>>b>>c>>d;
#define reads(a) string a;cin>>a;
#define query readi(n) while(n--)
#define fore(i,a,b) for(int i=a;i<=b;i++)
#define forei(i,a,b) for(int i=a;i>=b;i--)
#define all(v) begin(v),end(v)
#define rall(v) rbegin(v),rend(v)
#define F first
#define S second
#define pb push_back
#define eb emplace_back
#define ii pair<int,int>
#define vi vector<int>
#define vs vector<string>
#define vii vector<ii>
#define viii vector<int,ii>
#define readiv(vec,a) readi(a) vi vec(a);for(auto &e:vec)cin>>e;
#define printv(vec) for(auto e:vec)cin>>e;
#define endl '\n'
#define dbg(v) cout<<#v<<'='<<v<<endl;
#define sum(n) (n)*((n)+1)/2
#define aureo (1+sqrt(5))/2
#define fibo(n) (pow(aureo,n)-pow(1-aureo,n))/(sqrt(5))
typedef long long ll;
typedef unsigned long long ull;
const ll inf=numeric_limits<ll>::max();
string formatNumber(int num) {
    if (num < 10) {
        return "0" + to_string(num);
    }
    return to_string(num);
}
string center(const string& s, int width) {
    int len = s.length();
    if (len >= width) return s;
    int left = (width - len) / 2;
    int right = width - len - left;
    return string(left, ' ') + s + string(right, ' ');
}
void pattern17() {
    int height, length;
    cout << "Enter height: ";
    cin >> height;
    cout << "Enter length: ";
    cin >> length;
    cout<<endl;
    int totalColumns = length;
    vector<vector<string>> table(height, vector<string>(totalColumns));
    int currentNumber = 1;

    for (int col = 0; col < totalColumns; col++) {
        if (col % 2 == 0) {
            for (int row = height - 1; row >= 0; row--) {
                if (row == 0 || row == height - 1) {
                    string part1 = formatNumber(currentNumber++);
                    string part2 = formatNumber(currentNumber++);
                    table[row][col] = part1 + " " + part2;
                } else {
                    table[row][col] = center(formatNumber(currentNumber++), 5);
                }
            }
        } else {
            for (int row = 0; row < height; row++) {
                if (row == 0 || row == height - 1) {
                    string part1 = formatNumber(currentNumber++);
                    string part2 = formatNumber(currentNumber++);
                    table[row][col] = part1 + "   " + part2;
                } else {
                    table[row][col] = center(formatNumber(currentNumber++), 5);
                }
            }
        }
    }

    for (int i = 0; i < height; i++) {
        for (int j = 0; j < totalColumns; j++) {
            cout << table[i][j];
            if (j < totalColumns - 1) {
                cout << "    ";
            }
        }
        cout << endl;
    }
}
void pattern16()
{
    readi2(h,w)
    int num=h+1;
    int jump=(num*3+2)-(num+3);
    int inc=1,x=0;
    fore(i,1,h)
    {
        fore(j,1,w)
        {
            if(i!=h)
                cout<<"   ";
            else
                cout<<setfill('0')<<setw(2)<<(num-1)<<" ";
            fore(k,1,4)
            if(i==1||k==1||k==4)
            {
                cout<<setfill('0')<<setw(2)<<(num-1)<<" ";
                num+=inc;
            }
            else
                cout<<"  ";
            num-=inc;
            if(i!=h)
                cout<<"  ";
            else
                cout<<setfill('0')<<setw(2)<<(num+1)<<" ";
            num+=jump;
        }
        jump-=2,inc=5+x,x+=2,num=h-i+1;
        cout<<endl;
    }
}
void pattern15()
{
    readi2(h,w)
    fore(i,1,w*6)
    if((i-2)%6==0||(i-3)%6==0||(i-4)%6==0||(i-5)%6==0)
        cout<<"* ";
    else
        cout<<"  ";
    cout<<endl;
    fore(i,2,h-1)
    {
        fore(j,1,w*6)
        if((j-2)%3==0)
            cout<<"* ";
        else
            cout<<"  ";
        cout<<endl;
    }
    fore(i,1,w*6)
    if((i-3)%6==0||(i-4)%6==0)
        cout<<"  ";
    else
        cout<<"* ";
}
void pattern14()
{
    readi2(h,w)
    int t=w*10;
    fore(j,1,t)
    {
        if((j-3)%5==0||(j-4)%10==0||(j-5)%10==0||(j-6)%10==0||(j-7)%10==0)
            cout<<"  ";
        else
            cout<<"# ";
    }
    cout<<endl;
    fore(i,2,h-1)
    {
        fore(j,1,t)
        if((j-3)%5==0)
            cout<<"  ";
        else
            cout<<"# ";
        cout<<endl;
    }
    fore(j,1,t)
    {
        if((j-4)%10==0||(j-5)%10==0||(j-6)%10==0||(j-7)%10==0)
            cout<<"# ";
        else
            cout<<"  ";
    }
}
void pattern13()
{
    readi2(h,w)
    fore(i,1,h)
    {
        fore(j,0,h*w*2-1)
        if((j-h+i)%(h*2)==0||(j-h-i+1)%(h*2)==0)
            cout<<char(122-(j%26));
        else
            cout<<" ";
        cout<<endl;
    }
}
void pattern12()
{
    readi2(h,w)
    fore(i,1,h)
    {
        fore(j,0,w*h*2-1)
        if((j-(h-i))%(h*2)==0||(j-(h+i-1))%(h*2)==0)
            cout<<(j<10?"0":"")<<j;
        else
            cout<<" ";
        cout<<endl;
    }
}
void pattern11()
{
    readi2(h,w)
    fore(i,1,h)
    {
        fore(j,1,w*h*2)
        if((j-(h-i+1))%(h*2)==0||(j-(h+i))%(h*2)==0)
            cout<<"|";
        else
            cout<<" ";
        cout<<endl;
    }
}
void pattern10()
{
    readi2(h,w)
    int t=(h*2)+(w-1)*(h*2);
    fore(i,1,h)
    {
        fore(j,1,t)
        if((j-(h-i+1))%(h*2)==0)
            cout<<"/";
        else if((j-(h+i))%(h*2)==0)
            cout<<"\\";
        else
            cout<<" ";
        cout<<endl;
    }
}
void pattern9()
{
    readi2(h,w)
    int t=(h*2-1)+(w-1)*(h*2-2);
    int x1,x2;
    x1=x2=h;
    fore(i,1,h)
    {
        fore(j,0,t-1)
        if((j+1-x1)%(h*2-2)==0||(j+1-x2)%(h*2-2)==0)
            cout<<char(90-(j%26))<<' ';
//           0 1 2 3 ...                       26
//          90 89 88 87 86 85 84  ... 65 90 89
        else
            cout<<"  ";
        cout<<endl;
        x1++,x2--;
    }
}
void pattern8()
{
    readi2(h,w)
    int t=(h*2-1)+(w-1)*(h*2-2),x1=h,x2=h;
    fore(i,1,h)
    {
        fore(j,0,t-1)
        if((j+1-x1)%(h*2-2)==0||(j+1-x2)%(h*2-2)==0)
            cout<<char(j%26+65)<<' ';
        else
            cout<<"  ";
        x1++,x2--;
        cout<<endl;
    }
//    5 13 21
}
void pattern7()
{
    readi(n)
    fore(i,-n/2,n/2)
    {
        fore(j,1,abs(i)+1)
        cout<<(j==1||j==abs(i)+1?"* ":"  ");
        cout<<endl;
    }
}
void pattern6()
{
    readi(n)
    fore(i,1,n)
    {
        fore(j,1,n)
        cout<<((i+j)&1?"* ":"  ");
        cout<<endl;
    }
}
void pattern5()
{
    readi(n)
    fore(i,-(n-1),(n-1))
    {
        fore(j,1,(n-1)-abs(i))
        cout<<"  ";
        fore(j,n-abs(i),n*2-(n-abs(i)))
        cout<<j<<' ';
        cout<<endl;
    }
//    4 3 2 1 0 1 2 3 4
//    0 1 2 3 4 3 2 1 0
}
void pattern4()
{
    readi(n)
    int c=1;
    fore(i,-n/2,n/2)
    {
        fore(j,1,abs(i))
        cout<<' ';
        fore(j,1,n-abs(i)*2)
        cout<<char(c+64);
        c++;
        cout<<endl;
    }
}
void pattern3()
{
    readi(n)
    forei(i,n,1)
    {
        fore(j,1,i)
        if(j==1||j==i||i==n)
            cout<<i<<' ';
        else
            cout<<"  ";
        cout<<endl;
    }
}
void pattern2()
{
    readi(n)
    fore(i,1,n)
    {
        fore(j,1,n-i)
        cout<<"  ";
        if(i&1)
            fore(j,1,i)
            cout<<j<<"   ";
        else
            fore(j,1,i)
            cout<<char(j+64)<<"   ";
        cout<<endl;
    }
}
void pattern1()
{
    readi(n)
    forei(i,n,1)
    {
        fore(j,1,i)
        cout<<i<<' ';
        fore(j,i+1,n)
        cout<<j<<' ';
        cout<<endl;
    }
}
main()
{
    INI pattern17();
}
