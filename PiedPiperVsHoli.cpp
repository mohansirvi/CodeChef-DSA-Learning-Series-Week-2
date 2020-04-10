#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int
#define MOD 1000000007
 

void solve()
{
		priority_queue<ll> pq;
		ll N,A,B,X,Y,Z;
		cin>>N>>A>>B>>X>>Y>>Z;
		ll sum = 0;
		for(ll i = 0;i < N;i++)
		{
			ll tmp;
			cin>>tmp;
			pq.push(tmp);
			sum+= tmp;
		}
		ll times;
		if((Z-B)%Y == 0){
			times = ((Z-B)/Y)- 1;
		}
		else{
			times = (Z-B)/Y;
		}

		ll no = A + X*times;

		if(no >= Z){
			cout<<"0"<<endl;
		}
		else
		{
			if(2*sum <= Z-no)
				cout<<"RIP\n";
			else
			{
				ll count = 0;
				while(no < Z)
				{
					ll a = pq.top();
					no+=a;
					pq.pop();
					pq.push(a/2);
					count++;
				}
				cout<<count<<endl;
			}
		}
}


int main()
{

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	fast
	int t=1;
	cin>>t;
	while(t--){
		solve();
	}
}
