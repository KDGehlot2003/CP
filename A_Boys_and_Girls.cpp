#include <bits/stdc++.h>
using namespace std;

#define TxtIO   freopen("input.txt","r",stdin); freopen("output.txt","w",stdout);

int main()
{
    TxtIO;
    int n,m;
    cin>>n>>m;
    // string ans;
    int i =0;
    string boy, girl;
    boy = "B";
    girl = "G";

    if (n>=m) {
        while (true) {
            if (i%2==0 && n>0) {
                cout<<boy;
                n-=1;
            }
            else if (i%2!=0 && m>0) {
                cout<<girl;
                m-=1;
            }
            i+=1;
            if (n==0 && m==0) {
                break;
            }
        }
    }
    else {
        while (true) {
            if (i%2!=0 && n>0) {
                cout<<boy;
                n-=1;
            }
            else if (i%2==0 && m>0) {
                cout<<girl;
                m-=1;
            }
            i+=1;
            if (n==0 && m==0) {
                break;
            }
        }
    }

    // cout<<ans;
    return 0;
}