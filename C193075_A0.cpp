#include<bits/stdc++.h>
using namespace std;
int main()
{
    int numofint=0;
    string s,t="";
    getline(cin,s);
    vector<int> vt;


    for(int i=0; i<s.size(); i++)
    {

        if(s[i]>='0'&&s[i]<='9')
        {
            t+=s[i];
        }
        else
        {
            if(t!="")
            {
                int x = stoi(t);
                vt.push_back(x);
                numofint++;
            }
            t="";

        }
    }
    if(t!="")
    {
       int x = stoi(t);
       vt.push_back(x);
        numofint++;
    }

    for(auto it : vt)
        cout<<it<<" ";
}