#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int> v;
    for (int i=0; i<n;i++) {
        int a;
        cin>>a;
        v.push_back(a);
    }

    int mini;
    for (int i=0; i<n;i++) {
        mini = min(mini,v[i]);
    }
    int c = count(v.begin(),v.end(),mini);
    if (c>1) {
        cout<<"Still Rozdil";
    }
    else {
        for (int i=0; i<n;i++ ){
            if (v[i]==mini) {
                cout<<i+1;
                break;
            }
        }
    }

    return 0;
}