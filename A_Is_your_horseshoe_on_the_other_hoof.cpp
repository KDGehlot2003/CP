#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v;
    for (int i=0; i<4; i++) {
        int a;
        cin>>a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    int ans = 0;
    for (int i=0;i<3;i++) {
        // cout<<v[i]<<"->"<<v[i+1]<<endl;
        if (v[i]==v[i+1]) {
            ans+=1;
        }
    }
    cout<<ans;
    return 0;
}