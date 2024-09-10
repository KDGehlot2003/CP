#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int count =0;
    for (int i=0; i<=n; i++){
        for (int j=0;j<=m;j++) {
            int t1 = (i*i) + j;
            int t2 = (j*j) + i;
                // cout<<i<<"->"<<j<<" "<<endl;
            if (t1==n && t2==m) {
                // cout<<t1<<" "<<t2<< endl;
                count+=1;
            }
        }
    }
    cout<<count;
    return 0;
}