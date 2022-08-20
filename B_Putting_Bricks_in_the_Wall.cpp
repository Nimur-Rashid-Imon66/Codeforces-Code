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


void solve()
{
   int n;
   cin>>n;
   string s[n];
   for(int i = 0; i < n; i++)
       cin >> s[i];
   char ur = s[0][1];
   char ud = s[1][0];
   char dl = s[n - 1][n - 2];
   char du = s[n - 2][n - 1];
   if ( ur == '1' && ud == '1' && du == '0' && dl == '0')
   {
       cout << 0 << nl;
       return;
   }
   else if(ur == '1' && ud == '1' && du == '0' && dl == '1')
   {
       cout << 1 << nl;
       cout << n  << " " << n - 1 << nl;
   } 
   else if(ur == '1' && ud == '1' && du == '1' && dl == '0')
   {
       cout << 1 << nl;
       cout << n - 1 << " " << n << nl;
   }
   else if(ur == '1' && ud == '1' && du == '1' && dl == '1')
   {
       cout << 2 << nl;
       cout << n  << " " << n -1 << nl;
       cout << n - 1 << " " << n  << nl;
   }
   else if(ur == '1' && ud == '0' && du == '1' && dl == '1')
   {
       cout << 1 << nl;
       cout<<1<<" " << 2 << nl;
   }
   else if(ur == '0' && ud == '1' && du == '1' && dl == '1')
   {
       cout << 1 << nl;
       cout << 2 << " " << 1  << nl;
   }
   else if(ur == '0' && ud == '0' && du == '1' && dl == '1')
   {
       cout << 0 << nl;

   }
   else if(ur == '0' && ud == '1' && du == '0' && dl == '1')
   {
       cout << 2 << nl;
       cout<<2<<" " << 1 << nl;
       cout << n - 1 << " " << n << nl;
   }
   else if(ur == '0' && ud == '1' && du == '1' && dl == '0')
   {
       cout << 2 << nl;
       cout<<2<<" " << 1 << nl;
       cout << n  << " " << n-1<< nl;
   }
    else if(ur == '1' && ud == '0' && du == '0' && dl == '0')
   {
       cout << 1 << nl;
       cout<<2<<" " << 1 << nl;
   }
    else if(ur == '1' && ud == '0' && du == '0' && dl == '1')
   {
       cout << 2 << nl;
       cout<<2<<" " << 1 << nl;
       cout << n  << " " << n-1<< nl;
   }
   else if(ur == '1' && ud == '0' && du == '1' && dl == '0')
   {
       cout << 2 << nl;
       cout<<2<<" " << 1 << nl;
       cout << n-1  << " " << n<< nl;
    }
    else if(ur == '0' && ud == '1' && du == '0' && dl == '0')
    {
        cout << 1 << nl;
        cout<<1<<" " << 2 << nl;
    }
    else if(ur == '0' && ud == '0' && du == '1' && dl == '0')
    {
        cout << 1 << nl;
        cout << n  << " " << n-1<< nl;
    }
    else if(ur == '0' && ud == '0' && du == '0' && dl == '1')
    {
        cout << 1 << nl;
        cout << n-1  << " " << n<< nl;
    }
    else if(ur == '0' && ud == '0' && du == '0' && dl == '0')
    {
        cout << 2 << nl;
        cout << n-1  << " " << n<< nl;
        cout << n  << " " << n-1<< nl;
    }


   //ud cout<<2<<" " << 1 << nl;
   //ur cout<<1<<" " << 2 << nl;
   //dl cout << n  << " " << n-1<< nl;
   //du cout << n-1  << " " << n<< nl;
    
}
int main(){
fastIO
testcase
//solve();
return 0;
}
