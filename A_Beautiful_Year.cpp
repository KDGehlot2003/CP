#include <bits/stdc++.h>
using namespace std;

bool helper(int n) {
    set<int> v;
    for (int i=0; i<4;i++) {
        v.insert(n%10);
        n = n/10;
    }
    if (v.size()==4){
        return true;
    }
    return false;
}

int main()
{
    int n;
    cin>>n;
    for (int i=n+1;i<100000;i++){
        if (helper(i)) {
            cout<<i;
            break;
        }
    }
    return 0;
}