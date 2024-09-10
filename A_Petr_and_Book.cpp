#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int> days;
    for (int i=0; i<7;i++) {
        int day;
        cin>>day;
        days.push_back(day);
    }
    int i = 0;
    while (true) {
        n-= days[i];
        if (n<=0) {
            cout<<i+1;
            break;
        }
        i++;
        if (i==7) {
            i=0;
        }
    }
    return 0;
}