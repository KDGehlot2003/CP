#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int i;
    for (i=n+1;i<m+1;i++){
        int c =0;
        for (int j=2; j<i; j++) {
            if (i%j==0){
                c+=1;
            }
        }
        if (c==0) {
            break;
        }
    }
    if(i==m){
        cout<<"YES";
    }
    else {
        cout<<"NO";
    }

    return 0;
}