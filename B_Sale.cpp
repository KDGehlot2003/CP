#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    vector<int> v;
    for (int i=0; i<n;i++) {
        int temp;
        cin>>temp;
        v.push_back(temp);
    }
    sort(v.begin(),v.end());
    int total = 0 ;
    for (int i=0;i<m;i++) {
        if (v[i]>=0){
            break;
        }
        else {
            total += v[i];
        }
    }
    cout<<-total;
    return 0;
}