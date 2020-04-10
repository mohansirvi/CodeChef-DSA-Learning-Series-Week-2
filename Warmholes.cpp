#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int
#define MOD 1000000007
 

void solve()
{
	int n,x,y;
	cin>>n>>x>>y;
	pair<int,int> contest[n];
	for(int i=0;i<n;i++){
		cin>>contest[i].first>>contest[i].second;
	}
	vector<int> V,W;
	for(int i=0;i<x;i++){
		int a;
		cin>>a;
		V.push_back(a);
	}
	for(int i=0;i<y;i++){
		int a;
		cin>>a;
		W.push_back(a);
	}
	sort(contest,contest+n);
	sort(V.begin(),V.end());
	sort(W.begin(),W.end());
	int ans=INT_MAX;
	 int idx=0;
	for(int i=0;i<n;i++){
		while(idx<x&&V[idx]<=contest[i].first){
		    idx++;
	    }
		if(idx==0)
		continue;
		idx--;
		auto endx=lower_bound(W.begin(),W.end(),contest[i].second);
		if(endx==W.end())
		continue;
		ans=min(ans,*endx-V[idx]+1);
	}
	cout<<ans<<endl;
}


int main()
{

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	fast
	int t=1;
	//cin>>t;
	while(t--){
		solve();
	}
}
