#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int total=0;
    int maxi=0;
    for (int i=0; i<n;i++){
        int a,b;
        cin>>a>>b;
        total = total - a +b;
        maxi = max(maxi,total);
    }
    cout<<maxi;
    return 0;
}