/*                بسم الله الرحمن الرحيم  */
/*                           ربي جدن علما  */
/*                        نيمور رشيدايمون  */


/*                Problem ID : B_Prefix_Sum_Addicts.cpp */
/*             Date: 2022-10-05 20:43:05 */

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
   int n,k;
   cin >> n >> k;
   vi pres(n);
   for (int i = 0;i< n;i++)
       cin >> pres[i];
   int st = n - k + 1;
   vi a(n) ,b,c;
    if(st==1){
        a[0] = pres[0];
        b.pb(a[0]);
        c.pb(a[0]);
    }
    for (int i = st - 1; i < n - 1; i++)
    {
        int x = abs(pres[i + 1] - pres[i]);
        b.pb(x);
        c.pb(x);
        a[i + 1] = x;
  }
   sort(all(c));
   if(b!=c){
       No return;
   }
   if(st==1)
   {
       Yes return;
   }
   else
   {
        for(int i = )
   }
}
int main(){
fastIO
testcase
//solve();
return 0;
}



//if n = 5
print_koro(int i){
    if(i>n) return;
    cout<<i<<" ";
    print_koro(i+1);
}

Output :
1 2 3 4 5

