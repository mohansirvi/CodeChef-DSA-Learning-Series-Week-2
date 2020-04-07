//Author Mohan Sirvi
#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int
#define MOD 1000000007

void solve()
{
        ll N,K;
		cin >> N >> K;
		ll arr[N];
		ll pos[K+1];
		for(ll i = 0; i < N; i++){
			cin >> arr[i];
		}
		for(ll i = 1 ; i <= K ; i++){
			pos[i] = -1;
		}
		ll ans = 0;
		for(ll i = 0 ; i < N ; i++){
			ans = max(ans, i-(pos[arr[i]] + 1));
			pos[arr[i]] = i;
		}
		for(ll i = 1; i <= K ; i++){
			ans = max(ans, N-(pos[i] + 1));
		}
		cout << ans << endl;
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
