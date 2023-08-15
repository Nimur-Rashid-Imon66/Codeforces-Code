/*                بسم الله الرحمن الرحيم  */
/*                           ربي جدن علما  */
/*                        نيمور رشيدايمون  */


/*                Problem ID : F_Bouncy_Ball.cpp */
/*             Date: 2023-03-19 22:22:00 */

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

int grid[225][250];
int ans = 0;
void DL(int n,int m,int i1,int j1,int i2,int ,string d)
{
    if(i1==i2 && j1==j2)
    {
        cout<<ans<<endl;//>>
    }
    else
    {
        if(grid[i1][j1])
    }
    if(i1==n && j1== 0)
    {
        UR(n,m,i1-1,j1+1,i2,j2);
    }
}
void DR(int n,int m,int i1,int j1,int i2,int j2 ,string d)
{
    
}
void UL(int n,int m,int i1,int j1,int i2,int j2,string d)
{
    
}
void UR(int n,int m,int i1,int j1,int i2,int j2,string d)
{
    
}
void solve()
{
  int n,m,i1,i2,j1,j2;
  cin >> n >> m >> i1 >> j1 >> i2 >> j2;
  for(int i = 1;i<= n ;i++)
  {
    for(int j = 1;j<= m ; j++) 
    {
        grid[i][j] = 0;
    }
  }
  cin.ignore();
  string d;
  cin>>d;
  ans = 0;
  cout<<n<<" "<<m<<" "<<i1<<" "<<j1<<" "<<i2<<" "<<j2<<" "<<d<<nl; 


}
int main(){
fastIO
testcase
//solve();
return 0;
}
