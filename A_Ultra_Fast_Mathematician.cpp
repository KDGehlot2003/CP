#include <bits/stdc++.h>
using namespace std;

int main()
{
    string num1,num2;
    cin>>num1>>num2;
    for (int i=0;i<num1.size();i++){
        int c = num1[i]^num2[i];
        cout<<c;
    }
    return 0;
}