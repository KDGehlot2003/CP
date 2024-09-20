#include <bits/stdc++.h>
using namespace std;

int main()
{
    int k;
    cin>>k;
    string s;
    cin>>s;
    map<char,int> mpp;
    for (int i=0; i<s.size(); i++ ){
        mpp[s[i]]++;
    }
    bool flag = true;
    for (auto it:mpp) {
        if (it.second%k!=0){
            flag = false;
        }
    }
    if (flag) {
        
        cout<<"YES";
    }
    else {
        cout<<"NO";
    }
    return 0;
}