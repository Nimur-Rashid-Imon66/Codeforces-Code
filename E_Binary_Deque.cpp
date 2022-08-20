/*                بسم الله الرحمن الرحيم  */
/*                           ربي جدن علما  */
/*                        نيمور رشيدايمون  */


/*                Problem ID : E_Binary_Deque.cpp */
/*             Date: 2022-07-12 20:17:35 */

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
    ll n, s;
    cin>>n>>s;

    int a[n+1],b[n+1];
    ll sum  = 0;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
        b[i] = a[i];
    }
    if(sum<s)
    {
        cout << -1 << nl;
        return;
    }
    ll cnt = 0;
    int i = 0 , j = n-1;
    ll sum2 = sum;

    while(sum>s)
    {
        
        if(a[i])
        {
            
            a[i] = 0;
            i++;
            sum--;
            cnt++;
        }
        else if (a[j])
        {
            a[j] = 0;
            j--;
            sum--;
            cnt++;
            
        }
        else{
            int k = i, l = j , zero = 0;
            while(!a[k] && !a[l])
            {
                zero++;
                k++;
                l--;
            }
            if(a[k])
            {
                i = k + 1;
                a[k] = 0;
                sum--;
                cnt += zero + 1;
            }
            else
            {
                j = l - 1;
                a[l] = 0;
                sum--;
                cnt += zero + 1;
            }

        }
    }
    ll cnt2 = 0;
    i = 0 , j = n-1;
    while(sum2>s)
    {
        
        if(b[i])
        {
            
            b[i] = 0;
            i++;
            sum2--;
            cnt2++;
        }
        else if (b[j])
        {
            b[j] = 0;
            j--;
            sum2--;
            cnt2++;
            
        }
        else{
            int k = i, l = j , zero = 0;
            while(!b[k] && !b[l])
            {
                zero++;
                k++;
                l--;
            }
            if(b[l])
            {
                j = l - 1;
                b[l] = 0;
                sum2--;
                cnt2 += zero + 1;
                
            }
            else
            {
               i = k + 1;
                b[k] = 0;
                sum2--;
                cnt2 += zero + 1; 
            }

        }
    }
    // for(int i= 0; i < n; i++)
    //     cout << a[i] << " ";

    // cout << nl;

    // for(int i= 0; i < n; i++)
    //     cout << b[i] << " ";
    cout << min(cnt,cnt2) << nl;
}
int main(){
fastIO
testcase
//solve();
return 0;
}
