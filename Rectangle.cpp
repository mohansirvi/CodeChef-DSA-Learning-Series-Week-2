#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int
#define MOD 1000000007
 

void solve()
{
	ll x = 100000;
    ll arr[x+1];
    for(ll i = 0; i < x; i++){
        arr[i] = 500;
    }
    arr[x] = 0;
    ll n;
    ll tempX;
    ll tempY;
    cin>>n;
    for(ll i = 0; i < n; i++){
        cin>>tempX>>tempY;
        if(arr[tempX] > tempY) arr[tempX] = tempY;
    }
    stack<ll> st;
    ll area = 0;
    ll temp;
    ll size;
    ll height;
    for(ll i = 1; i <= x; i++){
        while(!st.empty() && arr[st.top()] > arr[i]){
            height = arr[st.top()];
            st.pop();
            size = 0;
            if(!st.empty()) size = st.top();
            temp = (i-size)*height;
            if(temp > area) area = temp;
        }
        st.push(i);
    }
    cout<<area<<endl;
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
