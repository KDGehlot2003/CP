#include <bits/stdc++.h>
#include<string>
using namespace std;

int main()
{
    string s;
    cin>>s;
    vector<int> v;
    string new_s;
    for (int i=0; i<=s.size();i++){
        if (s[i]!='+'){
            v.push_back(s[i]-48);
        }
    }
    sort(v.begin(),v.end());
    for (int i=1;i<v.size();i++){
        if (i+1<v.size()){
            new_s = new_s + to_string(v[i]) + '+';
        }
        else{
            new_s += to_string(v[i]);
        }
    }
    cout<<new_s;
    return 0;
}