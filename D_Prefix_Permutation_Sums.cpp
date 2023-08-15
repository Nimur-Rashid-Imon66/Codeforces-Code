/*                بسم الله الرحمن الرحيم  */
/*                           ربي جدن علما  */
/*                        نيمور رشيدايمون  */


/*                Problem ID : D_Prefix_Permutation_Sums.cpp */
/*             Date: 2023-07-25 21:47:31 */

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

ll pre[200003];
void solve()
{
 int n;
 cin >> n;
 vl a(n+1);
  map<ll,int> mp;
 for (int i = 1; i < n;i++){
    cin>>a[i];
 }
 if(a[n-1]>pre[n])
 {
    NO return;
 }
 mp[a[1]] = 1;
 int cnt = 0;
 for(int i = 2;i<n;i++){
    ll x = a[i] - a[i-1];
    mp[x]++;
 }
 ll sum = 0;
 for(ll i = 1;i<=n;i++){
    if(mp[i]) mp[i]--;
    else sum +=i;
 }
 for(auto it: mp)
 {
    int x = it.ss;
    if(x==1 && it.ff!=sum)
    {
        NO return;
    }
    else if(x>1)
    {
        NO return;
    }
 }
 YES

}
int main(){
fastIO
pre[1] = 1;
for(int i=2;i<=200000;i++) pre[i] = i+pre[i-1];
testcase
//solve();
return 0;
}
