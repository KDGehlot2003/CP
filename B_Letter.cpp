#include <bits/stdc++.h>
using namespace std;

int main(){
    string s1,s2;
    // cin>>s1>>s2;
    getline(cin, s1);
    getline(cin, s2);
    map<char, int> mpp1;
    map<char, int> mpp2;
    // s1.length
    for (int i=0; i<s1.size();i++) {
        if (s1[i]!=' ') {
            mpp1[s1[i]]++;

        }
    }
    bool flag = true;
    for (int i=0; i<s2.size();i++) {
        // cout<<s2[i]<<endl;;
        if (s2[i]==' ') {
            continue;
        }
        // cout<<s2[i]<<endl;
        if (mpp1.find(s2[i])!=mpp1.end()){
            if (mpp1[s2[i]]==0) {
                flag = false;
                break;
            }
            else {
                mpp1[s2[i]]--;
            }
        }
        else {
            flag = false;
            break;
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