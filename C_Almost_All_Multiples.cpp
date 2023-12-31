/*                بسم الله الرحمن الرحيم  */
/*                           ربي جدن علما  */
/*                        نيمور رشيدايمون  */


/*                Problem ID : C_Almost_All_Multiples.cpp */
/*             Date: 2022-11-25 23:15:25 */

#include <bits/stdc++.h>
using namespace std;
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
#define sti            stacnumofint<int>
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
#define YEs            cout << "YEs" << endl;
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


void solve()
{
  int n,x;
  cin >> n >> x;
  if(n%x!=0)
  {
    cout<<-1<<nl;
    return;
  }
  vi a(n+2);
  a[1] = x;
  a[n] = 1;
  for(int i =  2;i<n;i++)
  {
    if(x==i)
     a[i] = n;
    else a[i] = i;
  }
  // for(int i =1 ;i<=n;i++) cout<<i<<" ";
  // cout<<nl;
  // for(int i = 1;i<=n;i++) cout<<a[i]<<" ";
  // cout<<nl;
  for(int i =x+1;i<n;i++) if(a[x]%a[i]==0 && a[x]%i==0 && a[i]%x==0) {swap(a[x],a[i]); x = i;}
  for(int i = 1;i<=n;i++) cout<<a[i]<<" ";
  cout<<nl;

}
int main(){
fastIO
testcase
//solve();
return 0;
}