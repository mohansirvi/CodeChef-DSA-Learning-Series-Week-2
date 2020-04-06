//Author MOHAN SIRVI
#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int

void solve()
{
        ll ans = -1;
        ll sum = 0;
        string s;
        cin >> s;
        for(ll i = 0; i < s.size(); i++) {
            if(s[i] == '<') sum++;
            else sum--;
            if(sum < 0) break;
            if(sum >= 0) ans = i;
        }
        cout << ans+1 <<endl;
}


int main()
{
    fast
    int t=1;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}
