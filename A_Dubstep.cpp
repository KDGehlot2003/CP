#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    string ans;
    string final_ans;
    int i = 0;

    while (i<=s.size()) {
        if (s[i]=='W' && s[i+1]=='U' && s[i+2]=='B') {
            i+=3;
            ans+=" ";
        }
        else{
            ans+=s[i];
            i+=1;
        }
    }
    i = 0;
    while (i<ans.size()-1) {
        if (ans[i]==' ') {
            i+=1;
            continue;
        }
        else{
            final_ans+=ans[i];
            if (ans[i+1]==' ') {
                final_ans+=' ';
            }
        }
        i+=1;
    }
    
    cout<<final_ans;

    return 0;
}