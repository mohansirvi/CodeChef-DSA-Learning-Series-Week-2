//Author MOHAN SIRVI
#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int

void solve()
{
    ll n;
    cin>>n;
	string s;
	cin>>s;

	ll A = 0, B = 0;
	ll a = n, b = n;

	for(ll i = 0 ; i < 2*n ; i++ ){
        if( i % 2 == 0){
            a--;
            if( s[i] == '1' )
                A++;
        }else{
            b--;
            if( s[i] == '1' )
            B++;
        }

        if( A > B + b ){
            cout << i+1 << endl;
            return ;
        }
        else if( B > A + a ){
            cout << i+1 << endl;
            return ;
        }
	}
	cout << 2 * n << endl;
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
