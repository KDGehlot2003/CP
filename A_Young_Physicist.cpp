#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int s  = 0;
    for (int i=0; i<n; i++ ) {
        int a,b,c;
        cin>>a>>b>>c;
        s+=a+b+c;
    }
    if (s==0){
        cout<<"YES";
    }
    else {
        cout<<"NO";
    }
    return 0;
}