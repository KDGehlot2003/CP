#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n;
    vector<int> nv;
    vector<int> mv;
    vector<int> ans;
    for (int i=0; i<n; i++ ){
        int temp;
        cin>>temp;
        nv.push_back(temp);
    }
    cin>>m;
    for (int i=0; i<m; i++ ){
        int temp;
        cin>>temp;
        mv.push_back(temp);
    }
    for (int i=0; i<m; i++) {
        for (int j = 0; j<n; j++ ) {
            // cout<<mv[i]<<" "<<nv[j]<<"\n";
            if (mv[i]%nv[j]==0){
                ans.push_back(mv[i]/nv[j]);
                // cout<<"YES";
            }
        }
    }
    int maxi = -1;
    for (auto i:ans){
        if (i>maxi) {
            maxi = i;
        }
    }
    // cout<<maxi;
    int cnt = count(ans.begin(),ans.end(),maxi);
    cout<<cnt;
    return 0;
}