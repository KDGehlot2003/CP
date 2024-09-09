#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s1,s2,ans;
    cin>>s1>>s2>>ans;
    map<char, int> mpp;
    map<char, int> mpp2;
    for (int i=0;i<s1.size();i++) {
        mpp[s1[i]]++;
    }
    for (int i=0;i<s2.size();i++) {
        mpp[s2[i]]++;
    }
    for (int i=0;i<ans.size();i++) {
        mpp2[ans[i]]++;
    }
    // check the two map that they are same or not
    // if (mpp.size()!=mpp2.size()) {
    //     cout<<"YES";
    // }
    int c=0;
    for (auto it: mpp) {
        if (it.second==mpp2[it.first]){
            c++;
        }
        // cout<<it.first<<"->"<<it.second<<endl;
    }
    if (c==mpp2.size()){
        cout<<"YES";
    }
    else {
        cout<<"NO";
    }
    return 0;
}