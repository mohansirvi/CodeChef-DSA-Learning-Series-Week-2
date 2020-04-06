//Author MOHAN SIRVI
#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int

void solve()
{
    int n;
    int tot_profit=0;
	cin>>n;
	while(n--)
	{
	    int s,p,v;
	    cin>>s>>p>>v;
	    tot_profit = max(tot_profit, p/(s+1) *v);
    }
    cout<<tot_profit<<endl;
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
