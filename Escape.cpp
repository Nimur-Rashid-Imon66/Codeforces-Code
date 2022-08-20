/*                بسم الله الرحمن الرحيم  */
/*                           ربي جدن علما  */
/*                        نيمور رشيدايمون  */

#include <bits/stdc++.h>
#define pi             (3.141592653589)
#define mod            1000000007
#define nl             endl
#define pb             push_back
#define ff             first
#define ss             second
#define testcase       {ll t;cin>>t;while(t--){solve();}}
#define all(c)         c.begin(), c.end()
#define rall(c)         c.rbegin(), c.rend()
#define min3(a, b, c)  min(c, min(a, b))
#define min4(a, b,c,d) min(d, min(c, min(a, b)))
#define rrep(i, n)     for(int i=n-1;i>=0;i--)
#define rep(i,n)       for(int i=0;i<n;i++)
#define fastIO ios::sync_with_stdio(0); cin.tie(0); 
typedef long long ll;
typedef long double ld;
typedef unsigned long long ull;
using namespace std;



void solve()
{
    ll vp, vd, t, f,des;
    cin >> vp >> vd >> t >> f>>des;
    ll pos_d = 0;
    ll pos_p = (t * vp);

    ll cnt = 0;
    while(pos_p<=des)
    {
        ld tamp_jamp = pos_d+vd;
        if(tamp_jamp>pos_p)
        {
            cnt++;
            pos_p += vp;
            tamp_jamp = pos_p / (vd*1.0000);
            pos_d = 0;
            pos_p += ((2*tamp_jamp)+ f)* vp;
            while(pos_p>pos_d+vd)
                pos_p += vp, pos_d += vd;
        }
        pos_p += vp;
    }
    cout << cnt << nl;
}
int main(){
fastIO
//testcase
solve();
return 0;
}

