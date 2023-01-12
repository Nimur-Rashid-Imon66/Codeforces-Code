

// /*                بسم الله الرحمن الرحيم  */
// /*                           ربي جدن علما  */
// /*                        نيمور رشيدايمون  */


// /*           
//             Problem ID : C193066_A0.cpp 
//             Date: 2023-01-12 13:54:57 
//             Nimur Rashid Imon(C193066)       
 
//             Input : 10 asdf 20 30 40a50      asd 6023300 7000
//             Output: 10 20 30 40 50 6023300 7000
// */

// #include <bits/stdc++.h>
// using namespace std;
// #define mod            1000000007
// #define nl             endl
// #define Nl             endl
// #define pb             push_back
// #define in             insert
// #define ff             first
// #define ss             second
// #define pii            pair<int,int>
// #define pll            pair<ll,ll>
// #define vi             vector<int>
// #define vl             vector<ll>
// #define vii            vector<pair<int,int>>
// #define vll            vector<pair<ll,ll>>
// #define testcase       {ll t;cin>>t;while(t--){solve();}}
// #define fastIO ios::sync_with_stdio(0); cin.tie(0); 
// typedef long long ll;

// ll intBanaw(string s)
// {
//     ll ans = 0;
//     ll i = s.size() - 1;
//     for (ll j = 1; i >= 0;i--,j*=10){
//         ll x = s[i] - '0';
//         ans += x*j;
//     }
//     return ans;
// }

// void solve()
// {
//     string str;
//     getline(cin, str);
    
//     ll n = str.size();
     
//      string s;
//      vector<int>arr;
//     for (int i = 0; i < n;i++)
//     {
//        if(str[i]>='0'&&str[i]<='9')
//          s+=str[i];
//         else 
//         {
//             if(s!="")
//             {
//                 ll x = intBanaw(s);
//                 arr.pb(x);
//             }
//             s="";
//         }
//     }
//     if(s!="")
//     {
//      ll x = intBanaw(s);
//      arr.pb(x);
//     }
//     for(auto it : arr) cout<<it<<" ";


// }
// int main(){
// fastIO
// //testcase
// solve();
// return 0;
// }

#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str,tamp="";
    int arr[100006],n=0;
    getline(cin,s);
    for(int i=0; i<str.size(); i++)
    {
        if(str[i]>='0'&&str[i]<='9')
        {

            tamp+=str[i];
        }
        else
        {
            if(t!="")
            {
                arr[n]= stoi(tamp);
                n++;
            }
            tamp="";

        }
    }
    if(t!="")
    {
        arr[n]= stoi(tamp);
        n++;
    }

    for(int i=0; i<n; i++) cout<<arr[i]<<" ";
}



