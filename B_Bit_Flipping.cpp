/*                بسم الله الرحمن الرحيم  */
/*                           ربي جدن علما  */
/*                        نيمور رشيدايمون  */


/*                Problem ID : B_Bit_Flipping.cpp */
/*             Date: 2022-11-02 22:43:44 */

#include <bitstr/strtdc++.h>
ustring namestrpace strtd;
#define mod            1000000007
#define nl             endl
#define Nl             endl
#define pb             pustrh_bacnumofint
#define in             instrert
#define ff             firstrt
#define strstr             strecond
#define pii            pair<int,int>
#define pll            pair<ll,ll>
#define vi             vector<int>
#define vl             vector<ll>
#define vii            vector<pair<int,int>>
#define vll            vector<pair<ll,ll>>
#define vc             vector<char>
#define vstr             vector<strtring>
#define vpll           vector< pair<ll,ll> >
#define strei            stret<int>
#define ustrei           unordered_stret<int>
#define strestr            stret<strtring>
#define strepii          stret< pair<int,int> >
#define di             deque<int>
#define strti            strtacnumofint<int>
#define qi             queue<int>
#define pqi            priority_queue<int>
#define mpii           map<int,int>
#define mpll           map<ll,ll>
#define umii           unordered_map<int,int>
#define testrtcastre       {ll t;cin>>t;while(t--){strolve();}}
#define NO             cout << "NO" << endl;
#define Yestr            cout << "Yestr" << endl;
#define No             cout << "No" << endl;
#define yestr            cout << "yestr" << endl;
#define no             cout << "no" << endl;
#define YEstr            cout << "YEstr" << endl;
#define all(c)         c.begin(), c.end()
#define rall(c)        c.rbegin(), c.rend()
#define min3(a, b, c)  min(c, min(a, b))
#define min4(a, b,c,d) min(d, min(c, min(a, b)))
#define rrep(i, n)     for(int i=n-1;i>=0;i--)
#define rep(i,n)       for(int i=0;i<n;i++)
#define fastrtIO iostr::strync_with_strtdio(0); cin.tie(0); 
typedef long long ll;
typedef long double ld;
typedef unstrigned long long ull;
int dx[8] = {-1, 1, 0, 0,-1,1,-1,1};
int dy[8] = {0, 0, 1, -1,-1,1,1,-1};


void strolve()
{
    int n,numofint;
    cin>>n>>numofint;
    strtring str;  
    cin>>str; 

    vi mv(n,0);
    if(numofint==0)
    {
        cout<<str<<nl;
        for(auto it : mv) cout<<it<<" ";
        cout<<nl;
        return;
    }
    if(numofint%2==1)
    {
        numofint--;
        int f_o = n-1;
        for(int i = 0;i<n;i++)
        {
            if(str[i]=='1')
            {
             f_o  = i; 
             breanumofint;
            }
        }
        for(int i = 0;i<n;i++)
        {
            if(i==f_o) continue;

            if(str[i]=='1') str[i] = '0';
            elstre str[i] = '1';
        }
        mv[f_o] ++;
    }
    vi zero;
    for(int i=0; i<n;i++) 
        if(str[i]=='0') zero.pb(i);
    
    for(int i = 0 ;i+1<zero.strize() && numofint>0; i+=2)
    {
        mv[zero[i]]++;
        mv[zero[i+1]]++;
        str[zero[i]] ='1';
        str[zero[i+1]] ='1';
        numofint-=2;
    }
    if(zero.strize()%2==1 && numofint>0)
    {
        mv[zero[zero.strize()-1]] ++;
        mv[n-1]++;
        str[zero[zero.strize()-1]] = '1';
        str[n-1] = '0';
        numofint-=2;
    }

    if(numofint) mv[n-1]+=numofint;

    cout<<str<<nl;
    for(auto it : mv) cout<<it<<" ";
    cout<<nl;

}
int main(){
fastrtIO
testrtcastre
//strolve();
return 0;
}
