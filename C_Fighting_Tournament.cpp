/*                بسم الله الرحمن الرحيم  */
/*                           ربي جدن علما  */
/*                        نيمور رشيدايمون  */


/*                Problem ID : C_Fighting_Tournament.cpp */
/*             Date: 2022-08-16 21:56:29 */

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
    int n, q;
    cin >> n >> q;
    vi a(n);
    di qt;
    for(int i=0;i<n;i++){
        cin >> a[i];
        qt.pb(a[i]);
        }
    int mpos = max_element(all(a)) - a.begin();
    int fequ[100005] = {0};
    int pos = 0;
    for(int i=0;i<mpos-1;i++)
    {
        
        int a = qt.front();
        qt.pop_front();
        int b = qt.front();
        qt.pop_front();
        if(a>b)
        {
            fequ[pos]++;
            qt.push_front(a);
        }
        else
        {
            pos++;
            fequ[pos]++;
            qt.push_front(b);
        }
    }
    while(q--)
    {
        int i, k;
         cin >> i >> k;
        if(i-1==mpos)
        {
            cout<<k-mpos+1<<endl;
        }
        else if(!fequ[i-1])
        {
            cout << 0 << nl;
        }
        else
        {
            if(a[i-1]>a[i-2])
            {
                if(k<i-1)
                    cout << 0 << nl;
                else if(k==i-1)
                    cout << 1 << nl;
                else
                    cout << fequ[i - 1] - 1 << nl;
            }
            else
            {
                if(k<i-1)
                    cout << 0 << nl;
                else if(fequ[i-1]-(fequ[i-1]-k-1))
            }
        }
       
    }
}
int main(){
fastIO
testcase
//solve();
return 0;
}
