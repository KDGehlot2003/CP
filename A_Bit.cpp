#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<string> opertions;
    int ans = 0;
    int c_plus = 0;
    int c_minus = 0;

    for (int i=0; i<n; i++) {
        string s;
        cin>>s;
        for (int j; j<=s.size(); j++) {
            if (s[j=='+']) c_plus++;
            else c_minus++;
        }
        opertions.push_back(s);
    }
    for (int i=0; i<n; i = i+2){
        cout<<opertions[i][1]<<" "<<ans<<endl;
        if (opertions[i][1]='+')
        {
            ans++;
        }
        else {
            ans--;
        }
    }
    for (auto i: opertions) {
        cout<<i<<" ";
    }
    cout<<c_plus-c_minus;
    cout<<ans;
    return 0;
}