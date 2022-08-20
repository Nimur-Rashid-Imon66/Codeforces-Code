/*                بسم الله الرحمن الرحيم  */
/*                           ربي جدن علما  */
/*                        نيمور رشيدايمون  */

#include <bits/stdc++.h>
using namespace std;
#define pi             (3.141592653589)
#define mod            1000000007
#define nl             endl
#define Nl             endl
#define pb             push_back
#define in             insert
#define ff             first
#define ss             second
#define pii            pair<int,int>
#define pll            pair<ll,ll>
#define vi             vector<int>
#define vl             vector<ll>
#define vii            vector<pair<int,int>>
#define vll            vector<pair<ll,ll>>
#define vc             vector<char>
#define vs             vector<string>
#define vpll           vector< pair<ll,ll> >
#define sei            set<int>
#define usei           unordered_set<int>
#define ses            set<string>
#define sepii          set< pair<int,int> >
#define di             deque<int>
#define sti            stack<int>
#define qi             queue<int>
#define pqi            priority_queue<int>
#define mpii           map<int,int>
#define mpll           map<ll,ll>
#define umii           unordered_map<int,int>
#define testcase       {ll t;cin>>t;while(t--){solve();}}
#define NO             cout << "NO" << endl;
#define Yes            cout << "Yes" << endl;
#define No             cout << "No" << endl;
#define yes            cout << "yes" << endl;
#define no             cout << "no" << endl;
#define YES            cout << "YES" << endl;
#define all(c)         c.begin(), c.end()
#define rall(c)        c.rbegin(), c.rend()
#define min3(a, b, c)  min(c, min(a, b))
#define min4(a, b,c,d) min(d, min(c, min(a, b)))
#define rrep(i, n)     for(int i=n-1;i>=0;i--)
#define rep(i,n)       for(int i=0;i<n;i++)
#define fastIO ios::sync_with_stdio(0); cin.tie(0); 
typedef long long ll;
typedef long double ld;
typedef unsigned long long ull;
int dx[8] = {-1, 1, 0, 0,-1,1,-1,1};
int dy[8] = {0, 0, 1, -1,-1,1,1,-1};



ll intBanaw(string s)
 {
     ll ans = 0;
     ll i = s.size() - 1;
     for (ll j = 1; i >= 0;i--,j*=10){
         ll x = s[i] - '0';
         ans += x*j;
     }
     return ans;
 }

 string stringBanaw(ll n)
 {
     string ans;
     while(n)
     {
         int x = n % 10;
         ans += x + '0';
         n /= 10;
     }
     reverse(all(ans));
     return ans;
 }
string make_b(string a,string s)
{
    int a_len = a.size();
    int s_len = s.size();
    int j = s_len - 1;
    string b="";
    for (int i = a_len-1;i>=0&&j>=0;i--,j--)
    {
        ll x = a[i] - '0';
        ll y = s[j] - '0';
        ll z;
        if(x>y)
        {
            j--;
            if(j<0) break;
            y += (s[j] - '0') * 10;
           
        }
         z = abs(x - y);
        string c = stringBanaw(z);
        if(!c.size())
            c = "0";
        c += b;
        b = c;
    }
    while(j>=0)
    {
        char x = s[j];
        string c = "";
        c += x;
        c+=b;
        b = c;
        j--;
    }
    return b;
}

bool isEquel_s(string a,string b, string s)
{
    ll i = intBanaw(a);
    ll j = intBanaw(b);
    a = stringBanaw(i);
    b = stringBanaw(j);
    while(a.size()!=b.size())
    {
        if(a.size()<b.size())
        {
            string x = "0";
            x += a;
            a = x;
        }else{
            string x = "0";
            x += b;
            b = x;
        }
    }
    string tamp = "";
    for (int i = a.size() - 1; i >= 0;i--)
    {
        ll x = a[i] - '0';
        ll y = b[i] - '0';
        ll z = x + y;
        string c = stringBanaw(z);
        if(!c.size()) c = "0";
        c += tamp;
        tamp = c;
    }
    if(s==tamp)
        return 1;
  //  cout<<tamp<<nl;
    return 0;
}
void solve()
{
    string a;
    cin >> a;
    string s;
    cin >> s;

    string b = make_b(a, s);
    if(isEquel_s(a,b,s))
    {
        ll j = intBanaw(b);
        b = stringBanaw(j);
        if(b=="")
        {
         cout<<0<<endl;
         return;
        }
        cout << b << nl;
    }
      
    else
        cout << -1 << nl;
}
int main(){
fastIO
testcase
//solve();
return 0;
}
