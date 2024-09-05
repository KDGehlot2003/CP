#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int count =0;
    for (int i=0;i<n;i++ ) {
        int x,y,z;
        cin>>x>>y>>x;
        if (x+y+z>=2) {
            count++;
        }
    }
    cout<<count;
    return 0;
    return 0;
}