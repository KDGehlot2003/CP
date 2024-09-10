#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k, l, c, d, p, nl, np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int ans;
    int t1,t2,t3;
    t1 = (k*l)/nl;
    t2 = c*d;
    t3 = p/np;
    ans = (min(min(t1,t2),t3))/n;
    cout<<ans;
    return 0;
}