/*                بسم الله الرحمن الرحيم  */
/*                           ربي جدن علما  */
/*                        نيمور رشيدايمون  */


/*                Problem ID : E_Scuza.cpp */
/*             Date: 2022-10-13 21:45:30 */

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
   ll n,q;
   cin>> n >> q;
   vi a(n) ;
   ll mx = 0;
   ll sum = 0;
   map<ll,ll> mp; 
   mp[0] = 0;
   vl b;
   b.pb(0);
   for(ll i = 0 ;i < n ; i++){
        cin>>a[i];
        if(a[i]>mx) 
        {
            mx = a[i]; 
            sum += a[i]; 
            b.pb(mx);
        }
        else 
        {
            sum += a[i];
        }
         mp[mx] = sum;
      //  cout<<mx<<" "<<sum<<" "<<mp[mx]<<nl;
       
   } 
 //  mp[INT_MAX] = sum;
 // 11 14
   for(ll i =0; i<q;i++)
   {
      ll x;
       cin>>x;
       auto it = upper_bound(all(b),x);
       if(it!=b.end())
       {
        // cout<<mp[11]<<" : " ;
          cout<<mp[b[it - b.begin() - 1]]<<" ";
       }
       else
       {
         
         cout<<mp[mx]<<" ";
       }
   }
  cout<<nl;
}
int main(){
fastIO
testcase
//solve();
return 0;
}
