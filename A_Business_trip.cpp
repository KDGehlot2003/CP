#include <bits/stdc++.h>
using namespace std;

int main()
{
    int k;
    cin>>k;
    vector<int> months;
    for (int i=0;i<12;i++) {
        int m;
        cin>>m;
        months.push_back(m);
    }
    sort(months.begin(),months.end());
    int i = 11;
    int count = 0;
    while (k>count && i>=0) {
        count+=months[i];
        // cout<<i<<" "<<months[i]<<" "<<count<<endl;
        i-=1;
    }
    if (count>=k) {
        cout<<11-i;
    }
    else {
        cout<<-1;
    }
    // cout<<count<<endl;

    return 0;
}