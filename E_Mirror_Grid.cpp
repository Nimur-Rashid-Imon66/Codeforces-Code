/*                بسم الله الرحمن الرحيم  */
/*                           ربي جدن علما  */
/*                        نيمور رشيدايمون  */


/*                Problem ID : E_Mirror_Grid.cpp */
/*             Date: 2022-07-13 19:57:35 */

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
    cin >> n;
    vs a;
    for(int i=0;i<n;i++)
    {
        string s;
        cin >> s;
        a.pb(s);
    }
    int one = 0, zero = 0,cnt = 0;
    for(int i=0,k=n-1;i<n;i++,k--)
    {
        
        for(int j = 0,l = n-1;j<n;j++,l--){
            one = 0, zero = 0;
            (a[i][j] == '1') ? one++ : zero++;
            (a[j][k] == '1') ? one++ : zero++;
            (a[k][l] == '1') ? one++ : zero++;
            (a[l][i] == '1') ? one++ : zero++;
            cnt += 4 - max(one, zero);
            if(one<zero)
            {
                a[i][j] = '0';
                a[j][k] = '0';
                a[k][l] = '0';
                a[l][i] = '0';
            }
            else
            {
                a[i][j] = '1';
                a[j][k] = '1';
                a[k][l] = '1';
                a[l][i] = '1';
            }
        }
    }
    // for(int i = 0; i <n;i++)
    //     cout << a[i] << nl;
    cout << cnt << nl;
}
int main(){
fastIO
testcase
//solve();
return 0;
}
