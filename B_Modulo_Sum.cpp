#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    vector<int> v;
    for (int i=0; i<n; i++) {
        int temp;
        cin>>temp;
        v.push_back(temp);
    }
    int preSum = 0, cnt = 0;
    map<int,int> mpp;
    mpp[0] = 1;

    for (int i=0; i<n; i++ ){
        preSum += v[i];

        int rem = preSum - m;

        cnt += mpp[rem];

        mpp[preSum] +=1;
        cout<<preSum<<"\n";
    }
    for (auto it:mpp) {
        // cout<<it.first<<" "<<it.second<<"\n";
    }
    if (cnt>0) {
        cout<<"YES";
    }
    else {
        cout<<"NO";
    }
    return 0;
}