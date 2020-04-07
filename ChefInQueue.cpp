#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int
#define MOD 1000000007

#define MAXN 1000010
int arr[MAXN+1];
stack<int> st;

void solve()
{
	int n, k;
	ll ans = 1LL;
	cin >> n >> k;
	for(int i=0;i<n;i++){
		cin >> arr[i];
	}
	for(int i=0;i<n;i++){
		while(!st.empty() && arr[i] < arr[st.top()]){
			ans *= (ll)(i-st.top()+1);
			ans %= MOD;
			st.pop();
		}
		st.push(i);
	}
	cout << ans << endl;
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
