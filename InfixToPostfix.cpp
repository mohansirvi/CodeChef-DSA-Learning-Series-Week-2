//AUTHOR MOHAN SIRVI
#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int
#define MOD 1000000007

int prec(char c)
{
    if(c == '^')
    return 3;
    else if(c == '*' || c == '/')
    return 2;
    else if(c == '+' || c == '-')
    return 1;
    else
    return -1;
}

void infixToPostfix(string s)
{
    std::stack<char> st;
    st.push('N');
    int l = s.length();
    string ans;
    for(int i = 0; i < l; i++)
    {
        if((s[i] >= 'a' && s[i] <= 'z')||(s[i] >= 'A' && s[i] <= 'Z'))
        ans+=s[i];

        else if(s[i] == '(')

        st.push('(');

        else if(s[i] == ')')
        {
            while(st.top() != 'N' && st.top() != '(')
            {
                char c = st.top();
                st.pop();
               ans += c;
            }
            if(st.top() == '(')
            {
                char c = st.top();
                st.pop();
            }
        }

        else{
            while(st.top() != 'N' && prec(s[i]) <= prec(st.top()))
            {
                char c = st.top();
                st.pop();
                ans += c;
            }
            st.push(s[i]);
        }

    }

    while(st.top() != 'N')
    {
        char c = st.top();
        st.pop();
        ans += c;
    }

    cout << ans << endl;

}

void solve()
{
    ll n;
    cin >> n;
    string str ;
    cin >> str;

    infixToPostfix(str);
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
