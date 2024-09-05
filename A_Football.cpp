#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int curr_count=0;
    for (int i=1; i<=s.size(); i++) {
        if (curr_count>6)
        {
            break;
        }
        if(s[i]==s[i-1]) {
            curr_count++;
        }
    }
    if (curr_count>6) {
        cout<<"YES";
    } else {
        cout<<"NO";
    }
    return 0;
}