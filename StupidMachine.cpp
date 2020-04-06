//Author MOHAN SIRVI
#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int

void solve()
{
    ll n;
    cin >> n;
    vector< ll >vect;
    ll x;
    for(ll i=0;i<n;i++){
        cin >> x;
        vect.push_back(x);
    }
    ll sum = 0;
    ll m = 0;
    while( vect.size() > 0 ){
    ll minE = *min_element(vect.begin(), vect.end());
    ll idx = min_element(vect.begin(),vect.end()) - vect.begin();
    sum += (minE * vect.size() - m*vect.size());
    vect.resize(idx);
    m = minE;
    //cout<<minE<<" "<<idx<<" "<<sum<<" "<<m<<" "<<vect.size()<<endl;
    }
    cout<<sum<<endl;
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
