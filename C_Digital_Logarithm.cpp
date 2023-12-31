/*                بسم الله الرحمن الرحيم  */
/*                           ربي جدن علما  */
/*                        نيمور رشيدايمون  */


/*                Problem ID : C_Digital_Logarithm.cpp */
/*             Date: 2023-12-30 13:52:06 */

#include <bits/stdc++.h>
using namespace std;
void dbg_out(){cerr<<endl;}
template<typename Head , typename... Tail>
void dbg_out(Head H,Tail... T){cerr<<' ' << H; dbg_out(T...);}
#define dbg(...) cerr<<"("<< #__VA_ARGS__ <<"):" , dbg_out(__VA_ARGS__)
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

int fun(int x)
{
    int y = 0;
    while(x)
    {
        x/=10;
        y++;
    }
    return y;
}

void solve()
{
  int n;
  cin >> n;
//   vi a(n),b(n);
  map<int,int> a;
  map<int,int> b;
  for (int i = 0; i < n;i++){
      int x;
      cin>>x;
      a[x]++;
  }
  for (int i = 0; i < n;i++){
       int x;
      cin>>x;
      b[x]++;
  }
  for(auto it : b)
  {
    int x = min(it.ss,a[it.ff]);
    if(a[it.ff]>=x && it.ss>=x) 
    { 
        a[it.ff]-= x;
        b[it.ff]-= x;
    }
  }
  ll cnt = 0;
  for(auto it : a)
  {
    if(it.ss && it.ff>9)
    {
        a[it.ff] = 0;
        int x = fun(it.ff);
        a[x] += it.ss; 
        cnt += it.ss;
    }
  }

  for(auto it : b)
  {
    if(it.ss && it.ff>9)
    {
        b[it.ff] = 0;
        int x = fun(it.ff);
        b[x] += it.ss; 
        cnt += it.ss;
    }
  }

   for(auto it : b)
  {
    int x = min(it.ss,a[it.ff]);
    if(a[it.ff]>=x && it.ss>=x) 
    { 
        a[it.ff]-= x;
        b[it.ff]-= x;
    }
  }
 
  ll cnt2  = 0;
  for(auto it : a)
    if(it.ff>1)
      cnt+= it.ss;

  for(auto it : b)
    if(it.ff>1)
      cnt += it.ss;
   cout<<cnt<<nl;



}
int main(){
fastIO
testcase
//solve();
return 0;
}
