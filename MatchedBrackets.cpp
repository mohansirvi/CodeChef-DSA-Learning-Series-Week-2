//Author MOHAN SIRVI
#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int

void solve()
{
    ll  n, tmp;
    cin >> n;

	vector<ll> vect;

	for(ll i = 0; i < n; i++)
	{
		cin >> tmp;
		vect.push_back(tmp);
	}

	ll depth = 0, S_count = 0, t_count = 0, max_depth = 0, d_start, t_start, S_start = 0;

	for(ll i=0;i<n;i++){

	    if(vect[i]==1) depth++;

	    if(vect[i]==2) depth--;

	    S_count ++;

	    if( depth > max_depth ){
	        max_depth = depth;
	        d_start = i + 1;
	    }

	    if( S_count > t_count ){
	        t_count = S_count;
	        t_start = S_start;
	    }

	    if( depth == 0 )
	    {
	        S_count = 0;
	        S_start = i + 1;
	    }

	}

	cout << max_depth << " " << d_start << " " << t_count << " " << t_start + 1 <<endl;
}


int main()
{
    fast
    int t=1;
    //cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}
