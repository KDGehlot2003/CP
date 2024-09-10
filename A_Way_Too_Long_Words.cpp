#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    for (int i=0; i<n; i++) {
        string s;
        cin>>s;
        string ans;
        if (s.size()>10) {
            ans = s[0] + to_string(s.size()-2) + s[s.size()-1];
        }
        else {
            ans = s;
        }
        cout<<ans<<endl;
    }
    return 0;
}