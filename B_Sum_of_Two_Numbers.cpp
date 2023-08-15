/*                بسم الله الرحمن الرحيم  */
/*                           ربي جدن علما  */
/*                        نيمور رشيدايمون  */


/*                Problem ID : B_Sum_of_Two_Numbers.cpp */
/*             Date: 2023-02-09 20:52:07 */

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
#define vs             vector<sing>
#define vpll           vector< pair<ll,ll> >
#define sei            set<int>
#define usei           unordered_set<int>
#define ses            set<sing>
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

map<int,pair<int,int>> mp;
void solve()
{
   sing n;
   cin>>n;
   vi a,b;
   int f =0;
   for(int i=0;i<n.size();i++)
   {
     int x = n[i] - '0';
     if(x&1)
     {
        if(f)
        {
             a.pb(x/2);
        b.pb(x/2 + 1) ;
        f = 0;
        }
       else 
       {
         a.pb(x/2 + 1);
        b.pb(x/2 ) ;
        f =1;
       }
     }
     else
     {
        a.pb(x/2);
        b.pb(x/2);
     }
   }
   int j =0;
   while(j<a.size())
    if(!a[j]) j++ ;
     else break;
   if(j>=a.size()) cout<<0;
   else for(;j<a.size();j++) cout<<a[j];
   cout<<" ";
    int k =0;
   while(k<b.size()) 
    if(!b[k]) k++;
    else break;
   if(k>=b.size()) cout<<0;
   else for(;k<b.size();k++) cout<<b[k];
   cout<<nl;
}
int main(){
fastIO
testcase
//solve();
return 0;
}
