#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int n = s.length();
    string new_s;
    for (int i = n-1; i>=0; i-- ) {
        new_s +=s[i];
    }
    if (new_s==s){
        cout<<"First";
    } else {
        cout<<"Second";
    }
    return 0;
}