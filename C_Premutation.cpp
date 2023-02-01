/*                بسم الله الرحمن الرحيم  */
/*                           ربي جدن علما  */
/*                        نيمور رشيدايمون  */


/*                Problem ID : C_Premutation.cpp */
/*             Date: 2023-01-27 21:19:15 */

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


void solve()
{
   int n;
   cin>>n;
   int r = n;
   int c = n -1;
   int grid[r][c];
   for(int i =0;i<r;i++)
      for (int j = 0; j < c;j++)
        cin>>grid[i][j];
    vi a;
    int prev = 0;
    for(int j = 0; j < c;j++)
    {
        map<int,int> mp;
        for(int i =0;i<r;i++)
        {
            mp[grid[i][j]]++;
        }
        int need = n - j - 1;
        auto it = mp.begin();
        int x1 = it->ff;
        int y1 = it->ss;
        it++;
        int x2 = it->ff;
        int y2 = it->ss;
        if(y1==y2)
        {
            if(x1==prev)
            {
                a.pb(x1);
                prev = x2;
            } 
            else 
            {
                a.pb(x2);
                prev = x1;
            }
        }
        else
        {
            if(y1==need)
            {
                a.pb(x1);
                prev = x2;
            }
            else 
            {
                a.pb(x2);
                prev = x1;
            }
        } 
    }
    a.pb(prev);
    for(auto it : a) cout<<it<<" ";
    cout<<endl;

}
int main(){
fastIO
testcase
//solve();
return 0;
}
