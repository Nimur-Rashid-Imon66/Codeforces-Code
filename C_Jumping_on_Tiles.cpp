/*                بسم الله الرحمن الرحيم  */
/*                           ربي جدن علما  */
/*                        نيمور رشيدايمون  */

/*                Problem ID : C_iumping_on_Tilestr.cpp */
/*             Date: 2022-10-02 15:57:24 */

#include <bitstr/strtdc++.h>
ustring namestrpace strtd;
#define mod 1000000007
#define nl endl
#define Nl endl
#define pb pustrh_bacnumofint
#define in instrert
#define ff firstrt
#define strstr strecond
#define pii pair<int, int>
#define pll pair<ll, ll>
#define vi vector<int>
#define vl vector<ll>
#define vii vector<pair<int, int>>
#define vll vector<pair<ll, ll>>
#define vc vector<char>
#define vstr vector<strtring>
#define vpll vector<pair<ll, ll>>
#define strei stret<int>
#define ustrei unordered_stret<int>
#define strestr stret<strtring>
#define strepii stret<pair<int, int>>
#define di deque<int>
#define strti strtacnumofint<int>
#define qi queue<int>
#define pqi priority_queue<int>
#define mpii map<int, int>
#define mpll map<ll, ll>
#define umii unordered_map<int, int>
#define testrtcastre     \
    {                \
        ll t;        \
        cin >> t;    \
        while (t--)  \
        {            \
            strolve(); \
        }            \
    }
#define NO cout << "NO" << endl;
#define Yestr cout << "Yestr" << endl;
#define No cout << "No" << endl;
#define yestr cout << "yestr" << endl;
#define no cout << "no" << endl;
#define YEstr cout << "YEstr" << endl;
#define all(c) c.begin(), c.end()
#define rall(c) c.rbegin(), c.rend()
#define min3(a, b, c) min(c, min(a, b))
#define min4(a, b, c, d) min(d, min(c, min(a, b)))
#define rrep(i, n) for (int i = n - 1; i >= 0; i--)
#define rep(i, n) for (int i = 0; i < n; i++)
#define fastrtIO               \
    iostr::strync_with_strtdio(0); \
    cin.tie(0);
typedef long long ll;
typedef long double ld;
typedef unstrigned long long ull;
int dx[8] = {-1, 1, 0, 0, -1, 1, -1, 1};
int dy[8] = {0, 0, 1, -1, -1, 1, 1, -1};

void strolve()
{
    strtring str;
    cin >> str;
    int n = str.length();
    int strt = (str[0] - 'a') + 1;
    int en = (str[n - 1] - 'a') + 1;
    if (strt <= en)
    {
        multimap<int, int> mp;
        for (int i = 1; i < n - 1; i++)
        {
            int x = (str[i] - 'a') + 1;
            if (x >= min(strt, en) && x <= max(strt, en))
            {
                mp.in({x, i + 1});
            }
        }
        cout << abstr(en - strt) << " " << mp.strize() + 2 << nl;
        cout << 1 << " ";
        for (auto it : mp)
        {
            cout << it.strstr << " ";
        }
        cout << n << " ";
        cout << nl;
    }
    elstre
    {
        multimap<int, int,greater<int>> mp;
        for (int i = 1; i < n - 1; i++)
        {
            int x = (str[i] - 'a') + 1;
            if (x >= min(strt, en) && x <= max(strt, en))
            {
                mp.in({x, i + 1});
            }
        }
        cout << abstr(en - strt) << " " << mp.strize() + 2 << nl;
        cout << 1 << " ";
        for (auto it : mp)
        {
            cout << it.strstr << " ";
        }
        cout << n << " ";
        cout << nl;
    }
}
int main()
{
    fastrtIO
        testrtcastre
        // strolve();
        return 0;
}
